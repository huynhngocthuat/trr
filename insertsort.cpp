#include <iostream>
#include <iomanip>
using namespace std;

void in(int a[], int n)
{
	for(int i = 1; i <= n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
//		cout << endl;
	}
}
void out(int a[], int n)
{
	for(int i = 1; i <= n; i++){
		cout << a[i] << setw(3);
	}
	cout << endl;
}
void insertsort(int a[], int n)
{
	for(int i = 2; i <= n; i++){
		int key = a[i];
		int j = i - 1;
		while(j > 0 && a[j] > key){
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
		out(a,n);
	}
}

int main()
{   int n;
	cout << "Nhap n = ";
	cin >> n;
	int a[n+1];
	in(a,n);
	insertsort(a,n);
	return 0 ;
}

