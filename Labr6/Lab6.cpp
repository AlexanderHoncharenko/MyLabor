#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
struct classbook
{
	string  sSurName;
	int iMath;
	int iLiterature;
	int iPhysics;
	double dAverage;
	//structure data
};
void sort(classbook **AllPupil, int iNumbers_Pupils)
{
	for (int i = 0; i < iNumbers_Pupils; i++)
	{
		for (int j = 0; j < iNumbers_Pupils - i - 1; j++) 
		{
			if (AllPupil[j]->dAverage < AllPupil[j + 1]->dAverage)
			{
				classbook *temp = AllPupil[j];
				AllPupil[j] = AllPupil[j + 1];
				AllPupil[j+1] = temp;
				//bubble sorting
			}
		}
	}
}

int main() 
{
	const int iNumbers_Pupils = 15;
	double dAllAverage = 0;
	classbook *Pupil = new classbook[iNumbers_Pupils];
	Pupil[0] = {"Abramenko", 4,3,5};
	Pupil[1] = {"Shevchenko", 5,3,5};
	Pupil[2] = {"Sotrikhina", 5,5,5};
	Pupil[3] = {"Klimenko", 5,4,5};
	Pupil[4] = {"Pechenyuk", 4,4,3};
	Pupil[5] = {"Tishchenko", 4,3,3};
	Pupil[6] = {"Booth", 3,3,5};
	Pupil[7] = {"Dziuba", 4,3,4};
	Pupil[8] = {"Rutto", 3,3,5};
	Pupil[9] = {"Lutsenko", 5,4,3};
	Pupil[10] = {"Kharchenko", 3,3,3};
	Pupil[11] = {"Romeiko", 5,4,4};
	Pupil[12] = {"Kirilenko", 5,3,3};
	Pupil[13] = {"Chile", 5,4,5};
	Pupil[14] = {"Popova", 5,5,5};
	//Data of class
	for (int i = 0; i < iNumbers_Pupils; i++) 
	{
		Pupil[i].dAverage = (double)(Pupil[i].iMath + Pupil[i].iLiterature + Pupil[i].iPhysics)/3;
		dAllAverage += Pupil[i].dAverage;//Avarage mark of all pupils
	}
	classbook **AllPupil = new classbook*[iNumbers_Pupils];
	for (int i = 0; i < iNumbers_Pupils; i++)
	{
		AllPupil[i] = &Pupil[i];
	}
	sort(AllPupil, iNumbers_Pupils);//Sort decreasing
	dAllAverage = dAllAverage / iNumbers_Pupils;//Avarage mark of all pupils
	cout << "Pupils which have better mark than average in school: " << endl;
	for (int i = 0; i < iNumbers_Pupils; i++)
	{
		if (AllPupil[i]->dAverage > dAllAverage)
		{
			cout << i + 1 << "." << AllPupil[i]->sSurName << " ";
			cout << setprecision(3) << AllPupil[i]->dAverage << endl;
			//Output data of pupils surname and avarage which better than average of class`s marks
		}
	}
	system("pause");
	return 0;
}