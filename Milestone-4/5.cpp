//5. WAP using function to find the largest and second largest element in the array.
#include<iostream>
using namespace std;

int large(int arr[],int n,int l1) {
	for(int i=0;i<=n;i++)
			if(arr[i]>l1){
				l1=arr[i];
			}
			return l1;
}

int seclarge(int arr[],int n,int l1,int l2) {
		for(int i=0;i<=n;i++)
			if (arr[i] >l1) {
		         l2=l1 ;
		         l1 = arr[i];
		      	} 
			else if (arr[i] >l2 && arr[i]!=l1) {
		        l2=arr[i];
		        
}
return l2;
}

int main()
{
int n,x;
cout<<"enter the size of array:";
cin>>n;
int arr[n];
cout<<"enter the array:";
for(int i=0;i<n;i++)
cin>>arr[i];

int l1=arr[0], l2=arr[0];
cout<<"display the array:";
for(int i=0;i<n;i++)
cout<<arr[i];

cout<<"\nlargest element is:"<<large(arr,n,l1);
cout<<"\nsecond largest element is:"<<seclarge(arr,n,l1,l2);

return 0;
}
/*enter the size of array:5
enter the array:6 8 2 9 1
display the array:68291
largest element is:9
second largest element is:8*/