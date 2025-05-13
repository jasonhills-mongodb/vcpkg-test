#include <fmt/core.h>
#include <zlib.h>

int main()
{
    fmt::print("Hello, world!\n");
    fmt::print("fmt version is {}\n"
               "zlib version is {}\n", 
               FMT_VERSION, ZLIB_VERSION);
    return 0;
}
