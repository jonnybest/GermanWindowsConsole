#include <iostream>

int main(int argc, char* argv[])
{
	std::locale::global(std::locale("German_germany"));
	std::cout << "Hallo, sch�ne Welt!" << std::endl;
}