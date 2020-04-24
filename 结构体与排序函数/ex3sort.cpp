//ex3sort
#include <bits/stdc++.h>
using namespace std;
int a[11]={0,3,4,2,7,4,1,8,12,9,6}; //对a[1]~a[10]排序
int n=10;

bool cmp(int a, int b)  //自定义比较函数 
{
	return a>b; 
}
int main()
{
	sort(a+1, a+1+n);  //默认升序
	for(int i=1;i<=n;++i) cout<<a[i]<<" "; cout<<endl;
	
	sort(a+6, a+1+n, cmp);  //对后半段a[6]~a[10]降序
	for(int i=1;i<=n;++i) cout<<a[i]<<" "; cout<<endl;
	
	return 0; 
}
 
