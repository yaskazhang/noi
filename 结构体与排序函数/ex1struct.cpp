#include <bits/stdc++.h>
using namespace std;
struct Rect
{
    int width, height;	//��Ա����
    Rect()				//���캯�����޲��� 
	{
		width=0;
		height=0;
	} 
    Rect(int w, int h)  //���캯�����в��� 
    {
        width=w;
        height=h;
    }
    int getArea()		//��Ա����
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

