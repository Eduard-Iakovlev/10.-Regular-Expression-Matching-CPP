# 10. Regular Expression Matching CPP

Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character.​​​​
'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial). 

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
Example 2:

Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
Example 3:

Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)". 

Constraints:

1 <= s.length <= 20
1 <= p.length <= 20
s contains only lowercase English letters.
p contains only lowercase English letters, '.', and '*'.
It is guaranteed for each appearance of the character '*', there will be a previous valid character to match.

# 10. Сопоставление регулярных выражений

Учитывая входную строку s и шаблон p, реализуйте сопоставление регулярных выражений с поддержкой '.' и '*' где:

'.' Соответствует любому отдельному символу.​​​​
'*' Соответствует нулю или более предыдущего элемента.
Соответствие должно охватывать всю входную строку (не частично).

Пример 1:

Ввод: s = «aa», p = «a»
Вывод: false
Объяснение: «a» не соответствует всей строке «aa».
Пример 2:

Входные данные: s = "aa", p = "a*"
Вывод:true 
Пояснение: '*' означает ноль или более предыдущего элемента, 'a'. Следовательно, при повторении 'a' один раз оно становится "aa".
Пример 3:

Ввод: s = «ab», p = «.*»
Вывод: true
Объяснение: «.*» означает «ноль или более (*) любых символов (.)». 

Ограничения:

1 <= s.length <= 20
1 <= p.length <= 20
s содержит только строчные английские буквы.
p содержит только строчные английские буквы, '.' и '*'.
Для каждого появления символа '*'
