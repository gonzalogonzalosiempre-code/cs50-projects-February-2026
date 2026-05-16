Height = int(input("Height: "))
if Height > 8:
    while Height > 8:
        Height = int(input("Height: "))

for i in range(Height):
    n = i + 1
    print(" " * (Height - n), end=(""))
    print("#" * (i+1))

