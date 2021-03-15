#include <iostream>
using namespace std;
#include <iomanip>

void out(int a[], int k)
{
    static int j = 1;
    cout << setw(3) << j++ << setw(7);
    for(int i = 1; i <= k; i++){
        cout << a[i];
    }
    cout << endl;
}
void tryt(int i, int a[], int k, int n)
{
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i] = j;
        if(i==k) out(a,k);
        else tryt(i+1,a,k,n);
    }
}
int main()
{
    int n,k;
    cout << "Nhap n = ";
    cin >> n;
//    cout << "Nhap k = ";
//    cin >> k;
    int a[n+1] = {};
    for(int k = 1; k <= n; k++)
    tryt(1,a,k,n);
    return 0;
}
