#Açı dönüşümleri
import math

degree = float(input("Açıyı derece cinsinden giriniz : "))
radian = math.radians(degree)
grad = degree * 200 / 180
print("%0.2f derece = "% (degree)+" %0.2f radyan"% (radian)+"\n%0.2f derece = "% (degree)+" %0.2f grad"% (grad))