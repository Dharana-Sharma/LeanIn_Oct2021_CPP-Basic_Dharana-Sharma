//Q2. Write a program to print nos. from 1 to 50 that are divisible by 3.#

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number till which you want to check the numbers divisible by 3:";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%3==0)
		cout<<i<<endl;
	}
	return 0;
}

/*Enter number till which you want to check the numbers divisible by 3:50
3
6
9
12
15
18
21
24
27
30
33
36
39
42
45
48*/