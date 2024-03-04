#include<iostream>
#include<string>
#include<cctype>

int countNumberWordsOfSequence(const std::string& sequenceWords) {
	int numberOfWords = 1;
	int len = sequenceWords.length();
	for (int i = 0; i < len; i++) {
		if (isupper(sequenceWords[i]))
			numberOfWords++;
	}
	return numberOfWords;
}

int main()
{
	std::string sequenceWords;
	std::getline(std::cin, sequenceWords);
	std::cout << countNumberWordsOfSequence(sequenceWords);
	return 0;
}