function interChangeSort(array) {
    for (let i = 0; i < array.length - 1; i++) {
        for (let j = i + 1; j < array.length; j++) {
            if (array[j] < array[i]) {
                let t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
    return array
}

const myArray = [0, 19, 22, 75, 13, 16, 12, 123, 55, 2, 1, 64]
const arraySorted = interChangeSort(myArray);
console.log(arraySorted)
