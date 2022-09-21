# 3.9

a = float(input('평균 시속(km//h)을 입력하세요 : '))
times = float(input('이동 시간(h)을 입력하세요 : '))

times1 = times
hours = int(times1)
times1 = (times1 - hours) * 60
minutes = int(times1)
times1 = (times1 - minutes) * 60
seconds = int(times1)

print("평균 시속 :", a, "km/h")
print("이동 시간 :", hours, "시간", minutes, "분", seconds, "초")
print("이동 거리 :", a*times, "km")