// Your code here...
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int max(int arr[], int a){
    int max = arr[0];
    for(int i =0; i<a; i++){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int min(int arr[], int a){
    int min = arr[0];
    for(int i =0; i<a; i++){
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int e = 0;
    for(int i = 0;i<a;i++) {
        if(myarray[i] == 1) {
            e++;
        }
    }
    if(e == 0) {
        printf("1");
    } else {
        int maxx = max(myarray,a);
        int minn = min(myarray,a);
        int f = 0;
        for(int i = minn;i<=maxx;i++) {
            int e = 0;
            for(int j = 0;j<a;j++) {
                if((myarray[j] == i) && (myarray[j] >0)) {
                    e++ ;
                }
            }
            if ((e == 0) & (i>0)) {
                printf("%d",i);
                f++;
            }
        }
        if(f == 0) {
            printf("%d",maxx+1);
        }
    }
}