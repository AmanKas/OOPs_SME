#include<bits/stdc++.h>
using namespace std;


class A {

public:
	void sayHello()
	{
		cout << "Hello this is aman" << endl;
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