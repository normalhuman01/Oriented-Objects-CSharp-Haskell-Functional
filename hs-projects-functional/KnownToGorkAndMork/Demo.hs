{- ����� ���������� ��� ������ ����� KnownToGork � KnownToMork, ������� ������������� ������ stomp (stab) � doesEnrageGork (doesEnrageMork) ��������������: -}
class KnownToGork a where
    stomp :: a -> a
    doesEnrageGork :: a -> Bool
class KnownToMork a where
    stab :: a -> a
    doesEnrageMork :: a -> Bool
{- ������ ����� KnownToGorkAndMork �������� ����������� ����� ���� �������, ������������ ������������� ����� stompOrStab: -}
class (KnownToGork a, KnownToMork a) => KnownToGorkAndMork a where
    stompOrStab :: a -> a
{- ������� ���������� �� ��������� ������ stompOrStab, ������� �������� ����� stomp, ���� ���������� ��� �������� �������� � ������ �����; �������� stab, ���� ��� �������� � ������ ����� � �������� ������� stab, � ����� stomp, ���� ��� �������� � ������ �� �����. ���� �� ���������� ������ �� ������������������, ����� ������ ���������� ���������� ��� ��������. -}
    stompOrStab x | (doesEnrageMork x) && (doesEnrageGork x) = stomp (stab x)
                  | (doesEnrageMork x) = stomp x
                  | (doesEnrageGork x) = stab x
                  | otherwise = x
