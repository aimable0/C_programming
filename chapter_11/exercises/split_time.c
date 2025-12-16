/* Due to isues with precision, the program will be completed later. */
#include <stdio.h>
#include <float.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
    long total_sec = 3900;
    int hr = 0;
    int min = 0;
    int sec = 0;
    split_time(total_sec, &hr, &min, &sec);
    printf("hr: %d - min: %d - sec: %d\n", hr, min, sec);

    // test.
    printf("%.15Lf\n",  3900.00L / 3600.00L);

    printf("LDBL_DIG = %d\n", LDBL_DIG);
    return 0;

}

void split_time(long total_sec, int *hr, int *min, int *sec){
    long double hrs_frac = total_sec / 3600.00L;
    *hr = (int) hrs_frac;
    printf("hr: %.15Lf\n", hrs_frac);

    long double min_frac = 0.00L;
    min_frac = (hrs_frac - *hr) * 60.00L + 0.000000001;
    printf("min: %.15Lf\n", min_frac);
    printf("minutes: %.15Lf\n", min_frac * 60.00L);
    *min = (int) min_frac;

    // hard coded
    *sec = 0;
}