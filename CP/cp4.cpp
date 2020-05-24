#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,a;
   cin>>t;
   vector<int> v(t);
   int maxlp=INT_MIN,maxln=INT_MIN,lp=0,ln=0,p=0,n=0,pl=0,nl=0;
   int psum=0,nsum=0,first,last;
   for (int i = 0; i < t; i++)
   {
       cin>>a;
       if(i==t-1){
           if(a>0){
               last=1;
           }else{
               last=0;
           }
       }
       if(a>0){
           if(p==0){
               pl=a;
               lp++;
               if (maxlp < lp)
               {
                   maxlp = lp;
               }
               p++;
           }else{
               if(a==(pl+1)){
                   lp++;
                   if (maxlp < lp)
                   {
                       maxlp = lp;
                   }
                   pl=a;
               }else{
                    lp=0;
                    lp++;
                    pl=a;
               }
           }
           psum+=a;
       }else{
           if(n==0){
               nl=abs(a);
               ln++;
               if (maxln < ln)
               {
                   maxln = ln;
               }
               n++;
           }else{
               if(abs(a)==(nl+1)){
                   ln++;
                   if (maxln < ln)
                   {
                       maxln = ln;
                   }
                   nl=abs(a);
               }else{
                   ln=0;
                   ln++;
                   nl=a;
               }
           }
           nsum += abs(a);
       }
   }

    if(psum>nsum){
        cout<<"first0"; 
    }else if(psum<nsum){
        
            cout<<"second0";
    }else{
        if(maxlp>maxln){
            cout<<"first1";
        }else if(maxlp<maxln){
            cout<<"second1";
        }else{
            if(last>0){
                    cout << "first2";
                
            }else{
                    cout << "second2";
            }
        }
    }
   
}