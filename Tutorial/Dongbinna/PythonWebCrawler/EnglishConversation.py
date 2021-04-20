from re import sub
import requests
from bs4 import BeautifulSoup

# ��� ���� ��ȭ ������ �����ϴ� �Լ�

def get_subjects():
    subjects = []

    # ��ü ���� ����� �����ִ� ���������� ��û(Request) ��ü�� ����
    req = requests.get('https://basicenglishspeaking.com/daily-english-conversation-topics/')
    html = req.text
    soup = BeautifulSoup(html, 'html.parser')

    divs = soup.findAll('div', {"class:" "su-column-inner su-clearfix"})
    for div in divs:
        # ���ο� �����ϴ� <a> �±׵��� ����
        links = div.findAll('a')

        # <a> �±� ������ �ؽ�Ʈ�� ����Ʈ�� ����
        for link in link:
            subject = link.text
            subjects.append(subject)

        
    return subjects

subjects = get_subjects()

print('��', len(subjects), '���� ������ ã�ҽ��ϴ�.')
print(subjects)