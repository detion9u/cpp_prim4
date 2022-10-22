Sales_itemtest: Sales_itemtest.o Sales_item.o
	g++ -o $@ Sales_itemtest.o Sales_item.o
Sales_itemtest.o:
	g++ -o $@ -c Sales_itemtest.cpp
Sales_item.o:
	g++ -o $@ -c Sales_item.cpp
clean:
	rm *.o