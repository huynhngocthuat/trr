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
void tryt(int i,int a[], int n)
{
	for(int j = 0; j <= 1; j++){
		a[i]=j;
		if(i==n) out(a,n);
		else tryt(i+1,a,n);
	}
}
	

int main()
{   int k,n;
    cout << "Nhap n = ";
    cin >> n;
    int a[100];
    tryt(1,a,n);
    
	return 0;
}
