import fileinput

with fileinput.FileInput('file_1.py', inplace=True, backup='.bak') as file:
    for line in file:
        print(line.replace('file_1', 'file_2'), end='')
