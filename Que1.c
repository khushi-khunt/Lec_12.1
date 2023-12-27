#include<stdio.h>
#include<string.h>
/*
 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school

*/
struct info{
int stu_id;
char stu_name[10];
int stu_age;
char stu_course[30];
char stu_city[10];
int stu_standard;
char stu_school[20];
};


void main(){
   struct info s1;
   struct info s2;
   struct info s3;

   s1.stu_id = 3382;

   printf("Enter your name :-");
   scanf("%s",&s1.stu_name);

   printf("Enter your age :-");
   scanf("%d",&s1.stu_age);

   printf("Enter youe city :-");
   scanf("%s",&s1.stu_city);

   printf("Enter youe course :-");
   scanf("%s",&s1.stu_course);

   printf("Enter your school name  :- ");
   scanf("%s",&s1.stu_school);

   printf("Enter your standard :- ");
   scanf("%d",&s1.stu_standard);

   printf("\n\n");

  printf("id = %d \n",s1.stu_id);
  printf("name = %s \n",s1.stu_name);
  printf("age = %d \n",s1.stu_age);
  printf("course = %s \n",s1.stu_course);
  printf("city = %s \n",s1.stu_city);
  printf("standard = % d\n",s1.stu_standard);
  printf("school = %s \n",s1.stu_school);

   printf("\n\n\n");

   s2.stu_id = 3383;
 
   printf("Enter your name :-");
   scanf("%s",&s2.stu_name);

   printf("Enter your age :-");
   scanf("%s",&s2.stu_age);

   printf("Enter youe course :-");
   scanf("%s",&s2.stu_course);

   printf("Enter youe city :-");
   scanf("%s",&s2.stu_city);

   printf("Enter your school name  :- ");
   scanf("%s",&s2.stu_school);

   printf("Enter your standard :- ");
   scanf("%d",&s2.stu_standard);

   printf("\n\n");

   printf("id = %d \n",s2.stu_id);
   printf("name = %s \n",s2.stu_name);
   printf("course = %s \n",s2.stu_course);
   printf("city = %s \n",s2.stu_city);
   printf("standard = % d\n",s2.stu_standard);
   printf("school = %s \n",s2.stu_school);

   printf("\n\n\n");
   s3.stu_id = 3384;

   printf("Enter your name :-");
   scanf("%s",&s3.stu_name);

   printf("Enter your age :-");
   scanf("%d",&s3.stu_age);

   printf("Enter youe course :-");
   scanf("%s",&s3.stu_course);

   printf("Enter youe city :-");
   scanf("%s",&s3.stu_city);

   printf("Enter your school name  :- ");
   scanf("%s",&s3.stu_school);

   printf("Enter your standard :- ");
   scanf("%d",&s3.stu_standard);

printf("\n\n");

printf("id = %d \n",s3.stu_id);
printf("name = %s \n",s3.stu_name);
printf("age = %d \n",s3.stu_age);
printf("course = %s \n",s3.stu_course);
printf("city = %s \n",s3.stu_city);
printf("standard = % d\n",s3.stu_standard);
printf("school = %s \n",s3.stu_school);
}
