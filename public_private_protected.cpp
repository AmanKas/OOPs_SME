//public private protected
#include<bits/stdc++.h>
using namespace std;
class fun {

private:
     int a = 1;
public:
     int b = 2;
     void getter()
     {
          cout << "private: " << a << endl;
     }
protected:
     int c = 3;

};

class fun1: public fun
{
public:
     void printClass() {
          cout << "protected: " << c << endl;
     }
};

int main()
{
     fun obj;
     fun1 obj2;
     cout << "Public: " << obj.b << endl;
     obj2.printClass();
     obj.getter();
     return 0;
}