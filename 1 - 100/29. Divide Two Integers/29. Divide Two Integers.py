class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        INT_MAX = (1 << 31) - 1
        INT_MIN = -(1 << 31)
        sign = -1 if dividend * divisor < 0 else 1
        dividend = abs(dividend)
        divisor = abs(divisor)
        tot = 0
        while dividend >= divisor:
            cnt = 0
            while dividend >= (divisor << (cnt + 1)):
                cnt += 1
            tot += 1 << cnt
            dividend -= divisor << cnt
        return sign * tot if INT_MIN <= sign * tot <= INT_MAX else INT_MAX
