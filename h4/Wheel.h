#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel {
private:
    int size;
    std::string type;

public:
    Wheel(int sz = 0, std::string tp = "");
    int getSize() const;
    void setSize(int sz);
    std::string getType() const;
    void setType(const std::string& tp);
};

#endif
