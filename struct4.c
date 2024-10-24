#include<stdio.h>
#include<conio.h>

struct student
{
	char name[25];
	int marksP; 
	int marksC;
	int marksB;
};
int calc (struct student *x);
main()
{
	int i, total;
	struct student s;
	
	printf("\nEnter student name:");
	scanf("%s",s.name);
	printf("\nEnter marks for Physics:");
	scanf("%d",&s.marksP);
	printf("\nEnter marks for Chemistry:");
	scanf("%d",&s.marksC);
	printf("\nEnter marks for Biology:");
	scanf("%d",&s.marksB);
	
	total= calc(&s);
	
	printf("\nName:%s",s.name);
	printf("\nMarks in Physics:%d",s.marksP);
printf("\nMarks in Chemistry:%d",s.marksC);
	printf("\nMArks in Biology:%d",s.marksB);
	printf("\nTotal Marks:%d",total);
	
	return(0);
	
}
int calc(struct student *x)
{
	int total;
	total= x->marksP + x->marksC + x->marksB;
return(total);
}

