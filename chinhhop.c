#include<stdio.h>
#include<conio.h>
 
int Try(int n, int k, int mang[], int i, bool check[])
{
    int j;
    for(j = 0; j < n; j++)
    {
        if(check[j] == true)  // neu chua duoc gan cho vi tri truoc
        {
            mang[i] = j + 1;
            check[j] = false;  //de cac vi tri sau k dung nua
 
            if(i == (k - 1))
            {
                int temp;
                static int m = 1;
                printf("%d \t", m++);
                for(temp = 0; temp < k; temp++)
                {
                    printf("%d", mang[temp]);
                }
                printf("\n");
            }
             
            else
            {
                Try(n, k, mang, i + 1, check);
            }
 
            check[j] = true;   // i k su dung gia tri j
        }
    }
 
}
 
int main()
{
    int n, k;
 
    printf("Nhap vao n : ");
    scanf("%d", &n);
 
    printf("Nhap vao k : ");
    scanf("%d", &k);
 
    bool check[n];  // khai bao mang bool gom n ptu
 
    int i;
    for(i = 0; i < n; i++)   // khoi tao gia tri cho mang bool
    {
        check[i] = true;
    }
 
    int mang[k];
 
    Try(n, k, mang, 0, check);
 
    getch();
    return 0;
}
