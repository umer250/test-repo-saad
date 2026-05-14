#!/usr/bin/env python3

def find_max(numbers):
    """Find maximum value in a list"""
    return max(numbers)

def find_min(numbers):
    """Find minimum value in a list"""
    return min(numbers)

def calculate_average(numbers):
    """Calculate average of numbers"""
    return sum(numbers) / len(numbers) if numbers else 0

def find_median(numbers):
    """Find median of numbers"""
    sorted_nums = sorted(numbers)
    n = len(sorted_nums)
    if n % 2 == 0:
        return (sorted_nums[n//2 - 1] + sorted_nums[n//2]) / 2
    return sorted_nums[n//2]

def main():
    data = [45, 23, 67, 12, 89, 34, 56, 78, 90, 21]
    
    print(f"Data: {data}")
    print(f"Maximum: {find_max(data)}")
    print(f"Minimum: {find_min(data)}")
    print(f"Average: {calculate_average(data):.2f}")
    print(f"Median: {find_median(data)}")

if __name__ == "__main__":
    main()
