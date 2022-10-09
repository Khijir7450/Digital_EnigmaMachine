#include <iostream>
#include <string>
#include <windows.h>
#include "./headers/controller.h"

using namespace std;

void printASCII(string input){
    for (size_t i = 0; i < input.length(); i++)
    {
        cout << (int)input[i] << ", " ;
    }
    
}

int main(int argc, char const *argv[])
{

    // string inputText = "CXVGMYXJRQNPFKVXHXKZBJUHVD";
    string inputText = "DAC";
    // string inputText = "BFE";

    for (size_t i = 0; i < 5; i++)
    {
        cout << "\n\n============================\n"
             << endl;

        string encoded = operation(inputText, i);
        string decoded = operation(encoded, i);

        cout << "INPUT TEXT : \t" << inputText << "\t" ;
        printASCII(inputText);
        cout << endl;
        cout << "ENCODED TEXT : \t" << encoded << "\t" ;
        printASCII(encoded);
        cout << endl;
        cout << "DECODED TEXT : \t" << decoded << "\t";
        printASCII(decoded);
        cout << endl;

    }

    // for (size_t i = 0; i < 37; i++)
    // {
    //     cout << i << " " << (i%13) << endl;
    // }
    

    // for (size_t i = 0; i < 3; i++)
    // {
    //     cout << (int)encoded[i] << endl;
    // }

    return 0;
}

// DEBUG ESSENTIALS ------
// string testString = "FEDCBA";
// string Connection = "EDFBAC";
// string Orientation = "ABCDEF";
// =============================

// INITIALIZING ROTOR CONFIGS
// Rotor rotor(Connection, Orientation);

// Rotor rotors[3] = {
//     Rotor("CDABR", Orientation),
//     Rotor("FDEWK", Orientation),
//     Rotor("OIHPH", Orientation)};

// for (size_t i = 0; i < 3; i++)
// {
//     cout << "index " << i << " <<<>>> " << rotors[i].getConnection() << endl;
// }

// ROTATION ONCE
// cout << rotor.rotate() << endl;

// string s;
// s=fileReader("./assets/input_output/input.txt");
// cout<<s<<endl;
// fileWriter("./assets/input_output/output.txt", s);

/**
 * @brief
 *

============================ PRE ROTATE =============================
ABCDEF
EDFBAC

FIND index MAP DEBUG ___________
INPUT CHARACTER E
ROTOR ORIENTATION MAP E
ROTOR CONNECTION MAP A

FIND index MAP DEBUG ___________

E -> A

FIND index MAP DEBUG ___________
INPUT CHARACTER D
ROTOR ORIENTATION MAP D
ROTOR CONNECTION MAP B

FIND index MAP DEBUG ___________

D -> B

FIND index MAP DEBUG ___________
INPUT CHARACTER F
ROTOR ORIENTATION MAP F
ROTOR CONNECTION MAP C

FIND index MAP DEBUG ___________

F -> C

FIND index MAP DEBUG ___________
INPUT CHARACTER B
ROTOR ORIENTATION MAP B
ROTOR CONNECTION MAP D

FIND index MAP DEBUG ___________

B -> D

FIND index MAP DEBUG ___________
INPUT CHARACTER A
ROTOR ORIENTATION MAP A
ROTOR CONNECTION MAP E

FIND index MAP DEBUG ___________

A -> E

FIND index MAP DEBUG ___________
INPUT CHARACTER C
ROTOR ORIENTATION MAP C
ROTOR CONNECTION MAP F

FIND index MAP DEBUG ___________

C -> F
1
============================ POST ROTATE =============================
BCDEFA
EDFBAC

FIND index MAP DEBUG ___________
INPUT CHARACTER E
ROTOR ORIENTATION MAP F
ROTOR CONNECTION MAP C

FIND index MAP DEBUG ___________

E -> C

FIND index MAP DEBUG ___________
INPUT CHARACTER D
ROTOR ORIENTATION MAP E
ROTOR CONNECTION MAP A

FIND index MAP DEBUG ___________

D -> A

FIND index MAP DEBUG ___________
INPUT CHARACTER F
ROTOR ORIENTATION MAP A
ROTOR CONNECTION MAP E

FIND index MAP DEBUG ___________

F -> E

FIND index MAP DEBUG ___________
INPUT CHARACTER B
ROTOR ORIENTATION MAP C
ROTOR CONNECTION MAP F

FIND index MAP DEBUG ___________

B -> F

FIND index MAP DEBUG ___________
INPUT CHARACTER A
ROTOR ORIENTATION MAP B
ROTOR CONNECTION MAP D

FIND index MAP DEBUG ___________

A -> D

FIND index MAP DEBUG ___________
INPUT CHARACTER C
ROTOR ORIENTATION MAP D
ROTOR CONNECTION MAP B

FIND index MAP DEBUG ___________

C -> B
 *
 */