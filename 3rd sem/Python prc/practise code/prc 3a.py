import string

def is_pangram(str1):
    alphabet = set(string.ascii_lowercase)
    str1_lower = str1.lower()

    for char in alphabet:
        if char not in str1_lower:
            return False

    return True

str1 = "The quick brown fox jumps over the lazy dog"
if is_pangram(str1):
    print("Yes, it is a pangram.")
else:
    print("It is not a pangram.")
