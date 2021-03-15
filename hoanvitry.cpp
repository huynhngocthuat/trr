#include <iostream>
#include <iomanip>
using namespace std;

void out(int a[], int n)
{   static int j = 1;
    cout << setw(3) << j++ << setw(7);
	for(int i = 1; i <= n; i++)
	cout << a[i];
	cout << endl;
}
void tryt(int i, int a[], int b[], int n)
{   
	for(int j = 1; j <= n; j++){
		if(b[j] == 1){
			a[i] = j;
			b[j] = 0;
			if(i == n) out(a,n);
			else tryt(i+1,a,b,n);
			b[j] = 1;
		}
	}
}
main()
{
	int n;
	cout << "Nhap n =";
	cin >> n;
	int a[n+1], b[n+1];
	for(int i = 1; i <= n; i++){
		b[i] = 1;
	}
	tryt(1,a,b,n);
	return 0;
}
