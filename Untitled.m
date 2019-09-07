x=[1,-1;2,-1;1,-2;1,1;1,2;-1,2;-1,1;-2,-1;-1,-1];
class = [2,2,2,1,1,1,1,1,1];
w = [0.1,0.3,0.5];
ex = [x,ones(length(x),1)];
x2 = -2:0.1:2;


for i=1:5
    for i=1:length(x)
        if ((class(i)==1) && ((w*ex(i,:)')<=0))
            w = w+ex(i,:);
        else if ((class(i)==2) && ((w*ex(i,:)')>=0))
                w = w-ex(i,:);
            end
        end
       
        x1 = -(w(2)*x2 + w(3))/w(1);
        plot(x1,x2);
        axis([-2,2,-2,2]);
        
       

    end
    
end
a=input('Feature to classify');
        wTx=w*[a';1];
        if(wTx>0)
            display ('class is 1');
        else
            display ('class is 2');
        end
        
        

