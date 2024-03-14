#include<stdio.h>
void main()
{
    int i;
    // printf("select any of the cases");
    // scanf("%d", &i);
    for(i=1; i<=25; i++){
        switch(i)
        {
            case 0: i = i+5;
            case 1: i = i+3;
            case 2: i = i+4;
            default : i = 1+5;
                    break;
        }
        printf("%d ", i);
    }
}