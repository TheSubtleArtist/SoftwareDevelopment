/*
Consider Psub1 (a,c) and Psub2(b,d) to be two points on a 2D plan where:
a = minimum value of LAT_N
b = maximum value of LAT_N
c = minimum value of LONG_W
d = maximum value of LONG_W

Query the euclidean distance.

in the Euclidean plane, point P is (p1, p2) and Q is (q1, q2).
The distance between P and Q is:
d(P, Q)  =   sqrt((q1 - p1)^2 + (q2 - p2)^2)

IN this problem
d(P, Q)  =   sqrt((b - a)^2 + (d - c)^2)
d(P, Q)  =   sqrt((max(LAT_N) - min(LAT_N))^2 + (max(LONG_W) - min(LONG_W))^2)


*/

select round(
    sqrt(
        power(max(LAT_N) - min(LAT_N),2) +
        power(max(LONG_W) - min(LONG_W),2) 
        ),4)
from station;