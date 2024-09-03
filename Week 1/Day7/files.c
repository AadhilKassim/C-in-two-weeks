#include <stdio.h>

int main()
{
    // Open the file for writing
    FILE *file = fopen("secret.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write to the file
    fprintf(file, "Kiran is a good drawer\n");
    fclose(file);

    // Reopen the file for reading
    FILE *infile = fopen("secret.txt", "r");
    if (infile == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Buffer to store the entire line
    char buffer[100]; // Adjust size according to your needs
    if (fgets(buffer, sizeof(buffer), infile) != NULL) {
        printf("%s", buffer); // Print the entire line
    }

    fclose(infile);  // Correctly close the infile

    return 0;
}

