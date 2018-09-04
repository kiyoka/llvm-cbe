#include <stdio.h>
#include <string>

int main() {
    std::string strHello;
    strHello =  "hello ";
    strHello += "world!\n";
    printf("  %s", strHello.c_str());
    return 0;
}
