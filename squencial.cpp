#include<stdio.h>
int main(){
    int a[]={1,2,5,6,7,8,9,12},key,i,found=0;
    printf("enter key");
    scanf("%d",&key);
    for(i=0;i<8;i++){
        if(a[i]==key){
            printf("found");
            found=1;
            break;
        }
    }
    if(found==0){
        printf("not found");
    }

}