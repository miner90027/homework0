#include <iostream>
//#include <vector>
using std::cout;
using std::endl;
using std::string;

double cpp_ftoc(const char* str);
double c_ctof(const char*str);

int main(int argc, const char** argv) {
	if(argc >= 2)//checks to make sure that the command line arguments were implemented
	{
		if(argv[1] == string("--ftoc"))//handles the conversion from F to C
		{
			cout << "Conversion from f to c";
		}
		else if(argv[1] == string("--ctof"))//handles the conversion from C to F
		{
			cout << "Conversion from c to f";
		}
	}
}

double cpp_ftoc(const char* str){
	return 0;
}

double c_ctof(const char*str){
	return 0;
}
