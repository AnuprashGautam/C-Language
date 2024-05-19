#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 3

struct Student
{
    char name[20];
    char gender[2]; // Increase the size to accommodate "M" or "F" + '\0'
    int roll;
    float marks;
};

int main()
{
    struct Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Enter the details of student %d:\n", i + 1);
        printf("Enter the name: ");
        scanf("%s", students[i].name);

        printf("Enter the gender (M/F): ");
        scanf("%1s", students[i].gender);//In the scanf() calls for reading the gender, %1s is used to read only one character. 
                                         //This ensures that only "M" or "F" is accepted as valid input.

        printf("Enter the roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter the marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("Details are as follows:\n");
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Gender: %s\n", students[i].gender);
        printf("Roll number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
