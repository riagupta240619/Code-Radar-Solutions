#include<stdio.h>
#include<string.h>
struct Student{
    int no;
    char name[50];
    float marks;
};
int main(){
    int a, count = 0;
    float marks2;
    scanf("%d", &a);
    struct Student st[a];
    for (int i = 0; i<a; i++){
        scanf("%d %s %f",&st[i].no, &st[i].name, &st[i].marks);
    }
    scanf("%d", &marks2);
    int x = 0;
    for (int i = 0; i<a; i++){
        if (st[i].marks > marks2){
            count++;
        }
    }
    printf("Count of students scoring abbove %f: %d", marks2, count);
    return 0;
}