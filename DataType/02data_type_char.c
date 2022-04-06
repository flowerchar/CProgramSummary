#include <stdio.h>
#include <limits.h>

int main() {
  // �ַ��� ASCII 127
  char a = 'a'; // 97
  char char_1 = '1';// 49
  char char_0 = '0';// 48

  char i = 0; // \0, NULL

  // ������ literal
  // \n : newline
  // \b : backspace
  // \r : return
  // \t : table
  // \' : ' �ַ�������
  // \" : " �ַ���������
  char char_1_escape_oct = '\61';
  char char_1_escape_hex = '\x31';
  char newline = '\n';

  printf("char a: %d\n", a);
  printf("char 1: %d\n", char_1);
  printf("char 'i': %d\n", i);

  printf("char 1: %c\n", char_1);
  printf("char 1: %c\n", char_1_escape_oct);
  printf("char 1: %c\n", char_1_escape_hex);

  // Unicode  CJK Code point.
  // C95
  wchar_t zhong = L'��';
  wchar_t zhong_hex = L'\x4E2D';
  printf("�У�%d\n", zhong);
  printf("�У�%d\n", zhong_hex);

  // �ַ���
  char *string = "��";
  return 0;
}
