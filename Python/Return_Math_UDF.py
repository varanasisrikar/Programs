import math


def process(a, b, c, d, e):
    aa = math.sin(a)
    bb = math.cos(b)
    cc = math.ceil(c)
    dd = math.floor(d)
    ee = math.sqrt(e)
    return aa, bb, cc, dd, ee


x = process(30, 45, 60.01, 60.999, 625)
print(x)
