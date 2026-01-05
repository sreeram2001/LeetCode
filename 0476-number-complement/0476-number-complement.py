class Solution:
    def findComplement(self, num: int) -> int:
        str = format(num,'b')
        complement = ""

        for i in range(len(str)):
            if str[i] == '0':
                complement += "1"
            else:
                complement += "0"

        return int(complement, 2)
