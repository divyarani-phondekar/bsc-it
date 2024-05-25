import geometry

def PointyShapeVolume(x,h,SquareBase):
    if SquareBase:
        SquareBase=geometry.squareV(x)
    else:
        SquareBase=geometry.circleA(x)
    return SquareBase
print(PointyShapeVolume(4,2,True))
print(PointyShapeVolume(4,3,False))
