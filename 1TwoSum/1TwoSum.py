# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


def two_sum(nums, target):
    nums_to_index = {}
    # searching through the indexes and numbers of the nums array
    for index, num in enumerate(nums):
        # finding the complement that will equal the target number minus the current number in the array
        complement = target - num
        # checking to see if the complement is already inside the nums to index array ,
        # if it is, we return the index of the complement
        if complement in nums_to_index:
            return [nums_to_index[complement], index]
        # Adding the number and index value into the array list. {num, index} ex {2, 0} for [2, 7, 11, 15]
        nums_to_index[num] = index

    return []


# Press the green button in the gutter to run the script.
def main():
    nums1 = [2, 7, 11, 15]
    target1 = 9
    print("Example 1:", two_sum(nums1, target1))  # Output: [0, 1]

    nums2 = [3, 2, 4]
    target2 = 6
    print("Example 2:", two_sum(nums2, target2))  # Output: [1, 2]

    nums3 = [3, 3]
    target3 = 6
    print("Example 3:", two_sum(nums3, target3))  # Output: [0, 1]

    nums4 = [2, 7, 11, 15, 33, 44]
    target4 = 55
    print("Example 4:", two_sum(nums4, target4))  # Output: [2, 5]


if __name__ == '__main__':
    main()

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
