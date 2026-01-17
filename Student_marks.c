#include <stdio.h>

int main() {
    char name[50];
    int roll;
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    printf("\n--- Student Result ---\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll);
    printf("Total Marks: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average >= 75)
        printf("Grade: A+\n");
    else if (average >= 60)
        printf("Grade: A\n");
    else if (average >= 45)
        printf("Grade: B\n");   
    else if (average >= 30)
        printf("Grade: C\n");
    else 
        printf("Grade: Fail\n");

    return 0;
}
