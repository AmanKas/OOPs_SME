//Hierarchical Inheritance
#include<bits/stdc++.h>
using namespace std;


class A {
public:
     void func1()
     {
          cout << "func of A calling\n";
     }
};

class B: public A
{
public:
     void func2()
     {
          cout << "func of B calling\n";
     }
};

class C: public A {
public:
     void func3()
     {
          cout << "func of C calling\n";
     }
};

int main()
{
     cout << "Class A\n";
     A obj1;
     obj1.func1();

     cout << "Class B\n";
     B obj2;
     obj2.func1();
     obj2.func2();

     cout << "Class C\n";
     C obj3;
     obj3.func1();
     obj3.func3();


     return 0;
}