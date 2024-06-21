# 프로젝트 문제 1번
input = [10, 40, 30, 60, 30]

def mean(input):
    return sum(input) / len(input)

def median(input):
    sorted_input = sorted(input)
    mid = len(sorted_input) // 2
    if len(sorted_input) % 2 == 0:
        median = (sorted_input[mid - 1] + sorted_input[mid]) / 2
    else:
        median = sorted_input[mid]
    return median
    
    mean_term = mean(input)
    median_term= median(input)
    
print("평균값은 {mean_term}")
print("중앙값은 {median_term}")
