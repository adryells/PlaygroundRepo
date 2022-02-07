def validates_val_is_a_number(func):
    def validate(x,y):
        if not all(isinstance(val, int) for val in [x,y]):
            print("One or more values not is a number")
            return

        return func(x,y)
    return validate


@validates_val_is_a_number
def soma(x, y):
    print(f"{x} + {y} = {x+y}")
    return x + y


s = soma(1,4)
s = soma(1,"4")

# @validates_val_is_a_number()
# def subtrai(x, y):
#     return x - y
#
# @validates_val_is_a_number()
# def multiplica(x, y):
#     return x * y
#
# @validates_val_is_a_number()
# def divide(x, y):
#     return x / y