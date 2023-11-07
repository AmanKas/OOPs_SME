// Dynamic Allocation
#include<bits/stdc++.h>
using namespace std;

class Hero {
     //this is how class is define
private:
     int health;
public:
     char level;
     //setter function to access and set the values of the member
     void set_health(int h) {
          health = h;
     }
     void set_level(char ch) {
          level = ch;
     }
     //getter function to access the private members in the class
     int get_health() {
          return health;
     }
     char get_level() {
          return level;
     }
};

int main()
{

     //static allocation
     Hero a;
     a.set_health(70);
     a.set_level('A');
     cout << "A level is : " << a.get_level() << "\n";
     cout << "A health is : " << a.get_health() << "\n";

     //dynamically
     Hero *b = new Hero; //new keyword
     b->set_health(80); // (*b).set_health(80);
     b->set_level('B');

     cout << "B level is : " << b->get_level() << "\n"; //or we can getfrom (*b).get_level();
     cout << "B health is: " << b->get_health() << "\n"; //(*b).get_health();
     // A level is : A   OUTPUT
     // A health is : 70
     // B level is : B
     // B health is: 80

     return 0;
}
