a = [1,2,3,'zzx','ZZX','赵泽鑫']
print(a)
a.append('zm')#在列表末尾添加一个元素
print(a)
a.extend(['ZM','周梦'])#在列表末尾添加一组元素
print(a)
a[len(a):] = [4,6]#在列表末尾添加一组元素
print(a)
a.insert(10,5)#在列表的指定位置添加一个元素
print(a)
a.remove('zm')#删除列表中的指定元素
print(a)
a.pop(6)#删除列表中指定位置的元素
print(a)
a.clear()#清空列表
print(a)
