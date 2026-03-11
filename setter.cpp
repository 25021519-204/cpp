#include<iostream>
using namespace std;

class student{
private:
int marks;
public:
void setmarks( int m) {
    marks= m;
}
void display() {
    cout << "marks = " << marks;
}
};
int main() {
    student s1;
    s1.setmarks(90);
    s1.display();
    return 0;
}
