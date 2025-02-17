from capsule2diy import check_leap_year

def main():
    test_check_leap_year()

def test_check_leap_year():
    try: 
        assert check_leap_year(2100) == "Not a leap year"
    except AssertionError:
        print("Years that are divisible by 100 should be checked for divisibility with 400.")
    
if __name__ == "__main__":
    main()
