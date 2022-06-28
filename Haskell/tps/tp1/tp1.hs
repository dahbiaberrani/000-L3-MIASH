pairs:: [Int] -> [Int]
pairs [] = []
pairs (x:xs)
    | even x = x:pairs xs
    | otherwise = pairs xs

pairsRT :: [Int] -> [Int]
pairsRT xs = reverse $ pairs' xs []
    where 
        pairs' :: [Int] -> [Int] -> [Int]
        pairs' [] accu = accu
        pairs' (x:xs) accu 
            | even x = pairs' xs (x:accu)
            | otherwise = pairs' xs accu 


compterPairs :: [Int] -> Int 

compterPairs [] = 0
compterPairs (x:xs)
    |even x = 1 + compterPairs xs
    |otherwise  = compterPairs xs