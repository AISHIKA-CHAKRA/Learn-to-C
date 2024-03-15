#include<stdio.h>
int main()
{
    int grades[2][5];
    int i;
    int j;
    float average;
    grades[0][0] = 80;
    grades[0][1] = 81;
    grades[0][2] = 87;
    grades[0][3] = 86;
    grades[0][4] = 90;

    grades[1][0] = 83;
    grades[1][1] = 85;
    grades[1][2] = 87;
    grades[1][3] = 85;
    grades[1][4] = 82;

    for(i=0; i<2; i++)
    {
        average = 0;
        for(j=0; j<5; j++)
        {
            average += grades[i][j];
        }
        average /=5.0;
        printf("The average marks obtained in %d is: %.2f\n", i, average);
    }

    return 0;

}