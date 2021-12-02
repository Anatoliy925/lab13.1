#include <math.h>
#include "dod.hpp"
#include "sum.hpp"
#include "var.hpp"
using namespace nsDod;
using namespace nsVar;
void nsSum::sum(){
    n = 0;
    a = 1;
    s = a;
    do{
    n++;
    dod();
    s += a;
    } while(fabs(a) > e);
}

