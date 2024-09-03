#include <stdio.h>
#include <string.h>

int main()
{
    int age[] = {19,25,29,16,30};
    char name[][10] = {"Kiran","Abhinav","Aditya","Vyshak","Gautham"} ;
    
    for (size_t i = 0; i < 5; i++)
    {
        printf("Hi %s, you are %d years old\n", name[i],age[i]);
    }
    

    return 0;
}