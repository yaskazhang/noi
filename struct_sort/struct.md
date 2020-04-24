# 结构体 

在C++中，结构体（struct）用于创建新的类型，他可以将不同的数据类型组合成一个新的类型。

## 结构体示例

我们定义一个长方体Rect，它包含了2个成员函数width和height，都是整型。

在主程序中，通过"结构体变量名.成员变量"来访问结构体中的变量。

``` C++
#include <bits/stdc++.h>
using namespace std;
struct Rect
{
    int width, height;	//成员变量
};
int main()
{
    Rect a;
    a.width=6;
    a.height=8;
    cout<< a.width * a.height << endl;
    return 0;
}
```

## 构造函数与成员方法

结构体中可以定义函数，称为“成员方法”。

一种是没有返回值，名称和结构体完全相同的函数，称为“构造函数”，它在结构体变量声明时自动调用，一般用来初始化变量。可以通过重载函数，实现不同的初始化。

```C++
#include <bits/stdc++.h>
using namespace std;
struct Rect
{
    int width, height;	//成员变量
    Rect()				//构造函数，无参数 
	{
		width=0;
		height=0;
	} 
    Rect(int w, int h)  //构造函数，有参数 
    {
        width=w;
        height=h;
    }
    int getArea()		//成员方法
    {
        return width*height;
    }
};
int main()
{
    Rect a, b(3,4);
    cout<< a.width * a.height << endl;
    cout<< b.getArea() << endl; 
    return 0;
}
```

## 应用

结构体能将不同类型的数据在逻辑上"绑定"成一个整体，方便操作。比如下例中学生信息包含“姓名”和”成绩“两个字段，在进行排序时两个字段需要同时交换移动，通过将学生信息定义成结构体，便于操作。

### 成绩排序

给出班里某门课程的成绩单，请你按成绩从高到低对成绩单排序输出（保证没有相同成绩）。

【输入】

第一行为n (0 < n < 20)，表示班里的学生数目；

接下来的n行，每行为每个学生的名字和他的成绩, 中间用单个空格隔开。名字只包含字母且长度不超过20，成绩为一个不大于100的非负整数。

【输入】

把成绩单按分数从高到低的顺序进行排序并输出，每行包含名字和分数两项，之间有一个空格。

【输入样例】

```
4 
Kitty 80 
Hanmeimei 90 
Joey 92 
Tim 28
```

【输出样例】

```
Joey 92
Hanmeimei 90 
Kitty 80
Tim 28
```

#### 参考程序

```c++
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
```











