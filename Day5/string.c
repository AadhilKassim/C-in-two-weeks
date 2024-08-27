// C Program to illustrate the strcat function
#include <stdio.h>
#include <string.h>

int main()
{

    // Concatination
    char dest[50] = "This is an";
    char src[50] = " example";

    printf("dest Before: %s\n", dest);

    // concatenating src at the end of dest
    strcat(dest, src);

    printf("dest After: %s\n", dest);

    // Declare and initialize a character array 'str' with
    // the string "Gammamareka"
    char str[] = "Gammamareka";

    // Calculate the length of the string using the strlen()
    // function and store it in the variable 'length'
    size_t length = strlen(str);

    // Print the length of the string
    printf("String: %s\n", str);

    printf("Length: %zu\n", length);

    // Define a string 'str1' and initialize it with "Ka"
    char str1[] = "Ka";
    // Define a string 'str2' and initialize it with "l"
    char str2[] = "l";
    // Define a string 'str3' and initialize it with "ki"
    char str3[] = "ki";

    // Compare 'str1' and 'str2' using strcmp() function and
    // store the result in 'result1'
    int result1 = strcmp(str1, str2);
    // Compare 'str2' and 'str3' using strcmp() function and
    // store the result in 'result2'
    int result2 = strcmp(str2, str3);
    // Compare 'str1' and 'str1' using strcmp() function and
    // store the result in 'result3'
    int result3 = strcmp(str1, str1);

    // Print the result of the comparison between 'str1' and
    // 'str2'
    printf("Comparison of str1 and str2: %d\n", result1);
    // Print the result of the comparison between 'str2' and
    // 'str3'
    printf("Comparison of str2 and str3: %d\n", result2);
    // Print the result of the comparison between 'str1' and
    // 'str1'
    printf("Comparison of str1 and str1: %d\n", result3);

    // defining strings

    char source[] = "Point";

    // Copying the source string to dest
    strcpy(dest, source);

    // printing result
    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);

    return 0;
}
