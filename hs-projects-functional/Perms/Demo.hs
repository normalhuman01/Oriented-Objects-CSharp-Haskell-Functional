{-
���������������� ��������� map � concatMap, ���������� ������� perms, ������� ���������� ��� ������������, ������� ����� �������� �� ������� ������, � ����� �������.

GHCi> perms [1,2,3]
[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

��������, ��� ��� �������� � ������ ���������, � ��� ��� ������� ������ ������� ���� ������������.
-}

module Demo where

perms :: [a] -> [[a]]
perms []     = [[]]
perms (x:xs) = [y | p <- perms xs, y <- interleave p]
  where
    interleave []     = [[x]]
    interleave (y:ys) = (x:y:ys) : map (y:) (interleave ys)

-- http://stackoverflow.com/a/24564307/2289640