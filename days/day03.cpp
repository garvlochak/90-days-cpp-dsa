//Program 1: Print numbers 1 to 10
#include <iostream>
using namespace std;
int main ()
{
for( int i = 1; i <= 10; i++)
{
    cout<<i<<endl;
}


//Program 2: Print even numbers from 1 to 20

for(int i=2; i<=20; i += 2 )
{
    cout<<i<<endl;
}

//Program 3:Print numbers from 10 down to 1 
for( int i=10; i>=1; i--){
    cout<<i<<endl;
}

//Program 4: Print the sum of numbers from 1 to 10
int sum=0;
for (int i=1; i<=10; i++)
{
    sum+=i;
}
cout<<sum<<endl;

}

