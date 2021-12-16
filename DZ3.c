#include <iostream>
#include <math.h>
using namespace std;
void calcdiag()
{
    float square = 0, diag = 0;
    printf("enter the square surface to calc the diag: ");
    scanf("%f", &square);
    diag = sqrt(square / 2.0); //выведенная формула для диагонали
    printf ("%f",diag); 
}
unsigned int multiplyfunc13(int numtomult) 
{
    unsigned int m1, m2, m3, m4, m5;
    m1 = numtomult * numtomult; //m*m = m^2
    m2 = m1 * m1; //m^2 8 m^2 = m^4
    m3 = m2 * m2; //M^4 * m^4 = m^8 
    m4 = m3 * m2; //m^8  * m^4 = m^12
    m5 = m4 * numtomult; //m^12 * m = m^13
    return m5;
}
unsigned int multiplyfunc5(int numtomult)
{
    unsigned int m1, m2, m3;
    m1 = numtomult * numtomult; 
    m2 = m1 * m1;
    m3 = m2 * numtomult; 
    return m3;
}
void multiplyfuncmain() 
{
    unsigned int numtomult = 0;
    printf("enter the number to multiply: ");
    scanf("%lu", &numtomult);
    printf ("num in 13 degree = %lu\n in 5 degree = %lu",multiplyfunc13(numtomult), multiplyfunc5(numtomult));
}

int main()
{
    char smbl = ' ';
    printf("Choose task paragraph (a or b): ");
    scanf("%c", &smbl);
    if (smbl == 'a')
    {
       calcdiag();
    }
    else if (smbl == 'b')
    {
        multiplyfuncmain();
    }
    else
    {
        printf("No such a paragraph in this test");
    }
    return 0;
}
