renverse:: [a] -> [a]
renverse [] = []
renverse (x:xs) = renverse xs ++ [x]


renverse1:: [a] -> [a]
renverse ([] ++ ys) = renverse ys ++ renverse []
