'''
Q1. Write a program that prompts the user to input a year, checks whether it's a leap year or not, and then prints the result.
'''
def main():
    ques = int(input("Enter the question no: "))
    match ques:
        case 1:
            year = input("Enter a year")
            check_leap_year(year)

        case 2:
            word = input("Enter a word: ")
            count_vowels(word)

        case 3:
            count = 6
            list_names = []
            while count:
                name = input("Enter a name: ")
                list_names.append(name)
                count -= 1
            a_names(list_names)
        
        case 4:
            list_int = input("Enter a list of 10 elements seperated by space:").split()
            print_custom_list(list_int)
        
        case 5:
            rose_count, distance = input("Enter the number of rose you want to buy and delivery distance(in kms) ").split()
            rose_count = int(rose_count)
            distance = float(distance)
            rose_delivery(rose_count, distance)

                

def check_leap_year(year):
    if year%100 == 0:
        if year%400 == 0: 
            print(f'The year you entered, "{year}", is a leap year.')
        else: 
            print("Not a leap year.")
    
    if year%4 == 0:
        print(f'The year you entered, "{year}", is a leap year.')
    else:
        print("Not a leap year.")

'''
Q2. Write a Python program that prompts the user to input a word. The program should then determine and output the count of vowels (a, e, i, o, u) in the provided word. Additionally, consider that the word can be in either uppercase or lowercase.
'''

def count_vowels(word):
    count = 0
    word = word.lower()
    for letter in word:
        if letter == 'a' or letter == 'e' or letter == 'i' or letter == 'o' or letter == 'u':
            count += 1
        else:
            continue
    print(count)

'''
Q3. Write a Python program that allows the user to input a list of 6 names. After receiving the list, the program should print only the names that start with the letter 'a', regardless of whether the letter is uppercase or lowercase.
'''

def a_names(names):
    for name in names:
        name = name.lower()
        if name[0] == 'a':
            print(f"{name.capitalize()}, ", end="")

'''
Q4. Write a Python program that takes a list of 10 integers as input. Your program should iterate through the list and print the following:
For each even number encountered, print the number squared.
For each odd number encountered, print the number cubed.  
'''

def print_custom_list(list_num):
    for i in range(len(list_num)):
        n = int(list_num[i])
        if n%2 == 0:
            list_num[i] = n*n
        else:
            list_num[i] = n*n*n    
    print(list_num)

'''
Q5. Imagine you're ordering flowers from a local delivery service. They offer a selection of beautiful flowers, including roses. Each rose is priced at Rs. 10. Along with your choice of roses, you'll need to provide the count of roses you wish to order and the delivery distance. The delivery charges are as follows: Rs. 25 for distances within 5 kilometers, Rs. 50 for distances between 5 and 10 kilometers, and Rs. 75 for distances greater than 10 kilometers. Write a Python program that prompts the user to enter the count of roses and the delivery distance, then calculates and displays the total price to pay, including both the cost of roses and the delivery charge. 
'''

def rose_delivery(rose_count, distance):
    total_amount = rose_count * 10
    if distance <= 5:
        total_amount += 25
    elif distance > 5 and distance <= 10:
        total_amount += 50
    else:
        total_amount += 75
    print(f"The total amount to be paid by you is {total_amount}.")


if __name__ == "__main__":
    main()


