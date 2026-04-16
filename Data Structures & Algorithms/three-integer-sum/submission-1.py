class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums1 = sorted(nums)
        n = len(nums)
        result = []
        for i in range(n - 2):
            if i > 0 and nums1[i] == nums1[i - 1]:
                continue
            left = i + 1
            right = n - 1
            while left < right:
                sumZero = nums1[i] + nums1[left] + nums1[right]
                tripletList = [nums1[i], nums1[left], nums1[right]]
                if sumZero == 0:
                    result.append(tripletList)
                    left += 1
                    right -= 1
                    while left < right and nums1[left] == nums1[left - 1]:
                        left += 1
                    while left < right and nums1[right] == nums1[right + 1]:
                        right -= 1
                elif sumZero > 0:
                    right -= 1
                else:
                    left += 1
        return result

        