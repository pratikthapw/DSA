## Optimised Divisor Finder

We can optimise the approach to finding divisors by using the symmetric property of divisors:  
For any non-negative integer `n`, if `d` is a divisor of `n`, then `n/d` is also a divisor.

This property allows us to iterate only up to `√n`, reducing redundant checks and improving efficiency.

### Algorithm

1. Initialise an empty array `divisors` to store the result.
2. Loop from `i = 1` to `i * i <= n`:
   - If `n % i == 0`:
     - Add `i` to `divisors`.
     - If `i != n / i`, add `n / i` to `divisors` as well.
3. Return the array `divisors`.

This algorithm ensures all divisors are found efficiently by leveraging mathematical symmetry.

**Video** [Print all Divisors of a Number](https://youtu.be/Ae_Ag_saG9s?si=8l7rABcJbgJJ06y3)
