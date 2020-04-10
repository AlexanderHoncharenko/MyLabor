#include <iostream>
#include <stdlib.h>

using namespace std;
long double fact(int k)
{
	if (k == 0)
		return 1; // if zero! return 1
	else 
		return k * fact(k - 1); // if not zero! make factorial with recursive function
}
void equation1(double dSubject, double dFirstConst, double dSecondConst, double dThirdConst)
{
	double dResult = dFirstConst * pow(dSubject,2) + dSecondConst * dSubject + dThirdConst;//only calculate a*(x^2)+b*x+c
	cout << dResult << endl;
}
void equation2(double dSubject, double *ArrConst)
{
	double dAllResult = 0;
	for (int i = 0; i < 7; i++) 
	{
		double dResult = ArrConst[i] * pow(dSubject,i);
		dAllResult += dResult;
	}
	cout << dAllResult << endl;// make function f(x) = a6*x^6 + a5*x^5 + ... + a1*x^1 + a0 
};
void equation3(double dSubject) 
{
	double dResult = 0;
	for (int k = 0; k < 11; k++) 
	{
		double dElement = pow(dSubject, k)/fact(k);//calculate x^k/k! 
		dResult += dElement;// calculate sum of all elements
	}
	cout << dResult << endl;// make sum with upper limit 10 and lower limit k=0 for (x^k) / (k!) =
}

int main() {
	cout << "Let`s make some equations!" << endl;
	char chKey1 = 'Y';
	while (chKey1 == 'Y' || chKey1 == 'y')
	{
		cout << "What dou you want to do?" << endl;
		cout << "1. f(x) = a*x^2 + b*x + c = ?" << endl;
		cout << "2. f(x) = a6*x^6 + a5*x^5 + ... + a1*x^1 + a0  = ?" << endl;
		cout << "3. f(x) = Sum with upper limit 10 and lower limit k=0 for (x^k) / (k!) = ?" << endl;
		cout << "Input number 1 or 2 or 3" << endl;//make some menu for user
		char chChooseNumber;
		cin >> chChooseNumber;
		cout << "Now you must input x for function`s = ";
		double dSubject;
		cin >> dSubject;
		int iChooseNumber = atoi(&chChooseNumber);
		if (iChooseNumber == 1)
		{
			cout << "For result of equation f(x) = a * x ^ 2 + b * x + c = " << endl;
			cout << "Input a = ";
			double dFirstConst;
			cin >> dFirstConst;
			cout << "Input b = ";
			double dSecondConst;
			cin >> dSecondConst;
			cout << "Input c = ";
			double dThirdConst;
			cin >> dThirdConst;
			cout << "f(x) = ";
			equation1(dSubject, dFirstConst, dSecondConst, dThirdConst);
			// use function in which make a * x ^ 2 + b * x + c and print result
		}
		if (iChooseNumber == 2)
		{
			cout << "For result of equation f(x) = a6*x^6 + a5*x^5 + ... + a1*x^1 + a0  = ? " << endl;
			double ArrConst[6];
			for (int i = 6; i >= 0; i--)
			{
				cout << "Input a" << i << " = ";
				cin >> ArrConst[i];

			}
			cout << "f(x) = ";
			equation2(dSubject, ArrConst);
			// use function in which make f(x) = a6*x^6 + a5*x^5 + ... + a1*x^1 + a0 and print result
		}
		if (iChooseNumber == 3)
		{
			cout << "f(x) = Sum with upper limit 10 and lower limit k=0 for (x^k) / (k!) = ";
			equation3(dSubject);
			// use function in which make Sum with upper limit 10 and lower limit k=0 for (x^k) / (k!) =
		}
		if (iChooseNumber != 1 && iChooseNumber != 2 && iChooseNumber != 3)
		{
			cout << "Wrong symbol be more accurate" << endl;
		}
		cout << "Do you want to make some equation?(Input Y - Yes) ";
		cin >> chKey1;
		system("cls");
	}
	system("pause");
	return 0;
}