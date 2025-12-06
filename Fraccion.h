#ifndef FRACCION_H
#define FRACCION_H

#include <string>
using std::string;

class Fraccion
{
private:
    int num_;
    int den_;

public:
    // Constructores
    Fraccion();
    Fraccion(int num, int den);

    int  get_num() const;
    int  get_den() const;

    void set_num(int num);
    void set_den(int den);

    double calc_valor_real() const;
    void sumar(const Fraccion& otra);

    string to_string() const;
};

#endif
