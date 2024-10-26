fn = "Ismail"
ln = "Assil"
lang = "Python"

form = "I am %s %s. I'm currently learning %s" %(fn, ln, lang)
_form = "I am {} {}. I'm currently learning {}".format(fn, ln, lang)

print(_form)
print(form)

langs = ['C', 'C++', 'Java', 'Python', 'HTML', 'CSS', 'JS']

form_ = "I've learned in 1337, languages like: %s" %(langs)
_form_ = "I've learned in 1337, languages like: {}".format(langs)

print(form_)
print(_form_)

school = 1337
year = 2024
event = 'FIFA24'

print(f'Im currecly a student at {school}, {year}, we are holding an {event} event')

stt = "python"
t = stt[0:4]

print(t.capitalize())

print(stt.count('y'))

ll = ['HTML', 'CSS', 'JAVA']
ss = ('AS', 'SI', 'L')

ans = ' '.join(ll)
an = ' '.join(ss)

print(ll)
print(ans)
print(an)