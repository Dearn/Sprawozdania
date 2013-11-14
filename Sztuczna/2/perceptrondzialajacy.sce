// generujemy punkty
X1 = 2 * rand(1, 20);
X2 = 2 + 2 * rand(1, 20);

Y1 = 2 * rand(1, 20);
Y2 = 2 + 2 * rand(1, 20);

X = [X1 X2];
Y = [Y1 Y2];
Z = (-1) * ones(1, 40);

// macierz punktow
P = [X; Y; Z];

D = [ones(1,20) zeros(1,20)];

plot(X1, Y1, 'go');
plot(X2, Y2, 'rx');

function y=perceptron(x, w)
  net = x * w';
  if net > 0 then
    y = 1;
  else
    y = 0;
  end
endfunction

// perceptron

w = rand(1, 3);
alfa = 0.5;
d = D;

for k=1:100  // obliczamy blad
  y = zeros(1, 40);
  for i=1:40

    net = w * P(:, i);
    
    if(net > 0)
      y(i) = 1;
    end
    
    y(i) = perceptron(P(:, i)', w);
  end
  
  e = d - y;
  
  if sum(abs(e)) == 0 then
    break;
  end
  for i=1:40
    for j=1:3
      w(j) = w(j) + alfa * e(i) * P(j, i);
    end
  end
end

x1 = min(X) - 1;
x2 = max(X) + 1;

y1 = w(3) / w(2) - x1 * w(1) / w(2);
y2 = w(3) / w(2) - x2 * w(1) / w(2);
disp(k) - 
plot([x1, x2], [y1, y2]);

