# アルゴリズムメモ

## 逆元を取る

素数$p$に対し互いに素な$a$をとると次の式が成り立つ

$$
p = [\frac{p}{a}] \times a + (p \,\% \, a) \\
\therefore [\frac{p}{a}] \times a + (p \, \% \, a) \equiv 0 \\
\\
\Leftrightarrow [\frac{p}{a}] + (p \, \% \, a) \times a^{-1} \equiv 0 \\
\Leftrightarrow (p \, \% \, a) \times a^{-1} \equiv -[\frac{p}{a}] \\
\Leftrightarrow a^{-1} \equiv -(p \, \% \, a)^{-1} \times [\frac{p}{a}]
$$
ただし、右辺が負にならないように適宜$p$を足す。

## combination
$_nC_r$を求める。

$$
_nC_r = \frac{n!}{(n - r)!r!}\\
=n!\times\{(n-r)!\}^{-1}\times(r!)^{-1}
$$
Fermatの小定理より
$$
a^{p-1} \equiv 1 \, (mod \,\,p)\\
\therefore a^{p-2}\equiv a^{-1}\,(mod\,\,p)
$$
よって
$$
_nC_r\equiv n!\times\{(n-r)!\}^{p-2}\times(r!)^{p-2}\,(mod\,\,p)
$$
