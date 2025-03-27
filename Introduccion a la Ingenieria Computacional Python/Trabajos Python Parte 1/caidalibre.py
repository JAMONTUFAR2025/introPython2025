# Ejercicios de caída libre

y = 0
y0 = 0
v0 = 0
t = 0
g = 9.8
vf = 0

# Variables
def resetearVariables():
    y = 0
    y0 = 0
    v0 = 0
    t = 0
    g = 9.8
    vf = 0

resetearVariables()

print("CAIDA LIBRE")
t = float(input("Digite el tiempo "))

vf = v0 + g*t

print("La velocidad final del objeto es ", vf, " m/s")

y = y0 + v0*t + (1/2)*g*t**2

print("La altura trazada del objeto fue ", y, " m")

vf = (v0**2+2*g*y)**(1/2)

print("La velocidad final sin tomar en cuenta el tiempo fue ", vf, " m/s")

