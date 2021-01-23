/* Aleks McCormick
 * UAF CS 202
 * Homework 0
 * 01/22/2021
 */
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::strtod;

double cpp_ftoc(const char* str);
double c_ctof(const char* str);

int main(int argc, const char** argv) {
	if(argc >= 2)//checks to make sure that the command line arguments were implemented
	{
		if(argv[1] == string("--ftoc"))//handles the conversion from F to C
		{
			cout << cpp_ftoc(argv[2]);
		}
		else if(argv[1] == string("--ctof"))//handles the conversion from C to F
		{
			cout << c_ctof(argv[2]);
		}
	}
}

double cpp_ftoc(const char* str){//(32°F − 32) × 5/9 = 0°C
	cout << str << endl << strtod(str, (char **) "\0") << endl;// print to the screen to make sure that the code outputs something
	double temp = strtod(str, (char **)str );//try storing it in a variable to see if that works
	cout << temp << endl;//print the variable
	return temp;
}

double c_ctof(const char* str){//(0°C × 9/5) + 32 = 32°F
	return strtod(str,(char **)"\0");
}
