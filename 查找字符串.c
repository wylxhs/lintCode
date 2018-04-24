class Solution {
public:
    /*
     * @param source: source string to be scanned.
     * @param target: target string containing the sequence of characters to match
     * @return: a index to the first occurrence of target in source, or -1  if target is not part of source.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if(source == NULL || target == NULL)
            return -1;
        if(source[0] == '\0' && target[0] == '\0')
            return 0;
        if(target[0] == '\0')
            return 0;
        int sourceLen = strlen(source), targetLen = strlen(target);
        int i=0, j=0;
        if (sourceLen < targetLen)
            return -1;
        
        while(i < sourceLen) {
            if(source[i] == target[j]) {
                i++;
                j++;
            }
            else {
                i = i-j+1;
                j = 0;
            }
            if(target[j] == '\0')
                return i-j;
        }
        return -1;  
    }
};