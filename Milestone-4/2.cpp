//2. WAP using function to Check whether a given no. is palindrome or not.
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

void check(int n,int res){
	reverse(n);
	if(res==n)
	  cout<<"it is a palindrome";
	else
	  cout<<"it is not a  palindrome";
}


int main()
{
int n,rem=0,res;
cout<<"enter the number:";
cin>>n;
res=reverse(n);
	check(n,res);
return 0;	
}
/*
OUTPUT WHEN THE NUMBER IS A PALINDROME-
enter the number:12321
it is a palindrome

OUTPUT WHEN IT'S NOT A PALINDROME-
enter the number:342652
it is not a  palindrome
*/


