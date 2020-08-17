#!/usr/bin/env python

sumOf = 0

#The two fib numbers
x = 1
y = 1

stopAt = 4000000

while(y<stopAt):
    print("y is: ", y)
    if y%2==0:
        sumOf+=y
    i = y #remeber the value of y
    y = x + y
    x = i

print(sumOf)

    

