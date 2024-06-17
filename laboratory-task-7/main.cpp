/*
    При написании программ использовать нуль–терминированные строки
    и работать только с типом char *. Длина каждой строки не превосходит 300
    символов. Словом, входящим в состав строки, назовём непрерывную
    последовательность символов, ограниченную символами–разделителями,
    началом и концом строки. Символы, относящиеся к разделителям, определяет
    пользователь, если иное не сказано в условии задачи. Если решить задачу
    невозможно, программа должна выдать соответствующее сообщение.  

    Строка состоит из слов. Найти все самые длинные слова-палиндромы и
    занести их в новую строку. Слова в новой строке должны разделяться точкой
    с запятой.
*/

#include <iostream>
#include <string>
#include "worckWithLines.hpp"
#include <exception>


int main() {
    try {
        char text[300];
        getText(text, "text");
        char delimiters[300] = "";
        getText(delimiters, "delimiters");
        char newLine[300] = "";
        printMaxPolindroms(text, delimiters, newLine);
        std::cout << newLine;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}