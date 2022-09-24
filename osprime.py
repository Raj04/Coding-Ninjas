import os

def isInt(s):
    try:
        int(s)
        return True
    except ValueError:
        return False

r, w = os.pipe()
pid = os.fork()

if pid:
    os.close(r)
    w = os.fdopen(w, 'w')
    n = int(input("Enter the value of n: "))

    num = []
    print("Enter the " + str(n) + " numbers: ")

    i = 0
    while i < n:
        x = input()
        if isInt(x):
            num += [x]
            i += 1
        else:
            print("Invalid input! Enter again: ")
    num = ' '.join(num)
    w.write(num)
    w.close()

else:
    os.close(w)
    r = os.fdopen(r)
    num = r.read()
    num = num.split(' ')
    for i in range(len(num)):
        num[i] = int(num[i])
    num.sort()
    print("Largest number: ", num[-1])
    print("Second Largest numbers: ", num[-2])
    r.close()
