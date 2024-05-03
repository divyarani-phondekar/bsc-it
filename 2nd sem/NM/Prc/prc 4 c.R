f<-function(x)
{
x^3+2*x
}
require(numDeriv)
options(digit=10)
grad(f,1,method="Richardson")
