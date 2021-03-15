#include <iostream>
#include <string>
using namespace std;
class Test
{
	int t;
public:
	Test(int t) { Test::t = t; }
	void print() { cout << t; }

};
int main()
{
	Test test(4);
	test.Test::print();
	return 0;
}
