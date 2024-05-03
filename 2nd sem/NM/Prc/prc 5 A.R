require(pracma)
f<-function(x)
{
exp(-x^2)
}
trapzfun(f,0,1,maxit=4)