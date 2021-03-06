// stringbuf example
#include <string>       // std::string
#include <iostream>     // std::cout, std::ostream, std::hex
#include <sstream>      // std::stringbuf

int main ()
{
    std::stringbuf buffer;             // empty buffer

    std::ostream os (&buffer);      // associate stream buffer to stream

    // mixing output to buffer with inserting to associated stream:
    buffer.sputn ("255 in hexadecimal: ",20);
    os << std::hex << 255;

    std::cout << buffer.str();
    std::cout << '\n';

    return 0;
}
