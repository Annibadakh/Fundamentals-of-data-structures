#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
 int roll;
 char name[20];
};
int main()
{
    int no,size,i,choice,up,oldroll,newroll,flag,droll,position; //var
    char newname[20];
    struct stu s1[25];
    do
    {
        printf("\nMenu");
        printf("\n1.Insert \n2.Display \n3.Update\n4.Delete\n5.stop");
        printf("\nEnter ur choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter No. of student :");
                scanf("%d",&size);
                for(i=0;i<size;i++)
                {
                    printf("\nEnter RollNo. and Name :");
                    scanf("%d %s",&s1[i].roll,&s1[i].name);
                    
                }
            break;
            case 2:
                printf("\nInfo is:");
                for(i=0;i<size;i++)
                {
                    printf("\n%d\t%s",s1[i].roll,s1[i].name);
                }
            break;
            case 3:
                printf("\nWhat u want to update\n1.Roll No. \t2.Name :");
                scanf("%d",&up);
                switch(up)
                {
                    case 1:
                        printf("\nEnter Roll NO. which you want to update :");
                        scanf("%d",&oldroll);
                        for(i=0;i<size;i++)
                        {
                            if(s1[i].roll==oldroll)
                            {
                                flag=1;
                                printf("\nEnter new roll no. :");
                                scanf("%d",&newroll);
                                s1[i].roll=newroll;
                                printf("\nRoll No. updated sucessfully!");
                            }
                        }
                        if(flag==0)
                        {
                            printf("\nInvalid Roll No.");
                        }
                    break;
                    case 2:
                        printf("\nEnter Roll NO. whose name you want to update :");
                        scanf("%d",&oldroll);
                        for(i=0;i<size;i++)
                        {
                            if(s1[i].roll==oldroll)
                            {
                                flag=1;
                                printf("\nEnter new name :");
                                scanf("%s",&newname);
                                strcpy(s1[i].name,newname);
                                printf("\nName updated sucessfully!");
                            }
                        }
                        if(flag==0)
                        {
                            printf("\nInvalid Roll No.");
                        }
                    break;
                }
            break;
            case 4:
                printf("\nEnter roll no which you want to delete :");
                scanf("%d",&droll);
                for(i=0;i<size;i++)
                {
                    if(s1[i].roll=droll)
                    {
                        flag=1;
                        position=i;
                    }
                }
                if(flag==0 || position<0)
                {
                    printf("\nInvalid Roll No.");
                }
                else
                {
                    for(int j=position;j<size-1;j++)
                    {
                        strcpy(s1[j].name,s1[(j+1)].name);
                        s1[j].roll=s1[(j+1)].roll;
                    }
                }
                
            break;
            case 5:
                exit(0);
            break;
        }
        printf("\n1.Continue \t 0.stop:");
        scanf("%d",&no);
    }while(no!=0);

    return 0;
}