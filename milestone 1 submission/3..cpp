#include <iostream>

using namespace std;

int main() 
{
   int n;
	cout<<"enter a no.";
	cin>>n;
	cout<<"your no. without any operation:"<<n<<endl;
    cout <<"n++:"<< n++ << endl;
    cout <<"++n:"<< ++n << endl;
	cout <<"n--:"<< n-- << endl;
    cout <<"--n:"<< --n << endl;

   return 0;
}

/*  enter a no.:6
    your no. without any operation:6
    n++:6
    ++n:8
    n--:8
    --n:6                  */
