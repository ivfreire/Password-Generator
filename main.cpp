// Created on July 3, 2019 by Icaro Freire.

#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

const std::string lowercases	= "abcdefghijklmnopqrstuvwxyz";
const std::string uppercases	= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const std::string numbers		= "1234567890";
const std::string miscs			= "!@#$%*()[]{}-+.,:;<> ";

std::string select_chars(char* argv);
std::string generate_password(std::string chars, int length);

int main(int argc, char* argv[]) {
	std::string chars	= "";
	int length;

	chars				= select_chars(argv[1]);

	if (argv[2]) {
		std::stringstream ss(argv[2]);
		ss >> length;
		if (length == 0) length = 16;
	}

	std::string password = generate_password(chars, length);

	std::cout << password << std::endl;

	return 0;
}

std::string select_chars(char* argv) {
	int level = 0;
	if (argv) {
		std::stringstream ss(argv);
		ss >> level;
	}
	std::string chars = "";
	if (level >= 0) chars += lowercases;
	if (level >= 1) chars += uppercases;
	if (level >= 2) chars += numbers;
	if (level >= 3) chars += miscs;
	return chars;
}

std::string generate_password(std::string chars, int length) {
	std::string password = "";
	srand(time(0));
	for (int i = 0; i < length; i++) {
		int index = rand() % chars.length();
		password += chars[index];
	}
	return password;
}
