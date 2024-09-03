#include <stdio.h>
#include <windows.h>

void hi(char[]);
void sayFuture();

int main()
{
    system("cls");
    hi("Kiran");
    sayFuture();
    return 0;
}















void hi(char name[])
{
    printf("Hello %s, How are you my friend.\n", name);
}

void sayFuture(){
    printf("You will be working for a company at lower than minimum wage salary. :(\n");
}