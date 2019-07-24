cat phonebook | grep -i 'Nicolas\tBauer' | grep - |awk '{print $(NF-1)}'
