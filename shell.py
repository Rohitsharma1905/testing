from subprocess import Popen, PIPE

from sys import stdout, stdin, stderr

process = Popen('python manage.py createsuperuser', shell=True, stdin=PIPE, stdout=PIPE ,stderr=stderr)

outs, errs = process.communicate(timeout=15)
print(outs) 

username="username"

process.stdin.write(username.encode('ascii'))

process.stdin.close
