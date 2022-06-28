
--fonction plus 
plus :: Int -> Int -> Int
plus x 0 = x
plus x y
    | y > 0 = plus (succ x) (pred y) 
    | otherwise = plus (pred x) (succ y) 


--fonction soustraction1 recusrive

soustraction :: Int -> Int -> Int
soustraction  x 0 = x
soustraction x y 
    | y > 0 = soustraction (pred x) (pred y)
    | otherwise = soustraction (succ x) (succ y)

--fonction soustraction1 non recusrive
soustraction1 :: Int -> Int -> Int
soustraction1  x y = plus x (-y)

--fonction mult recursive

mult :: Int -> Int -> Int
mult x 0 = 0
mult x y 
    | y > 0 = plus x (mult x (pred y))
    -- | y < 0 = plus (-x) (mult x (succ y))
    | otherwise  = mult (-x) (-y)

-- fonction quotient 

quotient :: Int -> Int -> Int 
quotient x y 
    | x < y = 0
    |otherwise = succ (quotient (soustraction x y) y) 

-- fonction estImpair version2

reste :: Int -> Int -> Int 
reste x y = soustraction x (mult(quotient x y) y)

-- fonction estPaire

estPair :: Int -> Bool
estPair 0 = True
estPair 1 = False 
estPair x = estPair (soustraction x 2)

-- fonction estImpair version1

estImpair :: Int -> Bool 
estImpair 0 = False 
estImpair 1 = True 
estImpair x = estImpair (soustraction x 2)
-- fonction estImpair version2 non recusrive
estImpair2 :: Int  -> Bool 
estImpair2 x = not (estPair x)

-- fonction pow non optimise 

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

--fonction ligneTriangle 
ligneTriangle' :: Int -> Int -> String
ligneTriangle' _ 0 = "1"
ligneTriangle' x y 
    | y > 0 = ligneTriangle' x (pred y) ++ "," ++   show( combinaison x y ) 

ligneTriangle x = ligneTriangle' x x

triangle :: Int -> String
triangle 0 = ""
triangle x =  triangle (pred x) ++ "[" ++ ligneTriangle(x) ++ "]" ++ "\n"

printTriangle :: Int -> IO()
printTriangle n = putStr $ triangle (pred n)