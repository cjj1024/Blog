# python装饰器单例模式

单例模式是一种比较常见的设计模式, 在python中有多种实现方式, 装饰器就是其中一种方法.

装饰器实质上是一个函数, 它的参数是一个函数, 在装饰器函数里对这个函数增加一些功能并返回.

例如有一个函数hello

```python
def hello():
    print 'hello'
```

现在想要在这个函数中添加一些调试信息, 可以直接在函数内部改动

```python
def hello():
    print 'hello'
    print '[DEBUG] hello'
```

一个两个这样写可以,  但如果函数多了, 难免会有点麻烦, 还有可能遗漏, 这时候就可以用到装饰器了

```python
def debug(func):
    def wrapper():
    	print '[DEBUG]: the function in ', func.__name__
        return func()
    return wrapper

@debug
def hello():
    print 'hello' 

@debug
def hi():
	print 'hi'
	

hello()
# [DEBUG]: the function in  hello
# hello
hi()
# [DEBUG]: the function in  hi
# hi
```

在debug函数中定义了一个wrapper函数, 它用于扩展传入函数func的功能, 

return wrapper就是把扩展后的函数返回, 如果func有参数, 需要在wrapper的参数列表中声明

```python
def debug(func):
    def wrapper(*args, **kargs):
    	print '[DEBUG]: the function in ', func.__name__
        return func(*args, **kargs)
    return wrappe
```



@debug就是装饰器, 它相当于

```python
hello = debug(hello)
```

了解完装饰器, 就可以用装饰器来写一个单例模式了

````python
def Singleton(cls):
    _instance = {}

    @wraps(cls)
    def _singlenton(*args, **kargs):
        if cls not in _instance:
            _instance[cls] = cls(*args, **kargs)
        return _instance[cls]

    return _singlenton

@Singleton
class A():
	pass
````

_instance用于保存已经实例化的类, 对于已经实例化的类, 如果下次再实例化, 会直接返回\_instance中的对象

@wraps的作用是不改变使用装饰器原有函数的结构, 如\_\_doc\_\_

