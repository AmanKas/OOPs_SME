// Access Modifiers
#include<bits/stdc++.h>
using namespace std;

class Hospital {
public:
    int health;
    char patient_Intial;

    void print() {
        cout << patient_Intial << endl;
    }
};

int main()
{
    Hospital Ankit;
    Ankit.health = 70;
    Ankit.patient_Intial = 'A';

    cout << "patient_Intial: " << Ankit.patient_Intial << endl;
    cout << "patient_health: " << Ankit.health << endl;
    //
    cout << "Using print function of class" << endl;
    Ankit.print();

    return 0;
}
