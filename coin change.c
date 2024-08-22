#include <stdio.h>
#include <stdbool.h>

int count=0;

int countcombi(int arr[], int n, int subset[], int size, int index, int sum, int s) {
    
    int i;
    if (s==sum) {
     count++;
        return ;
    }

    if (s >sum) {
        return;
    }
     
    for ( i = index; i < n; i++) {
      
        subset[size] = arr[i];
        countcombi(arr, n, subset, size + 1, i, sum, s+ arr[i]);
    }
    
    return count;
}

int main() {
    int arr[100] ,n,sum,i;
    printf("enter the number of distinct coins(not more than 100):- ");
    scanf("%d",&n);
    printf("enter coins value:-\n");
    
    for(i=0;i<n;i++){
    	printf("enter value of %dth coin:",i);
    	scanf("%d",&arr[i]);
	}
	printf("enter the required sum:");
	scanf("%d",&sum);

    int subset[n * sum];

    printf("No. of combination of the coins possible are:\n");
    int c=countcombi(arr, n, subset, 0, 0, sum, 0);
    printf("%d",c);
    return 0;
}

