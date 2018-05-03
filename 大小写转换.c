class Solution {
public:
    /**
     * @param character: a character
     * @return: a character
     */
    char lowercaseToUppercase(char character) {
        // write your code here
        char a = character - 'a' +'A';
        return a;
    }
};