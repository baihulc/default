#include "stdfix.h"
#include "iostream"

using namespace std;

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