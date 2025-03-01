/* Kayumov Airat st128100@student.spbu.ru
   transformers. .hpp file or Decepticon class. Contains declaration of all Decepticon class methods and fields. Decepticon class is child class of Transformer class with its own fields and methods.
*/
#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"

class Decepticon : public Transformer
{
private:
    bool can_fly;
    bool is_upgraded;
public:
    Decepticon(Gun g, float toughness);
    Decepticon();
    ~Decepticon();
    bool get_upgrade();
    bool get_can_fly();
    void set_is_upgraded(bool upgrade_state);
    bool upgrade();
};

#endif
