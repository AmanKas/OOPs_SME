#include<bits/stdc++.h>
using namespace std;


class Patient {
private:
     VerfyName() {
          //do something;
     }
     VerfyAddress() {
          //do something;
     }
public:
     string name;
     string address;

     void validate()
     {
          VerfyName();
          VerfyAddress();
     }


};

int main()
{
     Patient p1;
     p1.name = "Himanshu";
     p1.VerfyName();
     return 0;
}