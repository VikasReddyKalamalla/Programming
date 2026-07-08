vowel = input("enter any alphabet ")
match vowel:
    case "a" | "A":
        print(f"entered {vowel} is a vowel  ")
    case "e" | "E":
        print(f"entered {vowel} is a vowel")
    case "i" | "I":
        print(f"entered {vowel}is a vowel  ")
    case "o" | "O":
        print(f"entered {vowel} is a vowel")
    case "u" | "U":
        print(f"entered {vowel} is a ")
    case _:
        print(f"entered {vowel} is a consonant")
