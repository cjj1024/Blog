from functools import wraps

# def debug(func):
    # def wrapper():
    	# print '[DEBUG]: the function in ', func.__name__
        # return func()
    # return wrapper

# @debug
# def hello():
    # print 'hello' 


# def hi():
	# print 'hi'

# hi = debug(hi)
	

# if __name__ == '__main__':
	# hello()
	# hi()
	
	
def Singleton(cls):
	_instance = {}

	def _singlenton(*args, **kargs):
		print _instance
		if cls not in _instance:
			_instance[cls] = cls(*args, **kargs)
		return _instance[cls]
	return _singlenton
	
	
@Singleton
class A():
	pass
	
a1 = A()
a2 = A()