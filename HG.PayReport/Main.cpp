// Hunter Gomulkiewicz
// Pay Report Assignment
// 09/29/2026

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int main()
{
    int size;
    cout << "Enter the number of employees: ";
    cin >> size;

    Employee* employees = new Employee[size];

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the ID for employee " << (i + 1) << ": ";
        cin >> employees[i].ID;
        cout << "Enter the first name of employee " << (i + 1) << ": ";
        cin >> employees[i].FirstName;
        cout << "Enter the last name of employee " << (i + 1) << ": ";
        cin >> employees[i].LastName;
        cout << "Enter the hours worked for employee " << (i + 1) << ": ";
        cin >> employees[i].HoursWorked;
        cout << "Enter the hourly rate for employee " << (i + 1) << ": ";
        cin >> employees[i].HourlyRate;
    }

    cout << "\nPay Report\n";
    cout << "-------------\n";
    float paySum = 0;
    for (int i = 0; i < size; i++)
    {
        float pay = employees[i].HoursWorked * employees[i].HourlyRate;
        cout << employees[i].ID << ". " << employees[i].FirstName << " " << employees[i].LastName << ": $" << pay << "\n";
        paySum += pay;
    }
    cout << "\nTotal pay: $" << paySum << "\n";

    (void)_getch();
    return 0;
}