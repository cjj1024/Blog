# python类的继承和重写

## 继承父类方法

子类可以直接调用父类的方法

```python
class Person():
	def __init__(self):
		pass
		
	
	def hello(self):
		print 'hello'
		

class Student(Person):
	def __init__(self):
		pass
		
		
s = Student()
s.hello()				# hello
```

## 继承父类属性

这里要注意, 如果要继承父类的属性, 一定要在子类的构造函数里调用父类的构造函数, 否则会报错无法访问, 因为父类的构造函数没有被调用, 构造函数中的属性自然也就没有被声明

这时如果调用父类的属性则会报错, 报错内容为Student实例没有name属性

```python
# coding=utf-8

class Person():
	def __init__(self):
		self.name = '小明'
		self.age = 18	
		print('Person class init completed')	
	
	def hello(self):
		print 'hello'

class Student(Person):
	def __init__(self):
		print ('Student class init completed')
		
s = Student()
print s.name

# Student class init completed
# Traceback (most recent call last):
#   File ".\classDemo.py", line 23, in <module>
#     print s.name
# AttributeError: Student instance has no attribute 'name'
```

下面是子类在构造函数中调用父类构造函数的情况, 子类实例可以访问父类属性

```python
# coding=utf-8

class Person():
	def __init__(self):
		self.name = u'小明'
		self.age = 18
		
		print('Person class init completed')
		
	
	def hello(self):
		print 'hello'
		

class Student(Person):
	def __init__(self):
		Person.__init__(self)
		
		print ('Student class init completed')
		
		
s = Student()
print s.name

# Person class init completed
# Student class init completed
# 小明
```

## 方法重写

有时候父类提供的方法不能满足需求时, 可以在子类中重写父类的方法

在父类Person中, 构造函数只定义了name和age两个属性, print_into()函数也只打印了name, age这两个属性

在子类Student中, 多了一个school属性, 显然父类的提供方法功能不够了, 这时候, 子类就需要对父类的方法进行重写, 扩充父类的功能

```python
# coding=utf-8

class Person(object):
	def __init__(self, name, age):
		self.name = name
		self.age = age
		
	
	def print_info(self):
		print 'name: ', self.name
		print 'age: ', self.age
		

class Student(Person):
	def __init__(self, name, age, school):
		Person.__init__(self, name, age)
		
		self.school = school
		
	def print_info(self):
		super(Student, self).print_info()
        # python3 中可直接使用super()
        # Python2 一般为super(class, self), 且class要为新类
        # 新类就是由内置类型派生出来的类
		print 'school: ', self.school
		
		
s = Student(u'小明', 18, u'家里蹲大学')
s.print_info()
	
# name:  小明
# age:  18
# school:  家里蹲大学
```

