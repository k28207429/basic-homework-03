#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int hight, weight,bmi,m;
	cout << "�п�J����(cm)";
	cin >> hight;
	m = hight / 100;
	cout << "�п�J�魫(kg)";
	cin >> weight;
	bmi = weight / (m ^ 2);
	cout << "BMI="<<bmi;
	system("pause");


		return 0;
}
