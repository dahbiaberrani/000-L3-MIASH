plus :: Int -> Int -> Int
plus x 0 = x
plus x y
    | y > 0 = plus (succ x) (pred y) -- Incr´emente x y fois
    | otherwise = plus (pred x) (succ y) -- D´ecr´emente x y fois