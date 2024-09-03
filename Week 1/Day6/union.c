#include <stdio.h>
#include <string.h>

union Data //Union name
{
    //union members
    int i;
    char str[20];
};
/*Size of union is equal to the size of largest datatype in it. 
Here size of Data will be sizeof(str) ie. 20 [sizeof(char)*20] */

int main()
{
    union Data data; //union variable

    data.i = 10; //saves integer 10
    printf("Integer: %d\n", data.i);

    strcpy(data.str, "Hello"); //erases integer and saves string "Hello"
    printf("String: %s\n", data.str);

    printf("Integer after storing string: %d\n", data.i); //Prints grabage value as integer was erased

    return 0;
}
