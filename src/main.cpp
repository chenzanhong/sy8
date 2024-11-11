#include <iostream> 
#include "Calculator.h" 
using namespace std; 

Operation getOperation(char input) { 
	switch (input) { 
	case '+': return Operation::ADD;
	case '-': return Operation::SUBTRACT; 
	case '*': return Operation::MULTIPLY; 
	case '/': return Operation::DIVIDE; 
	default: throw invalid_argument("非法运算符"); 
	}
}
int main() { 
	Calculator calc; 
	double num1, num2; 
	char operation; 
	char continueCalculation = 'y'; 
	cout<<"欢迎您使用计算器！！！"<<endl;
	while (continueCalculation == 'y' || continueCalculation == 'Y') { 
		cout << "Please enter the first number:\n"; 
		cin >> num1; 
		cout << "Please enter the second number:\n"; 
		cin >> num2; 
		cout << "Please select the operation symbol (+, -, *, /): \n"; 
		cin >> operation; 
	
		try { 
			double result = calc.calculate(num1, num2, getOperation(operation)); 
			cout << "Result is : " << result << endl; 
		} catch (const invalid_argument& e) { 
			cout << "Error is : " << e.what() << endl; 
		} 
		
		cout << "Do you want to continue using this calculator (y/n): "; 
		cin >> continueCalculation; 
	} 

	return 0; 
} 