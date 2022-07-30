#include <iostream>
using namespace std;

int getFactorial(int n)
{
    //base condition
    if(n<=1)

    return 1;

    //recursive call
    int answer= n * getFactorial(n-1);
    return answer;

    
}

int main()
{
    int n;
    cout<<"Please enter the Input"<<endl;
    cin>>n;

    cout<<"value of "<<n<<"! is " << getFactorial(n) <<endl;
}

