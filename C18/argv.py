from sys import argv
""" from sys import argv, exit
# programa que nos salude

if len(argv) != 2:
    print("Usage: argv.py nombre")
    exit(1)

print("Hola " + argv[1]) """

for arg in argv[:2]:
    print(arg)