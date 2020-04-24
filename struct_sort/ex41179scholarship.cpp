#include <bits/stdc++.h>
using namespace std;
struct st{				//定义学生结构体 
	int id;
	int yw,sx,yy,zf;
}stu[301];
int n;
bool cmp(st a, st b)	
{
	if(a.zf!=b.zf)			//总分不同 
		return a.zf>b.zf; 	//总分高的在前 
	if(a.yw!=b.yw) 			//总分相同，语文成绩不同 
		return a.yw>b.yw; 	//语文成绩高的在前 
	return a.id<b.id;		//学号小的在前 
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
	//输出前5名 
	for(int i=1;i<=5;i++)
		cout<<stu[i].id<<" "<<stu[i].zf<<endl;
	return 0;
}
