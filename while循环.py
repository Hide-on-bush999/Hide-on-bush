day = 1
while day <= 7:
    a = input("今天有好好学习吗?：")
    day += 1
    if a != "有":
        break
else:
    print("太棒啦！")
#在while else 语句中，while中通过beak跳出循环后else里面的语句不再执行！
