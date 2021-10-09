
import Foundation

extension Array where Element: Comparable {
	
	mutating func mergeSort(by comparison: (Element, Element) -> Bool) {
		guard self.count > 1 else {
			return
		}
		_mergeSort(from: 0, to: count - 1, by: comparison)
	}
	
	mutating private func _mergeSort(
		from left: Int,
		to right: Int,
		by comparison: (Element, Element) -> Bool
	) {
		if left < right {
			let mid = left + (right - left) / 2
			_mergeSort(from: 0, to: mid, by: comparison)
			_mergeSort(from: mid + 1, to: right, by: comparison)
			_merge(from: left, mid: mid, to: right, by: comparison)
		}
	}
	
	mutating private func _merge(
		from left: Int,
		mid: Int,
		to right: Int,
		by comparison: (Element, Element) -> Bool
	) {
		var copy = [Element](repeating: self[left], count: right - left + 1)
		var (leftStartIndex, rightStartIndex, currentIndex) = (left, mid + 1, 0)
		for _ in left ... right {
			if leftStartIndex > mid {
				copy[currentIndex] = self[rightStartIndex]
				rightStartIndex += 1
			} else if rightStartIndex > right {
				copy[currentIndex] = self[leftStartIndex]
				leftStartIndex += 1
			} else if comparison(self[leftStartIndex], self[rightStartIndex]) {
				copy[currentIndex] = self[leftStartIndex]
				leftStartIndex += 1
			} else {
				copy[currentIndex] = self[rightStartIndex]
				rightStartIndex += 1
			}
			currentIndex += 1
		}
		leftStartIndex = left
		for i in copy.indices {
			self[leftStartIndex] = copy[i]
			leftStartIndex += 1
		}
	}
	
	func mergeSorted(by comparison: (Element, Element) -> Bool) -> Array {
		var copy = self
		copy.mergeSort(by: comparison)
		return copy
	}
	
}