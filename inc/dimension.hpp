/********************************************************************
 ** Filename      : dimension.hpp
 ** Author        : jks
 ** Time          : Fri Jun 15 17:13:19 2012
 ** version       : 0.0.1
 ** Email         : chinatianma # gmail
 ** Last modified : Fri Jun 15 17:13:19 2012
 ********************************************************************/
/** Main references
 ** David Abrahams, Aleksey Gurtovoy. C++ Template Metaprogramming. ISBN 0321227255, http://www.awprofessional.com/titles/0321227255. Copyright (c) 2005 by Pearson Education, Inc. Reprinted with permission.
 **/

#ifndef DIMENSION_HPP
#define DIMENSION_HPP

#include <boost/mpl/vector_c.hpp>
namespace bmp = boost::mpl;

/**
 ** These dimensions are from:
 ** The International System of Units (SI) (8th ed.), ISBN 92-822-2213-6
 ** 
 ** Sort: L M T I Theta N J
 ** l/x/r/etc m t I/i T n Iv
 **/
// Base quantity
typedef bmp::vector_c<int, 1, 0, 0, 0, 0, 0, 0> length;
typedef bmp::vector_c<int, 0, 1, 0, 0, 0, 0, 0> mass;
typedef bmp::vector_c<int, 0, 0, 1, 0, 0, 0, 0> q_time;
typedef bmp::vector_c<int, 0, 0, 0, 1, 0, 0, 0> electric_current;
typedef bmp::vector_c<int, 0, 0, 0, 0, 1, 0, 0> thermodynamic_temperature;
typedef bmp::vector_c<int, 0, 0, 0, 0, 0, 1, 0> amount_of_substance;
typedef bmp::vector_c<int, 0, 0, 0, 0, 0, 0, 1> luninous_intensity;
// Derived quanlity
typedef bmp::vector_c<int, 2, 0, 0, 0, 0, 0, 0> area;
typedef bmp::vector_c<int, 3, 0, 0, 0, 0, 0, 0> volume;
typedef bmp::vector_c<int, 1, 0, -1, 0, 0, 0, 0> speed;
typedef bmp::vector_c<int, 1, 0, -2, 0, 0, 0, 0> acceleration;
typedef bmp::vector_c<int, -1, 0, 0, 0, 0, 0, 0> wavenumber;
typedef bmp::vector_c<int, -3, 1, 0, 0, 0, 0, 0> density;
typedef bmp::vector_c<int, -2, 1, 0, 0, 0, 0, 0> surface_density;
typedef bmp::vector_c<int, 3, -1, 0, 0, 0, 0, 0> specific_volume;
typedef bmp::vector_c<int, -2, 0, 0, 1, 0, 0, 0> current_density;
// ...... ellipsis some ......
// select some below
typedef bmp::vector_c<int, 0, 0, 0, 0, 0, 0, 0> quantity_one;
typedef bmp::vector_c<int, 0, 0, -1, 0, 0, 0, 0> frequency;
typedef bmp::vector_c<int, 1, 1, -2, 0, 0, 0, 0> force;
typedef bmp::vector_c<int, -1, 1, -2, 0, 0, 0, 0> pressure;
typedef bmp::vector_c<int, 2, 1, -2, 0, 0, 0, 0> energy;
typedef bmp::vector_c<int, 2, 1, -3, 0, 0, 0, 0> power;

template <class T, class Dimension>
class quantity
{
public:
    explicit quantity(T x): m_value(x)
        {}

    T value() const
        {
            return m_value;
        }

private:
    T m_value;
};

template <class T1, class T2>
quantity<T1, T2> operator+(quantity<T1, T2> x, quantity<T1, T2> y)
{
    return quantity<T1, T2>(x.value() + y.value());
}

template <class T1, class T2>
quantity<T1, T2> operator-(quantity<T1, T2> x, quantity<T1, T2> y)
{
    return quantity<T1, T2>(x.value() - y.value());
}



#endif // DIMENSION_HPP

