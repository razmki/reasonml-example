let sum = (a, b) => {
  a + b;
}

// 2.
let sumFour = (a, b, c, d) => a + b + c + d;

let sumThreePlus1 = sumFour(1);


Js.log(sumFour(1,2,3));


let num = 1;
let mutableNum = ref(2);
mutableNum := 3

type record = { 
  a: int, 
  mutable b: int,
}
let myRecord: record = { a: 1, b: 2 };
myRecord.b = 4;
Js.log(myRecord);

type person = { age: int, name: string }; 
type nonPerson = { age: int, name: string, phone: string };

let kolya: person = {age: 31, name: "Kolya" }; 
let ilya = {age: 21, name: "ilya"};
let oldest = {age: 103, name: "OLD", phone: "1234678"};

Js.log(oldest.age);


type person1 =
  | Professor(string)
  | Student(string)
  | Nobody;

let kid: person1 = Student("John Doe");

let payload =
  switch (kid) {
  | Professor(name) => "Hello Dr. " ++ name
  | Student(name) => "Hey " ++ name ++ "!"
  | Nobody => "Who are you?"
  };

let array = [1];
let attPM =
  switch (array) {
  | [] => "It's empty"
  | [a] => "Only 1 item"
  | [a, b] when b == 2 => "2 items, and the 2nd is 2!"
  | _ => "all other cases get handled here!"
};
Js.log(attPM);
