//
//  struct_valiable.c
//  hls-lesson8
//
//  Created by liusong huang on 2019/5/7.
//  Copyright © 2019 liusong huang. All rights reserved.
//

#include "struct_valiable.h"

void struct_test1(){
    //printf("\nstruct_test1\n");
    //void s_testt(void);
    //s_testt();
    
    //void s_testt1();
    //s_testt1();
    
    //结构体数组
    void s_testt2();
    s_testt2();
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

void s_testt2(){
    //
}
