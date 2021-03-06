一、变量的地址

    1、每个变量都对应一块内存空间，数据存在内存中，计算机的每一块内存（字节）都有一个唯一的编号，本质就是一个数，从0开始，到一个很大的数，32位系统是0~2^32-1, 64位系统是0~2^64-1。这个数就叫地址，就像我们的家的地址一样

    2、取地址运算符： &

    3、取变量地址：&a ,每个变量都有自己唯一的地址

    4、输出地地址：

       printf("%p", &a);  %p以16进制地址形式输出 如：0014ff20

       printf("%#p", &a);  #的作用是带上前缀0x，如0x0014ff20

    #大家有的不好使，那就机灵点儿，printf("0x%p", &a);

 

二、变量的输入数据

    代码：int a = 0;

    scanf("%d", &a);

    输入函数：scanf( )，头文件stdio.h

        %d 一定要跟变量a类型对应，否则运行可能会崩溃

        &a 一定要加取地址，不加会出错

        回车结束输入

    连续输入多个

        1、scanf("%d%d", &a, &b);

           向多个变量输入数据，变量加&，逗号隔开

           这种情况，控制台输入数据空格或者回车隔开

        2、分隔符

           格式符中间用什么隔开，输入的时候就用什么分开

           例如：scanf("%dasd%d", &a, &b); %d中间是用asd隔开

                 那么控制台输入数据：12asd13，asd一个都不能丢，否则会失败

                 scanf("qwe%dasd fg%d", &a, &b);前有qwe，%d中间是用asd fg隔开

                 那么控制台输入数据：qwe12asd fg13, 这样12，13才能准确输入

           如果想自己加提示文字 ：printf()配合scanf()

        3、注意点：

          (1)、scanf("%d%d\n", &a, &b);

               结尾不要加换行\n

          (2)、分隔符，一定要跟程序里一样，如2中介绍的例子

          (3)、分隔符的中英文，比如逗号，程序里用英文，输入时候就要用英文逗号

               scanf("%d,%d", &a, &b);  输入必须12,13  否则失败，不要随意加空格

               输入12，13  这个就会失败，注意中英文逗号长得不一样  ,  ，

      scanf警告或者是报错处理

        1、scanf在vs使用2012以下版本默认会有警告 warning

           2013以上版本默认会有错误 error

        2、警告/错误描述如下： 

             error C4996: 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. 

             To disable deprecation, use _CRT_SECURE_NO_WARNINGS. 

             翻译：（大家一定要会用在线翻译，百度，有道，google...）

             错误C4996：'scanf'：此函数或变量可能不安全。 请考虑使用scanf_s。 

             要去掉这描述，请使用_CRT_SECURE_NO_WARNINGS。

        3、解决办法：提示中给了我们两个方法

             (1)、scanf_s 替换scanf，整形这块使用没区别，其他会有区别。

             (2)、声明宏 #define _CRT_SECURE_NO_DEPRECATE

                  把这条语句写在所有代码的最前边，否则不好使

             (3)、vs2005 2008 2010 2012是警告，此警告可以忽略，不是所有警告都能略，后期教程会陆续讲解什么样的可以忽略，什么不可以忽略。

                  vs2013 2015 2017中是error，大家按照(1)(2)中的方法处理。还可以对编译器设置，解决这个问题，这个就不说了。    

         4、scanf_s 与scanf的区别

              scanf 是标准 C定义的，所以通用，建议大家都用这个

              scanf_s 不是标准中的，是微软自己的，不通用

              _s版本更加安全，具体的安全验证。

         5、#pragma warning(disable:4996)，这条语句可以屏蔽这条警告
