#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct Person
{

char name[200];

int count;

};

int main()

{
    int i,k,m,n,p,candidate_number,voter_number=0;
    struct Person * persons;
    char candidate_name = 's';
     printf("请输入候选人数量(大于3个)：\n");
        scanf("%d",&candidate_number) ;

    persons = (struct Person *)malloc(candidate_number*sizeof(struct Person));
    for(i=0;i<candidate_number;i++)
    {
    printf("请输入第%d个候选人姓名：\n",i+1);
    scanf("%s",persons[i].name) ;
    *persons[i].count = 0;
    }
    printf("请输入投票人数量(大于10个)：\n");
    scanf("%d",&voter_number) ;

    for(k=0;k<candidate_number;k++){
        printf("第%d个候选人姓名：%s\n",k+1,persons[k].name);
    }
    printf("请开始投票：\n");
    for(m=0;m<voter_number;m++)

    {
        char t[30];

    printf("请第%d个投票人输入候选人姓名：\n",m+1);

    scanf("%s",t) ;

    for(n=0;n<candidate_number;n++)
    {

   if(strcmp(t,persons[n].name)==0)
    {


       *persons[n].count = *persons[n].count + 1;

    }

    }

    }

    for(p=0;p<candidate_number;p++)
    {
        printf("第%d个候选人:%s的票数为%d\n",p+1,persons[p].name,*persons[p].count);
    }

    return 0;


}