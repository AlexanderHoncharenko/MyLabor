#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	cout << "Input amount of elements in array = ";
	int n;
	cin >> n;
	double *B, *A;
	B = new double[n];
	for (int i = 0; i < n; i++) 
	{
		cout << "Input element " << i + 1 << " of array = ";
		cin >> B[i];
	}
	A = new double[n];
	cout << "The result array is ";
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