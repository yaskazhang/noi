#include <bits/stdc++.h>
using namespace std;
struct st{				//����ѧ���ṹ�� 
	int id;
	int yw,sx,yy,zf;
}stu[301];
int n;
bool cmp(st a, st b)	
{
	if(a.zf!=b.zf)			//�ֲܷ�ͬ 
		return a.zf>b.zf; 	//�ָܷߵ���ǰ 
	if(a.yw!=b.yw) 			//�ܷ���ͬ�����ĳɼ���ͬ 
		return a.yw>b.yw; 	//���ĳɼ��ߵ���ǰ 
	return a.id<b.id;		//ѧ��С����ǰ 
} 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>stu[i].yw>>stu[i].sx>>stu[i].yy;
		stu[i].id=i;
		stu[i].zf=stu[i].yw+stu[i].sx+stu[i].yy;
	}
	
	sort(stu+1,stu+n+1,cmp);
	//���ǰ5�� 
	for(int i=1;i<=5;i++)
		cout<<stu[i].id<<" "<<stu[i].zf<<endl;
	return 0;
}
