#include <iostream>

int main(int argc, char* argv[])
{
	std::locale::global(std::locale("German_germany"));
  
  // test output
	std::cout << "Hallo, sch�ne Welt!" << std::endl;
}