//Example/testing file of the tolower function.
#include <iostream>
#include <string>
#include "tolower.h"

int main() {
    std::string testString; //camelCase cause boss.

    std::cout << "ENTER A STRING! ANY STRING!" << std::endl;
    std::cout << ">";
    std::getline(std::cin, testString);
    AUTHORIZED_PERSONEL_ONLY::CONFIDENTIAL::tolower(testString);
    std::cout << "Whala: " << testString << std::endl;

    return 0;
}