#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks obtained by Rajat: ");
	scanf("%d", &marks);
	if(marks >= 75)
		printf("Rajat has got Distinction in the subject\n");
	else if(marks >= 60 && marks < 75)
		printf("Rajat has got First Division in the subject\n");
	else if(marks >= 50 && marks < 60)
		printf("Rajat has got Second Division in the subject\n");
	else if(marks >= 40 && marks < 50)
		printf("Rajat has got Third Division in the subject\n");
	else
		printf("Rajat has Failed in the subject\n");
	return 0;
}