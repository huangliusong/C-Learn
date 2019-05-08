#include "chain_table.h"


void testp(){
    printf("链表\n");
    void testp1();
    testp1();
}

struct Student {
    long num;
    float socre;
    struct Student *next;
};
//建立静态链表
void testp1(){
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
