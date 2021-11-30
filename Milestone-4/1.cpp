//1. WAP using function to Reverse a given no. (for example: 5784 will become 4875)
#include<iostream>
using namespace std;

int reverse(int n){
	int res=0;
	while(n!=0)
	{
		int rem=n%10;
		res=res*10+rem;
		n/=10;
		
	}
return res;
}

int main()
{
int n,rem=0;
cout<<"enter the number to be reversed:";
cin>>n;
cout<<"the reversed no. would be:"<< reverse(n);
return 0;
}
/*enter the number to be reversed:5678
the reversed no. would be:8765*/
