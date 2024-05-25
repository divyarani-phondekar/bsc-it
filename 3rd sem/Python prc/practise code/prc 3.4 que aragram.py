def check(s1,s2):
    if sorted(s1)==sorted(s2):
        print("anagram")
    else:
        print("not anagram")
s1= "race"
s2= "care"
check(s1,s2)
