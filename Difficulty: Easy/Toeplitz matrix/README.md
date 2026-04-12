<h2><a href="https://www.geeksforgeeks.org/problems/toeplitz-matrix/1?_gl=1*qjc5q1*_up*MQ..*_gs*MQ..&gclid=CjwKCAjwhe3OBhABEiwA6392zBwlBk5PDf77XuXN-_CW_MJqmT5pXd2dXxIf9sZuFaiB2NxCyCYAHhoCv18QAvD_BwE&gbraid=0AAAAAC9yBkBwAi9KYTbpWZhgmTLsIio4n">Toeplitz matrix</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">A <strong>Toeplitz matrix</strong> (also known as a diagonal-constant matrix) is a matrix in which every descending diagonal from left to right contains the same element.</span></p>
<p><span style="font-size: 18px;">Given a rectangular matrix mat, determine whether it is a Toeplitz matrix or not.<br></span><span style="font-size: 18px;">Implement the function isToeplitz(mat) that returns:</span></p>
<ul>
<li><span style="font-size: 18px;"><strong>true</strong> if the matrix is a Toeplitz matrix</span></li>
<li><span style="font-size: 18px;"><strong>false</strong> otherwise</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong></span><span style="font-size: 18px;">mat[][] = [[6, 7, 8],<br>                [4, 6, 7],<br>                [1, 4, 6]]<br></span><span style="font-size: 18px;"><strong>Output: </strong>true</span><br><span style="font-size: 18px;"><strong>Explanation: </strong></span><span style="font-size: 18px;">The matrix is Toeplitz because every diagonal from top-left to bottom-right has the same elements. <br>For example, the main diagonal is 6 → 6 → 6, and other diagonals like 7 → 7 and 4 → 4 are also constant. <br>Since all diagonals follow this pattern, the matrix is Toeplitz, so the output is true.</span></pre>
<pre><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Input:</strong> mat[][] = [[6, 3, 8],
                [4, 9, 7],
                [1, 4, 6]]
<strong>Output:</strong> false
<strong>Explanation</strong>: The primary diagonal elements of the given matrix are [6, 9, 6]. As the diagonal elements are not same, the given matrix is not Toeplitz Matrix.</span></span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong> <br></span><span style="font-size: 18px;">1 ≤ mat.size(), mat[0].size() ≤ 40 <br></span><span style="font-size: 18px;">0 ≤ mat[i][j] ≤ 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;