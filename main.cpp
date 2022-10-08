#include <iostream>
#include <string>
#include <windows.h>
#include "./headers/controller.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << operation() << endl;

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