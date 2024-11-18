#include <iostream>
using namespace std;

int main(){
   int N1, N2;

	cout << "Enter the start and the end of the range: ";
	cin >> N1 >> N2;

	// if the range start was bigger than the end, swap their values
	if (N1 > N2)
	{
		int temp = N1;
		N1 = N2;
		N2 = temp;
	}

	// increment it so the start number will not be printed
	N1++;

	for (int i = N1; i < N2; i++)
	{
		
		if (i % 2 == 0)
			continue;

		// if its the first number print the number only without comma
		if (i == N1 || i == N1 + 1)
		{
			cout << i;
			continue; // continue the loop without executing below line
		}

		// if Its not the first number print comma then the number
		cout << ", " << i;
	}

	cout << '\n';
    
	return 0;
}
