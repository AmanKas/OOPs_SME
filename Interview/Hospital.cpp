#include<bits/stdc++.h>
using namespace std;

class Doctor {
private:
     string name;
     string address;
public:
     Doctor(string n, string add)
     {
          this->name = n;
          this->address = add;
     }

     string getname()
     {
          return name;
     }
};

class Patient {
private:
     string name;
     string address;
     Doctor* doctor;
public:
     Patient(string n, string add, Doctor* doctor)
     {
          this->name = n;
          this->address = add;
          this->doctor = doctor;
     }
     string getname()
     {
          return name;
     }

     Doctor* getdoctor()
     {
          return doctor;
     }
};
int main()
{

     Doctor doc1("Dr.Aman", "Kalka Delhi");
     Patient pat1("Ankit", "Ghaziabad", &doc1);

     cout << "Patient Name: " << pat1.getname() << endl;
     cout << "Patient Doctor: " << pat1.getdoctor()->getname() << endl;

     return 0;
}
