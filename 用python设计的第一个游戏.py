import random#导入random函数库
sjs = random.randint(1 , 10)#生成一个随机数

n = 5

while n > 0:
    temp = input("输入：")
    guess = int(temp)
    if guess == sjs:
        print("猜对啦！")
        break
    else:
        if guess < sjs:
            print("小了！")
        if guess > sjs:
            print("大了！")
    n = n - 1

print("游戏结束！")
