// reduce.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>

int main()
{
	bool wasText = false;
	std::string temp;
	std::getline(std::cin, temp, '\t');
	std::string t = temp;
	std::string A;
	std::getline(std::cin, A);
	int res = stoi(A);
	while (std::getline(std::cin, temp, '\t') && std::getline(std::cin, A)){
		if (t == temp) {
			res += stoi(A);
			wasText = true;
		}
		else {
			std::cout << t << "\t" << res << std::endl;
			t = temp;
			res = stoi(A);
		}
	}
	if (wasText) {
		std::cout << t << "\t" << res << std::endl;
	}
    return 0;
}

