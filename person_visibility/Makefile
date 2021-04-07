build:
	clang -dynamiclib Person.c -fvisibility=hidden -o libPerson.dylib

clean:
	rm libPerson.dylib

show_dylib:
	nm -gm libPerson.dylib