#include <iostream>
using namespace std;

int main()
{
    int salary;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary > 20000 && salary <= 25000)
    {
        cout << "Your net salary is " << salary * 15/100 + salary << endl; 
    }
    else if (salary <= 20000)
    {
        cout << "Your net salary is " << salary * 10/100 + salary << endl;
    }
    else
    {
        cout << "Your net salary is " << salary * 5/100 + salary << endl;
    }

    return 0;

}