
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Student
{
private:
	string firstName;
	string lastName;
	int grade;
public:
	Student()
	{
		firstName = " ";
		lastName = " ";
		grade = 0;
	}
	Student(string fName, string lName, int g)
	{
		firstName = fName;
		lastName = lName;
		grade = g;
	}
	string GetFirstName()
	{
		return firstName;
	}
	string GetLastName()
	{
		return lastName;
	}
	int GetGrade()
	{
		return grade;
	}

};

int main()
{
	ifstream studentsList("example.txt");
	string currentLine;
	string firstName;
	string lastName;
	string line;
	string grade;
	int gradeInt = 0;
	vector<string> studentsVector;
	vector<string> studentsIntermediate;

	if (studentsList.is_open())
	{
		while (getline(studentsList, currentLine))
		{
			studentsVector.push_back(currentLine);
		}
	}
	for (int i = 0; i < studentsVector.size(); i++)
	{
		stringstream temp(studentsVector[i]);
		while (getline(temp, line, ' '))
		{
			studentsIntermediate.push_back(line);
		}
	}
	firstName = studentsIntermediate[0];
	lastName = studentsIntermediate[1];
	grade = studentsIntermediate[2];
	gradeInt = stoi(grade);
	Student s1(firstName, lastName, gradeInt);

	firstName = studentsIntermediate[3];
	lastName = studentsIntermediate[4];
	grade = studentsIntermediate[5];
	gradeInt = stoi(grade);
	Student s2(firstName, lastName, gradeInt);

	firstName = studentsIntermediate[6];
	lastName = studentsIntermediate[7];
	grade = studentsIntermediate[8];
	gradeInt = stoi(grade);
	Student s3(firstName, lastName, gradeInt);

	firstName = studentsIntermediate[9];
	lastName = studentsIntermediate[10];
	grade = studentsIntermediate[11];
	gradeInt = stoi(grade);
	Student s4(firstName, lastName, gradeInt);

	firstName = studentsIntermediate[12];
	lastName = studentsIntermediate[13];
	grade = studentsIntermediate[14];
	gradeInt = stoi(grade);
	Student s5(firstName, lastName, gradeInt);

	firstName = studentsIntermediate[15];
	lastName = studentsIntermediate[16];
	grade = studentsIntermediate[17];
	gradeInt = stoi(grade);
	Student s6(firstName, lastName, gradeInt);

	cout << "1: " << s1.GetFirstName() << " " << s1.GetLastName() << ' ' << s1.GetGrade() << '\n';
	cout << "2: " << s5.GetFirstName() << " " << s5.GetLastName() << ' ' << s5.GetGrade() << '\n';
	cout << "3: " << s6.GetFirstName() << " " << s6.GetLastName() << ' ' << s6.GetGrade() << '\n';
	cout << "4: " << s2.GetFirstName() << " " << s2.GetLastName() << ' ' << s2.GetGrade() << '\n';
	cout << "5: " << s4.GetFirstName() << " " << s4.GetLastName() << ' ' << s4.GetGrade() << '\n';
	cout << "6: " << s3.GetFirstName() << " " << s3.GetLastName() << ' ' << s3.GetGrade() << '\n';



	studentsList.close();
}