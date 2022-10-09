#include <string>
#include "./rotor.h"
#include <iostream>
// #include "./utils.h"
// #include "./io_handler.h"
#include "./reflector.h"

using namespace std;

string operation(string inputText, int shiftThis)
{
    // string rotorOrientations[3];
    string rotorConnection[3];

    // string inputText = fileReader("../input_output/input.txt");
    // string inputText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // string inputText = "";

    string outputText = "";
    string outputForward = "";
    string outputBackward = "";

    int initialShift[3] = {0, 0, 0};

    // string rotorOrientationPath = "../rotors/orientation/rotor";
    // string rotorConnectionPath = "../rotors/connection/rotor";

    // for (size_t i = 0; i < 3; i++)
    // {
    //     // rotorOrientations[i] = fileReader(rotorOrientationPath + (char)i + ".txt");
    //     // rotorConnection[i] = fileReader(rotorOrientationPath + (char)i + ".txt");
    // }

    // rotorOrientations[0] = "JRMXPCSDQHGLAEWVZBIOFYUKTN";
    // rotorOrientations[1] = "NHBACZOEVYPJLGRITQDUXKSWMF";
    // rotorOrientations[2] = "HFGUVZXNJYLSCEPWBRTOKDAIQM";


    // rotorConnection[0] = "EKXPAMUOSQBZFWHDJVIYGRNCTL";
    rotorConnection[0] = "DCBAFE";
    rotorConnection[1] = "KTMWPZOYVXASCQGENULBRIDJHF";
    rotorConnection[2] = "PYKUMSOWQVCXEZGAITFRDJHLBN";

    Rotor rotors[3] = {
        Rotor(rotorConnection[0]),
        Rotor(rotorConnection[1]),
        Rotor(rotorConnection[2])
    };

    // Reflector reflector(fileReader("../rotors/reflector.txt"));
    // Reflector reflector("HMQNIVLAEUWGBDTXCZYOJFKPSR");
    Reflector reflector("CFAEDB");

    for (size_t i = 0; i < 3; i++)
    {
        rotors[i].setShift(initialShift[i]);
    }

    rotors[0].setShift(shiftThis);
    

    // ENCODING BELOW
    int _shift_ = 0;
    for (size_t i = 0; i < inputText.length(); i++)
    {

        // cout << "SHIFTS :\t";
        // cout << _shift_ << "\t";
        // cout << rotors[0].getShift() << "\t";
        // cout << rotors[1].getShift() << "\t";
        // cout << rotors[2].getShift() << "\n";

        // progressBar(i, inputText.length());

        if (inputText[i] >= 65 && inputText[i] <= 90)
        {

            char encodedCharF = inputText[i];

            encodedCharF = rotors[0].findIndexMap(encodedCharF);
            // encodedCharF = rotors[1].findIndexMap(encodedCharF);
            // encodedCharF = rotors[2].findIndexMap(encodedCharF);

            encodedCharF = reflector.findIndexMap(encodedCharF);

            // encodedCharF = rotors[2].findIndexMap(encodedCharF);
            // encodedCharF = rotors[1].findIndexMap(encodedCharF);
            encodedCharF = rotors[0].findIndexMap(encodedCharF);

            // outputText += encodedChar;
            outputForward += encodedCharF;
        }
        else
        {
            outputForward += inputText[i];
        }

        // ROTATION HANDLING HERE
        // ++_shift_;
        // rotors[0].incrementShift();
        // if (_shift_ % 26 == 0)
        //     rotors[1].incrementShift();
        // if (_shift_ % (26 * 26) == 0)
        //     rotors[2].incrementShift();
        // // _____________________________________
    }

    // for (size_t i = 0; i < outputForward.length(); i++)
    // {
    //     // progressBar(i, inputText.length());

    //     if (outputForward[i] >= 65 && outputForward[i] <= 90)
    //     {

    //         char encodedCharB = outputForward[i];

    //         encodedCharB = reflector.findIndexMap(encodedCharB);

    //         encodedCharB = rotors[2].findIndexMap(encodedCharB);
    //         encodedCharB = rotors[1].findIndexMap(encodedCharB);
    //         encodedCharB = rotors[0].findIndexMap(encodedCharB);

    //         // encodedChar = rotors[2].findIndexMap(encodedChar);
    //         // encodedChar = rotors[1].findIndexMap(encodedChar);
    //         // encodedChar = rotors[0].findIndexMap(encodedChar);

    //         // outputText += encodedChar;
    //         outputBackward += encodedCharB;
    //     }
    //     else
    //     {
    //         outputText += inputText[i];
    //     }
    // }

    // fileWriter("../input_output/output.txt", outputText);
    // return outputText;
    return outputForward;
}