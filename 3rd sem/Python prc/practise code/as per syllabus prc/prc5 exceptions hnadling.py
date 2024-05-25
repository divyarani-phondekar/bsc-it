

def fails():
    try:
        x=8/0
    except ZeroDivisionError as err:
        print("handling run time error",err)

fails()
