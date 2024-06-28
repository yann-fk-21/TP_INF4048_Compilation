#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char path[1035];
    int line_count = 0;

    // Command to count lines starting with "if" and ending with 'n'
    char command[] = "grep -c -E '^if.*n$' /etc/bash.bashrc";

    // Open the command for reading
    fp = popen(command, "r");
    if (fp == NULL) {
        printf("Failed to run command\n");
        exit(1);
    }

    // Read the output line by line
    while (fgets(path, sizeof(path)-1, fp) != NULL) {
        line_count = atoi(path); // Convert output to integer
    }

    // Close the file pointer
    pclose(fp);

    // Print the number of matching lines
    printf("Number of lines starting with 'if' and ending with 'n': %d\n", line_count);

    return 0;
}
