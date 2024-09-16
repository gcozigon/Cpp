#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void	replaceInString(std::string &content, const std::string &s1, const std::string &replace)
{
	int	pos;

	pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, replace);
		pos += replace.length();
	}
}

int	main(int argc, char *av[])
{
	const char	*filename;

	if (argc != 4)
		return (std::cerr << "Utilisation : " << av[0] << " <filename> <s1> <s2>" << std::endl, 1);
	filename = av[1];
	std::string s1 = av[2];
	
	std::string s2 = av[3];
	std::ifstream inputFile(filename);
	if (!inputFile.is_open())
		return (std::cerr << "Erreur lors de l'ouverture du fichier : " << filename << std::endl, 1);
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();
	std::string outputFilename = std::string(filename) + ".replace";
	std::ofstream outputFile(outputFilename);
	if (!outputFile.is_open())
		return (std::cerr << "Erreur lors de la création du fichier de sortie : " << outputFilename << std::endl, 1);
	if (s1 == "")
	{
		outputFile << content;
		inputFile.close();
		outputFile.close();
		return (0);
	}
	replaceInString(content, s1, s2);


	outputFile << content;
	inputFile.close();
	outputFile.close();
	return (0);
}
