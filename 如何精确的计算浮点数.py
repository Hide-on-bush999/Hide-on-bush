import decimal #引入decimal模块
a = decimal.Decimal('0.1')
b = decimal.Decimal('0.2')
c = a + b#精确计算浮点数
d = 0.1
e = 0.2
f = d + e#计算结果有误差
print(c,f)
