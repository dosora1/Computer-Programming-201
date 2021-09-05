#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double get_Area();
};

// radius ����
void Circle::setRadius(int radius){
	this->radius = radius;
}

// Area ����
double Circle::get_Area(){
	return 3.14 * radius * radius;
}

// �Է°� ����� Main����
int main() {
	int n,r;
	int result = 0;
	double radius;
	cout << "number of circles ";
	cin >> n;
	Circle* circles = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << i << "st radius : ";
		cin >> r;
		circles[i].setRadius(r);
		
		if (circles[i].get_Area()>=100){
			result++;
		}
	}
	cout << "Result is : " << result << endl;
}