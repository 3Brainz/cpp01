
#include <replace.h>

int	ft_perror(std::string	str)
{
	std::cout << str << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	std::string		line;
	std::fstream	file;
	std::fstream	replace;
	std::string		s1;
	std::string		s2;
	unsigned long	pos;

	if (argc < 4)
		return (ft_perror("NOT ENOUGH FILES"));
	s1 = argv[2];
	s2 = argv[3];
	file.open(argv[1]);
	if (file.is_open())
	{
		line = argv[1];
		line.append(".replace");
		replace.open(line, std::ios::out | std::ios::trunc);
		if (!replace.is_open())
			return (ft_perror("COULD NOT CCREATE FILE"));
		pos = 0;
		while (std::getline(file, line))
		{
			pos = line.find(s1);
			while (pos != std::string::npos)
			{
       			line.replace(line.find(s1, pos), s1.length(), s2);
				pos = line.find(s1, pos + s2.length() + 1);
			}
			replace << line << std::endl;
		}
		file.close();
		replace.close();
	}
	else
		return (ft_perror("COULD NOT OPEN FILE"));
	return (0);
}
