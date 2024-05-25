import prc_6_geometry

def PointyShapeVolume(x,h,SquareBase):
    if SquareBase:
        SquareBase=geometry.squareV(x)
    else:
        SquareBase=geometry.circleA(x)
    return SquareBase
print(PointyShapevolume(4,2,True))
print(PointyShapevolume(4,3,False))
