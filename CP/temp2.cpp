#include<stdio.h>

int matrix_chain(int arr[], int n){
    int dp[n][n];
    int i,j,k,l,q;
    
    for(i=1; i<n; i++){
        dp[i][i]=0;
    }
    
    for(l = 2; l<n; l++){
        for(i=1; i<n-l+1; i++){
            j = i+l-1;
            dp[i][j] = INT_MAX;
            for(k=i; k<=j-1; k++){
                q = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
                if(q < m[i][j]){
                    dp[i][j] = q;
                }
            }
        }
    }
    
    return m[1][n-1];
    
}

int main(){
    
    int n, arr[1000];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d", & arr[i]);
    }
    
    matrix_chain(arr,n);
    
}