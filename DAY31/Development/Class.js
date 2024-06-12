class Human{
    // State / Properties 

    // ye sare explictly public mark ho jate hai 
    age = 21;
    weight = 60;

// ye private ho gaya hai # lagane se 
    #height = 170;

// Constructor 

constructor(nweAge, nweWeight, newHeight){
    this.age = nweAge;
    this.weight = nweWeight;
    this.#height = newHeight;
}
    // Behavior / Functionalities 

    Walking(){
        console.log("Mai Chal rha hu ");

    }
    Running(){
        console.log("Mai Daur rha hu ", this.#height);
    }

    get fetchWeight(){
        return this.#height;
    }

    set updateheight(val){
        this.#height = val;
    }

}

let  a = new Human(50, 100, 160);
console.log(a.age);
console.log(a.weight);

// Access private member 
console.log(a.fetchWeight);

a.Running();