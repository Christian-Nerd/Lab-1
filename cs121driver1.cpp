    /*****************************************************************************************
     ** File name       : CS121_Lab1
     **
     ** This program prints 'Waz up ? \n'
     **
     **
     **
     ** Programmer       : Trey Davis
     **
     ** Date created     : 9/18/2023
     **
     ** Date last revised :
     **
     **
     **
     **
    *****************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout << "Waz up ? \n" << std::endl;
    cout << "We are computing bits and bytes of the primitive data types \n ";
    cout << endl <<endl;

    cout << "Number of bytes in a short integer = " << sizeof(short) << "; number of bits" << sizeof(short) * 8 << "\n\n";

    cout << "Number of bytes in an unsigned short integer = " << sizeof(unsigned short) << "; number of bits = " << sizeof(unsigned short) * 8 << "\n\n";

    cout << "Number of bytes in an integer = " << sizeof(int) << "; number of bits = " << sizeof(int) * 8 << "\n\n";

    cout << "Number of bytes in an unsigned integer = " << sizeof(unsigned int) << "; number of bits = " << sizeof(unsigned int) * 8 << "\n\n";

    cout << "Number of bytes in an long integer = " << sizeof(long) << "; number of bits = " << sizeof(long) * 8 << "\n\n";

    cout << "Number of bytes in an unsigned long = " << sizeof(unsigned long) << "; number of bits = " << sizeof(unsigned long) * 8 << "\n\n";

    cout << "Number of bytes in an character = " << sizeof(char) << "; number of bits = " << sizeof(char) * 8 << "\n\n";

    cout << "Number of bytes in an float = " << sizeof(float) << "; number of bits = " << sizeof(float) * 8 << "\n\n";

    cout << "Number of bytes in an double = " << sizeof(double) << "; number of bits = " << sizeof(double) * 8 << "\n\n";

    return 0;
}
