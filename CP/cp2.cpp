#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main()
{
	string s, s1, s2, s3;
	cin >> s;
	int n = 0, m = 0;
	bool flag = true;
	vector<string> v;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '.')
		{
			s1 += s[i];
			if(i==(s.length()-1)){
				if(m==0){
					flag=false;
				}else{
					if(s1.length()<=3&&s1.length()>=1){
						s3+=s1;
						v.push_back(s3);
					}else{
						flag=false;
					}
				}
			}
		}
		else
		{
			if (m == 0)
			{
				if (s1.length() <= 8)
				{
					s3 = s1;
					s3 += '.';
					s1 = "";
				}
				else
				{
					flag = false;
				}
				m++;
			}
			else
			{
				if (s1.length() > 11)
				{
					flag = false;
				}
				else if (s1.length() < 11 && s1.length() > 8)
				{
					for (int i = 0; i < 3; i++)
					{
						s3 += s1[i];
					}
					for (int i = 3; i < s1.length(); i++)
					{
						s2 += s1[i];
					}
					v.push_back(s3);
					s1="";
					s3=s2;
					s3+='.';
				}
				else if (s1.length() <= 8 && s1.length() >= 2)
				{
					for (int i = 0; i < 1; i++)
					{
						s3 += s1[i];
					}
					for (int i = 1; i < s1.length(); i++)
					{
						s2 += s1[i];
					}
					v.push_back(s3);
					s1="";
					s3=s2;
					s3+='.';
				}
				else
				{
					flag = false;
				}
			}
		}
	}
	if(flag){
		cout<<"YES"<<"\n";
		for (int i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<"\n";
		}
	}else{
		cout<<"NO";
	}
}
