#include <iostream>
using namespace std;
void init(int a[], int k)
{
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}
void out(int a[], int k)
{
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout << endl;
}
int islast(int a[], int k, int n)
{
	for(int i = 1; i <= k; i++){
		if(a[i] != n-k+i) return 0;
	}
	return 1;
}
void gen(int a[], int k, int n)
{
	int i = k;
    while(a[i]==n-k+i) i--;
    a[i] = a[i] + 1;
    for(int j = i+1; j<=k; j++){
    	a[j] = a[i] + j - i;
	}
}
void method(int a[], int k, int n)
{
	init(a,k);
	out(a,k);
    int stop = islast(a,k,n);
	while(stop==0){
		gen(a,k,n);
		out(a,k);
		stop = islast(a,k,n);
	}
}
int main()
{   
    int n,k;
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap k = ";
    cin >> k;
    int a[n+1];
    method(a,k,n);
	return 0;
}

