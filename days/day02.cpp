//Program 1: Even/Odd 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }


//Program 2: Check eligibility to vote

    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "Not eligible "<< endl;
    }
}
