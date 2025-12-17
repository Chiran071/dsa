#include<stdio.h>
int partition(int a[],int left, int right){
    int l=left,temp,pivot=a[l];

    while (left<right)
    {
        while(left<right && pivot>=a[left])
            left++;
        
        while(pivot<a[right])
            right--;

        if(left<right){
            temp=a[right];
            a[right]=a[left];
            a[left]=temp;
        }

  


    }
        a[l]=a[right];
        a[right]=pivot;
        return right;
}

void quicksort(int a[],int left,int right){
    
    if(left<right){
            int pivotidx=partition(a,left,right);
            quicksort(a,left,pivotidx-1);
            quicksort(a,pivotidx+1,right);
    }


}

int main(){
    int a[]={5,6,7,1,11,4,12};
    quicksort(a,0,6);

    for(int i=0;i<7;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}