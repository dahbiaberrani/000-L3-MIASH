plus :: Int -> Int -> Int
plus x 0 = x
plus x y
    | y > 0 = plus (succ x) (pred y) 
    | otherwise = plus (pred x) (succ y) 



soustraction :: Int -> Int -> Int
soustraction  x 0 = x
soustraction x y 
    | y > 0 = soustraction (pred x) (pred y)
    | otherwise = soustraction (succ x) (succ y)


soustraction1 :: Int -> Int -> Int
soustraction1  x y = plus x (-y)


mult :: Int -> Int -> Int
mult x 0 = 0
mult x y 
    | y > 0 = plus x (mult x (pred y))
    -- | y < 0 = plus (-x) (mult x (succ y))
    | otherwise  = mult (-x) (-y)