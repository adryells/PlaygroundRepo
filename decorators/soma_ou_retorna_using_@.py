def validates_val_is_a_number(fucn):
    def validate(x, y):
        if not all(isinstance(val, int) for val in [x,y]):
            return "One or more values not is a number"

    return validate




@validates_val_is_a_number(soma,1,2)
def soma(x, y):
    return x + y

@validates_val_is_a_number()
def subtrai(x, y):
    return x - y

@validates_val_is_a_number()
def multiplica(x, y):
    return x * y

@validates_val_is_a_number()
def divide(x, y):
    return x / y