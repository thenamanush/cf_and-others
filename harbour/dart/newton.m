format long;
clc;
clear all;

f = @(x) exp (-x) - x;
a = 0;
b = 1;
tol = 0.001;

for i = 1 : 5
    x(i) = a - f(a) * (b - a) / (f(b) - f(a));
    a = b;
    b = x(i);
    if abs(b - a) < tol
        break;
    end
end
disp(x')

