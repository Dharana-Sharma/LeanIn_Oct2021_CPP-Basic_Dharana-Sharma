/*Create an array and write a menu driven program to traverse that array, 
search an element in that array, modify an element in the array. 
(Use while loop and switch case to make it menu driven)*/
#include<iostream>
using namespace std;
void traverse(int arr[], int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";}
							
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (x==arr[i])
	return i;
    return -1;
}
void modify(int arr[], int n,int x,int p,int index){
		cout << "\nenter the modifying number : ";
    			cin>>p;
    		arr[index]=p;
        			}
int main(){
	int n,ch,p,size,element;
	cout<<"enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of array:";
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	while(1){
	cout<<"\n----MENU----"<<endl<<"1.Traverse the array"<<endl<<"2.Search an element in the array"<<endl<<"3.Modify an element"<<endl<<"4.Exit";
	cout<<"\nenter your choice (1-4):";
	cin>>ch;
		
	switch(ch){
		case 1: cout<<"elements of the array are:";
				traverse(arr,n);
			break;
				
   		case 2:{
			cout << "\nenter element to search : ";
    			cin>>element;
    
    			int index = search(arr,size,element);
			    	if (index==-1)
			        	cout<<"\nelement is not present in the array";
			    	else
			        	cout<<"\nelement found at position "<<index+1<<" index "<<index;
        		}break;
        
		case 3:{
			int ele,loc;
			cout<<"emter the element to be modified";
        			cin>>ele; 
        		int index = search(arr,size,element);
    				if (index == -1)
        				cout<<"\nelement is not present in the array";
    				else
					modify(arr, size,element,p,index);		
					cout<<"elements of the updated array are:";
			for(int i=1;i<=n;i++)
			cout<<arr[i]<<" ";
			}break;
				
		case 4:cout<<"exit";
			exit(0);
				
		default:cout<<"invalid choice";
		}
	}
return 0;
}
