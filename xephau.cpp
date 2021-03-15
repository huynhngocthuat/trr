#include <iostream>
#include <iomanip>
using namespace std;

void out(int x[], int n)
{
	static int j = 1;
	cout << setw(3) << j++ << setw(7);
	for(int i = 1; i <= n; i++)
	   cout << x[i];
	   cout << endl;
}
void tryt(int i, int x[], int a[], int b[], int c[], int n)
{
	for(int j = 1; j <= n; j++){
		if(a[j]==1 && b[j+i]==1 && c[i-j]==1)
		{
		 x[i] = j;
		 a[j] = 0;
		 b[j+i] = 0;
		 c[i-j] = 0;
		 if(i == n) out(x,n);
		 else tryt(i+1,x,a,b,c,n);
		 a[j] = 1;
		 b[j+i] = 1;
		 c[i-j] = 1;
	    }
	}
}
main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int x[100],a[100], b[100], c[100];
	for(int i = 1; i <= n; i++){
		a[i] = 1;
	}
	for(int i = 2; i <= 2*n+2; i++){
		b[i] = 1;
	}
	for(int i = 1-n; i <= n-1; i++){
		c[i] = 1;
	}
	tryt(1,x,a,b,c,n);
	
	return 0;
}
