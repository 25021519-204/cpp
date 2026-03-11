#include<iostream>
using namespace std;
class Rectangle{
	private:
	int length;
	int width;
	public:
		Rectangle(int l, int w){
			length= l;
			width=w;
		}
		int area() {
		return length * width;
		}
		void display() {
			cout << "Area =" <<area() << "\n"; 
		}
};
int main() {
	Rectangle r1(2,4);
	Rectangle r2(5,6);
	r1.display();
	r2.display();
	
	return 0;
}