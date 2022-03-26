plus :: Int -> Int -> Int
plus x 0 = x
plus x y
    | y > 0 = plus (succ x) (pred y) 
    | otherwise = plus (pred x) (succ y) 



soustraction :: Int -> Int -> Int
soustraction  x 0 = x
soustraction x y 
    | y >0 = soustraction (pred x) (pred y)
    | otherwise = soustraction (succ x) (succ y)


