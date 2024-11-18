#include <iostream>
using namespace std;
// find the greatest number application 
int A, B, C;
int main()
{
	cin>> A >> B >> C;
	if(A>B && A>C){
		cout<<"the Greatest number is A \n";
	}
	else if(B>A && B>C){
		cout<<"the greatest number is B \n";
	}
	else{
		cout<<C <<"is the greatest number \n";
	}
}
