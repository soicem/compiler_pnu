x = 1

def printGlobalX():
    print x
end

def printLocalX():
    x = 2
    print x
end

def printArgX(x):
    print x
end

printGlobalX()  # = 1
printLocalX()   # = 2
printArgX(3)    # = 3
