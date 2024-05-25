def importerr():

    try:
        import xyz
    except ImportError:
        print("import error")
    finally:
        print("Executing finally cluase")
importerr()
