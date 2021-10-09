import Foundation

func insertionSort<T>(_ array: [T], by comparison: (T, T) -> Bool) -> [T] {
    guard array.count > 1 else { return array }
    
    var sortedArray = array
    
    for index in 1..<sortedArray.count {
        var currentIndex = index
        let temp = sortedArray[currentIndex]
        
        while currentIndex > 0, comparison(temp, sortedArray[currentIndex - 1]) {
            sortedArray[currentIndex] = sortedArray[currentIndex - 1]
            currentIndex -= 1
        }
        sortedArray[currentIndex] = temp
    }
    
    return sortedArray
}