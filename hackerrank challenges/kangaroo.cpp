//https://www.hackerrank.com/challenges/kangaroo/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=7-day-campaign
// x1 + x(v1) = x2 + x(v2)---- should be satisfied for them to meet 
// x1 < x2 always (given in constraints)
// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
   
    if(v1 > v2){
        float x =(float)((float)(x2 - x1)/(float)(v1 - v2));
        int y = ceil(x);
        if((int)x == y){
            return "YES";
        }


    }
    return "NO";

}

