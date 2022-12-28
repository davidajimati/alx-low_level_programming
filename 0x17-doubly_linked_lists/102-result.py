#!/usr/bin/pyhton3

# Program to Find the largest palindrome made from the product of two 3-digit numbers.

largest_pal = 0

# multiply all 3 numbers together
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j

        # Check if it's a palidrom
        pal_check = str(product)
        if pal_check == pal_check[::-1]:
            if int(pal_check) > largest_pal:
                largest_pal = int(pal_check)

print(largest_pal)