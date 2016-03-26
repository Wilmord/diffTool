/*
*@Author : Wilmord
* @Date  : 22.01.2016
* @Info  : This program takes two files as arguments and compare them
*		   by calling Windows System's diff command.
*/

#include <iostream>

int main(int argc, char const *argv[])
{

	std::string line1, line2;
	if(argc != 3 )
	{
		std::cout << "usage: diffTool.exe <file_1> <file_2>" << std::endl;
		return 0;
	}

	std::string systemCommand = "diff -q "; // It gives brief info. Files are different or not.
	std::string firstFile(argv[1]);
	std::string secondFile(argv[2]);
	std::string files = firstFile.append(" ").append(secondFile);

	std::string myCommand = systemCommand.append(files);
	system(myCommand.c_str());

	return 0;
}
