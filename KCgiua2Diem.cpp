#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class diem
{
	private:
		int x,y;
	public:
		diem()
		{
			x=0; y=0;
		}
		diem(int x1, int y1)
		{
			x1=x; y1=y;
		}
		~diem()
		{
			x=0; y=0;
		}
		void nhaptoado()
		{
			cout<<" Nhap toa do x = ";
			cin>>x;
			cout<<" Nhap toa do y = ";
			cin>>y;
		}
		void intoado()
		{
			cout<<" Toa do (x, y) = ("<<x<<", "<<y<<")"<<endl;
		}
		double kc(diem d);
};
double diem::kc(diem d)
{
	return (double)sqrt(pow(d.x-this->x,2)+pow(d.y-this->y,2));
}
int main()
{
	diem d1, d2;
	cout<<" Nhap toa doa diem thu 1:"<<endl;
	d1.nhaptoado();
	d1.intoado();
	cout<<" Nhap toa do diem thu 2:"<<endl;
	d2.nhaptoado();
	d2.intoado();
	cout<<" Khoang cach giua 2 diem la: "<<d1.kc(d2);
	getch();
}
