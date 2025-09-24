#include <stdio.h>
#include <ctype.h>

float compute_GPA(char[], int);

float compute_GPA(char grades[], int n)
{
    if (n == 0) return 0.0;

    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        switch (tolower(grades[i]))
        {
            case 'a': sum += 4; break;
            case 'b': sum += 3; break;
            case 'c': sum += 2; break;
            case 'd': sum += 1; break;
            case 'f': sum += 0; break;
        }
    }
    return sum / n;
}

