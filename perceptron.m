
x=[1,-1;2,-1;1,-2;1,1;1,2;-1,2;-1,1;-2,-1;-1,-1];
class = [2,2,2,1,1,1,1,1,1];
w = [0.1,0.3,0.5];
ex = [x,ones(length(x),1)];
wn = [10,10,10];
rho = 1;
count = 0;
x2 = -2:0.1:2;


while(count<10)
    for i=1:length(x)
        if ((class(i)==1) && ((w*ex(i,:)')<=0))
            wn = w+rho*ex(i,:);
            w = wn;
        else if ((class(i)==2) && ((w*ex(i,:)')>=0))
                wn = w-rho*ex(i,:);
                w = wn;
            else
                wn = w;
                if (sum((w-wn).^2)<0.01)
                    count = count +1;
                end
            end
        end
       
        x1 = -(w(2)*x2 + w(3))/w(1);
        plot(x1,x2);
        axis([-2,2,-2,2]);
        
       

    end
    x1=input('Feature to classify');
        wTx=w*[x1';1];
        if(wTx>1)
            display ('class is 1');
        else
            display ('class is 2');
        end
    
end
