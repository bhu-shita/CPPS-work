#include<stdio.h>
#include<stdlib.h>  

struct student
{
    char name[25];
    int marksP;
    int marksC;
    int marksB;
};

int* calc(struct student *x);

int main()
{
    int *total;
    struct student s;
    
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter marks for Physics: ");
    scanf("%d", &s.marksP);
    printf("Enter marks for Chemistry: ");
    scanf("%d", &s.marksC);
    printf("Enter marks for Biology: ");
    scanf("%d", &s.marksB);
    
    total = calc(&s);
    
    printf("Name: %s\n", s.name);
    printf("Marks in Physics: %d\n", s.marksP);
    printf("Marks in Chemistry: %d\n", s.marksC);
    printf("Marks in Biology: %d\n", s.marksB);
    printf("Total Marks: %d\n", *total);
    
    free(total);
     return 0;
}

int* calc(struct student *x)
{
    int *total = (int *)malloc(sizeof(int));  
    *total = x->marksP + x->marksC + x->marksB;
return total;
}


