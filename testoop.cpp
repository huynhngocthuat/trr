#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	int y = 5;
	const int &p = y;
	cout << p ;
	y++;
	cout << p ;
	return 0;
}
