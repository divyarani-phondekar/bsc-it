input<-mtcars[,c("mpg","disp","hp","wt")]
print(head(input))
cars<-lm(mpg~disp+hp+wt,data=input)
print(cars)
cat("#The Coefficient value#")
a1<-coef(cars)[1]
a2<-coef(cars)[2]
a3<-coef(cars)[3]
a4<-coef(cars)[4]
print(a1)
print(a2)
print(a3)
print(a4)