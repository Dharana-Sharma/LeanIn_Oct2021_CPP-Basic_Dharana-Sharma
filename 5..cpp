#include <iostream>
using namespace std;

int main() 
{
   int a,b,c,d,quotient,remainder;
	cout<<"enter the two no.s:";
	cin>>a>>b;
	quotient=a/b;
	remainder=a%b;
	
	cout<<"quotient="<<quotient<<endl;
	cout<<"remainder="<<remainder;
   return 0;
}