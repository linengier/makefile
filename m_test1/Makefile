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
$(TARGETS):test.c
ifeq ("$(TEST_FLAGS)", "test")
	$(call func, "$(KEY)")
	$(call func, "$(key)")
	$(CC) $(CFLAGS) -DADD_FLAGS $^ -o $@
else
	$(CC) $(CFLAGS)  $^ -o $@
endif
clean:
	-$(RM) -f *.o
	-$(RM) -f $(TARGETS)
