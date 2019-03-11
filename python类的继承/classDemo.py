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
		print 'school: ', self.school
		
		
s = Student(u'小明', 18, u'家里蹲大学')
s.print_info()
	
	