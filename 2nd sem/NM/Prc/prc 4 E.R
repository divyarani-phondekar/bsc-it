require(pracma)
f<-function(x)
{
x^3+2*x
}
x=1:7
fderive(f,x)
fderive(f,x,n=2)