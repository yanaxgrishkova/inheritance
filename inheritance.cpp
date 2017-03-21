#include <iostream>

using namespace std;

class general{
public: 
	void general_public()
	{
		cout << "Public" << endl;
	}
protected:
	void general_protected()
	{
		cout << "Protected" << endl;
	}
private:
	void general_private()
	{
		cout << "Private" << endl;
	}
};

class A: public general{ 
	void a_public()
	{
		general::general_public();
	}
	void a_protected()
	{
		general::general_protected();
	}
	/*void a_private()
	{
		general::general_private();
	}
	*/
};

class B : private general {
	void b_public()
	{
		general::general_public();
	}
	void b_protected()
	{
		general::general_protected();
	}
	/*void b_private()
	{
		general::general_private();
	}
	*/
};

class C : protected general{
	void c_public()
	{
		general::general_public();
	}
	void c_protected()
	{
		general::general_protected();
	}
	/*void c_private()
	{
		general::general_private();
	}
	*/
};

int main() {
	general g;
	A a;
	B b;
	C c;
	g.general_public();
	//g.general_protected();
	//g.general_private();
	a.general_public();
	//a.general_protected();
	//a.general_private();
	//b.general_public();
	//b.general_protected();
	//b.general_private();
	//c.general_public();
	//c.general_protected();
	//c.general_private();
	system("pause");
	return 0;
}
