// Function Overriding
#include<bits/stdc++.h>
using namespace std;

class Base {
public:
     void disp()
     {
          cout << "base disp " << endl;
     }
     virtual void show()
     {
          cout << "base show " << endl;
     }
};

class deriverd: public Base
{
     void disp()
     {
          cout << " deriverd disp" << endl;
     }
     void show()
     {
          cout << "deriverd show" << endl;
     }
     void show (int num)
     {
          cout << "deriverd show ";//storage class
     }
};
int main()
{
     Base* p;
     Base obj_base;
     deriverd obj_der;
     //Base pointer
     p = &obj_base;
     p->disp();  //->output  base disp
     p->show();  //->output  base show
     //Deriverd Pointer
     p = &obj_der;
     p->disp();  //->output  base disp
     p->show();  //->output  deriverd show
     return 0;
}