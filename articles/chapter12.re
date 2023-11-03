
= スクラムアーティファクト

== 「不満なら 創ってしまえ バックログ」
バックログをはじめ、スクラムを通じて作成していく各種のアーティファクトについては、私たちは当初、書籍などに記載されている標準的なものを利用していました。

　しかしながら、実際にスクラムに沿って活動を進めていくと、プロダクトバックログとスプリントバックログのような関連する複数の情報同士の連携作業の不便さ、手入力箇所の多さ、重複などのほか、書籍には載っていないが活動のための必要性に直面して整理しているその他情報との重複・齟齬など、不便と感じる個所が徐々に蓄積していきました。

　こうした不便を解消するため、なにか流用可能な既存のテンプレートなどがないか探してみたものの、そもそも、このようなものは組織や活動ごとの個別性がどうしても大きくなる部分であり、在り物の流用や書籍で書かれている事項だけではどうにもならないということが見えてきました。

　このため私たちは、それまでスクラムに則って活動するなかで見えてきた問題意識に基づき、活動全体を管理するためのツールを独自に開発することとし、どのような構成のツールであれば使いやすいかを話し合うことにしました。

　その結果、当初は不便なバックログツールを改善できないかという論点だけが出発点であったにもかかわらず、この議論は私たちのワークフローそのものを俯瞰的に分析し、自分たちにとってのスクラム活動のあり方そのものを考える作業となったのです。

　私たちはスクラムの基本的なアーティファクトとしてプロダクトバックログ及びスプリントバックログのほか、後者をより詳細に分解した「スプリントタスク」や、開発以外のタスクを含めメンバーごとのタスクを管理するための「個人タスク」を作成し、デイリースタンドアップミーティングなどにも利用しています。また、「学習」を目的として活動する趣旨から、その学びの状況を評価に付すことができるようにするため、学習の目標と達成度をまとめた表やモブプログラミングでの知識体系化ドキュメントなども情報として蓄積しています。

　こうしたもの全てを一体的に管理しつつ、各活動が有機的に一つの目標に繋がっていくようにするため、最終的には以下のような構成をとるリレーショナルデータベースを作成し、Notion上に展開して利用することにしました。

【バックログ構成図のイメージ】
//image[backlog][バックログ構成図のイメージ]

このバックログでは、モブプログラミングで得た知識を学習目標に関連付けて体系化できるようにしたり、スプリントプランニングやデイリースタンドアップミーティングをより効果的に行うことができるための工夫なども凝らされており、それまでの各スクラムイベント実施方法の改善にもつながりました。

　バックログを自分たちで一から創ったことでツールとして利便性が向上したことはもちろん良かったことですが、それよりも想定外の収穫となったのは、ツールの課題と利便性向上を話し合うプロセスが、これ以上ないほどプロセスの分析と改善に役立ったことでした。

　振り返れば、このPTではこれまで、バックログ以外にも活動の中で不便と感じたところに関しては、積極的にどのようなツールを使えば、或いは作れば、より合理的になるかを積極的に考察してきました。その結果、バーンダウンチャートの自動可視化ツールやGoogleMeetで使えるポモドーロタイマー、見積ポーカーツール、アイデアだしボード、Githubコメント集計ツール、週報DB書き出しツール、GoogleMeetコメントフローツール、学習指標データベースなど、バックログ以外にも様々なツールを取り入れることとなりました。

　プロセスが目詰まりを起こしている箇所について、「どのようにツールを改善するか」という観点で見直しをするのは、プロセスのより具体的な改善に繋がる面を持っていたように思います。例えば「レトロスペクティブはもっと”わいわい”やっていこう」という改善方針を立てたとき、それだけでは曖昧な心がけになりかねませんが、GoogleMeet上でニコニコ動画のようにコメントが流れていくツールを取り入れたり、画面上で意思表示しやすいスタンプをつかえるボードツールを使って、特定のスタンプに特定の意思を割り当てクイックに意思表示するようにしたり、レトロスペクティブツールにアイスブレイク領域を設けたりするといったの改善は、単に「わいわい」やっていくという方針を立てるだけの場合と比べてはるかに具体的な行動に結実しやすいやり方でした。

　このバックログもモブプログラミングの知識体系化記録や学習目標＆達成度データベースと一体化させることで、開発プロセスを「学び」に繋げていく意識づけをより強める効果をもたらしました。

　こうして、開発するメインとなるプロダクトだけでなく、こうした開発プロセスを支える各種ツールについてもプロダクトと同じようにインクリメンタルに改善を重ねることで、ツールの利便性に加え、私たちの活動そのものもアジャイルに改善していくことに繋がっていきました。