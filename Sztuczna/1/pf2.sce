a = input("Podaj a ");
b = input("Podaj b ");
c = input("Podaj c ");

delta = (b*b)-4*a*c;

if delta > 0 then
    z1 =(-1*b-sqrt(delta))/(2*a)
    z2 =(-1*b+sqrt(delta))/(2*a)
elseif delta == 0 then
    z1 = -1*b/2*a;
else
    disp("Delta jest mniejsza od 0")
end

//zapisanie binarne
save('pfdane2.dat', 'delta', 'z1', 'z2', 'a', 'b', 'c');
//zapisanie ascii
'z1', 'z2', 'a', 'b', 'c'
fd = mopen('C:\scilab\pfdane2.txt','wt');
    mputl(string(delta), fd);
    mputl(string(z1), fd);
    mputl(string(z2), fd);
    mputl(string(a), fd);
    mputl(string(b), fd);
    mputl(string(c), fd);
mclose(fd);
load('pfdane2.dat', 'delta', 'z1', 'z2', 'a', 'b', 'c');
