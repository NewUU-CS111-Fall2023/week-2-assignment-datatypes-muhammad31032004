# * Author: Mukhammadkhon Asrorov
# * Date: 25.10.2023
from task_1 import task1
from task_2 import task2
from task_3 import task3
print("Task 1\n")
obj1 = task1()
obj1.leapyear(int(input("Enter a year: \n")))
print("Task 2\n")
obj2 = task2()
obj2.guessnumber(int(input("Guess the number: \n")))
print("Task 3\n")
obj3 = task3()
obj3.dev(float(input("Enter the number you want to devide to: ")))
