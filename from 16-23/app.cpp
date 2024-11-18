#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    double salary = 5000.98; // 8 bytes
    //cout<<sizeof(salary);
    cout<<"integer minimum number => "<<INT_MAX<<"\n";
    cout<<"integer maximum number =>"<<INT_MIN<<"\n";
    
    cout<<"Maximum Short Integer Number =>"<<SHRT_MAX<<"\n";
    cout<<"Minimum Short Integer Number =>"<<SHRT_MIN<<"\n";
    // Edit Line To Make 8 Become 4
    
    cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 8
    cout<<"================================\n";

    //ASCIVALUE printing 
    int ASCIIValue;
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';
    cout<<"ASCIIValue of "<< a <<"is :" <<int(a)<<endl;
     cout<<"ASCIIValue of "<< b <<"is :" <<int(b)<<endl;
      cout<<"ASCIIValue of "<< c <<"is :" <<int(c)<<endl;
       cout<<"ASCIIValue of "<< d <<"is :" <<int(d)<<endl;
    
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;
    cout<<"Character Of This ASCII Value " << a <<"is " << char(a) <<endl;
    cout<<"Character Of This ASCII Value " << b <<"is " << char(b) <<endl;
    cout<<"Character Of This ASCII Value " << c <<"is " << char(c) <<endl;
    cout<<"Character Of This ASCII Value " << d <<"is " << char(d) <<endl;
    cout<<"Character Of This ASCII Value " << e <<"is " << char(e) <<endl;
    cout<<"Character Of This ASCII Value " << f <<"is " << char(f) <<endl;
     cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) << endl;
    
  
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;
    cout << char(d - a) << char(d + c) << char(d + b) << endl;
    
   // Edit Anything Except Values
  int a = 100;
  long long int b = 15001500;
   long double c = 100.54565746;

    // Do Not Edit
  cout << sizeof(a) << " Bytes\n"; // 2 Bytes
  cout << sizeof(b) << " Bytes\n"; // 8 Bytes
  cout << sizeof(c) << " Bytes\n"; // 16 Bytes

  // Edit Anything Except Values
 int x = 100;
 int z = -100;
short y = 100;
float h = 500.55;

// Do Not Edit
cout << x << "\n"; // 100
cout << z << "\n"; // -100
cout << y << "\n"; // 100
cout << h << "\n"; // 500.55


  typedef long long int lli;
  // Do Not Edit  
  lli num = 150050005; // This Is Long Long Int
  cout << num << "\n"; // 150050005

  // Do Not Edit Here
short int r = 100;
float t = 98.5f;
double u = 1.7;

// Edit This Line And Use Type Casting To Get The Output
cout << int(r + t + u) << "\n"; // 200

  // Do Not Edit Here
short a = 1000;
int b = 10000;
long double c = 5.560000505012;

// Change ??? To Something Else To Get The Output
    cout << (a / 100) - (b / 1000) << "\n"; // 12
    cout << (a / 500) + (b / 5000) << "\n"; // 20
    cout << (a / 250) * (b / 5000) << "\n"; // 32
    cout << (a / 2) * (b / 4000) << "\n"; // 5000
    cout << char((a / 20) * (b / 50000)) << "\n"; // P  
  return 0;
}