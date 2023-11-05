# textlintの使い方

日本語の自然言語の文章をチェックするツールです。完全に指摘に従って修正するというよりは、ある程度指摘に沿うことで文章に統一感を出すことが狙いです。

## 1. インストール

```
npm install
```

## 2. チェック

例として、`articles/chapter1.re`をチェックします。

```
npx textlint articles/chapter1.re
```

## 3. おまけ

-- fixオプションをつけると、自動で修正してくれます。

```
npx textlint --fix articles/chapter1.re
```