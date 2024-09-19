#include <iostream>
#include <climits>  
#include <cfloat>   
#include <cstdint>  

int main() {
    std::cout << "Цілі числа знакові та беззнакові:\n";

    std::cout << "signed char: " << sizeof(signed char) << " байт, "
        << "діапазон: від " << std::hex << +SCHAR_MIN << " до " << +SCHAR_MAX << " шістнадцятковий\n";

    std::cout << "short: " << sizeof(short) << " байт, "
        << "діапазон: від " << SHRT_MIN << " до " << SHRT_MAX << " шістнадцятковий\n";

    std::cout << "int: " << sizeof(int) << " байт, "
        << "діапазон: від " << INT_MIN << " до " << INT_MAX << " шістнадцятковий\n";

    std::cout << "long: " << sizeof(long) << " байт, "
        << "діапазон: від " << LONG_MIN << " до " << LONG_MAX << " шістнадцятковий\n";

    std::cout << "long long: " << sizeof(long long) << " байт, "
        << "діапазон: від " << LLONG_MIN << " до " << LLONG_MAX << " шістнадцятковий\n";

    std::cout << "unsigned char: " << sizeof(unsigned char) << " байт, "
        << "діапазон: від 0x0 до " << +UCHAR_MAX << " шістнадцятковий\n";

    std::cout << "unsigned short: " << sizeof(unsigned short) << " байт, "
        << "діапазон: від 0x0 до " << +USHRT_MAX << " шістнадцятковий\n";

    std::cout << "unsigned int: " << sizeof(unsigned int) << " байт, "
        << "діапазон: від " << " до " << +UINT_MAX << " шістнадцятковий\n";

        std::cout << "unsigned long: " << sizeof(unsigned long) << " байт, "
        << "діапазон: від 0x0 до " << +ULONG_MAX << " шістнадцятковий\n";

    std::cout << "unsigned long long: " << sizeof(unsigned long long) << " байт, "
        << "діапазон: від 0x0 до " << +ULLONG_MAX << " шістнадцятковий\n";

    std::cout << "============================================================";

    std::cout << "\nБулеві:\n";
    std::cout << "bool: " << sizeof(bool) << " байт, значення: true (1) і false (0)\n";

    std::cout << "============================================================";

    std::cout << "\nСимвольні типи:\n";
    std::cout << "char: " << sizeof(char) << " байт, "
        << "діапазон: від " << +CHAR_MIN << " до " << +CHAR_MAX << " шістнадцятковий\n";

    std::cout << "============================================================";

    std::cout << "\nВказівники на рядки:\n";
    const char* str = "Соколенко Д.Ю.";
    std::cout << "char*: " << sizeof(char*) << " байт, приклад рядка: " << str << "\n";

    return 0;
}

