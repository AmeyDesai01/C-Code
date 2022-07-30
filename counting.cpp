// C++ program to demonstrate the
// boilerplate code
#include <iostream>
using namespace std;

// Driver Code
void getCounting(int n) 
{
    //base condition
    if (n<=0)
    return;

   

    //recursive call
    getCounting(n-1);

    //print the number
    cout<<n<<endl;

}

int main()
{
    int n;
    cout<<"Please enter the input"<<endl;
    cin>>n;

    cout<<"Counting :" <<endl;
    getCounting(n);

}



// What happended is we first made the call and then we printed the number 
// if we want 5,4,3,2,1 the we must have done first print then make the call