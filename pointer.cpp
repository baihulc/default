#include "stdfx.h"
#include "iostream"

using namespace std

class Point {
public:
	void  SetPointer(int x, int y){
		m=x;n=y;
	}
	void GetPointer(){
		cout<<m;
		cout<<n;
	}

private:
	int m,n;
};

int main(){
	Point p;
	p.SetPointer(1,2);
	p.GetPointer
}