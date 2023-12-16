#ifndef MEDIUM_MODE_HPP
#define MEDIUM_MODE_HPP

class Medium_Mode
{
private:
    bool MwordGuessed;
    int ii;
    // bool McorrectGuess = false;
    bool McorrectGuess;
    int Mattempts = 10;
    char MuserGuess;
    char Mynretry;

public:
    void Main_System();
    Medium_Mode();
    ~Medium_Mode();
};

#endif