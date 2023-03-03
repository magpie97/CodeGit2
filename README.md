# CodeGit2

### 두번째 CodeGit 리포지토리

git 연습
  
  
# Git  commit and push
---
깃허브에서 리포지토리를 생성 후 터미널에서 세팅을 시작한다

homebrew 를 설치 후 깃을 설치한다

가끔 필요한 어플리케이션을 다운로드 나 업데이트를 할 수 있다 

깃 위치를 설정 할 디렉토리를 만들거나 선택 후 

초기 설정을 한다
#### git config --global user.name "your name"
#### git config --global user.email "your email@gmail.com"
이렇게 적으면 설정이 끝이다


---



# 깃 폴더 위치 초기화
git init  

### 파일 전부를 관리

git add .     


### 파일을 선택하여 관리

git add C++.cpp     (파일명).(파일 확장자)



### 파일 상태 확인

git status


### // 초기 설정한 이름과 이메일을 확인

git config --list



### 커밋 

git commit -m "something comment"	



브랜치 세팅  

git branch -M main



### // git 업로드

git remote add origin http:// 본인 로피지토리 링크를 복사



### // 리모트 삭제 ( 리모트가 이미 있다면)

git remote rm origin 



### // 푸시
git push -u origin main

 확인사항)   -u는  한번사용한 후 다음엔 적지 않아도 됐던거 같다.



### // 푸시가 안될때  ([Git] ! [rejected] master -> master (fetch first) 에러 해결)

git push origin +main

강제로 푸시 하는 것

---

# PULL & FETCH

### //깃에 있는 모든 파일을 불러오는 명령어

git fetch origin   


### 제대로 가져왔는지 확인하는 명령어

git log 


### 가져오는 명령어

git pull origin main      or      master






# CLONE

### 원격 저장소를 가져오는 명령어 

git clone "본인 리포지토리 링크"


