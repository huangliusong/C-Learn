//
//  struct_point.c
//  hls-lesson8
//
//  Created by liusong huang on 2019/5/8.
//  Copyright © 2019 liusong huang. All rights reserved.
//

#include "struct_point.h"
#define N 3

struct Studentt {
    int num;
    char name[20];
    float score[3];
    float aver;
};

void s_testt6(){
    void input(struct Studentt stu[]);
    struct Studentt maxt(struct Studentt stu[]);
    void printt(struct Studentt stu);
    struct Studentt stu[N],*p=stu;
    input(p);
    struct Studentt s=maxt(p);
    printt(s);
}

void input(struct Studentt stu[]){
    int i;
    printf("请输入个学生的信息，学号，姓名，三门课程成绩\n");
    for (i=0; i<N; i++) {
        scanf("%d %s %f %f %f",
              &stu[i].num,
              &stu[i].name,
              &stu[i].score[0],
              &stu[i].score[1],
              &stu[i].score[2]);
        stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/N;
    }
}

struct Studentt maxt(struct Studentt stu[]){
    int i,m=0;
    for(i=0;i<N;i++){
        if(stu[i].aver>stu[m].aver) m=i;
    }
    return stu[m];
}


void printt(struct Studentt stud){
    printf("\n最高成绩的学生是\n");
    printf("学号：%d\n姓名:%s\n三门成绩:%5.1f,%5.1f,%5.1f,平均成绩%6.2f",
           stud.num,
           stud.name,
           stud.score[0],
           stud.score[1],
           stud.score[2],
           stud.aver);
}
