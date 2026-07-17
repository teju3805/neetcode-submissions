class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        stack = []                      # Stores (index, temperature)
        result = [0] * len(temperatures)

        for i, temp in enumerate(temperatures):
            while stack and temp > stack[-1][1]:
                index, temperature = stack.pop()
                result[index] = i - index

            stack.append((i, temp))

        return result


    