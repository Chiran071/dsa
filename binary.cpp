#include<stdio.h>
int main(){
    int a[]={1,2,5,6,7,8,9,12},key,left,right,mid,found=0;
    printf("enter key");
    scanf("%d",&key);
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==key){
            printf("found at index %d",mid);
            found=1;
            break;
        }
        else if(key<a[mid]){
            right=mid-1;
        }
        else
            left=mid+1;
    }

    if(found==0){
        printf("not found");
    }    
}