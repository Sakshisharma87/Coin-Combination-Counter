#include <stdio.h>
int comb(int a[],int n,int t){
   int temp[1000],i,j;
    for( i=0;i<=t;i++){
        temp[i]=0;
    }
    temp[0]=1;
    for( i=0;i<n;i++) {
        for ( j=a[i];j<=t;j++) {
            temp[j]+=temp[j-a[i]];
        }
    }
    return temp[t];
}

int main() {
    int n,i;
    printf("Enter the no. of coins\n");
    scanf("%d",&n);
    int a[100];
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    printf("Enter target sum\n");
    scanf("%d",&t);
    printf("%d\n", comb(a,n,t));

    return 0;
}
