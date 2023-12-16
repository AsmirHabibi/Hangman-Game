#ifndef IMPOSSIBLE_MODE_HPP
#define IMPOSSIBLE_MODE_HPP


class IMPOSSIBLE_Mode
{
private:
    /* data */
    int Iattempts;
    bool IwordGuesssed;
    bool IcorrectGuess;
    char IuserGuess;
    char Iynretry;
public:
    void ImainSystem();
    IMPOSSIBLE_Mode();
    ~IMPOSSIBLE_Mode();
};






#endif