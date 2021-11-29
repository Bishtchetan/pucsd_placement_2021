#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float min(float x, float y) { return (x < y)? x: y; }

float calcAngle(float h, float m)
{
	
	if (h <0 || m < 0 || h >12 || m > 60)
		printf("Wrong input");

	if (h == 12) h = 0;
	if (m == 60)
	{
	m = 0;
	h += 1;
	if(h>12)
		h = h-12;
	}


	
	float hour_angle = 0.5 * (h*60 + m);
	float minute_angle = 6*m;


	float angle = abs(hour_angle - minute_angle);

	angle = min(360-angle, angle);

	return angle;
}

int main()
{
    float x, y;
    printf("Enter hours :");
    scanf("%2f", &x);
    printf("Enter minutes :");
    scanf("%2f", &y);
    
	printf("%0.2f", calcAngle(x, y));
	return 0;
}