<<<<<<< Updated upstream
makfile使用的几点说明
1.变量
    makefile严格的区分，变量的大小写。
    变量只能在命令行的外部定义修改。不能在makefile执行的shell语句命令中修改定义的变量，只能在其中引用变量。
    例如：试图在命令中，修改CFLAGS变量的值是不成功的，只能通过判断变量的值，控制编译选项，把需要的编译选项传
    递给gcc.即 gcc -name=xxx
2.参数传递
    可用make name=xxx，的形式向makefile传递变量，并在makefile中使用名称为name的变量。
    可用ifeq...else...endif函数判断变量的值，并用gcc 的-DXXX选项控制文件的编译。源文件中用#if defined()  #endif来控制编译。
3. 函数
    makefile 用define...endef声明函数，用$(call name, param1, param2)来调用函数。其中name也可以为定义的变量字符串。
	
=======
makfile使用的几点说明<br />
1.变量<br />
&nbsp; &nbsp; makefile严格的区分，变量的大小写。<br />
&nbsp; &nbsp; 变量只能在命令行的外部定义修改。不能在makefile执行的shell语句命令中修改定义的变量，只能在其中引用变量。<br />
&nbsp; &nbsp; 例如：试图在命令中，修改CFLAGS变量的值是不成功的，只能通过判断变量的值，控制编译选项，把需要的编译选项传<br />
&nbsp; &nbsp; 递给gcc.即 gcc -name=xxx<br />
2.参数传递<br />
&nbsp; &nbsp; 可用make name=xxx，的形式向makefile传递变量，并在makefile中使用名称为name的变量。<br />
&nbsp; &nbsp; 可用ifeq...else...endif函数判断变量的值，并用gcc 的-DXXX选项控制文件的编译。源文件中用#if defined() &nbsp;#endif来控制编译。<br />
3. 函数<br />
&nbsp; &nbsp; makefile 用define...endef声明函数，用$(call name, param1, param2)来调用函数。其中name也可以为定义的变量字符串。<br />
<br />
<br />
测试结果：<br />
lin@lin-ThinkPad-X240:~/mytest/makefile/makefile/m_test1$ make TEST_FLAGS=111<br />
gcc -DMY_FLAGS -DADD_FLAGS2 test.c -o mytest<br />
<br />
<br />
lin@lin-ThinkPad-X240:~/mytest/makefile/makefile/m_test1$ make TEST_FLAGS=000<br />
11111111111111111111<br />
123<br />
22222222222222222222<br />
11111111111111111111<br />
<br />
<br />
22222222222222222222<br />
gcc -DMY_FLAGS -DADD_FLAGS1 test.c -o mytest
>>>>>>> Stashed changes
