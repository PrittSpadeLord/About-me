#include<stdio.h>
#include<conio.h>

int main() {
    int c;
    int arr[5];
    
    for(int i=0; i<5; i++) {
        printf("Fill the value of element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int l=0; l<=3; l++) {
       for(int j=0; j<4; j++) {
           if(arr[j]>arr[j+1]) {
               c=arr[j];
               arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    
    printf("\n\nThe array finally sorted is: \n\n");
    for(int k=0; k<5; k++) {
        printf("%d ", arr[k]);
    }
    
    getch();
    return 0;
}


