project.exe : main.obj app.obj
	link /out:$@ $**

app.obj : app.cpp project.h app.h
	cl /EHsc /c app.cpp

main.obj : main.cpp project.h app.h
	cl /EHsc /c main.cpp

clean :
	@touch nmake.obj && rm *.obj
	@touch nmake.exe && rm *.exe
