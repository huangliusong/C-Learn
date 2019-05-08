#include "chain_table.h"
#include <stdlib.h>

#define LEN sizeof(struct Student)

void testp(){
    printf("链表\n");
    void testp1();
    testp1();
    
    void testp2();
    testp2();
}

struct Student {
    long num;
    float socre;
    struct Student *next;
};
//建立静态链表
void testp1(){
    printf("\n建立静态链\n");
    struct Student a,b,c,*head,*p;
    a.num=1001;a.socre=89.1;
    b.num=1002;b.socre=67;
    c.num=1003;c.socre=90;
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    p=head;
    do{
        printf("%ld %5.1f\n",p->num,p->socre);
        p=p->next;
    }while ( p!=NULL);
}


void testp2(){
    printf("\n建立动态列表\n");
    struct Student *create(void);
    struct Student *pt;
    pt=create();
    printf("\nnum:%ld\nscore:%5.1f\n",pt->num,pt->socre);
}

struct Students {
    long num;
    float score;
    struct Student *next;
};

int n;

struct Student *create(void) {
    struct Student *head;
    struct Student *p1,*p2;
    n=0;
    p1=p2=(struct Student*) malloc(LEN);
    scanf("%ld,%f",&p1->num,&p1->socre);
    head=NULL;
    while (p1->num!=0) {
        n=n+1;
        if(n==1)head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct Student*)malloc(LEN);
        scanf("%ld,%f",&p1->num,&p1->socre);
    }
    p2->next=NULL;
    return head;
};

