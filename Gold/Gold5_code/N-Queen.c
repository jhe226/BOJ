#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, cnt;
int map[16];

int abs(int a) {
    if (a < 0) {
        a = 0 - a;
    }
    return a;
}

int check(int a) {			//check
    int i;
    int result = 1;

    for (i = 0; i < n; i++) {

        if (a == i) {
            break;
        }
        if (map[i] == map[a] || abs(i - a) == abs(map[i] - map[a])) {
            result = 0;
            break;
        }
    }
    return result;
}



void dfs(int a) {			//dfs..
    int i;

    if (a == n) {
        cnt++;
        return;
    }

    for (i = 0; i < n; i++) {
        map[a] = i;
        if (check(a) == 1) {
            dfs(a + 1);
        }
    }
}

int main()
{
    scanf("%d", &n);
    cnt = 0;
    dfs(0);
    printf("%d\n", cnt);
}