/* Написать программу, которая выводит на экран размеры фундаментальных типов. */


#include <iostream>
#include <cstdlib>
using namespace std;

class Types
{
public:

void sizes(char str)
	{
	switch(str){
	case 1:
		cout << "Size of char : " << sizeof(char) << endl;
		break;
	case 2:
		cout << "Size of int : " << sizeof(int) << endl;
		break;
	case 3:
		cout << "Size of float : " << sizeof(float) << endl;
		break;
	case 4:
		cout << "Size of double : " << sizeof(double) << endl;
		break;
	default:
		cout << "You entered wrong number." << endl;
		break;	 }		

	}
};

int main(int argc, char* argv[])
{
	int str;	
	cout << "Enter the type you want e.g (char, int, float, double)\n";
	cout<<"1. Char\n";
	cout<<"2. Int\n";
	cout<<"3. Float\n";
  	cout<<"4. Double\n";
	cin >> str;	
		
	Types types;
	types.sizes(str);
	
	
	
	
	return 0;
}


