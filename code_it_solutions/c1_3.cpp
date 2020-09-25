#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll arr[6][6];
    for(int i =0; i< 6; i++){
        for(int j =0; j<6; j++){
            cin>>arr[i][j];
        }
    }
    ll maxi = INT_MIN;
    ll mini = INT_MAX;
    int pmi_x,pmi_y,pma_x,pma_y;
    // calculating minimum and maximum hollow square
    for(int i =1; i< 5; i++){
        for(int j =1; j<5; j++){
            ll sum = 0;
            sum += arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j-1] + arr[i][j+1] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            if(sum > maxi){
                pma_x=i;
                pma_y=j;
                maxi = sum;
            }
            if(sum<mini){
                pmi_x=i;
                pmi_y=j;
                mini = sum;
            } 
        }
    }
    // printing minimum hollow square
    cout<<arr[pmi_x - 1][pmi_y - 1]<<" "<<arr[pmi_x - 1][pmi_y]<<" "<<arr[pmi_x - 1][pmi_y + 1]<<"\n";
    cout<<arr[pmi_x][pmi_y - 1]<<" "<<arr[pmi_x][pmi_y]<<" "<<arr[pmi_x][pmi_y + 1]<<"\n";
    cout<<arr[pmi_x + 1][pmi_y - 1]<<" "<<arr[pmi_x + 1][pmi_y]<<" "<<arr[pmi_x + 1][pmi_y + 1]<<"\n";
    cout<<"\n";
    // printing maximum hollow square
    cout<<arr[pma_x - 1][pma_y - 1]<<" "<<arr[pma_x - 1][pma_y]<<" "<<arr[pma_x - 1][pma_y + 1]<<"\n";
    cout<<arr[pma_x][pma_y - 1]<<" "<<arr[pma_x][pma_y]<<" "<<arr[pma_x][pma_y + 1]<<"\n";
    cout<<arr[pma_x + 1][pma_y - 1]<<" "<<arr[pma_x + 1][pma_y]<<" "<<arr[pma_x + 1][pma_y + 1]<<"\n";
    return 0;
}