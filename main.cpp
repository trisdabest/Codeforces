#include <iostream>

using namespace std;
int n;
int main()
{
    cin >> n;
    int a[n*2+5][n*2+5];
    int i = 0;
    int j = n*2+1;
    int cnt = 0;
    while (i <= n + 1 && j >= n + 1){
        int z = 0;
        for (z = 0; z <= n - i; z++){
            a[z][i] = -1;
            a[z][j] = -1;
        }
        int x = z+1;
        while (cnt <= i){
            a[x][i] = cnt;
            a[x][j] = cnt;
            cnt++;
            x++;
        }
        while (cnt >= 0){
            cnt--;
            a[x][i] = cnt;
            a[x][j] = cnt;
            x++;
        }
        i++;
        j--;
    }
}
