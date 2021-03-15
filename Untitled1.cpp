#include <iostream>
using namespace std;
int MaSV;

void in()
{
	cout << "Nhap ma sinh vien ";
	cin >> MaSV;
}
void out()
{
	switch(MaSV)
	{
		case 1:
			cout << " SO 1";
			break;
		case 2:
			cout << " SO 2";
	}
}
int main()
{
	in();
	out();
	return 0;
}
