#include<stdio.h>
#include<string.h>
struct Student{
    int no;
    char name[50];
    float marks;
};
int main(){
    int a, roll2;
    scanf("%d", &a);
    struct Student st[a];
    for (int i = 0; i<a; i++){
        scanf("%d %s %f",&st[i].no, &st[i].name, &st[i].marks);
    }
    scanf("%d", &roll2)
    int x = 0
    for (int i = 0; i<n; i++){
        if (st[i].no == roll2){
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", st[i].no, st[i].name, st[i].marks);
            x = 1;
            break;
        }
    }
    if (!x){
        printf("Student not found");
    }
    return 0;

    return 0;
}