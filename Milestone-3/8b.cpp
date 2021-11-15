/*b. n=6
	   1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 */
#include<iostream>
using namespace std;
int main()
{
	int n,C = 1;
	cout<<"Enter number of rows(n):";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int space=1;space<=n-i;space++)
			cout<<"  ";
			
		for(int j=0;j<=i;j++){
			if (j ==0 || i ==0)
				C=1;
			else
			 C=C*(i-j+1)/j;

            cout<<C<<"   ";
        }
	cout<<endl;
	}
	return 0;
}
/*Enter number of rows(n):7
              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1
    1   5   10   10   5   1
  1   6   15   20   15   6   1*/
