def computeJ(w1, w2):
    return w1**2 + w2**2 + 4 * w1 - 6 * w2 - 7


def computew1(w1, w2, alpha):
    w1 = w1 - alpha * (2 * w1 + 4)
    return w1


def computew2(w1, w2, alpha):
    w2 = w2 - alpha * (2 * w2 - 6)
    return w2


w1 = 5
w2 = 5
alpha = 0.3
for i in range(10):
    j = computeJ(w1, w2)
    print("iteration", i + 1)
    print("J=", j)
    print("W1=", w1)
    print("W2=", w2)
    w1 = computew1(w1, w2, alpha)
    w2 = computew2(w1, w2, alpha)
