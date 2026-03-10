#include <iostream>
using namespace std;

int main()
{
    // Program 1: Even / Odd
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

    // Program 2: Voting eligibility
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "Eligible" << endl;
    }
    else
    {
        cout << "Not eligible" << endl;
    }
}