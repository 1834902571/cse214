#include<stdio.h>
void inputElementOfArrayAndDisplay(int *a,int len);


int main(){


    int arr[100];
    int size = 5;

   inputElementOfArrayAndDisplay(arr,size);


    return 0;
}

void inputElementOfArrayAndDisplay(int a[],int len){

printf("Please Enter the Element of this array: \n");
   int i=0;
 for(i=0; i<len; i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }

    }

 for(i=0; i<len; i++){
     printf("%d,",a[i]);
        }

}

