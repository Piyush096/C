
my_list = [629, "apple", False, "blueberry", True, 95]
my_set = {1, "cherry", "grape", 2, "mango", False}
my_tuple = ("lemon", "orange", "papaya", "watermelon")

bool_list = []
int_list = []
str_list = []

for i in my_list:
    if type(i) == bool:
        bool_list.append(i)
    elif type(i) == int:
        int_list.append(i)
    elif type(i) == str:
        str_list.append(i)

for i in my_set:
    if type(i) == bool:
        bool_list.append(i)
    elif type(i) == int:
        int_list.append(i)
    elif type(i) == str:
        str_list.append(i)

print(bool_list + int_list + str_list + list(my_tuple))
