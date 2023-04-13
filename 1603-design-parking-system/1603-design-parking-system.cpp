class ParkingSystem {
public:
    int low=0; int mid=0; int high=0;
    ParkingSystem(int big, int medium, int small) {
        low= small;
        mid= medium;
        high= big;
    }
    
    bool addCar(int carType) {
        if (carType==3){
            if (low>=0)low--;
            return low>=0;
        }
        else if (carType==2){
            if (mid>=0)mid--;
            return mid>=0;
        }
        else{
            if (high>=0)high--;
            return high>=0;
        }
    }
};


/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */