#!/usr/bin/node

const args = process.argv.slice(2);
const number1 = parseInt(args[0]);
const number2 = parseInt(args[1]);

if (isNaN(number1, number2)) {
  console.log('NaN');
} else {
  function add (number1, number2) {
    return number1 + number2;
  }
  console.log(add(number1, number2));
}
