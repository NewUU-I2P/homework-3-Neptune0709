float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    cost = 13;
    if ((consumed_water>0) && (consumed_water<=30)){
        cost += consumed_water*0.4;
    }else if (consumed_water<=50){
        cost += 30*0.4+(consumed_water-30)*0.12;
    }else if (consumed_water<=60){
        cost += 30*0.4+20*0.12+(consumed_water-50)*1.4;
    }else {
        cost += 30*0.4+20*0.12+10*1.4+(consumed_water-60)*1.5;
    }
    return cost;
}
