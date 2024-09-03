#include <stdio.h>

int main(void)
{
    int age =18;
    char name[] = "Aadhil" ;
    float weight= 34.02;
    double marks = 93.16666666666666667 ;
    printf("Hello world!\nMy first C program\n");
    //to print double and float use %f or %lf as they are both essentially the same datatye with different precision
    printf("Hi my name is %s. I'm %i years old. I weigh %fkg. My persent for 12th was %f",name,age,weight,marks);
    return 0;
}