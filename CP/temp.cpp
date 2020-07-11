#include <iostream>
//#include <algorithm>
using namespace std;
int main()
{
	int D,P,Di[100][100],i,j,z,arr[100],n=0;
   
  cin>>P;
  cin>>D;
	for(i=0;i<D;i++){
        for(j=0;j<P;j++){
            cin>>Di[i][j];
        }
    }
	for(i=0;i<D;i++){
		for(j=0;j<P;j++){
			arr[n]=Di[i][j];
			n++;
        }
    }
	int l[100],q=0,k;

	for (i = 0; i <n; i++)
	{
		for (j = n; j>=0; j--)
		{k=0;
		for(z=0;z<P/D;z++){
			k = k+arr[i]+arr[j];
            i++;
            j--;
            }
            l[q]=k;
            q++;
			}
        
		//for(i=0;i<q;i++)
		//cout<<l[i]<<" ";
	}

	//sort(l, l + n); 

    int max_count = 1, res = l[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (l[i] == l[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = l[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = l[n - 1]; 
    } 
  
    cout<<res; 
	
	
}