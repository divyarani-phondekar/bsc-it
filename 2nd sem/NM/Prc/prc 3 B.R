require(optR)
A<-matrix(c(10,2,1,1,10,-1,-2,3,10),
ncol=3,byrow=TRUE)
A
B<-matrix(c(9,-22,22),
nrow=3,ncol=1)
B
C<-optR(A,B,method="gaussseidel")
C


