class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = ""

        for word in strs:
            encoded_string += str(len(word)) + "#" + word

        return encoded_string # 5#Hello5#World

    def decode(self, s: str) -> List[str]:

        decoded_string = []

        i = 0
        while i < len(s):
            j = s.find("#", i) #finds '#' in position 1
            length = int(s[i:j]) # the length of the word is the number before '#' = 5
            word = s[j + 1 : j + 1 + length] # s[2:7] -> 'Hello'
            decoded_string.append(word)
            i = j + 1 + length # moving i to the next sequence of elements

        return decoded_string
