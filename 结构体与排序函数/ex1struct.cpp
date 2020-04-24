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

