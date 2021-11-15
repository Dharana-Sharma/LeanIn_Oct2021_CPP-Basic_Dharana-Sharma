//3. Add two matrices and display the output.
#include<iostream>
using namespace std;
int main(){
	int i,j,a[100][100], b[100][100], sum[100][100],r,c;
	cout<<"Enter the no. of rows and columns in the matrix:";
	cin>>r>>c;
	
	cout<<"Enter the elements of matrice 1:"<<endl;
	for(i=1;i<=r;i++)
       		for(j=1;j<=c;j++)
		       {
			   cout<<"Enter element a"<<i<<j<<":";
			   cin>>a[i][j];
		       }
	
	cout<<"enter the elements of matrice 2:"<<endl;
	for(i=1;i<=r;i++)
       		for(j=1;j<=c;j++)
		       {	
			   cout<<"Enter element b"<<i<<j<<":";
			   cin>>b[i][j];
		       }
	
	for(i = 1; i <= r;i++)
	       	for(j = 1; j <= c;j++)
	            sum[i][j] = a[i][j] + b[i][j];
		
	cout<<"sum of the two matrices:"<<endl;
	for(i=1;i<=r;i++)
       		for(j= 1;j<=c;j++)
			{
			    cout<<sum[i][j] << "  ";
			    if(j==c)
				cout << endl;
			}
		
	return 0;
	
}
/*Enter the no. of rows:2
Enter the no. of columns:2
Enter the elements of matrice 1:
Enter element a11:1
Enter element a12:1
Enter element a21:1
Enter element a22:1
enter the elements of matrice 2:
Enter element b11:2
Enter element b12:2
Enter element b21:2
Enter element b22:2
sum of the two matrices:
3  3
3  3                    */
