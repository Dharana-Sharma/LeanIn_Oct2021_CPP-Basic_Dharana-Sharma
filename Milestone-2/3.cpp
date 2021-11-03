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
/*1       2       buzz    4       fizz    buzz    7       8       buzz    fizz    11      buzz    13      14      FizzBuzz
16      17      buzz    19      fizz    buzz    22      23      buzz    fizz    26      buzz    28      29      FizzBuzz
31      32      buzz    34      fizz    buzz    37      38      buzz    fizz    41      buzz    43      44      FizzBuzz
46      47      buzz    49      fizz*/
