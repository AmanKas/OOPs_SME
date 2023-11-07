// operator overloading
#include<bits/stdc++.h>
using namespace std;


class A {

public:
     int a;
     int b;

public:
     void operator+ (A &obj)
     {
          int value1 = this->a;
          int value2 = obj.a;

          cout << "sub of values = " << value1 - value2 << endl;
     }

     void operator() ()
     {
          cout << "this is brackets " << endl;
     }

};
int main()
{

     A obj1, obj2;
     obj1.a = 8;
     obj2.a = 6;
     obj1 + obj2; // output is-> 2
     obj1(); // output is-> this is breackets


     return 0;
}