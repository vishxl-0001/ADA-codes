#include <stdio.h>

struct activity{
         int start;
         int end;
};

void sort_activities(struct activity arr[] , int n ){ 
                                                       for(int i = 0;i<n;i++){
                                                                               for(int j=0;j<n-1;j++){
                                                                                                       if(arr[j].end > arr[j+1].end){
                                                                                                                                      struct activity temp = arr[j];
                                                                                                                                      arr[j]   = arr[j+1];
                                                                                                                                      arr[j+1] = temp;
                                                                                                       }
                                                                               }
                                                       } 
}

void select_activity(struct activity arr[],int n){
                                                   printf("0 ");
                                                   for(int i=1;i<n;i++){
                                                                         if(arr[i].start>arr[i-1].end){
                                                                                                        printf("%d ",i);
                                                                         }
                                                   }
                                                   printf("\n");
}

int main(){
            struct activity arr[] = {{1,2},{4,6},{3,2},{6,5},{8,7},{9,2}};
            int n = sizeof(arr)/sizeof(arr[0]);       

            sort_activities( arr,n);
            select_activity(arr,n);

            return 0;
}