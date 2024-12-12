# cmem
C言語のメモリ処理に関する学習用。  
以下のブログ記事から  
[[C言語] メモリ処理系の関数一覧 | 晴耕雨読](https://tex2e.github.io/blog/c/buffer-manipulation)  
上記記事を参考にしつつ、`strlcpy`を使ったり、一部必要なライブラリが無いとコンパイル時に叱られたので一部ちょこちょこ修正したりエラー吐かせるときに`fprintf(stderr, "string\n")`にしたりと変えたりしている。  

# テスト用のコンパイル
```bash
$ gcc -o a ./taget.c
```

## 実行環境
GCC  
```
$ gcc --version
gcc (GCC) 14.2.1 20240910
Copyright (C) 2024 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

```bash
$ farfetch
                   '                      haturatu@alleycat
                  'o'                     ------------------
                 'ooo'                    OS: Linux 6.12.1-artix1-1 x86_64
                'ooxoo'                   Distro: Artix Linux
               'ooxxxoo'                  Host: 3443CTO ThinkPad X1 Carbon
              'oookkxxoo'                 Uptime: 0 days, 37 mins
             'oiioxkkxxoo'                Packages: 1482 (pacman)
            ':;:iiiioxxxoo'               Resolution: 1600x900
               `'.;::ioxxoo'              Shell: bash 5.2.37(1)-release
          '-.      `':;jiooo'             CPU: Intel Core i7-3667U CPU @ 2.99GHz (4 core)
         'oooio-..     `'i:io'            GPU: Intel 3rd Gen Core processor Graphics Controller
        'ooooxxxxoio:,.   `'-;'           Memory: 2257 MiB / 7642 MiB
       'ooooxxxxxkkxoooIi:-.  `'          Storage: /dev/sda1: 170G / 234G
      'ooooxxxxxkkkkxoiiiiiji'
     'ooooxxxxxkxxoiiii:'`     .i'
    'ooooxxxxxoi:::'`       .;ioxo'
   'ooooxooi::'`         .:iiixkxxo'
  'ooooi:'`                `'';ioxxo'
 'i:'`                          '':io'
'`                                   `'
```
