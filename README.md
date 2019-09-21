# STM32HALのラッパライブラリ
## 使い方
1. CubeMXでプロジェクトを生成
2. `stm32_wrapper`をサブモジュール追加
```bash
cd <project>
git init
git submodule add https://github.com/kn-rew/stm32_wrapper.git
git submodule init && git submodule update
cp stm32_wrapper/.gitignore ./
```
3. ファイル`core.hpp`と`core.cpp`をコピー
```bash
cp stm32_wrapper/core_template/core.cpp Src/
cp stm32_wrapper/core_template/core.hpp Inc/
```

4. `Src/main.c`内に`core.hpp`をインクルードし，関数`main`で関数`core()`ｗ呼び出す(各初期化の後に行う)．

5. `Src/core.cpp`内にプログラムを記述していく．