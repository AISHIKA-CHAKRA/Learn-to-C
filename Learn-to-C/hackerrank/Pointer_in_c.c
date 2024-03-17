#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int m, n;
     m = *a + *b;
     n = *a - *b;
     *a = m;
     *b = abs(n);   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}