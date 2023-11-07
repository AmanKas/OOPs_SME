// Single Level Inheritance
#include<bits/stdc++.h>
using namespace std;


class animal {
public:
     int age;
     int weight;

public:
     void hand_shake()
     {
          cout << "shaking hand" << endl;
     }
};

class dog: public animal {

};
int main()
{
     dog pug;
     pug.hand_shake();
     cout << pug.weight;
     // shaking hand
     // random val
     return 0;
}