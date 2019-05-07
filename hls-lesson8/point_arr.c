//
//  point_arr.c
//  hls-lesson8
//
//  Created by liusong huang on 2019/5/7.
//  Copyright © 2019 liusong huang. All rights reserved.
//
#include <string.h>
#include "point_arr.h"

void T3(){
    printf("\nT3\n");
    void tt1();
    tt1();
}

void tt1(){
    void sort(char * name[],int n);
    void print(char * name[],int n);
    char *name[]={"Follow me","BASIC"," Great Wall","FORTRAN","Computer design"};
    
    int n=5;
    sort(name, n);
    print(name, n);
}

void sort(char * name[],int n){
    char *temp;
    int i,j,k;
    for (i=0; i<n-1; i++) {
        k=i;
        for (j=i+1; j<n; j++) {
            if (strcmp(name[k],name[j])>0) {
                k=j;
            }
            if (k!=i) {
                temp=name[i];
                name[i]=name[k];
                name[k]=temp;
            }
        }
    }
}

void print(char *name[],int n){
    int i;
    for (i=0; i<n; i++) {
        printf("%s\n",name[i]);
    }
}
