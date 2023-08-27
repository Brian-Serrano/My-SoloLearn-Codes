from collections import Counter

s = input().split()

dic = {"2": 2, "3": 3, "4": 4, "5": 5, "6": 6, "7": 7, "8": 8, "9": 9, "10": 10, "J": 11, "Q": 12, "K": 13, "A": 14}
rank = sorted([dic[c[:-1]] for c in s], reverse=True)
counter = Counter(rank)
freq = [counter[x] for x in rank]
suit = len(set([c[-1] for c in s])) == 1
order = all(rank[i] + 1 == rank[i - 1] for i in range(1, 5))

if suit and order and rank[0] == 14:
    print("Royal Flush")
elif suit and order:
    print("Straight Flush")
elif freq[0] == 4 or freq[4] == 4:
    print("Four of a Kind")
elif {2, 3} == {freq[0], freq[4]}:
    print("Full House")
elif suit:
    print("Flush")
elif order:
    print("Straight")
elif freq[2] == 3:
    print("Three of a Kind")
elif freq[1] == 2 and freq[3] == 2:
    print("Two Pairs")
elif len([*filter(lambda v: v == 2, counter.values())]) == 1:
    print("One Pair")
else:
    print("High Card")
