
// 1.Intro
// 2.Reading and Writing on Variables
// 3.Operations
// 4.Conditional Control Commands
// 5.Loop Commands
// 6.Arrays

// 7.Strings
// 8.Programer Types
// 9.Functions
// 10.Pointers
// 11.Memory allocation
// 12.Files

#include <stdio.h>
#include <stdlib.h>



#include <stdio.h>
int main()
{
   char name[50];
   int marks, i, num;
   printf("Enter number of students: ");
   scanf("%d", &num);
   FILE *fptr;
   fptr = (fopen("student.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);
      printf("Enter marks: ");
      scanf("%d", &marks);
      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }
   fclose(fptr);
   return 0;
}
