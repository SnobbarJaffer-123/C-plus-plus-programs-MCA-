#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Student{
int rollNo;
char name[20];

};

void writeStudent()
{
    FILE *fp=fopen("newfile.txt","w");

    Student std1;
    int i=1;
    if(fp)
    {
        while(i<5)
        {
            printf("\n enter student%d roll no \n",i);
            scanf("%d",std1.rollNo);

             printf("\n enter student%d name \n",i);
            scanf("%s",std1.name);

             fwrite(&std1,sizeof(Student),1,fp);
             i++;
        }
    }
    else
        printf("\nError opening file\n");
}
void readStudent()
{
    FILE *fp=fopen("newfile.txt","r");

    Student std1;
    int i=1;
    if(fp)
    {
        while(i<5)
        {

             i=fread(&std1,sizeof(Student),1,fp);
             if(i!=1)
                break;
             printf("\n Student rollNo= %d\n ",std1.rollNo);
             printf("\n Student name= %s\n ",std1.name);
        }
    }
    else
        printf("\nError opening file\n");
}
int main()
{
    writeStudent();
    //updateStudent(3);
    readStudent();
    return 0;
}

