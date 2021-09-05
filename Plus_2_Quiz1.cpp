#include <iostream>
using namespace std;

class Tower {
private:
	int h;
public:
	Tower() { h = 1; }
	Tower(int h) { this->h = h; } // `this->h`는 Tower안에서 선언된 h
	~Tower() { cout << "Destroy a Tower of " << h << " height" << endl; }
	int getHeight();
};

int Tower::getHeight() { //tower의 변수를 쓸 수 있는 함수
	return h;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);

	cout << "height " << myTower.getHeight() << endl;
	cout << "height " << seoulTower.getHeight() << endl;

	return 0;
}