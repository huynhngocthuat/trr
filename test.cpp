#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int balo[200][200];
int weight[] = {1, 3, 4, 5};
int value[] = {1, 4, 5, 7};

void knapsack(int n, int w)
{
	for(int i = 0; i <= n; i++) balo[i][0] = 0;
	for(int i = 0; i <= w; i++) balo[0][i] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= w; j++){
			if(weight[i]<=j) balo[i][j] = max(balo[i-1][j], value[i] + balo[i-1][j-weight[i]]);
			else balo[i][j] = balo[i-1][j];
		}
	}
	for(int i = 0; i <= n; i++){
        for(int j = 0; j <= w; j++){
            cout << balo[i][j] << "  ";
        }
        cout << endl;
}
}
int main()
{
	knapsack(4, 7);
	return 0;
}









