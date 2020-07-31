import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input(""))
if n == 5:
    msg = "methane"
elif n == 8:
    msg = "ethane"
elif n == 11:
    msg = "propane"
elif n == 14:
    msg = "butane"
elif n == 17:
    msg = "pentane"
else:
    msg = "None"
            
            
        

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(msg)
