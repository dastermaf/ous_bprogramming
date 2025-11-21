// 文字列の検索

#include <stdio.h>

int main(void) {
    char text[15];
    char search_char;
    int i = 0;
    int found_index = -1; // -1 if not found

    printf("Enter the text: "); scanf("%14s", text);
    printf("Enter the character: ");

    //  The space before %c is crucial. It tells scanf to skip any leading
    // whitespace characters (like spaces, tabs, or the newline character '\n').
    // Without it, this scanf("%c") would immediately read the newline character
    // left in the input buffer from the previous scanf (when the user pressed Enter),
    // causing the program to skip waiting for the actual character input.
    //
    // %cの前のスペースは非常に重要です。これはscanfに、先頭にある
    // 空白文字（スペース、タブ、改行文字'\n'など）をすべて読み飛ばすよう指示します。
    // これがないと、このscanf("%c")は直前のscanf（ユーザーがEnterキーを押したとき）で
    // 入力バッファに残った改行文字をすぐに読み込んでしまい、
    // 本来の文字入力を待たずにプログラムが次に進んでしまいます。
    scanf(" %c", &search_char);

    while (text[i] != '\0') {
        if (text[i] == search_char) {
            found_index = i;
            break; // Exit after first occurrence
        }
        i++;
    }

    if (found_index != -1){
        printf("Character '%c' found [%d]\n", search_char, found_index);
    } else {
        printf("Character '%c' not found.\n", search_char);
    }

    return(0);
}
