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
                                                      for(int i = 0 ;i<n;i++){
                                                                              printf("{%d %d} ",arr[i].start,arr[i].end);
                                                      }
                                                      printf("\n");

}

void select_activity(struct activity arr[],int n){ 
                                                   int x = 0;
                                                   printf("%d ",x);
                                                   for(int i=1;i<n;i++){
                                                                         if(arr[i].start >= arr[x].end){
                                                                                                        printf("%d ",i);
                                                                                                        x = i;
                                                                         }
                                                                         
                                                   }
                                                   printf("\n");
}

int main(){
            struct activity arr[] = {{1,2},{3,4},{0,6},{5,8},{5,9},{8,9}};
            int n = sizeof(arr)/sizeof(arr[0]);  

            printf("sorted array : ");
            sort_activities( arr,n);
            select_activity(arr,n);

            return 0;
}