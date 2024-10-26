
##############
### LEVEL 1 ##
##############

first_name = "ismail"
last_name = 'assil'
full_name = first_name + ' ' + last_name
country = 'morocco'
age = 124
year = 2030
is_married = False
is_light_on = True
obj, fuji = ("'japan'",)*2
a, b, c, d, e, f = 'a', 'b', 'c', 'd', 'e', 'f'
ff = ff = '12'


##############
### LEVEL 2 ##
##############

import math

print(type(first_name))
print(type(last_name))
print(type(full_name))
print(type(country))
print(type(age))
print(type(year))
print(type(is_married))
print(type(is_light_on))
print(type(obj))
print(type(fuji))

print("first_name len:", len(first_name))
print("last_name len:", len(last_name))
print("first_name is greater than last_name") if len(first_name) > len(last_name) else print("last_name is greater than last_name")

num_one = 5
num_two = 4
diff = num_two - num_one
product = num_two * num_one
remainder = num_two % num_one
exp = num_one ** num_two
floor_division = num_one // num_two

radius = 30
area_of_circle = math.pi * (radius**2)
circum_of_circle = 2 * math.pi * radius
print('area:', area_of_circle, 'circum_of_circle:', circum_of_circle)

print('area of circle is:', math.pi * (float(input('enter radius: ')) ** 2) )