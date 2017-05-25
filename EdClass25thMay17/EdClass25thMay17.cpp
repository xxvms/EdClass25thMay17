// EdClass25thMay17.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

class Part
{
protected:
	int i;
public:
	Part() :i(1)
	{}

	Part(int i_) : i(i_)
	{
		i = i_;

	}
	void push()
	{	}
};

class Derived : public Part
{
private:
	int j;
public:
	Derived() : j(2)
	{}

	Derived(int j_) : j(j_), Part(3)
	{
//		Part::Part(3);
	}

	void push()
	{	
		Part::push();
	}

};

int main(void)
{
	Derived d1(4);
	d1.push();

	d1.Part::push();

	return 0;
}

