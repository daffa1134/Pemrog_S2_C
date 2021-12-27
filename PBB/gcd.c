#include <stdio.h>

int main() {
    int m, n, r;
    int input;

    printf("PBB (m,n)\n");
    printf("input m : \n");
    scanf("%d", &m);
    printf("input n: \n");
    scanf("%d", &n);

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    
    if (n == 0)
    {
        printf("PBB = %d", m);
    }

    return 0;
}