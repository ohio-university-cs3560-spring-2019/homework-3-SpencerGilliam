def sum_3s_and_5s(n):
    total = 0
    for i in range(n):
        if (i%3==0 or i%5==0):
            total+=i
    return total

if __name__ == "__main__":
    print(sum_3s_and_5s(100))