require(cmna)
f<-function(x,y)
{
y-x
}
ode23(f,0,0.1,2)
