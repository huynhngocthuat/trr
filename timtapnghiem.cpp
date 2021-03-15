#include <iostream>
#include <iomanip>
using namespace std;

void out(int a[], int n)
{
	static int j = 1;
	cout << setw(3) << j++ << setw(7);
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void tryt(int i, int a[], int n, int k)
{
	int t;
	for(int j = 0; j <= k; j++){
		if(i < n){
			a[i] = j;
			t = k - j;
		}
		if(i == n){
			a[i] = k;
			out(a,n);
//			i = n;
			break;
		}
		else tryt(i+1,a,n,t);
	}
}
int main()
{
	int a[100];
	int k,n;
	cout << "Nhap n = ";
	cin >> n;
	cout << "Nhap k = ";
	cin >> k;
	tryt(1,a,n,k);
    return 0;
}
