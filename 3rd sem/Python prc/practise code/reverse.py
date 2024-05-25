def vowel(x):
    if x in ["a", "e", "i", "o", "u", "A", "E", "I", "O", "U"]:
        return "True"
    else:
        return "False "
a = input ("Enter the letter :- ")
print (vowel(a))
