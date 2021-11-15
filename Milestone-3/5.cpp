//5. Reverse an array and display the output.
#include <iostream>
using namespace std;
  
int main(){
    int arr[100],rev_arr[500], n, i;
      
    cout<<"Enter number of elements in array:";
    cin>>n;
     
    cout<<"Enter "<<n<<" numbers:";
      
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
       rev_arr[i]=arr[n-i-1];
    } 
    
    cout << "Reversed Array:";
    for(i = 0; i < n; i++){
        cout <<rev_arr[i] << " ";
    }
          
    return 0;
}
/*Enter number of elements in array:4
Enter 4 numbers:1 2 3 4
Reversed Array:4 3 2 1*/
