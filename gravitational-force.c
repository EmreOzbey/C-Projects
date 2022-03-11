#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float force(int m1 , int m2, float r)
{
    float g=6.673*pow(10,-11);
    double f;
    f=g*(m1*m2)/pow(r,2);
    return f;

}

int main()
{
    int mass1, mass2;
    float distance;

    printf("Enter the masses (kg):  \n");
    scanf("%d %d",&mass1,&mass2);

    printf("Enter distance (m) :  \n");
    scanf("%f", &distance);
    printf("-----------------------------------\n");

    printf("\nGravitational force  : %.15f Newton.\n" , force(mass1, mass2, distance));
    return 0;
}
