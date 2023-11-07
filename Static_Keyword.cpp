//Static Keyword
#include<bits/stdc++.h>
using namespace std;


class Hero {
     //this is how class is define
private:
     int health;
public:
     char level;
     char *name;

     //static
     static int TimeToComplete;

     static int staticfunction()
     {
          return TimeToComplete ;
          // cout<<level<<endl;
     }
};

int Hero ::TimeToComplete = 5;

int main()
{

     cout << Hero::TimeToComplete << endl;
     cout << Hero::staticfunction() << endl;

     // Hero a;
     // cout << a.TimeToComplete << endl; //this is not a good practice
     // OUTPUT
     // 5 5
     return 0;
}