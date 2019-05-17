// Calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <string>
#include <iostream>
#include<conio.h>
using namespace std;
class Operation
{
protected:
	double x, y;
	char curoperator;
public:
	Operation()
	{
		cout << "Enter simple operation(number +,/,-,*,^, number): ";
		cin >> x >> curoperator >> y;
	}
	double  definitionofOperation(Operation);
	double addition()
	{
		double result = x + y;
		return result;
	}
	double subtraction()
	{
		double result = x - y;
		return result;

	}
	double multiplication()
	{
		double result = x * y;
		return result;
	}
	double division()
	{
		double result = x / y;
		return result;
	}
	double grade() {
		double result = pow(x, y);
		return result;
	}
	void Set_X(double x);
	void Set_Y(double y);
	void Set_curoperator(char curoperator);
};
double Operation::definitionofOperation(Operation operation)
{
	bool isdefault = false;
	do {
		switch (operation.curoperator)
		{
		case '+':
			return operation.addition();
			break;
		case '-':
			return operation.subtraction();
			break;
		case '*':
			return operation.multiplication();
			break;
		case '/':
			return operation.division();
			break;
		case '^':
			return operation.grade();
			break;
		default: cout << "You enter invalid operator.Please retry" << endl;
			cin >> operation.curoperator;
			isdefault = true;
			break;
		}
	} while (isdefault);
}

void Operation::Set_X(double x)
{
	this->x = x;
}
void Operation::Set_Y(double y)
{
	this->y = y;
}
void Operation::Set_curoperator(char curoperator)
{
	this->curoperator = curoperator;
}
	
void isEnd(Operation operation)
{
	int x, y;
	char temp,curoperator;
	do
	{
		cout << "if you want to continue write 'y' " << endl;
		cin >> temp;

		if (temp == 'y') {
			cout << "Enter simple operation(number +,/,-,*,^, number): ";
			cin >> x >> curoperator >> y;
			operation.Set_X(x);
			operation.Set_Y(y);
			operation.Set_curoperator(curoperator);
			cout << operation.definitionofOperation(operation)<<endl;
		}
	} while (temp == 'y');
	
}


int main()
{
	Operation a;
	cout << a.definitionofOperation(a)<<endl;
	isEnd(a);
	return 0;
}

