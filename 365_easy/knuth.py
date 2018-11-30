# create a function to do knuth up arrow notation
# What does this function take? First arg, second arg, number of ups
# to calculate, one must create a number of loops of exponentiation (or multiplication)
# n loops, nested, will do it.

# knuth(2,4,2) =
# 2 ^ (2 ^ (2 ^ 2))

# knuth(2, 5, 2) = 2 ^ (2 ^ (2 ^ (2 ^ 2)))

def knuth_fun(arg1, arg2, n):

    partial_product = 1

    for i in range(arg2):
        partial_product *= arg1

    return partial_product


print knuth_fun(2,3,3)