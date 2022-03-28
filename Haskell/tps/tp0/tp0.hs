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

quotient :: Int -> Int -> Int 
quotient x y 
    | x < y = 0
    |otherwise = succ (quotient (soustraction x y) y) 

reste :: Int -> Int -> Int 
reste x y = soustraction x (mult(quotient x y) y)

estPair :: Int -> Bool
estPair 0 = True
estPair 1 = False 
estPair x = estPair (soustraction x 2)

estImpair :: Int -> Bool 
estImpair 0 = False 
estImpair 1 = True 
estImpair x = estImpair (soustraction x 2)

estImpair2 :: Int  -> Bool 
estImpair2 x = not (estPair x)


pow :: Int -> Int -> Int 
pow x 0 = 1
pow x 1 = x
pow x n 
    | estPair n = pow (mult x x) (quotient n 2)
    | estImpair2 n = mult x (pow (mult x x) (quotient (soustraction n 1) 2))

fact :: Int -> Int 
fact 0 = 1
fact x = mult x (fact (soustraction x 1))

--combinaison avec factoriel
combinaison :: Int -> Int -> Int 
combinaison n k = quotient (fact n) (mult (fact k) (fact (soustraction n k)))

-- combinaison recursive sans factoriel bug à corriger 
combinaison2 :: Int -> Int -> Int 
combinaison2 n 0 = 1
combinaison2 n k = mult (quotient (soustraction n (soustraction k 1)) k)   (combinaison n (soustraction k 1))
