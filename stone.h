//
// Created by K i D on 17.05.2018.
//

#ifndef CLION_STONE_H
#define CLION_STONE_H

class Stonewt
{
private:
    enum {Lbs_per_stn=14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
    operator int() const;
    operator double() const;
    friend bool operator<(const Stonewt & s1, const Stonewt & s2);
    friend bool operator<=(const Stonewt & s1, const Stonewt & s2);
    friend bool operator>(const Stonewt & s1, const Stonewt & s2);
    friend bool operator>=(const Stonewt & s1, const Stonewt & s2);
    friend bool operator==(const Stonewt & s1, const Stonewt & s2);
    friend bool operator!=(const Stonewt & s1, const Stonewt & s2);
};
#endif //CLION_STONE_H
