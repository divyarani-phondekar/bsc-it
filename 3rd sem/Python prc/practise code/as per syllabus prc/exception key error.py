def keyerr():
    try:
        dict={"Name":"rohan","Age":7,"Class":"First"}
        print(dict["RollNo"])
    except KeyError:
        print("Key Errer Exception")
    finally:
        print("Executing Fanally Clause")
keyerr()
