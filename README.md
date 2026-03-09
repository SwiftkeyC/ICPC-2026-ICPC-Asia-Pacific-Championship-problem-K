# ICPC-2026-ICPC-Asia-Pacific-Championship-problem-K

K. Time Display Stickers
time limit per test
2 seconds
memory limit per test
1024 megabytes

You have a collection of n digit stickers, represented by a string S of length n. Each character of S is a digit 0 through 9, representing one sticker of that digit.

You want to create time displays using these stickers. Each time display shows a time in the format HH:MM, where:

    HH is a two-digit hour between 00 and 11 (inclusive), and
    MM is a two-digit minute between 00 and 59 (inclusive). 

In other words, each time display requires exactly four stickers: two for the hours and two for the minutes. Each sticker can only be used for at most one time display.

What is the maximum number of time displays you can create?
Input

The first line of input contains one integer t (1≤t≤10000) representing the number of test cases. After that, t test cases follow. Each of them is presented as follows.

The first line of each test case contains an integer n (1≤n≤106).

The second line contains a string S of length n, consisting only of digits 0–9.

The sum of n across all test cases in one input file does not exceed 106.
Output

For each test case, output the maximum number of time displays you can create.
