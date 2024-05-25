def remove_elements_by_value(lst, values):
    for value in values:
        if value in lst:
            lst.remove(value)
    return lst

# Create a sample list
my_list = [0, 1, 2, 3, 4, 5, 6]

# Specify the values to remove
values_to_remove = [my_list[0], my_list[2], my_list[4], my_list[5]]

# Remove the specified values from the list
result_list = remove_elements_by_value(my_list, values_to_remove)

# Print the modified list
print(result_list)
