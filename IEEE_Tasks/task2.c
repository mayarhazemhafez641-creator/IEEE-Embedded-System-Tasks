 int ToggleBit(int x, int position) {
        int answer;
        answer = x ^ (1 << position);
        return answer;

    }