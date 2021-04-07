build:
	clang -dynamiclib Person.c -exported_symbols_list export_list -o libPerson.dylib

clean:
	rm libPerson.dylib

show_dylib:
	nm -gm libPerson.dylib