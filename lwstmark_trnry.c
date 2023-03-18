#include<stdio.h>
void main()
{
    float MS1,MS2,MS3;
    printf("ENTER THE MARKS OF FIRST STUDENT: ");
    scanf("%f",&MS1);
    printf("ENTER THE MARKS OF SECOND STUDENT: ");
    scanf("%f",&MS2);
    printf("ENTER THE MARKS OF THIRD STUDENT: ");
    scanf("%f",&MS3);
    MS1<MS2 && MS1<MS3 ? printf("FIRST STUDENT SCORED LOWEST MARKS") : printf("\n");
    MS2<MS3 && MS2<MS1 ? printf("SECOND STUDENT SCORED LEAST MARKS") : printf("\n");
    MS3<MS2 && MS3<MS1 ? printf("THIRD STUDENT SCORED LEAST MARKS") : printf("\n");
    if(MS1==MS2){
        printf("FIRST AND SECOND STUDENT SCORED EQUAL MARKS\n");
    }
    if(MS2==MS3){
        printf("SECOND AND THIRD STUDENT SCORED EQUAL MARKS \n");
    }
    if(MS1==MS3){
        printf("FIRST AND SECOND STUDENT SCORED EQUAL MARKS\n");
    }
    if(MS1==MS2==MS3){
        printf("MARKS OF ALL THREE STUDENTS ARE SAME");
    }

}