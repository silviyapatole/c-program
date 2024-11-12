import numpy as np

def f(x):
    return np.sin(x)

def simpsons_rule(a, b, n):
    
    if n % 2 != 0:
        raise ValueError("n must be even")

    h = (b - a) / n
    x = np.linspace(a, b, n + 1)
    fx = f(x)
    
    integral = fx[0] + fx[-1]
    for i in range(1, n, 2):
        integral += 4 * fx[i]
    for i in range(2, n - 1, 2):
        integral += 2 * fx[i]
    
    integral *= h / 3
    return integral

a = 0
b = np.pi
n = 6

result = simpsons_rule(a, b, n)
print(f"Estimated value of the integral: {result}")