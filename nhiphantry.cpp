#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void out(int a[], int n, ofstream &output)
{   static int j = 1;
    cout << setw(3) << j++ << setw(7);
    output << setw(3) << j-1 << setw(7);
    for(int i = 1; i <= n; i++){
    cout << a[i]; output << a[i];
    }
    cout << endl; output << endl;
}
void tryt(int i, int n, int a[], ofstream &output)
{
    for(int val = 0; val < 2; val++){
        a[i] = val;
        if(i == n) out(a,n,output);
        else tryt(i+1, n, a, output);
    }
}

int main()
{   ofstream output("output.txt");
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int a[n+1];
    tryt(1, n, a, output);
    output.close();
    return 0;
}
