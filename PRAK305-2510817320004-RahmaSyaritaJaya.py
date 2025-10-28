total_detik = int(input())

detik = total_detik % 60
total_menit = total_detik // 60

menit = total_menit % 60
total_jam = total_menit // 60

jam = total_jam % 24
hari = total_jam // 24

if hari:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")