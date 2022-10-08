#include<iostream>
#include "rotor.h"

// bool printState(Rotor rotor)
// {
//     std::cout << rotor.getOrientation() << std::endl;
//     std::cout << rotor.getConnection() << std::endl;

//     return 1;
// }

// bool testConnection(Rotor rotor, string testString)
// {
//     for (size_t i = 0; i < testString.length(); i++)
//     {
//         std::cout << testString[i] << " -> " << rotor.findIndexMap(testString[i]) << std::endl;
//     }

//     return 1;
// }

// bool rotorValidator(string str){
//     if(str.length()!=26){
//         return 0;
//     }
//     for (int i = 0; i <str.length(); i++)
//     {
//         if((int)str[i] < 65 || (int)str[i] > 90)
//             return 0;
//     }

//     return 1;
    
// }

void progressBar(int current, int of){
    char background = 177;
    char loader = 219;

    int barLength = 30;

    // int lengthCalc = (current * barLength) / of;

    // system("color 0A");

    printf("\r");

    for (size_t i = 0; i < of; i++)
    {
        printf("%c", background);
    }

    printf("\t[%d/%d]", current, of);

    printf("\r");

    for (size_t i = 0; i < current; i++)
    {
        printf("%c", loader);
    }
    
    Sleep(300);
}

// TESTING SCRIPTS BELOW