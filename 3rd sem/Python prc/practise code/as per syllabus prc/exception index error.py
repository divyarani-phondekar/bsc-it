def indexError():
    try:
        l1=[1,2,3,5]
        print(l1[20])
    except IndexError:
        print("Result is not found")
    finally:
        print("Executing finally cluase")
indexError()
-
