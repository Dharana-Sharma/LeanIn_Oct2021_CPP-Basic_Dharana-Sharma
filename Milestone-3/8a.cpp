/*8. Print following patterns :
a. n=5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *       */
#include <iostream>
using namespace std;
int main() {
   int rows,i,j,space,n;
   cout<<"enter the value of n:";
    cin>>n;
   for (i=n;i>=1;i--) {
      for (space=0;space<n-i;space++)
         cout<<"  ";
      for (j=i;j<=2*i-1;j++)
         cout<<"* ";
      for (j=0;j<i-1;j++)
         cout<<"* ";
      cout<<endl;
   }
   return 0;
}
/*enter the value of n:6
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/