#include <iostream>
using namespace std;

// reading integer N and displaying the digits 

int main(){
    int N,nbr;
    cout<<"program that calculates the digits of N :"<<endl;
    cin >> N;
    nbr = 0;
    do
    {
        N = N/10;
        nbr = nbr +1;
    } while (N != 0);
    cout<<"the number of digits is : "<<nbr;

    cout<<"\n=================================\n";
    
    cout<<"program 2 : reading positive integer and its revers "<<endl;

    int N1,N2;
    cout << "enter a number N :";
    cin >> N1;
    N2=0;
    while (N1> 0){
    N2 = (N2 * 10)+ (N1 % 10);
    N1 = N1 / 10;
    }
    cout<< "the invers of N is : "<<N2;

    cout<<"\n=================================\n";
    
    cout<<"reading a number N and telling if its even or odd number :"<<endl;
    int N3,nmbr;
    cout<<"Reading N3 and displaying if its prime or not"<<endl;

    cout<<"enter N3 : ";
    cin >> N3;
    for (int i = 2; i <= N3/2; i++)
    {
        if (N3 % i == 0)
        {	
            nmbr++;
        }
        
    }
    if (nmbr = 0)
    {
        cout<<"the number " << N3 <<" is prime ";
    }else{
         cout<<"the number " << N3 <<" is odd ";
    }
    
    cout<<"\n=================================\n";
    
    cout<<"displaying all prime numbers less than 100"<<endl;
    int n,nbr;
    bool prime;
    prime = true;
    for ( n = 1; n < 100; n++)
    {
        prime = true;
        int i = 2;
        while ((i <= n/2)&&(prime == true))
        {
            if (n % i == 0)
            {
                prime = false;
                i++;
            }
            prime = false;
            i++;
        }
        if (prime = true)
        {
            cout<<n<<endl;
            nbr++;
        }
        n++;
        }
    
    cout<<"\n=================================\n";
    int number;
    int count = 0;
    int i =2;
    number = i;
    bool isPrime = true;
     while (count <= 100) {
        isPrime = true;
        for (int i = 2;  i <= number/2; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << number<<endl;
            count++;
        }

        number++;
    }

    

    
    return 0;
}