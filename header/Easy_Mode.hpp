#ifndef EASY_MODE_HPP
#define EASY_MODE_HPP

class Easy_Mode
{
private:
    bool wordGuessed = false; 
    char userGuess;
    int attempts = 0;
    char ynretry;
    bool correctGuess;

public:
    void mainSystem();
    Easy_Mode();
    ~Easy_Mode();
};

#endif