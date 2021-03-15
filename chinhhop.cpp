#include <iostream>
#include <iomanip>
using namespace std;

void out(int a[], int k){
    static int j = 1;
    cout << setw(3) << j++ << setw(7);
	for( int i = 1; i<= k; i++  )
		cout<< a[i] << " ";
	cout<< endl;
}

void chinhHop(int i, int a[], int b[], int k , int n)
{
	for(int j=1;j<=n;j++)
	{
		if(b[j]==0)
		{
			a[i]=j;  // thu chon A[i] bang j
			if(i==k)
				out(a,k);
			else
			{
				b[j]=1; // danh dau phan tu da duyet qua
				chinhHop(i,a,b,k,n);
				b[j]=0; // bo danh dau
				
			}
		}
	}
}
int main()
{
	int k, n;
	cout << " Nhap k = ";
	cin >> k;
	cout << " Nhap n = ";
	cin >> n;
	int a[n+1],b[n+1];
	for(int i = 1; i <= n; i++)
	{
		b[i] = 0;
	}
	chinhHop(1,a,b,k,n);
	return 0;
}

