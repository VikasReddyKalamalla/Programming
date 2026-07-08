nums = list(map(int, input().split()))
p1 = 0
p2 = len(nums) - 1
while p1 < p2:
    nums[p1], nums[p2] = nums[p2], nums[p1]
    p1 += 1
    p2 = p2 - 1
print(nums)
print(*nums)
