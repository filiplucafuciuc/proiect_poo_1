template <typename T1, typename T2>
Pereche<T1, T2>::Pereche() : x(), y() {}

template <typename T1, typename T2>
Pereche<T1, T2>::Pereche(const T1& first, const T2& second) : x(first), y(second) {}

template <typename T1, typename T2>
T1 Pereche<T1, T2>::getFirst() const { return x; }

template <typename T1, typename T2>
T2 Pereche<T1, T2>::getSecond() const { return y; }

