# python可变长参数

编程函数时, 偶尔会遇到参数数量不确定的时候, 这时候就要使用可变参数.

在python中, 提供了两种可变参数:

1. 在形参名前加一个*, 表示接受任意多的参数

```python
def func(*args):
    print(args)
    
func()				# ()
func(1)				# (1,)
func(1, 2)			# (1, 2)
```

2. 在形参名前加两个**, 表示接受任意的关键参数

```python
def func2(**kargs):
	print(kargs)
	
func2()				# {}
func2(x=1)			# {'x': 1}
func2(x=1, y=2)		# {'x': 1, 'y': 2}
```

上面两种方法在python2, python3中使用都一样, 但在python3中提供了一种机制, 使可变参数的使用更加方便, 那就是通过*来拆包

```python
print((1, 2, 3))			# (1, 2, 3)
print(*(1, 2, 3))			# 1 2 3
print({'x': 1, 'y': 2})		# {'x': 1, 'y': 2}
print(*{'x': 1, 'y': 2})	# x y
```

