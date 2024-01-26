# list
list=['apple','banana',1]
turple=('apple','banana','coconut')
dict={'a':"apple",'b':"banana",'c':"coconut"}

# 如果只需要知道值，那么就可以用for in就行了
print('list...')
for item in list:
    print(item)

print('turple...')
for item in turple:
    print(item)

# 如果需要索引，那么就要写函数，比如enumerate
for index,value in enumerate(list):
    print(f"index:{index},value:{value}")

for index,value in enumerate(turple):
    print(f"index:{index},value:{value}")

for index,value in dict.items():
    print(f"index:{index},value:{value}")

# for index,value in enumerate(list):
#     print(f"index:{index},value:{value}")
