#include <iostream>
using namespace std;

// even odd number checker
int A;
int main()
{
	cout<<"please enter a number : ";
	cin>> A ;
	if(A % 2 == 0 ){
		
		cout<< A <<"is a even number \n";
	}
	else{
		cout<<A <<"is odd number \n";
		
	}
	getchar();
	return 0;
}
