//4. Display trasnpose of a matrix.
#include <iostream>
using namespace std;

int main()
{
   int i,j,a[100][100],r,c;
	cout<<"Enter the no. of rows and columns in the matrix:";
	cin>>r>>c;
	
	cout<<"Enter the elements of matrix:"<<endl;
		 for(i=1;i<=r;i++)
       			for(j=1;j<=c;j++)
       {
           cout<<"Enter element a"<<i<<j<<":";
           cin>>a[i][j];
       }
       		 
    cout<<"Transpose of given matrix:"<<endl;
		 for(i=1;i<=r;i++)
       			for(j=1;j<=c;j++)
       {
           cout<<a[j][i];
           if(j==c)
                cout << endl;
       }
	
    return 0;
}
/*Enter the no. of rows and columns in the matrix:3 3
Enter the elements of matrix:
Enter element a11:1
Enter element a12:2
Enter element a13:3
Enter element a21:4
Enter element a22:5
Enter element a23:6
Enter element a31:7
Enter element a32:8
Enter element a33:9
Transpose of given matrix:
147
258
369
*/
