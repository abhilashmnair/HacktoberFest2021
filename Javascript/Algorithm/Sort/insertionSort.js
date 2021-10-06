function insertionSort(array) {
    let pos, x;
    for (let i = 1; i < array.length; i++) {
        pos = i - 1;
        x = array[i];
        while (pos >= 0 && array[pos] > x) {
            array[pos + 1] = array[pos];
            pos--;
        }
        array[pos + 1] = x;
    }
    return array;
}

const myArray = [0, 19, 22, 75, 13, 16, 12, 123, 55, 2, 1, 64]
const arraySorted = insertionSort(myArray);
console.log(arraySorted)