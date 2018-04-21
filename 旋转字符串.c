class Solution {
public:
    /**
     * @param str: An array of char
     * @param offset: An integer
     * @return: nothing
     */
    void rotateString(string &str, int offset) {
        // write your code here
        char temp;
			if (offset == 0) return;
			if (str.size() == 0) return;
			int len = str.size();
			for (int i = 1; i <= offset % len; i++) {
				temp = str[len - 1];
				int j = len - 2;
				while (j >= 0) {
					str[j + 1] = str[j];
					j--;
				}
				str[0] = temp;
			}	
		
    }
};