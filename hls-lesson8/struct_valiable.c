//
//  struct_valiable.c
//  hls-lesson8
//
//  Created by liusong huang on 2019/5/7.
//  Copyright © 2019 liusong huang. All rights reserved.
//

#include "struct_valiable.h"
#include <string.h>
#define N 3
void struct_test1(){
    //printf("\nstruct_test1\n");
    //void s_testt(void);
    //s_testt();
    
    //void s_testt1();
    //s_testt1();
    
    //结构体数组
    //void s_testt2();
    //s_testt2();
    
    //结构体数组的应用举例
    //void s_testt3();
   // s_testt3();
    
//    void s_testt4();
//    s_testt4();
    
//    void s_testt5();
//    s_testt5();
    
   // void s_testt6();
   // s_testt6();
}


void s_testt(void){
    struct Student{
        long int num;
        char name[20];
        char sex;
        char addr[20];
    }a={10101,"huangliusong",'M',"123 beijing road"};
    printf(" No:%ld\n name:%s\n sex:%c\n addr:%s\n",a.num,a.name,a.sex,a.addr);
}

void s_testt1(){
    struct Student{
        int num;
        char name[20];
        float score;
    }student1,student2;
    scanf("%d%s%f",&student1.num,&student1.name,&student1.score);
    scanf("%d%s%f",&student2.num,&student2.name,&student2.score);
    printf("the higher score is:\n");
    if (student1.score>student2.score) {
        printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
    }else if (student1.score<student2.score){
        printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
    }else{
        printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
        printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
    }
}

//
struct Person {
    char name[20];//候选人的姓名
    int count;//候选人所得的票数
}leader[3]={"h",0,"l",0,"s",0};//定义结构体并且初始化

void s_testt2(){
    int i,j;
    char leader_name[20];//定义字符数组
    for (i=1; i<=10; i++) {
        scanf("%s",leader_name);
        for (j=0; j<3; j++) {
            if (strcmp(leader_name,leader[j].name)==0) {
                leader[j].count++;
            }
        }
    }
    printf("\nResult:\n");
    for (i=0; i<3; i++) {
        printf("%5s:%d\n",leader[i].name,leader[i].count);
    }
    
}



void s_testt3(){
    //结构体数组的应用举例
    struct Student {
        int num;
        char name[20];
        float score;
    };
    
    struct Student stu[5]={
        {10101,"zhang1",78},
        {10102,"zhang2",98.5},
        {10103,"zhang3",86},
        {10104,"zhang4",73.5},
        {10105,"zhang5",100}
    };//定义结构体数组并且进行s初始化
    struct Student temp;//用作交换时的临时变量
    const int n=5;
    int i,j,k;
    printf("The order is:\n");
    for (i=0; i<n-1; i++) {
        k=i;
        for (j=i+1; j<n; j++) {
            if (stu[j].score>stu[k].score) {
                //k=j;
                temp=stu[k];
                stu[k]=stu[i];
                stu[i]=temp;
            }
        }
        for (i=0; i<n; i++) {
            printf("%6d %8s %6.2f \n",stu[i].num,stu[i].name,stu[i].score);
        }
    }
    
}


void s_testt4(){
    //结构体指针
    struct Student {
        long num;
        char name[20];
        char sex;
        float score;
    };
    
    struct Student stu_1;
    struct Student *p;
    p=&stu_1;
    stu_1.num=10001;
    strcpy(stu_1.name, "Li Lin");
    stu_1.score='M';
    stu_1.score=89.5;
    printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
           stu_1.num,stu_1.name,stu_1.sex,stu_1.score);
    
    printf("No.:%d\nname:%s\nsex:%c\nscore:%5.1f\n",
           (*p).num,(*p).name,(*p).sex,(*p).score);
    
    printf("No.:%d\nname:%s\nsex:%c\nscore:%5.1f\n",
           p->num,p->name,p->sex,p->score);
}


void s_testt5(){
    struct Student {
        int num;
        char name[20];
        char sex;
        int age;
    };
    
    struct Student stu[3]={
        {1001,"Li Lin",'M',18},
        {1002,"Zhang Fang",'M',19},
        {1003,"Wang Min",'F',20}
    };
    printf("\n==========================================\n");
    struct Student *p;
    for (p=stu; p<stu+3; p++) {
        printf("No.:%d  name:%s  sex:%c  age:%d\n",
               p->num,p->name,p->sex,p->age);
    }
    printf("\n==========================================\n");
    for (p=stu; p<stu+3;) {
        printf("No.:%d  name:%s  sex:%c  age:%d",
               (p++)->num,( p++)->name,( p++)->sex,( p++)->age);
        printf("\n");
    }
    printf("\n==========================================\n");
    for (p=stu; p<stu+3;) {
        printf("No.:%d  name:%s  sex:%c  age:%d",
               (++p)->num,( ++p)->name,( ++p)->sex,( ++p)->age);
        printf("\n");
    }
}


