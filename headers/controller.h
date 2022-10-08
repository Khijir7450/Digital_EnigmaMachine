#include <string>
#include "./rotor.h"
// #include "./utils.h"
// #include "./io_handler.h"
#include "./reflector.h"

string operation()
{
    string rotorOrientations[3];
    string rotorConnection[3];

    
    // string inputText = fileReader("../input_output/input.txt");
    string inputText = "THIS IS A TEST FOR ENCODING A TEXT";
    string outputText = "\n";

    // string rotorOrientationPath = "../rotors/orientation/rotor";
    // string rotorConnectionPath = "../rotors/connection/rotor";

    // for (size_t i = 0; i < 3; i++)
    // {
    //     // rotorOrientations[i] = fileReader(rotorOrientationPath + (char)i + ".txt");
    //     // rotorConnection[i] = fileReader(rotorOrientationPath + (char)i + ".txt");
    // }

    rotorOrientations[0] = "JRMXPCSDQHGLAEWVZBIOFYUKTN";
    rotorOrientations[1] = "NHBACZOEVYPJLGRITQDUXKSWMF";
    rotorOrientations[2] = "HFGUVZXNJYLSCEPWBRTOKDAIQM";
    rotorConnection[0] = "EKXPAMUOSQBZFWHDJVIYGRNCTL";
    rotorConnection[1] = "KTMWPZOYVXASCQGENULBRIDJHF";
    rotorConnection[2] = "PYKUMSOWQVCXEZGAITFRDJHLBN";
    

    Rotor rotors[3] = {
        Rotor(rotorOrientations[0], rotorConnection[0]),
        Rotor(rotorOrientations[1], rotorConnection[1]),
        Rotor(rotorOrientations[2], rotorConnection[2]),
    };

    // Reflector reflector(fileReader("../rotors/reflector.txt"));
    Reflector reflector("HMQNIVLAEUWGBDTXCZYOJFKPSR");

    // ENCODING BELOW

    for (size_t i = 0; i < inputText.length(); i++)
    {
        // progressBar(i, inputText.length());

        if (inputText[i] >= 65 && inputText[i] <= 90)
        {

            char encodedChar = inputText[i];
            encodedChar = rotors[0].findIndexMap(encodedChar);
            encodedChar = rotors[1].findIndexMap(encodedChar);
            encodedChar = rotors[2].findIndexMap(encodedChar);

            encodedChar = reflector.findIndexMap(encodedChar);

            encodedChar = rotors[2].findIndexMap(encodedChar);
            encodedChar = rotors[1].findIndexMap(encodedChar);
            encodedChar = rotors[0].findIndexMap(encodedChar);
            


            outputText += encodedChar;
        }
        else
        {
            outputText += inputText[i];
        }

    }

    // fileWriter("../input_output/output.txt", outputText);
    return outputText;
}