# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


def convert_to_title(columnNumber):
    result = []

    while columnNumber > 0:
        remainder = (columnNumber - 1) % 26
        columnChar = chr(ord('A') + remainder)
        result.insert(0, columnChar)
        columnNumber = (columnNumber - 1) // 26

    return ''.join(result)


# Press the green button in the gutter to run the script.
def main():
    examples = [1, 28, 99, 300, 701]
    for columnNumbers in examples:
        output = convert_to_title(columnNumbers)
        print(f"Input: columnNumber = {columnNumbers}")
        print(f"Output: \"{output}\"\n")


if __name__ == '__main__':
    main()

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
