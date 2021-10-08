function binaryInsertionSort(array) {
    let l, r, m, x;
    for (let i = 1; i < array.length; i++) {
        l = 0;
        r = i - 1;
        x = array[i];

        while (l <= r) {
            m = Math.floor((l + r) / 2);
            if (array[m] > x) r = m - 1;
            else l = m + 1;
        }

        for (let j = i; j > l; j--)
            array[j] = array[j - 1];
        array[l] = x;
    }
    return array
}

const myArray = [0, 19, 22, 75, 13, 16, 12, 123, 55, 2, 1, 64]
const arraySorted = binaryInsertionSort(myArray);
console.log(arraySorted)
