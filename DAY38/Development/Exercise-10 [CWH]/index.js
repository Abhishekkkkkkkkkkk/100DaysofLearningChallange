/* Create a business name generator by combining list of adjectives and shop name and another word

Adjectives:
Crazy 
Amazing
Fire 

Shop Name:
Engine
Foods
Garments

Another Word:
Bros
Limited
Hub

*/

let Adjectives = {
    a1 : "Crazy",
    a2 : "Amazing",
    a3 : "Fire"
}

let ShopName = {
    s1 : "Engine",
    s2 : "Foods",
    s3 : "Garments"
}

let AnotherWord = {
    w1 : "Bros",
    w2 : "Limited",
    w3 : "Hub"
}

function generateBusinessName() {
    let adjectiveKeys = Object.keys(Adjectives);
    let shopNameKeys = Object.keys(ShopName);
    let anotherWordKeys = Object.keys(AnotherWord);

    let adjectiveKey = adjectiveKeys[Math.floor(Math.random() * adjectiveKeys.length)];
    let shopNameKey = shopNameKeys[Math.floor(Math.random() * shopNameKeys.length)];
    let anotherWordKey = anotherWordKeys[Math.floor(Math.random() * anotherWordKeys.length)];

    let businessName = `${Adjectives[adjectiveKey]} ${ShopName[shopNameKey]} ${AnotherWord[anotherWordKey]}`;
    return businessName;
}

for (let i = 0; i < 20; i++) {
    console.log(generateBusinessName());
}   
