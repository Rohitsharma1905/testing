# Read Random Numbers and Display Even/Odd Numbers

import random

random_numbers = [random.randint(1, 100) for _ in range(10)]

with open("random_numbers.txt", "w") as file:
    file.write("\n".join(map(str, random_numbers)))

even_numbers = [num for num in random_numbers if num % 2 == 0]
odd_numbers = [num for num in random_numbers if num % 2 != 0]

print("Random Numbers:", random_numbers)
print("Even Numbers:", even_numbers)
print("Odd Numbers:", odd_numbers)
