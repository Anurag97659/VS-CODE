#include <iostream>
using  namespace std;
class Test {
	int num1, num2, num3;
	public:
		Test(int value1 = 10, int value2 = 20, int value3 = 30) { // Parameterized constructor with default arguments
			num1 = value1;
			num2 = value2;
			num3 = value3;
		}
		void display() {
			cout << num1 << " " << num2 << " " << num3 << endl;
		}
};
int main() {
	Test t1(25, 55, 75);
	t1.display(); // Statement-1
	Test t2(24, 25);
	t2.display();// Statement-2
	Test t3(44);
	t3.display();// Statement-3
	Test t4();
	t4.display();// Statement-4
}