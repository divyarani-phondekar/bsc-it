quadraticRoots <- function(a, b, c)
{
print(paste0("You have chosen the quadratic equation ", a,
"x^2 + ", b, "x + ", c, "."))
discriminant <- (b^2) - (4*a*c)
if(discriminant < 0) {
return(paste0("This quadratic equation has no real numbered
roots."))
}
else if(discriminant > 0) {
x_int_plus <- (-b + sqrt(discriminant)) / (2*a)
x_int_neg <-(-b - sqrt(discriminant))/(2*a)
return(paste0("The two x-intercepts for the quadratic equation
are",
format(round(x_int_plus, 5), nsmall = 5), " and ",
format(round(x_int_neg, 5), nsmall = 5), "."))
}
else #discriminant = 0 case
x_int <-(-b)/(2*a)
return(paste0("The quadratic equation has only one root. This
root is",x_int))
}
quadraticRoots(3,0,5)
quadraticRoots(-3,-5,+7)
