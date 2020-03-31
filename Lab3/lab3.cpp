#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const int n = 10;
	const double e = 0.0005;
	long double dblSum = 1;
	int k = 1;
	while(1)
	{
		long double dblSumK = (k+1)*(k+2)*(k+3);
		long double dblResult = pow(n / dblSumK, k*2);
		if (abs(dblResult < e)) 
		{
			break;
		}
		if (k % 2 != 0)
		{
			dblResult = -1 * dblResult;
		}
		dblSum += dblResult;
		k++;
	} 
	cout << "The result = " << fixed << dblSum <<  endl;
	system("pause");
	return 0;
}