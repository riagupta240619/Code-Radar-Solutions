#include<stdio.h>
#include<string.h>
struct Student{
    int no;
    char name[50];
    float marks;
};
int main(){
    int a;
    scanf("%d", &a);
    struct Student st[a];
    struct Student topper;
    for (int i = 0; i<a; i++){
        scanf("%d %s %f",&st[i].no, &st[i].name, &st[i].marks);
        if (i == 0 || st[i].marks > topper.marks){
            topper = st[i];
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", 
            topper.no, topper.name, topper.marks);

    return 0;
}