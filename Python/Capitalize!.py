# Complete the solve function below.
def solve(s):
    full_name = s.split(' ')
    return ' '.join((word.capitalize() for word in full_name))
