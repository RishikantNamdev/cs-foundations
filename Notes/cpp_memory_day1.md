# C++ Memory & References — Day 1

## 1. Why does swap by value fail?
Swap by value fails because the function receives a copy of the original variable.  
Any changes made inside the function affect only this local copy, not the original variable in the caller’s scope.

## 2. Why does swap by reference work?
Swap by reference works because no copy is created.  
The reference acts as an alias to the original variable, so any modification directly affects the caller’s variable.

## 3. Why are references safer than pointers in most APIs?
- References cannot be null, which enforces a strong contract that the object must exist.
- References cannot be rebound to another object after initialization.
- References provide cleaner syntax without explicit dereferencing, reducing the chance of misuse.

## 4. One real bug pointers can cause that references avoid
Pointers can be null or dangling, which can lead to crashes when dereferenced.  
References cannot be null, so this entire class of bugs is eliminated.

