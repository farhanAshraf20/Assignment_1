
/*******************************************************************
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
Date : 02-Mar-2022
Farhan Ashraf
******************************************************************/
#include<iostream>
using namespace std;

class Employee
{
	double salary;
	int no_of_hours;
public:
	Employee() {}
	void getinfo()
	{
		cout << "Enter the salary of employee: ";
		cin >> salary;
		cout << "Enter the number of hours: ";
		cin >> no_of_hours;
	}
	void AddSal()
	{
		if (salary < 500)
			salary += 10;
	}
	void AddWork()
	{
		if (no_of_hours > 6)
			salary += 5;
	}
	void DisplaySalary()
	{
		cout << salary;
	}

};


int main()
{
	Employee emp;
		emp.getinfo();
		emp.AddSal();
		emp.AddWork();

		cout << "\nThe final salary of employee is:";
		emp.DisplaySalary();
}
