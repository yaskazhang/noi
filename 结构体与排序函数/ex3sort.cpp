//ex3sort
#include <bits/stdc++.h>
using namespace std;
int a[11]={0,3,4,2,7,4,1,8,12,9,6}; //��a[1]~a[10]����
int n=10;

bool cmp(int a, int b)  //�Զ���ȽϺ��� 
{
	return a>b; 
}
int main()
{
	sort(a+1, a+1+n);  //Ĭ������
	for(int i=1;i<=n;++i) cout<<a[i]<<" "; cout<<endl;
	
	sort(a+6, a+1+n, cmp);  //�Ժ���a[6]~a[10]����
	for(int i=1;i<=n;++i) cout<<a[i]<<" "; cout<<endl;
	
	return 0; 
}
 
