import pandas as pd

# 판다스의 데이터 프레임을 생성
names = ['Bob','Jessica','Mary','John','Mel']
births = [968, 155, 77, 578, 973]
custom = [1, 5, 25, 13, 23232]

BabyDataSet = list(zip(names,births))
df = pd.DataFrame(data = BabyDataSet, columns=['Names', 'Births'])

# 데이터 프레임의 상단 부분을 출력
df.head()   