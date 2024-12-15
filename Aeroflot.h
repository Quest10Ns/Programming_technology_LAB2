#ifndef PROGRAMMING_TECHNOLOGY_LAB2_AEROFLOT_H
#define PROGRAMMING_TECHNOLOGY_LAB2_AEROFLOT_H
#include <iostream>
#include <cstring>

class AEROFLOT {
private:
    char* destination;
    int flightNumber;
    char* planeType;

public:
    AEROFLOT();
    AEROFLOT(const char* dest, int flightNum, const char* plane);
    AEROFLOT(const AEROFLOT& other);
    ~AEROFLOT();

    const char* getDestination() const;
    int getFlightNumber() const;
    const char* getPlaneType() const;

    void setDestination(const char* dest);
    void setFlightNumber(int flightNum);
    void setPlaneType(const char* plane);

    friend std::ostream& operator<<(std::ostream& os, const AEROFLOT& aero);
    friend std::istream& operator>>(std::istream& is, AEROFLOT& aero);
    AEROFLOT& operator=(const AEROFLOT& other);
};

#endif
