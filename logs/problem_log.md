
# Problem Log

## 기록 규칙

- U: 문제 이해 시간 (Understanding)
- I: 풀이 발상 시간 (Idea)
- C: 구현 시간 (Coding)
- D: 디버깅 시간 (Debugging)
- Total: 전체 시간
- Hint: 힌트 또는 풀이 참고 여부
- Retry: 다시 풀 날짜

표기	     의미
AC	    Accepted, 정답
WA	    Wrong Answer
TLE	    Time Limit Exceeded
MLE	    Memory Limit Exceeded
RE	    Runtime Error
CE	    Compile Error
PE	    출력 형식 오류
DNF	    끝내 독립적으로 풀지 못함

| 날짜 | 사이트 | 문제 | 난이도 | 언어 | 결과 | U | I | C | D | Total | Hint | 핵심 유형 | Retry |
|---|---|---|---|---|---|---:|---:|---:|---:|---:|---|---|---|

| 2026-07-13 | BOJ | 10818 최소, 최대 | Bronze | C++ | AC | 3m | 2m | 7m | 4m | 16m | 없음 | 배열 순회 | YYYY-MM-DD |



## BOJ 10818 — 최소, 최대

- 날짜: YYYY-MM-DD
- 언어: C++
- 결과: WA 1회 → AC
- U/I/C/D: 3m / 2m / 7m / 4m
- 핵심 아이디어:
  - 첫 번째 원소로 최소·최대 초기화
  - 배열을 한 번 순회하며 갱신
- 시간복잡도: O(N)
- 공간복잡도: O(N)
- 다음에는:
  - 임의의 큰 숫자로 초기화하지 말고 첫 원소 사용