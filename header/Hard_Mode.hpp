#ifndef HARD_MODE_HPP
#define HARD_MODE_HPP

class Hard_Mode {
    private:
    int Hattempts;
    bool HwordGuesssed;
    char HuserGuess;
    bool HcorrectGuess;
    char Hynretry;
    public:

        void HmainSystem();
        Hard_Mode();
        ~Hard_Mode();
};


#endif