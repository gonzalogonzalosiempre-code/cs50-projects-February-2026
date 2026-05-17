import re

def CaracterCount(Text):
    CountCaracter = 0
    for i in range(len(Text)):
        if Text[i].isalnum():
            CountCaracter += 1
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

Text = str(input("Text: "))
Caracter = CaracterCount(Text)
Word = WordCount(Text)
Sentence = SentenceCount(Text)
if Caracter == 0:
    print("Before Grade 1")
else:
    L =  Caracter / Word * 100
    S =  Sentence / Word * 100
    Index = 0.0588 * L - 0.296 * S - 15.8
    Grado = round(Index)
    if Grado < 1:
         print("Before Grade 1")
    elif Grado >= 16:
         print("Grade 16+")
    else:
         print(f"Grade {Grado}")






