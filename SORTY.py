def sort(array):
  
    n = len(array)
    
    for i in range(n):
        
        already_sorted = True 
        
        for j in range(n - i - 1):
    
            if array[j] > array[j + 1]:
            
                array[j], array[j + 1] = array[j + 1], array[j]
               
                already_sorted = False
   
        if already_sorted==True:
            break
    
    return array

if __name__ == '__main__':
    arr = list(map(int,input("enter list of numbers space seprated \n >>").strip().split(' ')))
    print(sort (arr))