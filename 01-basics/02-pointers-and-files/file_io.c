#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(file, "C Programming and File I/O Operations.\n");
    fclose(file);
    
    printf("Data written to file successfully.\n");
    return 0;
}
