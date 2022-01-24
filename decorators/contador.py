def contador():
    count = 0

    def counter_1():
        nonlocal count
        count += 1

        return count

    return counter_1


c = contador()
c() # 1
c() # 2
c() # 3
c() # 4
print(c()) # 5

