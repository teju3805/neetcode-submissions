class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        pair = []
        for i in range(len(position)):
            pair.append((position[i], speed[i]))
        pair.sort(reverse=True)
        stack = []
        for p, s in pair:
            time = (target - p) / s
            if stack and time <= stack[-1]:
                continue
            stack.append(time)
        return len(stack)