// Inheritance Ambiguity
#include<bits/stdc++.h>
using namespace std;


class A {
public:
     void func()
     {
          cout << "I am A\n";
     }
};

class B
{
public:
     void func()
     {
          cout << "I am B\n";
     }
};

class C: public A, public B {

};

int main()
{

     C obj;
     // obj.func(); // wrong call;
     obj.A::func();
     obj.B::func();

     return 0;
}