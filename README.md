# CPE_solostumper_3_2018

![alt text](https://forthebadge.com/images/badges/made-with-c.svg)
---
FIZZBUZZ
---
For this project, the only authorized function is write, atoi, printf.

Write a program that takes two numbers as parameters and prints all the integers between these two numbers according to the following rules:

* the second parameter must be greater than or equal as the first one,

* if the number is a multiple of 2, print "Fozz\n",

* if the number is a multiple of 9, print "Bazz\n",

* if the number is a multiple of both 2 and 9, print "FozzBazz\n",

* in all other case, print the number followed by '\n'.

USE :

`make`

`./fozzbazz nb1 nb2`

EXAMPLES:
```
$> ./fozzbazz 9 18 | cat -e
Bazz$
Fozz$
11$
Fozz$
13$
Fozz$
15$
Fozz$
17$
FozzBazz$
$> ./fozzbazz 2 1 &>/dev/null || echo "Exit status: $?"
Error: the second parameter must be greater than the first one.
Exit status: 84
$> ./fozzbazz &>/dev/null || echo "Exit status: $?"
Exit status: 84
```
