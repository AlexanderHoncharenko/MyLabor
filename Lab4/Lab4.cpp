#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	cout << "Make array A from array B such:" << endl << "a[i] = 1 / ( b[i] - b[i-1] ) and a[1] = 1 / ( b[1] - b[n] )" << endl;
	cout << "Input amount of elements (i) in array B = ";
	int n;
	cin >> n;
	double *B, *A;
	B = new double[n];
	cout << "Do not enter the same numbers in two adjacent elements" << endl;
	for (int i = 0; i < n; i++) 
	{
		cout << "Input element " << i + 1 << " of array B = ";
		cin >> B[i];
	}
	A = new double[n];
	cout << "The result array A have this numbers: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			if ((B[i] - B[n - 1]) == 0)
			{
				cout << " Wrong numbers ";
				A[i] = 0;
			}
			else
			{
				A[i] = 1 / (B[i] - B[n - 1]);
				cout <<" "<< A[i];
			}
		}
		else
		{
			if ((B[i] - B[i - 1]) == 0)
			{
				cout << " Wrong numbers " ;
				A[i] = 0;
			}
			else
			{
				A[i] = 1 / (B[i] - B[i - 1]);
				cout <<" "<< A[i];
			}
		}
	}
	cout << endl;
	delete[] A;
	delete[] B;
	system("pause");
	return 0;
}