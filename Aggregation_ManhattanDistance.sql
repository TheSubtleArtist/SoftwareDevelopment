/*
Consider P sub 1 (a, b) and P sub 2 (c,d) to be two points on a 2D plane.
a is equal to the minimum value  in Northern latitutde (LAT_N)
b is equal to the minimum val8ue in western longitide (LONG_W)
c is equal to the maximum value in Northern Latitude (LAT_N)
d is equal to the maximum value in the Western Longitude (LONG_W) 

in table station

Query the manhattan distance between P sub 1 and P sub 2 and round to four decimal places

Mahhattan Distance: The distance between two points measured along axes at right angles. In a plane with p1 at (x1, y1) and p2 at (x2, y2), it is |x1 - x2| + |y1 - y2|.

abs(a-c) + abs(b-d)
round(abs( min(LAT_N) - max(LAT_N)  ) + abs( min(LONG_W) - max(LONG_W) ), 4)

*/

select round(abs(min(LAT_N) - max(LAT_N)) + abs(min(long_w) - max(long_w)), 4) from station;