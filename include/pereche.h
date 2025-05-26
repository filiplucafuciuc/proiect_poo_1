#include <iostream>

// #include "pereche.

template <typename T1, typename T2>
class Pereche {
private:
    T1 x;
    T2 y;
public:
    Pereche();
    Pereche(const T1& first, const T2& second);
    T1 getFirst() const;
    T2 getSecond() const;

    friend std::ostream& operator<<(std::ostream& os, const Pereche& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

#include "pereche.tpp"

