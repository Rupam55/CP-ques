#include <stdio.h>

using namespace std;

int main()
{ 
    int array[50];
    int n,i,j,temp, check = 1;
    scanf("%d",&n);
    for(i = 0;i< n;i++){
        scanf("%d",&array[i]);
    }

    for(i = 0; i< n && check == 1; i++){
        for(j = 0; j< n-1-i; j++){
            check = 0;
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                check = 1;
            }
        }    
    }
    for(i = 0;i< n;i++){
        printf("%d ",array[i]);
    }
}
