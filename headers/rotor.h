#ifndef ROTOR
#define ROTOR
#include <string>

using namespace std;

class Rotor
{
private:
    string rotorConnection;
    // string rotorOrientation;
    int shift;
public:
    
    Rotor(){}


    Rotor(string rotorConnection)
    {
        /**
         * @brief 
         * 
         * <rotorConnection> 
         *  - is immutable mapping each rotor teeth connection
         * <rotorOrientation> 
         *  - is mutable, rotates counter-clockwise one step each time
         * 
         */
        this->rotorConnection = rotorConnection;
        // this->rotorOrientation = rotorOrientation;
        this->shift = 0;
    }

    string getConnection()
    {
        return rotorConnection;
    }
    // string getOrientation()
    // {
    //     return rotorOrientation;
    // }

    bool setConnection(string rotorConnection)
    {
        this->rotorConnection = rotorConnection;
        return true;
    }

    // bool setOrientation(string rotorOrientation)
    // {
    //     this->rotorOrientation = rotorOrientation;
    //     return true;
    // }

    // bool rotate()
    // {
    //     /**
    //      * @brief 
    //      * string rotation by one step
    //      * FIRST element is pushed to the end
    //      * Rest of the elements are shifted one index to the left [index -> index - 1]
    //      * 
    //      */

    //     char swap = rotorOrientation[0];
    //     int i;
    //     for (i = 1; i < rotorOrientation.length(); i++)
    //     {
    //         rotorOrientation[i - 1] = rotorOrientation[i];
    //     }
    //     rotorOrientation[i - 1] = swap;
    //     return true;
    // }

    bool setShift(int shift){
        this->shift = shift;
        return true;
    }

    int getShift(){
        return shift;
    }

    bool incrementShift(){
        shift = (shift + 1) % 26;

        return true;
    }

    char findIndexMap(char indexChar)
    {
        /**
         * @brief 
         * maps current characters destination using 1d adjacency list
         * <indexChar> 
         *  - the input character
         * {OPERATION}
         *  - indexChar is reduced to basic int [A -> 65, A-65 == 0] for index mapping to the orientation string
         *  - respective character is obtained and reduced to basic int again <tempMapChar>
         *  - the connection string is utilized to search the char that the <tempMapChar> points to
         */
        int absIndex = (indexChar + shift - 65) % 26;
        // cout << "old POE : " << indexChar - 65 << " new POE : " << absIndex << endl;
        return rotorConnection[absIndex];
    }
};
#endif