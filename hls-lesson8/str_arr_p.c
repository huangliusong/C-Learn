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
}

void test11(){
    //改变指针变量的值
    char *a="I love China!";
    a=a+7;
    printf("%s\n",a);
}
