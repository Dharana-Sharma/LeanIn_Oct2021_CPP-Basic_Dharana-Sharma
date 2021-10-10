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
    
    cout<<"after swapping, a="<<a<<" & b="<<b;

    return 0;
}