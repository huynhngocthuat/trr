#include <iostream>
using namespace std;
void init(int a[], int n)
{
	for(int i = 1; i <=n; i++)
	   a[i] = i; 
}
void out(int a[], int n)
{
	for(int i = 1; i <= n; i++)
	   cout << a[i];
	   cout << endl;
}
int islast(int a[], int n)
{   
    for(int i = 1; i <= n-1; i++){
        if(a[i] < a[i+1]) return 0;
    }
	return 1;
}
void gen(int a[], int n)
{
	int i = n - 1;
	while(a[i] > a[i+1]) i--;
	int k = n;
	while(a[k] < a[i]) k--;
	int t = a[i];
	    a[i] = a[k];
	    a[k] = t;
	int l = i+1;
	int r = n;
	while(l <= r){
		int h = a[l];
		  a[l]= a[r];
		  a[r]= h;
		  l++;
		  r--;
	}
}
void method(int a[], int n)
{
	init(a,n);
	out(a,n);
	int stop = islast(a,n);
	while(stop == 0){
		gen(a,n);
		out(a,n);
		stop = islast(a,n);
	}
}
int main()
{   int n;
    cout << "Nhap n = ";
    cin >> n;
    int a[n+1];
    method(a,n);
	return 0;
}
