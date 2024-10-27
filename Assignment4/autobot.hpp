/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Autobot class. Contains declaration of all Armor class methods and fields. Autobot class is child class of Transformer class with its own fields and methods.
*/
#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"

class Autobot : public Transformer
{
private:
    bool can_fly;
    bool is_repaired;
public:
    Autobot(Gun g, float toughness);
    Autobot();
    ~Autobot();
    bool get_can_fly() const;
    bool get_is_repaired() const;
    void set_repaired(bool repaired_stat);
    bool repair();
};

std :: ostream & operator<<(std :: ostream & os, const Autobot & transformer);

#endif
