import Foundation

extension Array where Element: Comparable {
func selectionSort() -> Array<Element> {     
        
        guard self.count > 1 else {
            return self
        }        
        
        var output: Array<Element> = self
                
        for primaryindex in 0..<output.count {
                        
            var minimum = primaryindex
            var secondaryindex = primaryindex + 1
                        
            while secondaryindex < output.count {
         
                if output[minimum] > output[secondaryindex] {
                    minimum = secondaryindex
                }                
                secondaryindex += 1
            }
            
            if primaryindex != minimum {
            output.swapAt(primaryindex, minimum)
            }            
        }
                
        return output        
    }
}