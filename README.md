# CPE_solostumper_3_2018

![alt text](https://forthebadge.com/images/badges/made-with-c.svg) 
![alt text](https://forthebadge.com/images/badges/built-with-love.svg)

## FUZZBOZZ

Write a program that takes two numbers as parameters and prints all the integers between these two numbers according to the following rules:

For this project, the only authorized function is write, atoi, printf.

* the second parameter must be greater than or equal as the first one,

* if the number is a multiple of 3, print "Fuzz\n",

* if the number is a multiple of 2, print "Bozz\n",

* if the number is a multiple of both 2 and 3, print "FuzzBozz\n",

* in all other case, print the number followed by '\n'.

## USAGE

1) `make`

2) `./fuzzbozz nb1 nb2`

## EXAMPLES
```
$> ./fuzzbozz 9 18 | cat -e
Bozz$
Fuzz$
11$
Fuzz$
13$
Fuzz$
15$
Fuzz$
17$
FuzzBozz$
$> ./fuzzbozz 2 1 &>/dev/null || echo "Exit status: $?"
Error: the second parameter must be greater than the first one.
Exit status: 84
$> ./fuzzbozz &>/dev/null || echo "Exit status: $?"
Exit status: 84
```
