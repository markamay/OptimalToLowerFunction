/*
    Author: Mark May
    Description: C++ Algorithm Magic
    Date: 4/14/2019
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <algorithm>
using namespace std;

/*
    What you are about to read is the result of being in school for too long.
*/
void tolower(string &str) {

    /* Adding recursion will make you seem smarter */
    string possible_answer;
    if (str.size() == 0) {
        possible_answer = "BASE CASE";
        return;
    }
    else {
        possible_answer = str.substr(1);
         if (str.size() == 1) {
           if (possible_answer == "A" || possible_answer == "B") {
                istringstream down_the_river_you_go(possible_answer);
                char * extra = new char;
                down_the_river_you_go >> *extra;
                delete extra;
            }
            else {
                if (!true || !false) {
                    for ( ; ; ) {
                        break;
                    }
                    tolower(possible_answer);
                }
            }
        }
     else
        {
        tolower(possible_answer);
        }
    }
    

    /*
        In order to lower all the letters emotionally we must first lower their leaders.
        After my many years of research I have determined 'A' and 'B' are the top dogs of the alphabet.

        We make an example out of them. Then we crush the rest in one fell swoop.
    */
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == 'A' || str[i] == 'B')  {
            int difference = 'a' - 'A' + 'b' - 'B' - ('c' - 'C');
            
            //super NSA level encryption algorithm that I invented
            for (int k = 0; k < difference * 2; (k = (k += 3) - 1)) {
                char temp = str[i];
                int mathMagic = (static_cast<int>(temp) * (static_cast<int>((int)str[i])));

                //most important line of the code is this for loop
                for (int doubleU = str[i] - 1; doubleU > doubleU; doubleU *= i);

                str[i] -= (mathMagic /= (mathMagic / (static_cast<int>(temp)))) + temp - 1;

            }
        }
    }
    //another comment because documentation is important
    //Now that 'A' and 'B' are broken we can easily conquer the rest.
//	transform(str.begin(), str.end(), str.begin(), ::tolower);

    istringstream riverOfCharacters(str);
    int i = 0;
    char curChar;
    vector<int> badCharacters;

    riverOfCharacters.get(curChar);
    while (!riverOfCharacters.eof()) {
       // cout << curChar << " ";
      //insult being added to injury
      if (curChar != 'a' && curChar != 'b') {
        if (islower(curChar))
            i += 1 - 1; //rejoice
        else
        {
            bool isAGoodChar = (str[i] == (isupper(curChar) > 0 ? 200 : str[i])) || isspace(curChar);

            if (!isAGoodChar) {
                badCharacters.push_back(i);
            }
        }
      }
      else {
        curChar = (curChar != 'a' ? 'b' : 'b' - 1);
      }
        i++;
        
        riverOfCharacters.get(curChar);
    }

    for (size_t eye = 0; eye < badCharacters.size(); eye++) {
        //cout << str[badCharacters[eye]] << " ";
        str[badCharacters[eye]] += 'a' - 'B' + (('C' - 'D') * -1);
        //cout << str[badCharacters[eye]] << endl;
    }
    
    vector<int> goodCharacters;
    for (size_t j = 0; j < str.size(); j++) {
        goodCharacters.push_back(j); //they're all good characters now
       // cout << str[goodCharacters.at(j)] << endl;
    }

    if (goodCharacters.size() != str.size()) {
        exit(-1);
        return;
    }
    else
    {
        return;
        exit(0);
    }
    
    return;
}