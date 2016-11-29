CC=gcc
RM=rm

CFLAGS += -DMY_FLAGS
TARGETS := mytest
KEY:=123
all:$(TARGETS)

#ifeq ("$(KEY)", "123")
#	KEY += 456
#endif


define  func
	@echo "11111111111111111111"
	@echo $(1)
	@echo "22222222222222222222"
endef


#can't assign value to variable in makefile cmd, you should passs to gcc directly
#ifeq 判断相等，只能嵌套使用,在else语句中再判断

$(TARGETS):test.c
ifeq ("$(TEST_FLAGS)", "000")
	$(call func, "$(KEY)")
	$(call func, "$(key)")
	$(CC) $(CFLAGS) -DADD_FLAGS1 $^ -o $@
else
ifeq ("$(TEST_FLAGS)", "111")
	$(CC) $(CFLAGS) -DADD_FLAGS2 $^ -o $@
else
	$(CC) $(CFLAGS)  $^ -o $@
endif
endif
clean:
	-$(RM) -f *.o
	-$(RM) -f $(TARGETS)
