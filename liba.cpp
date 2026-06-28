#include <stdio.h>
#include "liba.h"
#include "../libf/libf.h"  // Include parent depf header

std::string depa() {
    std::string result = "... called A ";
    result += depf(3);
    return result;
}

