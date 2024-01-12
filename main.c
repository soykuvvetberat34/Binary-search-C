#include <stdio.h>

int arrLength(int[]);
int main(){
    int a[]={3,5,7,16,22,57,74,98};
    int high_index,low_index,mid_index,searchingNum=0;
    high_index=arrLength(a);
    low_index=0;
    printf("Enter the searching number:");
    scanf("%d",&searchingNum);
    while(low_index<=high_index){
    mid_index=(high_index+low_index)/2;
    if(a[mid_index]==searchingNum){
        printf("searching num is found and num's index:%d",mid_index);
        break;
    }
    else
        {
            if(searchingNum>a[mid_index])
                low_index=mid_index+1;
            if(searchingNum<a[mid_index])
                high_index=mid_index-1;
        }
    }
    
}

int arrLength(int a[]){
    int length=0;
    while(a[length]!='\0'){
        length++;
    }
    return length;
}
