#pragma once
#include<stdio.h>

//output function.
void output(int arr[],int length){
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("\n---------------\n");
}

//Bubble sort
void bubSort(int arr[],int length){
    int temp;
    printf("-Bub_sorting...\n\n");
    
    while(length-- && length>0){
        for(int i=0;i<length;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

//Select sort
void selectSort(int arr[],int length){
    int temp;
    int k;
    for(int i=0;i<length;i++){
        k=i;    //记录起始位置
        for(int j=i+1;j<length;j++){
            if(arr[k]>arr[j]){
                k = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
}

//Insert sort
void insertSort(int arr[],int length){
    int temp;
    printf("-Insert_sorting...\n\n");
    for(int i=1;i<length;i++){
        for(int j=i;j>0 && arr[j]<arr[j-1];j--){
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
        }
    }
}

//Shell sort
void shellSort(int arr[], int length){
    int temp;
    int h,t=0;
    printf("-shell_sorting...\n\n");
    while(t<length/3){
        t++;
    }
    h=t;
    while(h>=1){
        for(int i=h;i<length;i++){
            for(int j=i;j>=h && arr[j]<arr[j-h];j-=h){
                temp = arr[j-h];
                arr[j-h] = arr[j];
                arr[j] = temp;
            }
        }
        h/=3;
    }
}