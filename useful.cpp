std::vector<std::string> split(std::string str, char item) {
	std::vector<std::string> strArray;
	std::stringstream ss(str);
	std::string tempStr;
	while (std::getline(ss, tempStr, item)) {
		strArray.push_back(tempStr);
	}
	return strArray;
}
