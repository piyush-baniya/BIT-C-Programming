#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, marks4, marks5;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    if (marks1 < 0 || marks1 > 100 ||
        marks2 < 0 || marks2 > 100 ||
        marks3 < 0 || marks3 > 100 ||
        marks4 < 0 || marks4 > 100 ||
        marks5 < 0 || marks5 > 100)
    {
        printf("Error: Marks should be between 0 and 100.\n");
        return 1;
    }

    int totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    float averageMarks = totalMarks / 5.0;
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Percentage: %.2f%%\n", (totalMarks / 500.0) * 100);
    return 0;
}