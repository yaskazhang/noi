// ex2score
#include <bits/stdc++.h>
using namespace std;
struct STU	//����ṹ�� 
{
	string name;
	int s;
}a[22];		//ֱ�Ӷ���������� 
int n;

int main()
{
	STU t;
	cin>>n;
	for(int i=1;i<=n;++i)
		cin>>a[i].name>>a[i].s;
	
	//ð������	
	for(int i=1;i<n;++i)
		for(int j=1;j<=n-i;++j)
			if(a[j].s<a[j+1].s)  //�Ƚϳɼ� 
			{	//���� 
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	
	//���		
	for(int i=1;i<=n;++i)
		cout<<a[i].name<<" "<<a[i].s<<endl;
			
	return 0;
}
