# python 列表乘一个数字

在python中, 如果用一个列表list1乘一个数字n 会得到一个新的列表list2, 这个列表的元素是list1的元素重复n次, 例如

```python
list1 = [0]
list2 = list1 * 5		#list2 = [0, 0, 0, 0, 0]
```

但如果list1中的元素是引用类型, 比如列表时, 就会发生一些意料之外的事

```python
list1 = [[0, 0]]
list2 = list1 * 2		#list2 = [[0, 0], [0, 0]]
list2[0][0] = 1			#list2 = [[1, 0], [1, 0]]
print list1				#list1 = [[0, 0], [0, 0]]
```

在修改list2[0]\[0]时, list2[0]\[1] 同样被修改了, 这是因为list2[0]与list2[1]有相同的地址, 修改任意一维都会影响到其他维, 但这并不会影响到list1, 因为list1的地址与list2[0], list2[1]不同

```python
id(list2[0]) == id(list2[1])		# True
id(list1) == id(list2[0])			# False
```

函数id()可以获得一个变量的地址



同样如果列表元素是一个类的实例时, 也会受到影响

```python
class A():
    value = 10
a = A()
list1 = [1]
list2 = list1 * 2
print list1[0].value					# 10
print list2[0].value list2[1].value		# 10 10

list2[0].value = 100
print list1[0].value					# 100
print list2[0].value list2[1].value		# 100 100
```



因此想要通过列表乘数字快速构建一个列表时, 应当注意列表中的元素是否为引用类型, 如果是数字之类的值类型时则无需在意, 但如果是引用类型时应当小心.



