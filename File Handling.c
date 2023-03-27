#include <stdio.h>

struct Student
{
  char name[50];
  int roll_no;
  float marks;
};

int main()
{
  int i, n;
  FILE *fp;
  struct Student s;

  printf("Enter the number of students: ");
  scanf("%d", &n);
  fp = fopen("students.txt", "w");
     for(i=0;i<n;i++)
     {
      printf("\nEnter information for student %d:\n", i+1);
      printf("Enter name: ");
      scanf("%s", s.name);

      printf("Enter roll number: ");
      scanf("%d", &s.roll_no);

      printf("Enter marks: ");
      scanf("%f", &s.marks);

      fprintf(fp, "%s %d %.2f\n", s.name, s.roll_no, s.marks);
     }
  fclose(fp);
  printf("\nStudent information stored in file.\n");
  return 0;
}
