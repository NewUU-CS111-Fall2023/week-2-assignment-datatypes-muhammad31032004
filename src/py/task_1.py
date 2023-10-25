class task1():
    def leapyear(self, year):
        if (year%4==0):
            if (year%100!=0 or year%400==0):
                print("This is leap year")
            else:
                print("This is not leap year")
        else:
            print("This is not leap year")

if __name__ == "__main__":
    print("hi")