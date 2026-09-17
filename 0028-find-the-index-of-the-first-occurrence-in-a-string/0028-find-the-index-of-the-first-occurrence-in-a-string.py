class Solution(object):
    def strStr(self, haystack, needle):
        x = haystack.find(needle)

        if x != -1:
            return x
        else:
            return -1