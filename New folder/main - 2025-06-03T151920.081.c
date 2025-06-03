#include <stdio.h>
#include <string.h>

int main() 
{
    int i, j, n, choice;
    char temp[100];

    printf("Enter number of names: ");
    scanf("%d", &n);


    getchar(); // To consume leftover newline

    char names[n][100];

    // Input names
    printf("Enter %d names:\n", n);

    for(i = 0; i < n; i++) 
    {
        fgets(names[i], sizeof(names[i]), stdin);
        // Remove newline character from fgets
        names[i][strcspn(names[i], "\n")] = 0;
    }

    // User choice
    printf("\nChoose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Sorting using switch
    switch(choice) {
        case 1: // Ascending
            for(i = 0; i < n - 1; i++) {
                for(j = i + 1; j < n; j++) 
                   {
                    if(strcmp(names[i], names[j]) > 0) 
                     {
                        strcpy(temp, names[i]);
                        strcpy(names[i], names[j]);
                        strcpy(names[j], temp);
                     }
                }
            }
            printf("\nNames in Ascending Order:\n");
            break;

        case 2: // Descending
            for(i = 0; i < n - 1; i++) {
                for(j = i + 1; j < n; j++) {
                    if(strcmp(names[i], names[j]) < 0) {
                        strcpy(temp, names[i]);
                        strcpy(names[i], names[j]);
                        strcpy(names[j], temp);
                    }
                }
            }
            printf("\nNames in Descending Order:\n");
            break;

        default:
            printf("\nInvalid choice.\n");
            return 1;
    }

    // Print sorted names
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
