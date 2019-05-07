//
//  main.c
//  hls-lesson8
//
//  Created by liusong huang on 2019/5/5.
//  Copyright © 2019 liusong huang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    void test1();
    test1();
    
    void test2();
    test2();
    int a=10;
    printf("\n");
    
//    void test3();
//    test3();
    
    void test4();
    test4();
    
    
    void test5();
    test5();
    
    void test6();
    test6();
    
    
    void test7();
    test7();
    
    
    
    void test8();
    test8();
    
    void test9();
    test9();
    
    return 0;
}
void test1(){
    printf("输出二维数组的有关数据\n");
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    printf("%d,%d\n",a,*a);//首行地址和0行0列地址
    printf("%d,%d\n",a[0],*(a+0));//0行0列地址
    printf("%d,%d",&a[0],&a[0][0]);
    printf("\n##################\n");
}


void  test2(){
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int  *p;
    for (p=a[0]; p<a[0]+12; p++) {
       
        if ((p-a[0])%4==0) {
            //printf("\n");
            //printf("%2d",p);
            //printf("%2d",a[0]);
            //printf("%2d",p-a[0]);
            //printf("%2d",(p-a[0])%4);
            printf("\n");        }
        printf("%4d",*p);
    }
    printf("\n");
}


void test3(){
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4],i,j;
    p=a;
    printf("please enter row and colum:\n");
    scanf("%d,%d",&i,&j);
    printf("a[%d,%d]=%d\n",i,j,(*(p+i)+j));
}



void test4(){
    printf("\n");
    int a[4]={1,3,5,7};//定义一个一位数组a，包含4个元素
    int (*p)[4];//定义指向包含4个元素的一位数组的指针变量
    p=&a;//p指向一位数组
    printf("%d\n",(*p)[3]);//输出a[3] 输出证书7
}


void test5(){
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={
        {65,67,70,60},
        {80,87,90,81},
        {90,99,100,98}
    };
    average(*score, 12);
    search(score, 2);
     search(score,1);
     search(score,0);
}

void average(float *p,int n){
    float *p_end;
    float sum=0,aver;
    p_end=p+n-1;
    for (; p<=p_end; p++) {
        sum=sum+(*p);
    }
    aver=sum/n;
    printf("average=%5.2f\n",aver);
}


void search(float (*p)[4],int n){
    int i;
    printf("the score of No.%d are:\n",n);
    for (i=0; i<4; i++) {
        printf("%7.2f",*(*(p+n)+i));
    }
    printf("\n");
}

void test6(){
    char string[]="I love China!";
    printf("%s\n",string);
    printf("%c\n",string[7]);
    //定义一个字符指针变量输出该字符
    printf("定义一个字符指针变量\n");
    char *string1="I love China!";
    printf("%s\n",string1);
     printf("定义一个字符指针变量\n");
    char *string3;
    string3="I love China!";
    string3="I am a student.";
    printf("%s\n",string3);
     printf("定义字符数组\n");
    char a[]="I am student.",b[20];
    int i;
    for (i=0; *(a+i)!='\0'; i++) {
        *(b+i)=*(a+i);
    }
    *(b+i)='\0';printf("string a is:%s\n",a);
    printf("string b is :%s");
    for (i=0; b[i]!='\0'; i++) {
        printf("%c",b[i]);
    }
    printf("\n");
}



void test7(){
    printf("\n\n用指针处理\n");
    char a[]="I am a boy.",b[20],*p1,*p2;
    p1=a;p2=b;
    for (; *p1!='\0'; p1++,p2++) {
        *p2=*p1;
    }
    *p2='\0';
    printf("string a is:%s\n",a);
     printf("string b is:%s\n",b);
}


 //字符数组作为函数参数
void test8(){
   
    void copy_string1(char from[],char to[]);
    char a[]="I am teacher.";
    char b[]="You are a student.";
    printf("string a=%s\nString b=%s\n",a,b);
    printf("copy string a to string b:\n");
    copy_string1(a,b);
    printf("\nstring a=%s\nstring b=%s\n",a,b);
}

void copy_string1(char from[],char to[]){
    int i=0;
    while (from[i]!='\0') {
           to[i]=from[i];
           i++;
    }
    to[i]='\0';
    
}


//用字符型指针变量作为实参
void test9(){
    printf("\n用字符型指针变量作为实参\n");
    void copy_string2(char from[],char to[]);
    char a[]="I am a teacher.";
    char b[]="You are a student.";
    char * from=a,* to =b;
    printf("stringa=%s\nstringb=%s\n",a,b);
    printf("\ncopy string a to string b:\n");
    copy_string2(from, to);
    printf("string a=%s\nstring b=%s\n",a,b);
    
}


void copy_string2(char from[],char to[]){
    int i=0;
    while (from[i]!='\0') {
        to[i]=from[i];
        i++;
    }
    to[i]='\0';
}
