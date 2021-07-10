from math import pow
t = int(input())

def Sn(n):
        """
                9 + 180 + 2700 + ... + 9n(10^(n-1))th term formula
        """
        return (1-pow(10,n)*(1-9*n))//9
def solve(m):
        """
                Args:
                        m : int -> index at which we need to find the digit
                
                Return:
                        digit : int -> digit at mth index
                        
                internal parameters
                        i : iterator -> to check how many digits number we are looking 
                                        for 
                        dic : dictionary -> to keep a record of every internal parameter
                        n : int -> it saves the value of Variable(i)
                        difference : int -> total possible number of digits in 'n' digit 
                                            number series for m
                        position : int -> tells us at what position in 'n+' digit number
                                           will we get our natural number
                        number : int -> stores the value of natural number from which we 
                                         will our digit
                                        
                WorkFlow:
                        ...1) loop
                        ......1) every iteration will check if m>S(i) then number of 
                                digits be i+1
                        ...2) difference will be calculated by subtracting m from sum
                              of all 1..n-1 digit numbers -1, it's like after how many
                              numbers we will encounter 'm', it's not inclusive, hence
                              1 is subtracted
                        ...3) since all the numbers are of 'n' digits, so dividing 
                              difference by 'n' will give us the the position
                        ...4) adding position to 10^(n-1) will give us the number
                        ...5) n*position will actually be the left most index in n digit
                              number and difference-n*position will actually tell us the
                              index
                        .......1) e.g 1  0  0  7    1  0  0  8
                                                  28 29 30 31	32 33 34 35
                                                  
                                                  n*position = 4 * 7 = 28
                                                                        or
                                                                        = 4 * 8 = 32
                                                  so its always the left most index
                                                  and difference - n*position will give 
                                                  index for digit
                
                Example:
                        m = 2920
                        loop:
                                i = 1
                                2920<=9
                                        False
                                i = 2
                                2920<=189
                                        False
                                i = 3
                                2920<=2889
                                        False
                                i = 4
                                2920<=38889
                                        True
                                        n = i = 4
                        difference = 2920 - 2889 - 1 = 30
                        position = 30//4 = 7
                        number = 10^3 + 7 = 1007
                        digit = int("1007"[30-4*7]) = int("1007"[2]) = int("0") = 0
        """
        n= 0
        i = 1
        a = True
        while a:
                if (m<=Sn(i)):
                        n = i
                        a = False
                i+=1
        difference = int(m - Sn(n-1) - 1)
        position = difference//n
        number = int(pow(10,n-1) + position)
        digit = int(str(number)[difference - n*position])
        dic = {"n":n, "{}-S({})".format(m,n-1): difference, "position":position,
                "number":number, "digit":digit}
        print(dic)
        return digit
for i in range(t):
        a = int(input())
        print(solve(a))


