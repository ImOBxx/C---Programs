#include <iostream>

// Define the Fraction class
class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denom == 0) {
            throw std::invalid_argument("Denominator cannot be zero");
        }
    }

    // Overload + operator to add two fractions
    Fraction operator + (const Fraction& f) const {
        int num = numerator * f.denominator + f.numerator * denominator;
        int denom = denominator * f.denominator;
        return Fraction(num, denom).simplify();
    }

    // Overload - operator to subtract two fractions
    Fraction operator - (const Fraction& f) const {
        int num = numerator * f.denominator - f.numerator * denominator;
        int denom = denominator * f.denominator;
        return Fraction(num, denom).simplify();
    }

    // Overload * operator to multiply two fractions
    Fraction operator * (const Fraction& f) const {
        int num = numerator * f.numerator;
        int denom = denominator * f.denominator;
        return Fraction(num, denom).simplify();
    }

    // Overload / operator to divide two fractions
    Fraction operator / (const Fraction& f) const {
        if (f.numerator == 0) {
            throw std::invalid_argument("Cannot divide by zero fraction");
        }
        int num = numerator * f.denominator;
        int denom = denominator * f.numerator;
        return Fraction(num, denom).simplify();
    }

    // Overload << operator to print fraction
    friend std::ostream& operator << (std::ostream& out, const Fraction& f) {
        out << f.numerator << "/" << f.denominator;
        return out;
    }

    // Simplify the fraction
    Fraction simplify() const {
        int gcd = findGCD(numerator, denominator);
        return Fraction(numerator / gcd, denominator / gcd);
    }

    // Find the Greatest Common Divisor (GCD)
    static int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    try {
        Fraction f1(1, 2); // 1/2
        Fraction f2(3, 4); // 3/4

        Fraction resultAdd = f1 + f2;
        Fraction resultSub = f1 - f2;
        Fraction resultMul = f1 * f2;
        Fraction resultDiv = f1 / f2;

        std::cout << "f1 + f2 = " << resultAdd << std::endl;
        std::cout << "f1 - f2 = " << resultSub << std::endl;
        std::cout << "f1 * f2 = " << resultMul << std::endl;
        std::cout << "f1 / f2 = " << resultDiv << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
