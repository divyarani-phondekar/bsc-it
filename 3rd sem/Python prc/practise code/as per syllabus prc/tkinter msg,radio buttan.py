
from tkinter import *
window = Tk()

window.geometry("500x500")

a= Message(window, text="form", relief = RAISED, width=150)
a.pack(pady=10)

L1=Label(window, text="Full name ")
L1.pack()
E1=Entry(window, bd=5)
E1.pack()

r1=Radiobutton(window,text="Male",value=1)
r1.pack()

r1=Radiobutton(window,text="Male",value=0)
r1.pack()

r2=Checkbutton(window,text="remember",onvalue=1,offvalue=0)
r2.pack()

r2=Checkbutton(window,text="not remember",onvalue=1,offvalue=0)
r2.pack()

z=Button(window,text="submit")
z.pack()

window.mainloop()
