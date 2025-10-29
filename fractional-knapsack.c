#include <stdio.h>

typedef struct {
    int idx;
    int value;
    int weight;
    int ratio;   
} Item;


void sortItems(Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].ratio < items[j + 1].ratio) {
                Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, capacity;

    printf("Number of items: ");
    scanf("%d", &n);

    Item items[n];
    float fraction[n];   


    for (int i = 0; i < n; i++) {
        int v, w;
        printf("Enter value and weight for item %d: ", i + 1);
        scanf("%d %d", &v, &w);
        items[i].idx = i + 1;
        items[i].value = v;
        items[i].weight = w;
        items[i].ratio = v / w; 
        fraction[i] = 0.0;       
    }

    printf("Knapsack capacity: ");
    scanf("%d", &capacity);

    // Sort by ratio
    sortItems(items, n);

    printf("\nItems sorted by ratio (descending):\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: value=%d, weight=%d, ratio=%d\n",
               items[i].idx, items[i].value, items[i].weight, items[i].ratio);
    }

    // Knapsack logic
    int remaining = capacity;
    int totalProfit = 0;

    for (int i = 0; i < n && remaining > 0; i++) {
        if (items[i].weight <= remaining) {
            // pura item lo
            fraction[i] = 1.0;
            totalProfit += items[i].value;
            remaining -= items[i].weight;
        } else {
            // fraction lo
            fraction[i] = (float)remaining / items[i].weight;
            totalProfit += (int)(items[i].value * fraction[i]);
            remaining = 0;
        }
    }

    // Print fractions taken
    printf("\nFraction of items taken (in sorted order):\n[ ");
    for (int i = 0; i < n; i++) {
        if (fraction[i] == 1.0)
            printf("1 ");
        else if (fraction[i] == 0.0)
            printf("0 ");
        else {
            // print as numerator/denominator (approx)
            printf("%d/%d ", (int)(fraction[i] * items[i].weight), items[i].weight);
        }
    }
    printf("]\n");

    // Total profit
    printf("\nTotal Profit = %d\n", totalProfit);

    return 0;
}