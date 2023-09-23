#include<iostream>
#include<string>
#include <cctype>



   bool Palindrome(const std::string & word) {
        
   std::string lowercaseWord;
   for (char c : word) {
       lowercaseWord += std::tolower(c);
   }
   int left = 0;
   int right = lowercaseWord.length() - 1;
   while (left < right) {
       if (lowercaseWord[left] != lowercaseWord[right]) {
       return false;
       }
       left++;
       right--;
   }
   return true;
   }
   int Punctuation(const std::string& inputString) {
       int count = 0;

       for (char c : inputString) {
           if (c == ' ' || c == '.' || c == ',' || c == '!' || c == '?') {
               count++;
           }
       }

       return count;
   }
   std::string findChar(const std::string& inputString, char character) {
       
       size_t foundIndex = inputString.rfind(character);
       if (foundIndex == std::string::npos) {
           return "";
       }
       return inputString.substr(foundIndex);
   }

int main() {
	setlocale(LC_ALL, "RU");
	int n, m;

    std::cout << "Задача №1\n ";
    std::string str;
    char sym;
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);
    std::cout << "Введите символ: ";
    std::cin >> sym;
    std::cin.ignore();
    int count = 0;
    for (char c : str) {
        if (c == sym) {
            count++;
        }
    }
    std::string result1(count, sym);
    std::cout << "Новая строка: " << result1 << std::endl;
 
    std::cout << "Задача №2\n ";
    std::string word;
    std::cout <<"Введите слово: ";
    std::cin >> word;
    std::cin.ignore();
    if (Palindrome(word)) {
        std::cout << "Слово является палиндромом." << std::endl;
    }
    else {
       std::cout << "Слово не является палиндромом." << std::endl;
    }


    std::cout << "Задача №3\n ";
    std::string inputString;
    std::cout << "Введите строку: ";
    std::getline(std::cin, inputString);
    int punctuationCount = Punctuation(inputString);
    std::cout << "Количество пробелов, точек, запятых, восклицательных и вопросительных знаков: " << punctuationCount << std::endl;


    std::cout << "Задача №4\n ";
    std::string istring;
    char character;
    std::cout << "Введите строку: ";
    std::getline(std::cin, istring);
    std::cout << "Введите символ для поиска: ";
    std::cin >> character;
    std::cin.ignore();
    std::string result = findChar(istring, character);
    if (result.empty()) {
        std::cout << "Символ не найден в строке." << std::endl;
    }
    else {
        std::cout << "Подстрока, начиная с последнего вхождения символа: " << result << std::endl;
    }



	return 0;
}