# Euclidean Algorithm

The Euclidean Algorithm finds the greatest common divisor (GCD) of two numbers. It uses the principle that the GCD remains unchanged when the smaller number is subtracted from the larger.

To find the GCD of `n1` and `n2` where `n1 > n2`:

1. Repeatedly subtract the smaller number from the larger until one becomes 0.
2. The non-zero number is the GCD.


**Example**: `n1 = 20`, `n2 = 15`

gcd(20, 15) = gcd(20-15, 15) = gcd(5, 15)
gcd(5, 15) = gcd(15-5, 5) = gcd(10, 5)
gcd(10, 5) = gcd(10-5, 5) = gcd(5, 5)
gcd(5, 5) = gcd(5-5, 5) = gcd(0, 5)

**Result**: GCD is `5`.