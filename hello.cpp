#include <iostream>
using namespace std;

int main()
{
	class A
	{
		int a,b;
		public:
		float F1 = 1, F2;
	}
	class B: public A
	{
		cout << F1;
	}
	return 0;
}
