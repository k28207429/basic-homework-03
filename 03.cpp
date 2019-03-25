#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int hight, weight,bmi,m;
	cout << "請輸入身高(cm)";
	cin >> hight;
	m = hight / 100;
	cout << "請輸入體重(kg)";
	cin >> weight;
	bmi = weight / (m ^ 2);
	cout << "BMI="<<bmi;
	system("pause");


		return 0;
}
