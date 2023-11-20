# Count Instances of Different Digits

def count_digit_instances(number):
    digit_count = {str(i): 0 for i in range(10)}
    for digit in str(number):
        digit_count[digit] += 1
    return digit_count

number = 12345678987654321
instances = count_digit_instances(number)
print("Digit instances:", instances)
