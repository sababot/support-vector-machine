#include <iostream>

using namespace std;

double dot(double a[], double b[], int n)
{
	int product = 0;

	for (int i = 0; i < n; i++)
		product = product + a[i] * b[i];

	return product;
}

void fit(int epochs, double x[], double w[], double y[], double b, int n, double learning_rate, double lambda)
{
	b = 0;
	for (int i = 0; i < n; i++)
	{
		if (y[i] <= 0)
			y[i] = -1;
		else
			y[i] = 1;
	}

	for (int i = 0; i < epochs; i++)
	{
		for (int i = 0; i < n; i++)
		{
			if (y[i] * dot(x, w, n) - b >= 1)
			{
				w -= learning_rate * (2 * lambda * w);
			}

			else
			{
				w -= learning_rate * (2 * lambda * w - dot(x, y, n);
				b -= learning_rate * y[i];
			}
		}	
	}
}

int main()
{
	double learning_rate = 0.001;
	double lambda = 0.0001;
	int epochs = 10000;
	int n = 90;
	double w[n];
	double x[n];
	double y[n];
	double b;

	fit(epochs, x, w, y, b, n, learning_rate, lambda);
}
