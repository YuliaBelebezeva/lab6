# lab6
Задание 3

Написать программу, которая переводит время из секунд в целое
значение часов, минут, секунд (если значение часов равно 0, то слово час не
выводится.

Объявить переменные: total_seconds, hours, minutes, seconds
 ВЫВОД: "Введите время в секундах:"
 ВВОД: total_seconds
// Вычисление часов, минут, секунд
    hours = total_seconds / 3600
    minutes = (total_seconds % 3600) / 60
    seconds = total_seconds % 60
 ВЫВОД: "Результат: "
    ЕСЛИ hours == 0 ТО
        ВЫВОД: minutes + " мин " + seconds + " сек"
    ИНАЧЕ
        ВЫВОД: hours + " час " + minutes + " мин " + seconds + " сек"
    КОНЕЦ_ЕСЛИ
    
РЕЗУЛЬТАТ:
Введите время в секундах: 3661
Результат: 1 час 1 мин 1 сек

<img width="275" height="605" alt="image" src="https://github.com/user-attachments/assets/57443e62-a13a-488e-b5e3-35d70fdb07b9" />

https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%22UGSAQfHRx_G8zM9gDJ_U%22%3E7Vtbc6M2FP41nmkf2kESAvxoO3b7sJlJJ9tp33YIVoAstjwgb%2BL%2B%2BgqQQEJyQiZ2CM6%2BYDjo%2Bp37EZ6gxebpjzzcJdd0TbIJdNZPE3Q1gRBg7PKfknKoKQECNSHO07Vo1BJu0%2F%2BIIDqCuk%2FXpNAaMkozlu50YkS3WxIxjRbmOX3Um93TTJ91F8bEINxGYWZS%2F0nXLBG7gH5L%2F5OkcSJnBt60frMJZWOxkyIJ1%2FRRIaHlBC1ySll9t3lakKwET%2BJS91sdedssLCdb1qfD7OGvhy83kft3FF%2Bjb1%2Fj639v499QPcqPMNuLDYvFsoNEgKw5IOKR5iyhMd2G2bKlznO6365JOY3Dn9o2XyjdcSLgxAfC2EFwN9wzykkJ22TibT1nOdHRvUneh3lM2DMbgg2yXCQJ3RCWH3i%2FnGQhS3%2Fo44dCNuKmXdP1hqZ8ZugIOXaBEOODlE5HH6Kg%2BzwiolfLBH6jLKMlVax5BZvwyNhUw%2FESm3qw030jOzVGvBZ1aKLOoZur12V1dSurxL4VJDL48pikjNzuwgqOR24kdUzv0yxb0IzmVWt0f38Po4jTC5bT70R5s%2FbuPOwZbBRLJDkjT89zxURRdEC4I9yuEO7H1uABacUSxdh5zpmA9y9N3N2e4u4NKe7S5X4%2B2KdDwu4aqDemhDPECzelxchYhQx3O2hlMCVP6OZuz9c1H4OxAZqxgVZj45nGxnC5p5P7sQVBL8q911PuwVujpTfh7lnd65RfwSSYW5wsmpUqISi8TVDd11dQXWfV1ZHN6qHqe1xdFxVlJRtciVficaFM58levD2UDYBcW0Usrwt9SeqMQXXviSWJt81K5qK7WEaz5YWp3ppknVzFT6DUwA00pUaeRakRNJXaP5dOB%2FbQzZXy0YGYb53pONpg1jHc0i3pAC5IYZbGW%2F4YcfgIp89LcFOeU87Ei026XluMxgk40WSb0rxaOOFZQjl0NuN6canLtK9xHTR3mRqwJ3xjRWmtyidHjTFKc8hV1lSLj295sKfLu9XyvGvuAoDd9Fzp%2FuRSDRBGH80AHcniZ4qvV3njSYe%2BUlx53QwpFDVgWAj3DWsvD%2FpFKfWYU0MUPn4MDzoFA9cfXOkurmIA%2BuauYNiagZm9btJt42V%2BUd0MFm7m18bpeKbL%2BfjS33U57vAux3T2Y5f%2B3hlsMKj0mymsEHYjxsKXIu4Y44HFHVoirJGLe9BT3JWDwyHE%2FUhWfbxiIyIitQLjVxSk10Ca2oisk5SlntGrije4Z4AXV9qU8L2sKoPWNuHFBaT9gR80IJXLtBU%2B5GFKXKbaoz9Jwb5ubXxbFuZYrM35TlKQCf7YpR72lfq3niFWXWd5Hh6UBrvyg5JCGbn7XYqrywBwXKfDxXrIk36NIkF5dRzgKz4eKA2gUTpZGaUWqJRRnjk7UQefycZmoae5D7TDofHFHCjQJSCYDh5zWCr%2Bn%2BLsxe2Ef76FFe9a%2BkQWPR25Oe5bF0BHWPVOQYj9aPsFA9nUkwPFsCHlAPqngTxBUsajn8Et5JE8%2BpMcEXlA58gUDmwnYY%2F6aZGEuwrm8FAFZSXU3wmLEoFLUVu%2FUoSr9yRf%2FiBl7FazSgRyfCg8n%2BCrZ1QjJ3yo8K6a16ngZyFTnnckT%2Fm2S54J5t20lHmxDXdfaR0l1jO%2Fp6rhrqohk7M2TYNn84Dm8cTIPaD8%2B8TLHhAN6QHlMl%2BdIgDF3cyUUuFVt9lPP%2FhGPwgsyvm%2BfhBZwqSRayfqq514UO20lIV7xacrJUJRi%2Fp6Y5HnNRrW%2BS5yqehccAmaBPHgmnQk537mI5eunmVZuivIOCqfrv871llg%2Fe7LxSYL8NlYYKn4t7B36l%2BKtzkdI4h3hBH%2B9M4503%2BFLKG7VfKD18POH9s%2FR9aly%2FYvpmj5Pw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E


Белебезьева Юлия бИД-251

