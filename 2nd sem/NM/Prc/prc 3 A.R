require(optR)
A<-matrix(c(10,2,1,1,10,-1,-2,3,10),ncol=3,byrow=TRUE)
A
B<-matrix(c(9,-22,22),ncol=1,nrow=3)
B
c<-optR(A,B,method="gaussseidel")
c