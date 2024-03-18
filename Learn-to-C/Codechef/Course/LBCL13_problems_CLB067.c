#include <stdio.h>

int main() {
    int b, r;
    scanf("%d", &b);
    scanf("%d", &r);
    if(r>b){
        printf("Rob scored higher marks than Bob");
    }
    else if(b=r){
        printf("Bob & Rob both scored the same");
    }
    
}
