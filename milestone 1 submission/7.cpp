#include <iostream>
using namespace std;

int main() 
{    
int a,b;
    cout << "Enter value of a: ";
    cin>>a;
    cout << "Enter value of b: ";
    cin>>b;
    int temp_var=a;
    a=b;
    b=temp_var;
    
    cout<<"After swapping, a="<<a<<" & b="<<b;

    return 0;
}

/*  Enter value of a: 4
    Enter value of b: 5
    After swapping, a=5 & b=4   */
