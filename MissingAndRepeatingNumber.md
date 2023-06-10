### Optimal 2(Using XOR)

<aside>
⏰ O(n) & O(1)

</aside>

- Algorithm:
    1. X → repeating, Y → Missing
    2. S1 → Xor of array, S2→ Xor from 1 to n
    3. S1 ^ S2 = X^Y
    4. ***Since they are 2 different number they are bound to be differnet at one bit minimum.***
    5. Bitno → rightmost differentiating bit.(i.e finding set bit)
    6. We can create table of 0 bit and 1bit. Those who have bit 0 at bitno position they go in the 0 bitno table and other one in bitno 1 table.
        
        
        
    7. Now we know X→ appears 3 times in both arrays and Y→ 1 time i.e both appears odd time. And they both we will be in differnet bitNo table (Coz that’s why we created bitno table at first place they differntiate atleast one bit position).
    8. So we can take xor of both bit tables separately and we will have X and Y.
    9. But we don’t know which is X and Y
        
    
    > NOTE: We can also calculate bitno i.e set bit using formula x & ~(x-1)
    > 
    
 