// Encapsulation
#include<bits/stdc++.h>
using namespace std;


class student {

private:
     char *name;
     int age;

public:
     void set_name(char _name[])
     {
          this->name = _name;
     }
     void set_age(int _age)
     {
          this->age = _age;
     }
     void get_age()
     {
          cout << "Age of the " << name << " is " << this->age;
     }
     //  bool validate()
     //  {
     //     //  Run some check on stundent
     //     bool check1 = verfyName();
     //     bool check2 = verfyAddress();
     //     return check1&check2;
     //  }
};


int main()
{

     student stud1;
     char n[6] = "Ankit";
     stud1.set_name(n);
     stud1.set_age(21);

     stud1.get_age();
     //  ankit.validate();
     return 0;
}