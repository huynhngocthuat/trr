#include <stdio.h>
int main(){
printf("\n");
// line 1
for(int i = 0; i < 6; i++){
printf("* ");
}
printf(" ");
printf("* * "); printf(" "); printf("* * ");
printf(" ");
printf("* * "); printf(" "); printf("* * \n");
// line 2
for(int i = 0; i < 6; i++){
printf("* ");
} printf(" ");
for(int i = 0; i < 7; i++){
printf("* ");
} printf(" ");
printf("* * "); printf(" "); printf("* * \n");
// line 3,4
for(int i = 0; i < 2; i++){
printf(" "); printf("* * "); printf(" ");
for( int i = 0; i < 9; i++){
printf("* ");
} printf(" ");
printf("* * "); printf(" "); printf("* * \n");
}
// line 5,6
int b = 7; int a = 4; int c = 2;
for(int i = 0; i < 2; i++){
printf(" "); printf("* * ");
for(int i = 0; i < a; i++){
printf(" ");
} ++a;
for(int i = 0; i < b; i++){
printf("* ");
} b -= 2;
for(int i = 0; i < c; i++){
printf(" ");
} ++c;
printf("* * "); printf(" "); printf("* * \n");
}
// line 7,8
int d = 4;
for(int i = 0; i < 2; i++){
for(int i = 0; i < 6; i++){
printf("* ");
}
for(int i = 0; i < d; i++){
printf(" ");
} ++d;
for(int i = 0; i < b; i++){
printf("* ");
} b -= 2;
for(int i = 0; i < c; i++){
printf(" ");
} ++c;
for(int i = 0; i < 7; i++){
printf("* ");
} printf("\n");
}
}
