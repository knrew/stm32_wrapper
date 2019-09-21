# STM32HALのラッパライブラリ

1. CubeMXでプロジェクトを生成
2. 
```bash
cd <project>
git init
git submodule add https://github.com/kn-rew/stm32_wrapper.git
git submodule init && git submodule update
cp stm32_wrapper/core_template/core.cpp Src/
cp stm32_wrapper/core_template/core.hpp Inc/
```