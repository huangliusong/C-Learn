//
//  str_arr_p.c
//  hls-lesson8
//
//  Created by liusong huang on 2019/5/7.
//  Copyright © 2019 liusong huang. All rights reserved.
//

#include "str_arr_p.h"


void T2(){
    printf("\nT2\n");
    void test11();
    test11();
    void test22();
    test22();
}

void test11(){
    //改变指针变量的值
    char *a="I love China!";
    a=a+7;
    printf("%s\n",a);
}

void test22(){
    int max(int x,int y);
    int min(int x,int y);
    int (*p)(int,int);
    int a,b,c,n;
    printf("please enter a and b:");
    scanf("%d,%d",&a,&b);
    printf("please choose 1 or 2:");
    scanf("%d",&n);
    if (n==1) {
        p=max;
    }else if(n==2){
        p=min;
    }
    c=(*p)(a,b);
    printf("a=%d,b=%d\n",a,b);
    if (n==1) {
        printf("max=%d\n",c);
    }else if(n==2){
        printf("min=%d\n",c);
    }
}


int max(int x,int y){
    int z;
    if (x>y) {
        z=x;
    }else{
        z=y;
    }
    return z;
}

int min(int x,int y){
    int z;
    if (x<y) {
        z=x;
    }else{
        z=y;
    }
    return z;
}
