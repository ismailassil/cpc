def calc(a, operator, b):
	operations = {
		'+': a + b,
		'-': a - b,
		'*': a * b,
		'/': a / b if b != 0 else "Error: Division by zero"
	}
	return operations.get(operator, "Error: Invalid Operator`")

if __name__ == '__main__':
	a = int(input())
	operator = str(input())
	b = int(input())
	print(calc(a, operator, b))