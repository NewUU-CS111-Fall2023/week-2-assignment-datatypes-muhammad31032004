import random
class task3():
    def dev(self, a):
        num = random.randint(10**99, ((10**100)-1))
        print("Generated number: ", num)
        g = num/a
        print("Result: ", g)

if __name__ == "__main__":
    obj3 = task3()
    obj3.dev(float(input("Enter the number you want to devide to: ")))