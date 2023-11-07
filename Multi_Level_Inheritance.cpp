//Multi Level Inheritance
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

class pug: public dog {

};
int main()
{
     pug himu;
     himu.hand_shake();
     cout << himu.weight;
     // shaking hand
     // 4201019
     return 0;
}