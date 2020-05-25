#include <iostream>
#include <string>
using namespace std;
int main()
	{
	auto Sum = [](double a, double b) {return a + b; };
	auto Sub = [](double a, double b) {return a - b; };
	auto Multiply = [](double a, double b) {return a * b; };
	auto Div = [](double a, double b) {return a / b; };
	auto Perc = [](double a, double b) {return a / 100 * b; };
	setlocale(LC_ALL, "Russian");
		double a;
		double b;
		char sel;

		std::cout << "-========== Simple Calculator ===============-\nMade by: VladX\nVersion: beta_1.2.0\nKernel version: a_0.2_integrated\n-============================================-" << std::endl;
		std::cout << "*!: Внимание! Вводить можно только символы арифметических операций: (+, -, *, /, %)" << std::endl;
	link:
		std::cout << "*: Введите символ операции: ";
		std::cin >> sel;



		switch (sel)
		{
		case '+':
		cout << "Введите первое слагаемое: ";
			cin >> a;
			cout << "Введите второе слгаемое: ";
			cin >> b;
			cout << "Ответ: " << Sum(a, b) << endl;
			goto link;
		case '-':
			cout << "Введите уменьшаемое: ";
			cin >> a;
			cout << "Введите вычитаемое: ";
			cin >> b;
			cout << "Ответ: " << Sub(a, b) << endl;
			goto link;
		case '*':
			cout << "Введите первый множитель: ";
			cin >> a;
			cout << "Введите второй множитель: ";
			cin >> b;
			cout << "Ответ: " << Multiply(a, b) << endl;
			goto link;
		
		case '/':
			cout << "Введите делимое: ";
			cin >> a;
			cout << "Введите делитель: ";
			cin >> b;
			cout << "Ответ: " << Div(a, b) <<endl;
			goto link;
		case '%':
			cout << "Введите число из которого вы будете вычислять проценты: ";
			cin >> a;
			cout << "Введите кол-во процентов: ";
			cin >> b;
			cout << "Ответ: " << Perc(a, b) << endl;
			goto link;
		}
	
	}
