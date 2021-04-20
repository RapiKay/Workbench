from re import sub
import requests
from bs4 import BeautifulSoup

# 모든 영어 대화 주제를 추출하는 함수

def get_subjects():
    subjects = []

    # 전체 주제 목록을 보여주는 페이지로의 요청(Request) 객체를 생성
    req = requests.get('https://basicenglishspeaking.com/daily-english-conversation-topics/')
    html = req.text
    soup = BeautifulSoup(html, 'html.parser')

    divs = soup.findAll('div', {"class:" "su-column-inner su-clearfix"})
    for div in divs:
        # 내부에 존재하는 <a> 태그들을 추출
        links = div.findAll('a')

        # <a> 태그 내부의 텍스트를 리스트에 삽입
        for link in link:
            subject = link.text
            subjects.append(subject)

        
    return subjects

subjects = get_subjects()

print('총', len(subjects), '개의 주제를 찾았습니다.')
print(subjects)