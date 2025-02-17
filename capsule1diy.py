''' 
Q1. Write a Python program that takes user input for their name and greets the user. Then, prompt the user to enter two values. After receiving the values, swap them and print both the ordiginal values and the swapped values.
'''

name = input("Enter your name: ")
print("Greetings, ", name)

x = input("Enter a number:")
y = input("Enter another number: ")

print(f"Original values of x is {x} and y is {y}")

temp = x
x = y
y = temp

print(f"Swapped values of x is {x} and y is {y}")

'''
 Q2. Write a Python program that asks the user to input the radius of a circle. Calculate the area of the circle using the formula area = π * radius^2, where π (pi) is a constant approximately equal to 3.14. Print out the calculated area. Ensure that the user input for the radius is converted to a float data type before performing calculations.
'''

radius = float(input("Enter the radius value:"))
area = 3.14 * radius * radius 
print(f"Area of the circle is {area}")


'''
Q3. Write a Python program where the user is prompted to input their birth year. The program should then calculate and display the user's current age.
'''
from datetime import date

patients_year = int(input("Enter your birth year: "))
today = date.today()
age = today.year - patients_year
print(f"User's age is {age}")

'''
Q4. Imagine you're a bakery owner and you want to personalize messages for your customers.
Write a Python program where customers are prompted to input their name and favorite cake flavor. The program should then print a customized message saying: "Hello, [name]! We're delighted to serve you your favorite [favorite_cake] cake on your birthday. Happy Birthday."
'''

name = input("Enter your name: ")
cake = input("Enter your favorite cake flavour:")
print(f"Hello, {name}! We're delighted to serve you your favorite {cake} cake on your birthday. Happy Birthday.")

'''
Q5. Write a Python program to calculate the simple interest with user input for principal amount, rate, and time.
'''

pa = int(input("Enter the principal amount: "))
rate = float(input("Enter the rate of Interest: "))
time = float(input("Enter the time: "))

simple_interest = pa*rate*time / 100

print (f"Simple Interest on the given values is {simple_interest}")