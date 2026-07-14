권장 컴파일 명령어
clang++ -std=c++17 -Wall -Wextra -Wpedantic practice.cpp -o practice

옵션의 의미는 다음과 같다.

    옵션	                   의미
-std=c++17	            C++17 문법과 기능 사용
-Wall	                자주 발생하는 경고 활성화
-Wextra	                추가 경고 활성화
-Wpedantic	            표준에서 벗어난 코드 경고
-o practice	            실행 파일 이름 지정


./practice < input.txt                      input.txt의 내용을
python3 practice.py < input.txt             프로그램의 표준 입력으로 전달한다.

./practice < input.txt > output.txt
< input.txt    입력을 파일에서 읽음   > output.txt   출력을 파일에 저장


정답 파일과 비교할 수도 있다.
diff -u expected.txt output.txt
        아무것도 출력되지 않으면 두 파일이 같다는 뜻이다.
        이 방법은 나중에 긴 테스트 케이스를 반복해서 실행할 때 매우 유용하다.


#include <bits/stdc++.h>
이 헤더는 많은 C++ 표준 라이브러리 헤더를 한꺼번에 포함한다.
                            #include <iostream>
                            #include <vector>
                            #include <string>
                            #include <algorithm>
                            #include <queue>
                            #include <stack>
                            #include <map>
                            #include <set>

<bits/stdc++.h>는 ISO C++ 표준 헤더가 아니라 GCC의 libstdc++ 구현에서 제공하는 편의용 헤더다. 
GCC 문서에서도 이를 모든 표준 헤더를 포함하는 precompiled-header용 파일로 설명하며, C++ 표준 라이브러리의 공식 헤더 목록에는 포함되지 않는다.

        환경	                         <bits/stdc++.h>
GCC 기반 온라인 채점 환경	                  대체로 사용 가능
Linux의 g++	                             대체로 사용 가능
macOS 기본 Apple Clang	                   없을 수 있음
다른 컴파일러·프로젝트	                    이식성이 보장되지 않음


입력으로 무엇이 주어지는가 (ex. N개의 정수가 주어진다)
출력해야 하는 것은 무엇인가 (ex. 그중 가장 작은 값과 가장 큰 값을 출력한다)
입력 크기는 어느 정도인가 (ex. N은 최소 1이므로 배열이 비어 있지는 않다)
경계 조건은 무엇인가 (ex. 음수가 포함될 수 있다)

풀이 발상 시간 

첫 번째 값을 현재 최솟값과 최댓값으로 설정한다
두 번째 값부터 순회한다
현재 값이 최솟값보다 작으면 갱신한다
현재 값이 최댓값보다 크면 갱신한다

디버깅 시간
컴파일 / 런타임 오류 수정
잘못된 출력 수정
반례 찾기
인덱스 오류, 자료형 오류 수정
조건문 수정