
def remove_duplicates(seq):
    """
    Removes duplicate entries from the sequence seq
    @param sequence {list}:
    @return {list}: list without duplicates
    """

    seen = set()
    seen_add = seen.add

    return [x for x in seq if not (x in seen or seen_add(x))]


if __name__=='__main__':
    a = ['dupa','list','list', 'a', 'qqq','a','dupa','qqq']

    print remove_duplicates(a)