# include <iostream>
# include <fstream>
# include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
		return std::cout << "Invalid parameters" << std::endl, 1;
	
	std::ifstream fs(argv[1]);
	if (!fs)
		return std::cout << "Unable to open : " << argv[1] << std::endl, 1;
	
	std::string filename = argv[1];
	std::ofstream ofs(filename.append(".replace"));
	if (!ofs)
		return std::cout << "Unable to open : " << filename << std::endl, 1;

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ostringstream oss;
	oss << fs.rdbuf();
	std::string text = oss.str();

	if (text.empty())
		return 0;

	if (s1.empty() || s1 == s2)
	{
		ofs << text;
		return 0;
	}

	std::size_t index;
	std::size_t	i = 0;

	index = text.find(s1, i);
	while (index != std::string::npos)
	{
		ofs << text.substr(i, index - i) << s2;
		i = index + s1.length();
		index = text.find(s1, i);
	}
	if (i != text.length())
		ofs << text.substr(i, text.length() - i);
	return 0;
}
