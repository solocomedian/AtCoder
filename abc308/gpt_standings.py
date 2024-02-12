# 人々を成功率の高い順に並び替える関数
def sort_people(N, records):
    success_rates = []
    for i in range(N):
        A, B = map(int, records[i].split())
        success_rate = A / (A + B)
        success_rates.append((i + 1, success_rate))
    
    sorted_people = sorted(success_rates, key=lambda x: (x[1], -x[0]), reverse=True)
    sorted_numbers = [person[0] for person in sorted_people]
    return sorted_numbers

# 入力を受け取る
N = int(input())
records = []
for _ in range(N):
    record = input()
    records.append(record)

# 人々を成功率の高い順に並び替える
sorted_numbers = sort_people(N, records)

# 結果を出力する
for number in sorted_numbers:
    print(number, end=' ')
