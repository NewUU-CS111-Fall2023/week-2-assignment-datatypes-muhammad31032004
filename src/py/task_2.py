import random
class task2():
    def guessnumber(self, a):
        num = random.randint(1, 100)
        while (a!=num):
            if (a>num):
                print("too high")
                a = int(input("Guess the number: "))
            elif (a<num):
                print("too low")
                a = int(input("Guess the number: "))
        print("Correct!")

if __name__ == "__main__":
    obj = task2()
    obj.guessnumber(2)