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
    void s_testt(void);
    s_testt();
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
