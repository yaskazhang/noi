// ex2score
#include <bits/stdc++.h>
using namespace std;
struct STU	//定义结构体 
{
	string name;
	int s;
}a[22];		//直接定义数组变量 
int n;

int main()
{
	STU t;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i].name>>a[i].s;
	
	//冒泡排序	
	for(int i=1;i<n;++i)
		for(int j=1;j<=n-i;++j)
			if(a[j].s<a[j+1].s)  //比较成绩 
			{	//交换 
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	
	//输出		
	for(int i=1;i<=n;++i)
		cout<<a[i].name<<" "<<a[i].s<<endl;
			
	return 0;
}
