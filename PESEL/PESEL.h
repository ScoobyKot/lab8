

#ifndef JMP2_PESEL_H
#define JMP2_PESEL_H
#include <iostream>

class PESEL : public std::error_code {
private:
    char pesel[11]{};
public:
    PESEL(char *pesel);

    ~PESEL();

    bool validatePESEL(const char *);
};


#endif //JMP2_PESEL_H
