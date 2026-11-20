/* W.C:210.P to compute character grade from the marks (0<=marks <=100)
 of a subject.Grading scheme:80-100:A,555
 							 60-79 :B,
 							 50-59 :C
 							 40-49 :D
 							 0-39  :F
solve this using switch case. */
#include<stdio.h>
int main(){
	int marks;
	char grade;
	printf("Enter the marks:");
	scanf("%d",&marks);
	if(marks<0||marks>100)
	{
		printf("invalid inputs");
		return 0;
	}
	switch(marks/10){
		case 10:
		case 9:
		case 8:
			grade='A';
			break;
		case 7:
		case 6:
			grade='B';
		case 5:
			grade='C';
		case 4:
			grade='D';
		default:
			grade='F';
		printf("%c",grade);
	}
	return 0;
}

