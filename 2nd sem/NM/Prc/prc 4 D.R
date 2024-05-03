require(pracma)
f<-function(x)
{
1/(4*x+5)
}
trapzfun(f,0,3,maxit=7)
