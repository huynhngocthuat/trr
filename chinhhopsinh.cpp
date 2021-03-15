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
/*
  1 2 3 ---- 4 3 2
  1 2 4
  1 3 2
  1 3 4
  1 4 2
  1 4 3
*/
int islast(int a[], int n)
{   
    for(int i = 1; i <= k; i++){
        if(a[i] != n) return 0;
        n--;
    }
	return 1;
}
void gen(int a[], int n)
{
   
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
