#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() 
{
	string SetArr;
	double dAverage = 0;
	cout << "You will input only numbers in elements of array A and i will make miracle" << endl;
	cout << "Input amount elements of array A = ";
	int iAmountElem;
	cin >> iAmountElem;//Emount of elements
	double *dSetArr = new double[iAmountElem];//Array with numbers in double
	for (int i=0;i<iAmountElem;i++)
	{
		cout << "Input " << i + 1 << " elemet of array A = ";
		cin >> SetArr; //Input number
		double dResult = stof(SetArr);//String to int
		dAverage += dResult;//Sum of elements for avarage
		dSetArr[i] = dResult;//Input in array double
	}
	sort(dSetArr, dSetArr+iAmountElem);//Sort in incrising order
	cout << "Array A in incrising order : ";
	for (int i = 0; i < iAmountElem; i++)
	{
		cout << dSetArr[i] << " ";//Print element`s from double in incrising order
	}
	double dMax_min = dSetArr[iAmountElem - 1] - dSetArr[0];
	cout << endl << "(the element of the array with the maximum value) -(the element of the array with the minimun value) =  " << dMax_min << endl;
	cout << "Average number of array = " << dAverage / iAmountElem<<endl;//Print average
	delete[] dSetArr;
	system("pause");
	return 0;
}