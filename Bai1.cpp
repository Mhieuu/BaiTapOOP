#include <iostream>
using namespace std;

class SoNguyen
{	
	private:
		int x;
	public:
		void nhap(){
			cin>>x;
		}
		int getSoNguyen(){
			return x;
		}
	
			
};




int main(){
	SoNguyen x,y,tong;
	x.nhap();
	y.nhap();
	cout<<x.getSoNguyen()+y.getSoNguyen();

return 0;}


