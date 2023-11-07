// Hybrid inheritance
#include<bits/stdc++.h>
using namespace std;


class animal {
public:
     int age;
     int weight;

public:
     void bark()
     {
          cout << "barking" << endl;
     }
};

class human
{
public:
     void speak()
     {
          cout << "speaking" << endl;
     }
};

class hybrid: public animal, public human
{

};

int main()
{
     hybrid obj;
     obj.bark();
     obj.speak();
     // barking
     // speaking

     return 0;
}