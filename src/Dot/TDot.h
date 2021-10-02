//
// Created by Kolya on 02.10.2021.
//

#ifndef POLYGONS_MIPT_SEM3_TDOT_H
#define POLYGONS_MIPT_SEM3_TDOT_H

template <typename T>
inline
T tsqr(T a){
    return a*a;
}

template<typename T, size_t N>
class TDot{
private:
    T x[N];
public:
    TDot(T const (&in_x) [N]){
        for(size_t idx = 0; idx != N; ++idx){
            x[idx] = in_x[idx];
        }
    }

    T sqr_distance(TDot<T, N> const &p) const{
        auto s = tsqr(x[0] - p.x[0]);
        for(size_t idx = 1; idx != N; ++idx){
            s += tsqr(x[idx] - p.x[idx]);
        }
        return s;
    }

    TDot<T, N> middle(TDot<T, N> const &p) const{
        T init[N];
        for(size_t idx = 0; idx != N; ++idx){
            init[idx] = (x[idx] + p.x[idx]) / 2;
        }
        return TDot<T, N>(init);
    }
};

#endif //POLYGONS_MIPT_SEM3_TDOT_H
