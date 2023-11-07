//constructor
#include<bits/stdc++.h>
using namespace std;


class Hero {
     //this is how class is define
private:
     int health;
public:
     char level;
     char *name;
     //how to make on constructor
     Hero() {
          cout << "Constructor Called\n";
          name = new char[100];
     }

     //Parameterised Constructor
     Hero(int health)
     {
          this->health = health;
     }

     Hero(Hero& temp)
     {
          cout << "Copy Constructor Called\n";
          this->health = temp.health;
          this->level = temp.level;
     }
     void print()
     {
          cout << "health : " << this->health << endl;
          cout << "level : " << this->level << endl;
          cout << "name : " << this->name << endl << endl;
     }
     //setter function to access and set the values of the member
     void set_health(int h) {
          health = h;
     }
     void set_level(char ch) {
          level = ch;
     }
     void set_name(char name[]) {
          strcpy(this->name, name);
     }
     //getter function to access the private members in the class
     int get_health() {
          return health;
     }
     int get_level() {
          return level;
     }
     ~Hero ()
     {
          cout << "Deconstructor called\n";
     }
};

int main()
{

     Hero hero1;
     hero1.set_health(70);
     hero1.set_level('D');
     char name[5] = "Aman";
     hero1.set_name(name);
     Hero hero2(hero1);




     return 0;
}
