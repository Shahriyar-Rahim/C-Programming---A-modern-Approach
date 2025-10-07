#include <stdio.h>

int main(void)
{
    int hour, minute, user_time;
    int dep1 = 480,   arr1 = 616;   // 8:00 a.m. - 10:16 a.m.
    int dep2 = 583,   arr2 = 712;   // 9:43 a.m. - 11:52 a.m.
    int dep3 = 679,   arr3 = 811;   // 11:19 a.m. - 1:31 p.m.
    int dep4 = 767,   arr4 = 900;   // 12:47 p.m. - 3:00 p.m.
    int dep5 = 840,   arr5 = 968;   // 2:00 p.m. - 4:08 p.m.
    int dep6 = 945,   arr6 = 1075;  // 3:45 p.m. - 5:55 p.m.
    int dep7 = 1140,  arr7 = 1280;  // 7:00 p.m. - 9:20 p.m.
    int dep8 = 1305,  arr8 = 1438;  // 9:45 p.m. - 11:58 p.m.

    int closest_dep = dep1, closest_arr = arr1;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minute);

    user_time = hour * 60 + minute;

    // Helper macro for absolute difference
    #define DIFF(x) ((user_time - (x)) < 0 ? -(user_time - (x)) : (user_time - (x)))

    if (DIFF(dep2) < DIFF(closest_dep)) { closest_dep = dep2; closest_arr = arr2; }
    if (DIFF(dep3) < DIFF(closest_dep)) { closest_dep = dep3; closest_arr = arr3; }
    if (DIFF(dep4) < DIFF(closest_dep)) { closest_dep = dep4; closest_arr = arr4; }
    if (DIFF(dep5) < DIFF(closest_dep)) { closest_dep = dep5; closest_arr = arr5; }
    if (DIFF(dep6) < DIFF(closest_dep)) { closest_dep = dep6; closest_arr = arr6; }
    if (DIFF(dep7) < DIFF(closest_dep)) { closest_dep = dep7; closest_arr = arr7; }
    if (DIFF(dep8) < DIFF(closest_dep)) { closest_dep = dep8; closest_arr = arr8; }

    printf("Closest departure time is ");

    if (closest_dep == dep1) printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (closest_dep == dep2) printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (closest_dep == dep3) printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (closest_dep == dep4) printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (closest_dep == dep5) printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (closest_dep == dep6) printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (closest_dep == dep7) printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
