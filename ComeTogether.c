#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int points[6];
        for (int i = 0; i < 6; i++)
        {
            scanf("%d", &points[i]);
        }

        int minDistance = 1;
        // printf("%d\n", minDistance);


        if ((points[4] > points[0] && points[2] > points[0]) || (points[2] < points[0] && points[4] < points[0]))
        {
            int distanceX;
            if (abs(points[2] - points[0]) < abs(points[4] - points[0]))
                distanceX = abs(points[2] - points[0]);
            else
                distanceX = abs(points[4] - points[0]);

            minDistance += distanceX;
        // printf("%d\n", minDistance);

        }

        if ((points[3] < points[1] && points[5] < points[1]) || (points[5] > points[1] && points[3] > points[1]))
        {
            int distanceY;
            if (abs(points[3] - points[1]) < abs(points[5] - points[1]))
                distanceY = abs(points[3] - points[1]);
            else
                distanceY = abs(points[5] - points[1]);

            minDistance += distanceY;
        // printf("%d\n", minDistance);
        // printf("%d\n", minDistance);

        }

        printf("%d\n", minDistance);
    }

    return 0;
    return 0;
}
//maruf_bro
//maruf_bro