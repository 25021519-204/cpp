#include<iostream>
using namespace std;

class student {
private:
    int marks;
public:
    void setmarks(int m) {
        marks=m;
    }
    int getmarks() {
        return marks;
    }
};

int main() {
    student s1;
    s1. setmarks(80);
    cout << "marks= " << s1.getmarks();

    return 0;
}