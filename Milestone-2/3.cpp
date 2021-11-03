//Write a program to print nos. from 1 to 50 by replace no. divisible by 3 with "buzz", no. divisible by 5 with "fizz" and no. divisible by 15 with "fizzbuzz".

#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1; i<=50; i++)
    {
        if (i%15 == 0)       
            cout<<"FizzBuzz\n";   
         
        else if ((i%3) == 0)   
            cout<<"buzz\t";                
         
        else if ((i%5) == 0)                      
            cout<<"fizz\t";                
     
        else            
            cout<<i<<"\t";                
 
    }
    return 0;
}