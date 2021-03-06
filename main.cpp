#include <iostream>
#include <vector>

using namespace std;

struct Point
{
	int group;
	double x, y;
};

int main()
{
	// Variables
	int n = 2;
	double a;
	int w_vec[2];
	double w_0;
	Point arr[n];

	// Test Data
	arr[0].x = 1;
        arr[0].y = 1;

        arr[1].x = 2;
        arr[1].y = 3;

	// Algorithm
	w_vec[0] = arr[1].x - arr[0].x;
	w_vec[1] = arr[1].y - arr[0].y;

	a = (2 / ((arr[1].x * w_vec[0]) + (arr[1].y * w_vec[1]) - ((arr[0].x * w_vec[0]) + (arr[0].y * w_vec[1]))));

	w_0 = 1 - (((arr[1].x * w_vec[0]) + (arr[1].y * w_vec[1])) * a);

	// Output
	cout << "\nhyperplane --> g(x) = " << a * w_vec[0] << "x + " << a * w_vec[1] << "y " << w_0 << endl;
	int x, y, group;
	
	cout << "\nx value for unknown point: ";
	cin >> x;
	cout << "y value for unknown point: ";
	cin >> y;

	if (((((x * w_vec[0]) + (y * w_vec[1])) * a) + w_0) >= 1)
	{
		group = 1;
	}
	
	else if (((((x * w_vec[0]) + (y * w_vec[1])) * a) + w_0) <= -1)
	{
		group = 0;
	}

	else
	{
		group = NULL;
	}

	cout << "\ngroup of unknown point: " << group << endl;
}
