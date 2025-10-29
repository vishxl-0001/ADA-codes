#include <stdio.h>

struct activity{
         int start;
         int end;
};

int partition( struct activity arr[], int low, int high) {
    int pivot = arr[high].end;
    int i = (low - 1);
    for(int j = low; j <= high - 1; j++) {
        if(arr[j].end <= pivot) {
            i++;
            struct activity temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    struct activity temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// QuickSort function
void quickSort(struct activity arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void select_activity(struct activity arr[],int n){ 
                                                   int x = 0;
                                                   printf("{%d %d} ",arr[x].start,arr[x].end);
                                                   for(int i=1;i<n;i++){
                                                                         if(arr[i].start >= arr[x].end){
                                                                                                         printf("{%d %d} ",arr[i].start,arr[i].end);
                                                                                        
                                                                                                         x = i;
                                                                                                        }   
                                                                                                    }
                                                                         printf("\n");
}

int main(){
            struct activity arr[] = {{1,2},{3,5},{0,6},{5,8},{5,9},{8,7}};
            int n = sizeof(arr)/sizeof(arr[0]);  

            printf("sorted activities : ");
            quickSort( arr,0,n-1);
            for(int i = 0 ;i<n;i++){
                            printf("{%d %d} ",arr[i].start,arr[i].end);
                         }
                           printf("\n");
            printf("selected activities : ");              
            select_activity(arr,n);

            return 0;
}
