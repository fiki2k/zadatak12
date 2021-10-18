//Program treba naci velicinu char,int,float i double.

#include<stdio.h>
int main()
{
    printf("Velicina char: %ld bajt\n",sizeof(char));
    printf("Velicina int: %ld bajta\n",sizeof(int));
    printf("Velicina float: %ld bajta\n",sizeof(float));
    printf("Velicina double: %ld bajta", sizeof(double));
    return 0;
}
