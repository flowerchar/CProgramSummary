> clion运行多个.c的main函数
>
>```txt
>cmake_minimum_required(VERSION 3.10.2)
>
>get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
>string(REPLACE " " "_" ProjectId ${ProjectId})
>project(${ProjectId} C)
>
>set(CMAKE_C_STANDARD 11)
>
>file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
>foreach(file ${files})
>    get_filename_component(name ${file} NAME)
>    add_executable(${name} ${file})
>endforeach()
>```
>
>

## 数据类型之int类型

- ### short int

- ### int

- ### long int

  > 每种编译器的类型不统一，怎么查看？ sizeof()函数！

  ```c
  #include <stdio.h>
  
  int main() {
    printf("short int: %d\n", sizeof(short int));
    printf("int: %d\n", sizeof(int));
    printf("long int: %d\n", sizeof(long int));
    return 0;
  }
  ```

  

## 数据类型之char类型

- ### char采用ASCII码

  ![img](https://gimg2.baidu.com/image_search/src=http%3A%2F%2Fimg-blog.csdnimg.cn%2F20210304100152730.png%3Fx-oss-process%3Dimage%2Fwatermark%2Ctype_ZmFuZ3poZW5naGVpdGk%2Cshadow_10%2Ctext_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl81MjQ2NDUwMA%3D%3D%2Csize_16%2Ccolor_FFFFFF%2Ct_70&refer=http%3A%2F%2Fimg-blog.csdnimg.cn&app=2002&size=f9999,10000&q=a80&n=0&g=0n&fmt=jpeg?sec=1649148256&t=62639f34132e3640a81620d67eef02c5)

- ### 常用转义字符

  - \n: newline
  - \b: backspace
  - \r: return 
  - \t: table
  - \\': ' 字符字面量
  - \\": "字符串字面量

- ### 表示中文字符：wchar_t



## 数据类型之浮点类型

- ### 每种编译器实现的都不一样

- ### float单精度（至少表示6位）

- ### double双精度（15-16位）

- ### 并不是完全精确，有一定限制



## 变量之内存地址

- ### 变量在内存中多以16进制存储

- ### 通过%#x在控制台以0x打印结果

- ### 命名规则：数字字母下划线且数字不能在第一个



## 常量

- ### 可以通过const int 修饰，保证以后不会被直接修改

- ### 但是可以通过指针间接修改内存中的值

- ### 少使用硬编码

-------------





## 运算符

- #### C语言的变量跟Python，Java不一样（值，引用）

- #### **！ > 算术运算符 > 关系运算符 > && > || > 赋值运算符**

- [详细文档运算符](https://blog.csdn.net/polarisyj86/article/details/82226796)

- #### 自增自减只对于变量，常量不行

- #### 位移运算

  - &(and): 如果 x 和 y 都为 1，则得到 1；如果 x 或 y 任何一个为 0，或都为0，则得到 0
  - |(or): 如果 x 或 y 为 1，或都为 1，则得到 1；如果 x 和 y 都为 0，则得到 0
  - ^(xor): 如果 x 或 y 的值不同，则得到 1；如果两个值相同，则得到 0
  - ~(not): 如果 x 为 0，则得到 1，如果 x 是 1，则得到 0

- #### <<左移，>>右移，左移乘2，右移除2

- #### 逗号运算符，把最后一个值返回

- #### 加括号！

  

## 循环语句

- #### getchar()，该函数从输入缓冲流获取一个字符

- #### while和do while的区别

- #### 变量作用域，全局变量，局部变量

- #### continue, break跳出循环

- #### *臭名昭著* 的goto



## 猜数字小游戏

- #### C语言获取随机数

  - 导入<stdlib.h> <time.h>
  - 播种 srand(time(NULL))
  - 获得 rand()

- #### puts:打印一句话，并且自带换行符

- 

