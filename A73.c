/* Jonathan Kramer */

/* Computes the distance in kilometers between two points on the surface of the Earth */

#include <stdio.h>
#include <math.h>

#define MIN2DEG 0.01666666667 /* conversion factor: 1 minute = 60 degrees */
#define DEG2RAD 0.0174532925 /* conversion factor: PI/180 */
#define RADIUS 6375 /* Radius of the earth in km */

int main (void)

{

/* 8 data points from the coords.txt file stored to these. represent the degrees and minutes of the lat and long */
float lat1d, lat1m, long1d, long1m, lat2d, lat2m, long2d, long2m; 

/* final latitudes and longitudes */
float lat1, long1, lat2, long2;

/* distance between coordinates */
float distance;

/* makes coords a pointer file */
FILE *coords;

/* opens file coords.txt to be read */
coords= fopen("coords.txt", "r");

/* extracts numbers from coords.txt and stores them in first set of float variables */
fscanf(coords, "%f", &lat1d);
fscanf(coords, "%f", &lat1m);
fscanf(coords, "%f", &long1d);
fscanf(coords, "%f", &long1m);
fscanf(coords, "%f", &lat2d);
fscanf(coords, "%f", &lat2m);
fscanf(coords, "%f", &long2d);
fscanf(coords, "%f", &long2m);

/* closes coords.txt file */
fclose(coords);

/* coverts minutes to degrees, adds degree values together, converts degrees to radians */
lat1 = (lat1d +(lat1m * MIN2DEG)) * DEG2RAD;
long1 = (long1d + (long1m * MIN2DEG)) * DEG2RAD;
lat2 = (lat2d +(lat2m * MIN2DEG)) * DEG2RAD;
long2 = (long2d +(long2m * MIN2DEG)) * DEG2RAD;

distance = 2 * RADIUS * (asin(sqrt(sin((lat1-lat2)/2) * sin((lat1-lat2)/2) + (cos(lat2) * cos(lat1) * sin((long1-long2)/2) * sin((long1-long2)/2)))));

printf("Distance = %f km\n", distance);

return (0);

}

/*

engs20-2:~/engs20/workspace$ A73
Distance = 11586.207031 km

*/