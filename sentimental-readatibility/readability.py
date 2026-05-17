import re
def main():
    Text = str(input(Text: ))
    L = CaracterCount(Text) / WordCount(Text) * 100
    S = SentenceCount(Text) / WordCount(Text) * 100

def CaracterCount(Text):
    CountCaracter = 0
    for i in rangelen(Text):
        Text[i] = CountCaracter
    return CountCaracter
def WordCount(Text):
    CountWord = 0
    for i in range(len(Text)):
        if Text[i].isspace():
            CountWord += 1
    return CountWord
def SentenceCount(Text):
    Signos = re.findall(r"[.!¿?¡]", Text)

    return len(Signos)
def



