nilai = int(input())
nilai_akhir = nilai // 10

if nilai_akhir >= 8:
    grade = 'A'
elif nilai_akhir == 7:
    grade = 'B'
elif nilai_akhir == 6:
    grade = 'C' 
elif nilai_akhir == 5:
    grade = 'D'
else:
    grade = 'E'

print(f"{grade}")