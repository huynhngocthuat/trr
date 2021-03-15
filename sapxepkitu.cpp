#include <iostream>
#include <iomanip>
using namespace std;

char x[] = {'a', 'b', 'c'};
char y[] = {'d', 'e'};
char z[] = {'m', 'n', 't'};

void out(char a[])
{
	static int j = 1;
	cout << setw(3) << j++ << setw(7);
	for(int i = 1; i <= 3; i++){
		cout << a[i];
	}
	cout << endl;
}
void tryt(int i, char a[4], char s[9], int b[9])
{
	for(int j = 1; j <= 8; j++){
		if(i == b[j]){
			a[i] = s[j];
			if(i == 3) out(a);
			else tryt(i+1,a,s,b);
		}
	}
}
int main()
{
	int b[9];
	char s[9];
	char a[4];
	for(int i = 1; i <= 3; i++){
		s[i] = x[i-1];
		b[i] = 1;
	}
	for(int i = 4; i <= 5; i++){
		s[i] = y[i-4];
		b[i] = 2;
	}
	for(int i = 6; i <=8; i++){
		s[i] = z[i-6];
		b[i] = 3;
	}
	tryt(1,a,s,b);
	return 0;
}
