#include <stdio.h>

int main() {
    FILE *file;
    char name[50], role[50];

    file = fopen("data.txt", "w");

    if (file == NULL) 
	{
        printf("Error!\n");
        return 1;
    }

    for (int i=0;i<3;i++) 
	{
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", name);
        printf("Enter role of employee %d: ", i + 1);
        scanf("%s", role);

        fprintf(file, "Employee Name: %s, Role: %s\n", name, role);
    }

    fclose(file);

    printf("successfully!\n");

}
