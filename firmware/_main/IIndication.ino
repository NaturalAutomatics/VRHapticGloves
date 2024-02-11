//Interface for communication with Screen
// By Alex Noyanov © 2024

class IIndication {

  public:
    virtual void init() = 0;

    virtual void setHealth(int) = 0;

    virtual bool showText(char* inputText) = 0;
    
};
