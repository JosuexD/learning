#include <iostream>
#include <string>

using namespace std;

int main()
{

	
struct StudentInfo
	{
		string name;
		double average;
		char letterGrade;
	};
struct Address
{
	int streetNum;
	string streetName;

};
	StudentInfo Student1;

	Student1.name = "Josue";
	Student1.average = 100;
	Student1.letterGrade = 'A';

	Address Myadress;

	Myadress.streetName = 50;
	Myadress.streetName = "University";
	cout << Myadress.streetName << endl;
	system("pause");
}
