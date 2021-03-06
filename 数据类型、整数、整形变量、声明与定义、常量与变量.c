一、几个问题认识数据类型

1、什么是数据？

    记录一天各个时间的温度，那么这个温度就是数据，12摄氏度，15摄氏度

    记录一个水库水位的变化值，那么这个值就是数据，12.2米，13.2米

    记录百度每天搜索的关键词，那么这个关键词就是数据，“沪”，“编程”

2、什么是数据类型？

    以上数据，12，15是整型(整数)、12.2，13.2是浮点型(小数)、“沪”，“编程”是字符串(两个句子)

    在我们的程序里，不同类型的数据，都对应自己的一种特有的数据类型，整数就是整型数据类型，小数就是浮点型数据类型，一句话叫字符型数据类型，等等

3、计算机为什么要分类型？

    从宏观上看，咱们举的这三个例子，长的就不一样，写法也不一样，计算机也不能用一种方法去做三个事，所以计算机做分类处理，不同的数据类型对应着自己的存储和计算的方法，这样会让计算机的工作更有条理，计算更加清晰，从而增加计算机的运行效率

 

二、基本数据类型：整型

    整数：-1，-2，0，1，2

    编码输出整数12

        printf("%d\n", 12); //%d--以10进制形式输出12

        本质：输出时候，%d的位置会被我们的数据12替换掉

        printf("我们的数：%d\n", 12);

        可以加任何提示：输出我们的数：12

        printf("%d天%d小时\n", 1, 24);

        输出多个值，顺序填充，逗号隔开

    其他格式化符：常见的

        %x---以16进制形式输出12---c小写

        %X---以16进制形式输出12---C大写

        %o---以8进制形式输出12

    定义整形变量

    整形在编码中就是int  integer缩写

    我们写个整数，默认就是int类型的数据，比如12，12345

    定义int变量代码：int a = 1873426;

        意义：定义一个int型变量，变量名字是a，并将1873426赋值给a

        分析：int：integer的缩写

              int在C语言里叫关键字，也就是C语言专门使用得词汇

C语言里关键字有很多个

              a：变量名，注意尽量不要用中文，尽量用英文，字母个数不限制

              =：叫赋值运算符，作用是将1873426装到a这个变量里边

                 注意：不是等于的意思，是赋值的意思

              1873426：就是数据了

                 数据的类型要跟变量的类型（咱们这个是int）对应

              格式：=两端的空格，为了显得大气，加空格好看点，不加也行

    声明与定义

    意义：声明/定义一个int类型变量就是声明一个存储int类型数据的容器

              这个容器可以放任何int类型数据

        声明：没有给初始值

              int a; 系统会给一个默认值，有的编译器不指定，也就是个随机的值

        定义：有初始值，专业叫初始化

              int a = 12;

              建议：定义变量尽量都给它初始化

    变量声明/定义后的使用

    赋值：数据赋值给变量：a = 13;

        变量赋值给变量：int b = a;   b = a;

        连续赋值：a = b = 14; 从右向左执行，先把14赋值给b，再将b的值赋值给a

    作用：1、使用这个数的时候就用a来代替，既方便又准确

          2、哪天想换数据，直接把12改成22就行，其他使用a得位置一点儿不动

三、常量与变量

    常量：就是常数，如12，0，-23，34.2，-45.3

          特点：只代表自己，不能被改变

                比如12=34;将12赋值成34，直接报错，12就是12，34就是34

     变量：我们定义的变量a，这就是变量

           特点：值可以改变，可以赋值其他的值

           比如：a = 2; 根据需要a=4; 都可以
