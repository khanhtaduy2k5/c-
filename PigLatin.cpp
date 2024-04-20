/*Pig Latin là một trò chơi ngôn ngữ trong đó các từ tiếng Anh bị thay đổi,
thường là bằng cách thêm một hậu tố giả hoặc bằng cách di chuyển phần bắt
đầu hoặc phụ âm đầu tiên hoặc cụm phụ âm của một từ về cuối từ và thêm một
âm tiết để tạo ra một hậu tố. Mục đích là để che dấu các từ khỏi những người
không biết luật.

Yêu cầu:

Hãy viết hàm string pigLatin(string word)  để chuyển đổi một từ tiếng Anh
 đầu vào thành một từ trong ngôn ngữ Pig Latin với các quy tắc sau:

Nếu từ bắt đầu bởi một phụ âm, chuyển phụ âm xuống cuối của từ và thêm "ay" vào cuối
từ. Theo đó, "ball" trở thành "allbay".Nếu từ bắt đầu bởi một nguyên âm, thêm "way"
vào cuối từ. Theo đó, "one" trở thành "oneway".
*/
#include <iostream>
#include <string>

using namespace std;

namespace PigLatin {

    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    string convert(string word) {
        if (isVowel(word[0])) {
            return word + "way";
        } else {
            return word.substr(1) + word[0] + "ay";
        }
    }

} // namespace PigLatin

int main() {
    string input;

    cout << "Nhap tu tieng Anh: ";
    cin >> input;

    string result = PigLatin::convert(input);

    cout << "Tu trong ngon ngu Pig Latin: " << result << endl;

    return 0;
}
