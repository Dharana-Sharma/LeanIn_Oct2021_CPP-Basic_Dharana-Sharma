/*j.(n=5)
A 
B C 
D E F 
G H I J 
K L M N O */
#include<iostream>
using namespace std;
int main()
{
	int n;
	char num='A';
	cout<<"Enter number of rows(n):";
	cin>>n;
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=i;j++)
		{
		cout<<num<<"\t";
		num++;
		}
	cout<<endl;
	}
	return 0;
}
/*Enter number of rows(n):6
A
B       C
D       E       F
G       H       I       J
K       L       M       N       O
P       Q       R       S       T       U*/