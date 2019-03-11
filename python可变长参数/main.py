def func1(*args):
	print(args)
	print(*args)
	

# func1()
# func1(1)
func1(1, 2)

def func2(**kargs):
	print(kargs)
	print(*kargs)
	
# func2()
# func2(x=1)
func2(x=1, y=2)

# print((1, 2, 3))
# print(*(1, 2, 3))

# print({'x': 1, 'y': 2})
# print(*{'x': 1, 'y': 2})