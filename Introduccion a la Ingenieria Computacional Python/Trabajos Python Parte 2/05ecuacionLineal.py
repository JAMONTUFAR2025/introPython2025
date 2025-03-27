# PYCHARM
# Ecuacion lineal

import os
os.system('cls' if os.name == 'nt' else 'clear')

print("ECUACION LINEAL")
print("aX + b = 0 > X = -b / a")

a = float(input("a: "))
b = float(input("b: "))

x = -1 * b / a
x = round(x,0)

print("X = ",x)

