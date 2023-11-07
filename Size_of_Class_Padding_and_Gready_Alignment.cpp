//Size of Class Padding and Gready Alignment
#include<bits/stdc++.h>
using namespace std;
class fun {

private:
     char a = 'A';
public:
     int b = 2;
protected:
     int c = 3;

};

int main()
{
     fun obj;
     //  cout<<"Size of int: "<<sizeof(int)<<endl;
     //  cout<<"Size of int: "<<sizeof(char)<<endl;
     cout << "Size of the Class: " << sizeof(obj) << endl;
     return 0;
}