import os
import urllib

class Result(object):
    def __init__(self, arg1, arg2):
        self.output1 = arg1
        self.output2 = arg2


class UserMainCode(object):
    @classmethod
    def palindrome(cls, input1):
        # Code here
        output1 = {}
        a = 0
        b = 0
        c = 1

        try:
            urllib.urlopen(input1)
            output2 = 'file ok'
        except IOError:
            output2 = 'the URL is incorrect'

        inde = input1.rindex('/')
        filename = input1[inde:]
        if filename.endswith(".txt"):
            f = open(filename)
            lines = f.read()
            for l in lines:
                splits = l.split()
                for word in splits:
                    if word == word[::-1]:
                        a = c
                        b += len(word)
                output1[a].append(b)
                a = 0
                b = 0
                c += 1
        else:
            output2 = 'file is not a text file'
            output1 = {0: 0}

        return Result(output1, output2)

        pass
