#!/usr/bin/env python3

from utils import is_prime, factorial, fibonacci, reverse_string
from calculator import Calculator

def main():
    print("=== Python Program Demo ===\n")
    
    # Calculator demo
    calc = Calculator()
    print("Calculator:")
    print(f"15 + 7 = {calc.add(15, 7)}")
    print(f"15 * 7 = {calc.multiply(15, 7)}\n")
    
    # Utils demo
    print("Utility Functions:")
    print(f"Is 17 prime? {is_prime(17)}")
    print(f"Factorial of 5: {factorial(5)}")
    print(f"Fibonacci (10 terms): {fibonacci(10)}")
    print(f"Reverse 'Python': {reverse_string('Python')}")

if __name__ == "__main__":
    main()
