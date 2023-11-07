//Size of Empty Class
#include<bits/stdc++.h>
using namespace std;

class Hospital {
    //empty class
};

int main()
{
    Hospital Fortis;
    cout << "Size of the Fortis Class: " << sizeof(Fortis);

    return 0;
}



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




//public private protected
#include<bits/stdc++.h>
using namespace std;
class fun {

private:
    int a = 1;
public:
    int b = 2;
    void getter()
    {
        cout << "private: " << a << endl;
    }
protected:
    int c = 3;

};

class fun1: public fun
{
public:
    void printClass() {
        cout << "protected: " << c << endl;
    }
};

int main()
{
    fun obj;
    fun1 obj2;
    cout << "Public: " << obj.b << endl;
    obj2.printClass();
    obj.getter();
    return 0;
}



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




// Dynamic Allocation
#include<bits/stdc++.h>
using namespace std;

class Hero {
    //this is how class is define
private:
    int health;
public:
    char level;
    //setter function to access and set the values of the member
    void set_health(int h) {
        health = h;
    }
    void set_level(char ch) {
        level = ch;
    }
    //getter function to access the private members in the class
    int get_health() {
        return health;
    }
    char get_level() {
        return level;
    }
};

int main()
{

    //static allocation
    Hero a;
    a.set_health(70);
    a.set_level('A');
    cout << "A level is : " << a.get_level() << "\n";
    cout << "A health is : " << a.get_health() << "\n";

    //dynamically
    Hero *b = new Hero; //new keyword
    b->set_health(80); // (*b).set_health(80);
    b->set_level('B');

    cout << "B level is : " << b->get_level() << "\n"; //or we can getfrom (*b).get_level();
    cout << "B health is: " << b->get_health() << "\n"; //(*b).get_health();
    // A level is : A   OUTPUT
    // A health is : 70
    // B level is : B
    // B health is: 80

    return 0;
}



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




// Shallow and Deep Copy
#include <iostream>
using namespace std;
// Shallow Copy
class MyClass {
public:
    int *x;
    MyClass(int val) {
        x = new int(val);
    }
    MyClass(const MyClass &obj) {
        x = obj.x;
    }
    ~MyClass() {
        delete x;
    }
};
// Deep Copy
class MyClass {
public:
    int *x;
    MyClass(int val) {
        x = new int(val);
    }
    MyClass(const MyClass &obj) {
        x = new int(*obj.x);
    }
    ~MyClass() {
        delete x;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    *obj2.x = 20;
    cout << *obj1.x << " " << *obj2.x;
    return 0;
}





//Static KeyWord
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



//Inheritance
#include<bits/stdc++.h>
using namespace std;


class human {
public:
    int age;
    int weight;
    int height;
public:

    int get_age()
    {
        return this->age;
    }
    void set_weight(int weight)
    {
        this->weight = weight;
    }
    int get_weight()
    {
        return this->weight;
    }
};
//Inherit Class
class men: public human
{
public:
    string color;

public:
    void sleep() {
        cout << "male is sleeping " << endl;
    }
};

int main()
{
    men object1;
    cout << "age = " << object1.get_age() << endl;
    cout << "weight = " << object1.get_weight() << endl;
    object1.set_weight(65);
    object1.sleep();
    cout << "weight = " << object1.get_weight() << endl;
    // OUTPUT
    //age = random val
    // weight = random val
    // male is sleeping
    // weight = 65
    return 0;
}



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



// Multi Level Inheritance
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



// Hybrid Inheritance
#include<bits/stdc++.h>
using namespace std;

class animal {
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "barking" << endl;
    }
};

class human
{
public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class hybrid: public animal, public human
{

};

int main()
{
    hybrid obj;
    obj.bark();
    obj.speak();
    // barking
    // speaking

    return 0;
}



//Hierarchical Inheritance
#include<bits/stdc++.h>
using namespace std;

class A {
public:
    void func1()
    {
        cout << "func of A calling\n";
    }
};

class B: public A
{
public:
    void func2()
    {
        cout << "func of B calling\n";
    }
};

class C: public A {
public:
    void func3()
    {
        cout << "func of C calling\n";
    }
};

int main()
{
    cout << "Class A\n";
    A obj1;
    obj1.func1();

    cout << "Class B\n";
    B obj2;
    obj2.func1();
    obj2.func2();

    cout << "Class C\n";
    C obj3;
    obj3.func1();
    obj3.func3();


    return 0;
}




// Inheritance Ambiguity
#include<bits/stdc++.h>
using namespace std;

class A {
public:
    void func()
    {
        cout << "I am A\n";
    }
};

class B
{
public:
    void func()
    {
        cout << "I am B\n";
    }
};

class C: public A, public B {

};

int main()
{

    C obj;
    // obj.func(); // wrong call;
    obj.A::func();
    obj.B::func();

    return 0;
}



// operator overloading
#include<bits/stdc++.h>
using namespace std;

class A {
public:
    int a;
    int b;

public:
    void operator+ (A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;

        cout << "sub of values = " << value1 - value2 << endl;
    }

    void operator() ()
    {
        cout << "this is brackets " << endl;
    }

};
int main()
{

    A obj1, obj2;
    obj1.a = 8;
    obj2.a = 6;
    obj1 + obj2; // output is-> 2
    obj1(); // output is-> this is breackets

    return 0;
}




//Function Overloading
#include<bits/stdc++.h>
using namespace std;

class A {

public:
    void sayHello()
    {
        cout << "Hello this is ankit" << endl;
    }

    int sayHello (string name, int num)
    {
        cout << "hello this me" << name << endl;
        return num;
    }
    void sayHello(string name)
    {
        cout << "Hello" << name << endl;
    }

};
int main()
{

    A obj;

    // obj.sayHello();
    string name = "Aman";
    // obj.sayHello(name);
    obj.sayHello(name, 21);


    return 0;
}



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