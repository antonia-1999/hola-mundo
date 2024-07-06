#include <cstdio>
#include <string>

int main ()
{
    std::string msg{"hola mundo y alrededores "};
    int hora_actual {19};
    msg += "que tengan";

    if (hora_actual>6 && hora_actual<19 ) {
        msg += " buenos dias";
    }
    else {
        msg += " buenas noches";
    }
    std::puts (msg.c_str());
    return 0; 
}