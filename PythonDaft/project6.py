def make_discount(rate):
    def discount(price):
        return price*rate
    return discount 
if __name__=='__main__':
    vip = make_discount(0.8)
    svip = make_discount(0.5)
    print(vip(100))   
    print(svip(100)) 
