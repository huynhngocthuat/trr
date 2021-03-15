#include <iostream>
using namespace std;

void first(int b[], int n)
{
    for(int i=0; i<n; i++){
        b[i] = i+1;
    }
}
void out(int b[], int n)
{   static int j = 1;
    cout << j++       ;
    for(int i=0; i<n; i++)
    cout << b[i];
    cout << endl;
}
// dao nguoc bo cuoi
void lastSwap(int b[],int i, int n)
{   
    for(int j = n - 1; j > ((n - 1 + i) / 2); j--)
      {
        int add = b[i + n - 1 - j];
        b[i + n - 1 - j] = b[j];
        b[j] = add;
      }
}
 // hoan vi tiep theob
void gen(int b[], int n)
{
    for(int i = n - 1; i > 0; i--)
    {
    // neu gap b[i] > b[i - 1]
        if(b[i] > b[i-1]){
   // tim trong bo cuoi giam dan phan tu vua du lon hon b[i - 1] sau do swap.
            for( int j = n-1; j >= 1; j--){
                if(b[j] > b[i-1]){
                    int add = b[j];
                    b[j] = b[i - 1];
                    b[i - 1] = add;
                    break;
                }
            }
            lastSwap(b,i,n);      
            out(b,n);
        i = n;
        }
    }
}
int main()
{
    int n;
    cout << "Nhap vao n =";
    cin >> n ;
    int b[n+1];
    cout << "Cac bo hoan vi la :" << endl;
    first(b,n);
    out(b,n);
    gen(b,n);
    return 0;
    
}
