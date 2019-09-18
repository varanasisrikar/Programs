def computeJ(w1, w2):
    sum = 0
    x = [0, 0.25, 0.5, 0.75, 1.00]
    y = [0.8822, 1.2165, 1.3171, 1.7930, 1.9826]
    for i in range(5):
        sum = sum + (y[i] - w2 * x[i] - w1)**2
    sum = sum / 10
    return sum


def gradientw1(w1, w2):

    gradient = 0
    x = [0, 0.25, 0.5, 0.75, 1.00]
    y = [0.8822, 1.2165, 1.3171, 1.7930, 1.9826]
    for i in range(5):
        a = y[i] - w2 * x[i]
        gradient = gradient - 2 * a + 2 * w1
    return gradient / 10


def gradientw2(w1, w2):
    gradient = 0
    x = [0, 0.25, 0.5, 0.75, 1.00]
    y = [0.8822, 1.2165, 1.3171, 1.7930, 1.9826]
    for i in range(5):
        a = y[i] - w1
        b = x[i]
        gradient = gradient + 2 * w2 * (b**2) - 2 * a * b
    return gradient / 10


w1 = 0
w2 = 0
alpha = 1
for i in range(5):
    j = computeJ(w1, w2)
    print("iteration", i + 1)
    print("W1=", w1)
    print("W2=", w2)
    print("J=", j)
    oldw1 = w1
    w1 = w1 - alpha * gradientw1(w1, w2)
    w2 = w2 - alpha * gradientw2(oldw1, w2)
