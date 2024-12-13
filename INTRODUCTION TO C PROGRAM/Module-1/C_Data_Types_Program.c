
/*
    C Program: Data Types, Sizes, and Ranges
*/

#include <stdio.h>

int main() {
    // 1. char (Character)
    char character = 'A';     // Size: 1 byte, Range: -128 to 127 (signed), Format specifier: %c
    printf("char: %c\n", character);

    // 2. int (Integer)
    int integer = 100;        // Size: 4 bytes, Range: -2,147,483,648 to 2,147,483,647 (signed), Format specifier: %d
    printf("int: %d\n", integer);

    // 3. unsigned int (Unsigned Integer)
    unsigned int uinteger = 200;  // Size: 4 bytes, Range: 0 to 4,294,967,295, Format specifier: %u
    printf("unsigned int: %u\n", uinteger);

    // 4. float (Floating-point)
    float f = 3.14f;           // Size: 4 bytes, Range: 1.2E-38 to 3.4E+38, Precision: 6 decimal places, Format specifier: %f
    printf("float: %.2f\n", f);

    // 5. double (Double precision floating-point)
    double d = 9.80665;        // Size: 8 bytes, Range: 2.3E-308 to 1.7E+308, Precision: 15 decimal places, Format specifier: %lf
    printf("double: %.5lf\n", d);

    // 6. long double (Extended precision floating-point)
    long double ld = 3.141592653589793;  // Size: 10, 12, or 16 bytes (system-dependent), Format specifier: %Lf
    printf("long double: %.15Lf\n", ld);

    // 7. short (Short Integer)
    short s = 32000;           // Size: 2 bytes, Range: -32,768 to 32,767, Format specifier: %hd
    printf("short: %hd\n", s);

    // 8. long (Long Integer)
    long l = 123456789L;       // Size: 4 or 8 bytes, Range: -2,147,483,648 to 2,147,483,647 (signed), Format specifier: %ld
    printf("long: %ld\n", l);

    // 9. long long (Long Long Integer)
    long long ll = 9223372036854775807LL;  // Size: 8 bytes, Format specifier: %lld
    printf("long long: %lld\n", ll);

    return 0;
}
