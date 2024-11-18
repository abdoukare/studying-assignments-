#include <iostream>
using namespace std;
// Assignment 1 

int age = 40;
int points = 800;
float rate = 8.5f;

int main()
{
	
	if(age >= 18 && points >= 500 && rate >= 5)
	{
		cout<<" Yes age > 18 & points > 500 & rate > 5";
	}
	else{
		cout<<"No ";
	}
	
	// Assignment 2 
	// testing case 1 
		int age1 = 18;
	int points1 = 450;
	
	
		if(age1 >= 20 && points1 >= 500)
		{
			cout<<"No age is not okay \n";
		}
	//testing case 2 
		int age2 = 20;
    	int points2 = 450;
	   if (age2 > 17 || points2 > 800) { 
        // Falls here if either condition is not met
        cout << " age  is okay\n";
        cout << "no points is not okay\n";
    } else {
        cout << "no age no okay\n";
        cout << "yes points are okay\n";
    }
    // Test Case 3
	int age3 = 20;
	int points3 = 650;
	if(age3>= 20 || points > 500){
		cout<<"yes age is okay \n";
		cout<<"points is okay \n";
	}else{
		cout<<"no age is not okay \n";
		cout<<"no points is not okay \n";
	}
	
	int num;
	cout<<"ENter a number between 0 and 150 :";
	cin>> num;
	//conditions 
	if(num < 10){
		cout<<"00" << num;
	}
	else if(num > 10 || num < 100){
		cout<<"0"<< num;
	}
 	else if (num >= 100) {
        cout << num << endl;
    }
    
	    
	int num1 = 10;
	int num2 = 5;
	int num3 = 10;
	int num4 = 30;
	
	// Do Not Edit Any Condition
	
	// Condition 1
	if (num1 > num2)
	  cout << "Condition 1 Is True\n";
	else
	  cout << "Condition 1 Is False\n";
	
	// Condition 2
	if (num1 > num2 && num1 < num4)
	  cout << "Condition 2 Is True\n";
	else
	  cout << "Condition 2 Is False\n";
	
	// Condition 3
	if (num1 > num2 && num1 == num3)
	  cout << "Condition 3 Is True\n";
	else
	  cout << "Condition 3 Is False\n";
	
	// Condition 4
	if (num1 + num2 < num4)
	  cout << "Condition 4 Is True\n";
	else
	  cout << "Condition 4 Is False\n";
	
	// Condition 5
	if (num1 + num3 < num4)
	  cout << "Condition 5 Is True\n";
	else
	  cout << "Condition 5 Is False\n";
	
	// Condition 6
	if (num1 + num2 + num3 < num4)
	  cout << "Condition 6 Is True\n";
	else
	  cout << "Condition 6 Is False\n";
	
	// Condition 7
	if (num4 - (num1 + num3) + num2 == 21)
	  cout << "Condition 7 Is True\n";
	else
	  cout << "Condition 7 Is False\n";
	


	int by = 82; // by => Birth Year
	int s = 500; // s => Salary
	cout << (by > 80 ? (s < 600 ? "Ok\n" : "High\n") : "Not Ok\n");
	
		int age = 40;
	int points = 100;
	
	if (age > 18)
	
	  cout << "Age Is Ok\n";
	  if (points > 50)
	  
	    cout << "Points Is Ok\n";
	    if (sizeof(age) == 4)
	    
	      cout << "Age Data Is 4 Bytes\n";
	    
	  int result = 0;
	  int num1 , num2, num3, num4;
	  cout<<"Please type 5 numbers in a row \n";
	  cout<<"only even numbers less than 20 are counted\n";
	  cin>> num1 >> num2 >> num3 >> num4;
	  if(num1 < 20 && num1 %2 == 0){
	  	result += num1;
	  }
	  if(num2 < 20 && num2 %2 == 0){
	  	result += num2;
	  }
	  if(num3 < 20 && num3 %2 == 0){
	  	result += num3;
	  }
	  if(num4 < 20 && num4 %2 == 0){
	  	result += num4;
	  }
	  cout<< result;
	  		
	  
		
	
	
return 0;
	
}
