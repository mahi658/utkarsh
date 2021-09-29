//developed by Utkarsh Agarwal
//date of complition 05-20-2021

#include <iostream>
#include <cmath>
using namespace std;
class simple_calculator
{
  protected:
	string option;
	float take_number1;
	float take_number2;

  public:
	simple_calculator(void)
	{
		take_number1= 0 ;
		take_number2 = 0;
	}
	void ask_1()
	{
		//here i am asking that which action user want to perform(+,-,*,/)
		cout << "which operation you want to perform" << endl
			 << "1.Addition" << endl
			 << "2.Subtraction" << endl
			 << "3.Multiplication" << endl
			 << "4.Division" << endl;
		cin >> option;
		cout << "------------------------------------------------------------" << endl;
	}
	void input_1(void)
	{
		//here i am taking the 2 numbers to perform action of simple_calculator
		cout << "please enter first number" << endl;
		cin >> take_number1;
		cout << "please enter second number" << endl;
		cin >> take_number2;
		cout << "------------------------------------------------------------" << endl;
	}

	void logic_1()
	{
		//here we are adding two numbers
		if (option == "Addition" || option == "addition" || option == "add" || option == "Add" || option == "1")
		{
			input_1();
			cout << "Sum of " << take_number1 << " and " << take_number2 << " is " << (take_number1 + take_number2) << endl;
		}
		//here we are subtracting two numbers
		else if (option == "subtraction" || option == "Subtraction" || option == "minus" || option == "Minus" || option == "2")
		{
			input_1();
			cout << "Subtraction of " << take_number1 << " and " << take_number2 << " is " << (take_number1 - take_number2) << endl;
		}
		//here we are multipllying two numbers
		else if (option == "Multiplication" || option == "multiplication" || option == "multiply" || option == "Multiply" || option == "3")
		{
			//taking the input from user
			input_1();
			//displaying the answer
			cout << "Multiplication of " << take_number1 << " and " << take_number2 << " is " << (take_number1 * take_number2) << endl;
		}
		//here we are dividing two numbers
		else if (option == "Division" || option == "division" || option == "divide" || option == "Divide" || option == "4")
		{
				//calling method whom take input
				input_1();
			//displaying the answer to the user
			cout << take_number1 << " Ã· " << take_number2 << " = " << (take_number1 / take_number2) << endl;
		}
		//if anyone choose wrong option
		else
		{
			cout << "Ops! something went wrong" << endl;
		}
	}
};

class sci_calculator : public simple_calculator
{
  //asking user that which calculator user wanted to use
  public:
	void sci_ask()
	{
		//here i am asking that which action user want to perform(square root,cube root,hypotenuse,exponenet(a^n))
		cout << "which operation you want to perform" << endl
			 << "1.Square_root" << endl
			 << "2.cube_root" << endl
			 << "3.hypotenuse" << endl
			 << "4.Exponenet's_power" << endl;
		cin >> option;
		cout << "------------------------------------------------------------" << endl;
		//for square root and cube root
		if (option == "1" || option == "square_root" || option == "2" || option == "cube_root")
		{
			cout << "Please enter your number" << endl;
			cin >> take_number1;
			cout << "------------------------------------------------------------" << endl;
			//for square root
			if (option == "1" || option == "square_root")
			{
				cout << "Square root of " << take_number1 << " is " << sqrt(take_number1) << endl;
			}
			//for cube root
			else if (option == "2" || option == "cube_root")
			{
				cout << "Cube root of " << take_number1 << " is " << cbrt(take_number1) << endl;
			}
		}
		//for hypotenuse
		else if (option == "3" || option == "hypotenuse")
		{
			//asking user to give input
			cout << "Please enter base of right angled triangle" << endl;
			cin >> take_number1;
			cout << "Please enter height of right angled triangle" << endl;
			cin >> take_number2;
			cout << "------------------------------------------------------------" << endl;
			//displaying answer to the user
			cout << "Your hypotenuse with base " << take_number1 << " and with height " << take_number2 << " is " << hypot(take_number1, take_number2) << endl;
		}
		//for exponenet(a^n)
		else if (option == "4" || option == "Exponenet's_power" || option == "exponenet's_power")
		{
			//asking user to enter base and exponent
			cout << "Please enter base of your equation" << endl;
			cin >> take_number1;
			cout << "Please enter exponent of your equation" << endl;
			cin >> take_number2;
			
			cout << "------------------------------------------------------------" << endl;
			//displaying answer to user
			cout << "Your answer with base " << take_number1 << " and with exponent " << take_number2 << " is " <<endl; pow(take_number1, take_number2);
		}
		//if user choose wrong option
		else
		{
			cout << "Ops! something went wrong" << endl<<"error code 32!"<<endl;
		}
	}
};
class main_ask : public sci_calculator
{
  protected:
	string main_ask_s;

  public:
	//first constructor which run
	//asking to the user to choose which calculator user want to use(simple or scientific)
	main_ask()
	{
		cout << "Which calculator you want to use?" << endl;
		cout << "1.Scientific" << endl
			 << "2.Simple" << endl;
		cin >> main_ask_s;
		cout << "------------------------------------------------------------" << endl;

		//if user choose Scientific calculator
		if (main_ask_s == "scientific" || main_ask_s == "Scientific" || main_ask_s == "1")
		{
			sci_ask();
			cout << "------------------------------------------------------------" << endl;
		}
		//if user choose simple calculator
		else if (main_ask_s == "simple" || main_ask_s == "Simple" || main_ask_s == "2")
		{
			ask_1();
			logic_1();
			cout << "------------------------------------------------------------" << endl;
		}
		//if user choose wrong option
		else
		{
			cout << "Ops! something went wrong" << endl;
		}
	}
};

int main()
{
	main_ask call;
	return 0;
}
