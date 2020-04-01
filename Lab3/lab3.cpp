#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "Calculate approximately the value of the infinite sum:" << endl;
	cout << "S = 1 + ... + [(-1)^k]*[n/(k+1)*(k+2)*(k+3)] + ... " << endl << "until absolute value of term less than epsilon" << endl;
	cout << "Input value for n = ";
	int n;
	cin >> n;
	cout << "Value for e(epsilon, accuracy) is constant = 0.0005" << endl;
	const double e = 0.0005;
	double dblSum = 1;
	double dblResult = 1;
	int k = 1;
	while (abs(dblResult > e))
	{
		double dblSumK = (k + 1)*(k + 2)*(k + 3);
		dblResult = pow(n / dblSumK, k * 2);
		if (k % 2 != 0)
		{
			dblResult = -1 * dblResult;
		}
		dblSum += dblResult;
		k++;
	} 
	cout << "The result S = " << fixed << dblSum <<  endl;
	system("pause");
	return 0;
}