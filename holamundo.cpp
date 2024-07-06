#include <cstdio>
#include <string>

int main ()
{
    std::string msg{"hola mundo y alrededores"};
    msg = msg+" que tengan un buen dia";
    std::puts (msg.c_str());
    return 0; 
}