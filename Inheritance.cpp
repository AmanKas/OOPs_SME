//Inheritance
#include<bits/stdc++.h>
using namespace std;


class human {
public:
     int age;
     int weight;
     int height;
public:

     int get_age()
     {
          return this->age;
     }
     void set_weight(int weight)
     {
          this->weight = weight;
     }
     int get_weight()
     {
          return this->weight;
     }
};

//Inherit Class
class men: public human
{
public:
     string color;

public:
     void sleep() {
          cout << "male is sleeping " << endl;
     }
};

int main()
{
     men object1;
     cout << "age = " << object1.get_age() << endl;
     cout << "weight = " << object1.get_weight() << endl;
     object1.set_weight(65);
     object1.sleep();
     cout << "weight = " << object1.get_weight() << endl;
     // OUTPUT
     //age = random val
     // weight = random val
     // male is sleeping
     // weight = 65
     return 0;
}