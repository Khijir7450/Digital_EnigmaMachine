#include<string>
using namespace std;

class Reflector
{
private:
    string reflectorConnection;

    bool validator(string inputMap){
        for (size_t i = 0; i < inputMap.length(); i++)
        {
            if(inputMap[i] < 48 || inputMap[i] > 57)
                return false;
        }
        return true;
    }
public:
    Reflector(){};
    Reflector(string reflectorConnection){
        this->reflectorConnection=reflectorConnection;
    }


    string getReflectorConnetion(){
        return reflectorConnection;
    }


    bool setReflectorConnection(string reflectorConnection){
        this->reflectorConnection=reflectorConnection;
    }


    char findIndexMap(char IndexChar){
        return reflectorConnection[IndexChar - 65];        // [-48 + 65]
    }

};

