Program PoleDowolnegoWielokata;
var
  xp,yp,x1,y1,x2,y2:real;
  p:real;
  n,m:word;
begin
    readln(n);
    p:=0;
    readln(xp,yp);
    x1:=xp;y1:=yp;
    for m:=2 to n do
      begin
         readln(x2,y2);
         p:=p+x2*y1-x1*y2;
         x1:=x2;y1:=y2;
      end;
    p:=abs(p+xp*y1-x1*yp);
    writeln(0.5*p:0:2)
end.