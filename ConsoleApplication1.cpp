#include <iostream>
#include <cmath>
using namespace std;

void operators(int num1 ,char o, int num2)
{
	switch (o)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		
		break;
	case '/':
		cout << num1 / num2 << endl;
	default:
		cout << "Something Error" << endl;
		break;
	}

}

void power(int choice)
{
	int fact = 1;
	switch (choice)
	{
	case 1:
		cout << " Enter number and power" << endl;
		double num,power;
		cin >> num >> power;
		cout << pow(num, power) << endl;
		break;
	case 2:
		cout << " Enter your number" << endl;
		cin >> num;
		cout << sqrt(num) << endl;
		break;
	case 3:
		cout << " Enter your number" << endl;
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			fact *= i;
		}
		cout << fact << endl;
		break;

	default:
		cout << "Something Error" << endl;
		break;
	}

}

void logarithm(int choice)
{
	double num;
	switch (choice)
	{
	case 1:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << exp(num)<<endl;
		break;
	case 2:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << log(num) << endl;
		break;
	case 3:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << log10(num)<<endl;
		break;
	case 4:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << log2(num)<<endl;
		break;
	default:
		cout<<"Something Error"<<endl;
		break;
	}
}

void trigonometric(int choice)
{
	double num;
	switch (choice)
	{
	case 1:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << sin(num) << endl;
		break;
	case 2:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << cos(num) << endl;
		break;
	case 3:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << tan(num) << endl;
		break;
	case 4:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << asin(num) << endl;
		break;
	case5:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << acos(num) << endl;
		break;
	case 6:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << atan(num) << endl;
		break;
	default:
		cout << "Something Error" << endl;
		break;
	}

}

void hyperbolic(int choice)
{
    double num;
	switch (choice)
	{
	case 1:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << sinh(num) << endl;
		break;
	case 2:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << cosh(num) << endl;
		break;
	case 3:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << tanh(num) << endl;
		break;
	case 4:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << asinh(num) << endl;
		break;
	case 5:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << acosh(num) << endl;
		break;
	case 6:
		cout << "Enter your number" << endl;
		cin >> num;
		cout << atanh(num) << endl;
		break;
	default:
		cout << "Something Error" << endl;
		break;
	}
	
}



int main()
{
	int main;
	char choice1;
	int choice2, num1, num2;
	do
	{
		cout << " \n Enter 1 to Simple Operators \n Enter 2 to Power Functions \n Enter 3 to Exponential and logarithmic functions \n Enter 4 to Trigonometric Functions \n Enter 5 to Hyperbolic Functions \n Enter 6 to clrear Screen \n Enter 0 to exit" << endl;
		cout << " Your Choice" << endl;
		cin >> main;
		switch (main)
		{
		case 1:
			cout << " Enter Number 1 and Number 2 \n Example 2 + 2" << endl;
			cin >> num1 >> choice1 >> num2;
			cout << " Result is: \n";
			operators(num1, choice1, num2);
			break;
		case 2:
			cout << " Enter 1 to Power \n Enter 2 to Square Root \n Enter 3 to Factorial \n";
			cout << " Your Choice" << endl;
			cin >> choice2;
			power(choice2);
			break;
		case 3:
			cout << " Enter 1 to exp \n Enter 2 to log \n Enter 3 to log10 \n Enter 4 to log2 \n";
			cout << "Your choice" << endl;
			cin >> choice2;
			logarithm(choice2);
			break;
		case 4:
			cout << " Enter 1 to sin \n Enter 2 to cos \n Enter 3 to tan \n Enter 4 to inverse sin \n Enter 5 to inverse cos \n Enter 6 to inverse tan \n";
			cout << "Your choice" << endl;
			cin >> choice2;
			trigonometric(choice2);
			break;
		case 5:
			cout << " Enter 1 to sinh \n Enter 2 to cosh \n Enter 3 to tanh \n Enter 4 to inverse sinh \n Enter 5 to inverse cosh \n Enter 6 to inverse tanh \n";
			cout << "Your choice" << endl;
			cin >> choice2;
			hyperbolic(choice2);
			break;
		case 6:
			system("CLS");
			break;
			case 0:
				exit(0);
				break;
		default:
			break;
		}
	} while (true);

}