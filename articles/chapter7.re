
= モブプログラミング

PBL活動の中で一定のウェイトを占めるプロダクト開発でモブプログラミングを行っています。また、開発以外にもメンバー全員が一堂に会する機会であることから、新しい知識の獲得であったり、開発におけるトラブルを一人で解決できなかった場合のトラブルシューティングとして活用したりすることもあります。本章ではこれらのチーム活動を「モブプロ」、一般的なモブプラグラミングをカギ括弧しのモブプロとして総称することにします。ここでは「モブプロ」についての概要、やってよかった点に加え、苦労した点についても紹介します。

== 「モブプロ」の開催頻度は？

スプリントプランニングのタイミングである程度の確保したい時間を設定しています。最も「モブプロ」の開催に力を入れていたスプリントではスプリントの共同活動時間のうちの４割程度の時間を投入していました。週の共同活動時間が９時間、スプリントは２週間単位です。スプリントのうち３時間はレトロスペクティブに充ているため、活動時間の半分を「モブプロ」に充てるのは難しい状況でした。スプリントは「モブプロ」をしっかり行える日の場合、３時間の活動時間のうちの２時間程度を「モブプロ」にあています。ただし、半期に一度の発表の準備に追われていた時期はどうしても計画通りの開催ができない、といった状況もありました。

//image[mobpro-time][このスプリントは6/13-6/26開催のもので、実施率は４割程度でした]

== 「モブプロ」ではどんなことをやった？

「モブプロ」の開催にあたって、メンバーは事前に『モブプログラミング・ベストプラクティス ソフトウェアの品質と生産性をチームで高める』@<fn>{mobpro}を読み、モブプログラミングの基礎的な実施方法やその意義について理解を深めておきました。「モブプロ」もこの本に記述されているような理念という点では共通点があると考えています。
//footnote[mobpro][パール マーク. (2019). モブプログラミング・ベストプラクティス: ソフトウェアの品質と生産性をチームで高める (長尾高弘, Trans.). 日経BP社.]

===[notoc]ドキュメントを深掘り

プロダクト開発での必要性からSlack API、Notion API、LangChainのドキュメント群にある程度向き合わなければなりませんでしたが、一人で向き合おうとしても歯ごたえがありすぎるドキュメントもメンバーと協力しながら向き合うことで要点理解がはかどりました。

===[notoc]一人だとモチベーションが続かない作業を共同で進める

GitHubの設定項目の変更、Slack Botの設定変更ほかPBL活動の中で使うことになるさまざまなツール、サービスの設定変更のような作業は大切ですがなかなかやる気が起きにくいものです。そのようなタスクはモブプロの時間を利用して一気に進める、という出来事もしばしばありました。

===[notoc]一人で作業していて詰まってしまった問題を解決

PBL活動ではゆる悲鳴チャンネルというSlackチャンネルを用意して、各自が苦しんでいる作業を投稿してもらっています。「モブプロ」のテーマがこの投稿の中から選ばれることもあります。

//image[yuruhimei][ゆる悲鳴チャンネルの写真]

===[notoc]王道のモブプロ

PBLにおいて私たちのチームでは、すでに知見があるメンバーが各々の得意分野に関してプロトタイプとして先行開発を行っていました。先行開発している人がエキスパート役（教える立場、タイピストにはならない）として、タイピスト役の実装を導いていました。このしくみを実際に導入して、先行開発しているメンバーは他人に教えたり、質問に答えることで深い理解や知識の定着が見込める利点を実感できています。また、モブ役やタイピスト役のメンバーはエキスパート役から効率よく知識が伝播できていると感じています。

== モブプロで工夫したこと

物理的に１つのキーボードを交代で使用するモブプロに近い体感をオンライン上で実現するために、Visual Studio Codeの拡張機能のLiveShareをメンバー全員がインストールして、タイピスト役のエディタに他メンバーが参加できるようにしました。LiveShare以外にもTODO Treeという拡張機能でモブプロ時のみ使うコメントをわかりやすく管理する工夫を導入しています。

//image[todo-tree][MOBというコメントもTODOというコメント同様可視化されている]

== 「モブプロ」で感じた良かった点

===[notoc]それぞれが別々の視点での気付きを口にすることが相互にとても勉強になった

たとえば、チーム開発を普段から行っているメンバーとそうでないメンバーによってコーディングのときに気を付ける観点に差異がある、といったときなどに背景の違うメンバーがそれぞれの立場から意見を述べるだけでも、ほかのメンバーが考えていなかったような発想が潜んでいると感じられるケースがありました。

===[notoc]モブやタイピストの質問が、新たな知見を共有するきっかけになることもあった

たとえばSlack Botで使いたい機能はドキュメントのどこに書いてあるのか、という点について話し合た後で、ドキュメントの章立てからどこにどういう内容が書いてあるのかをより深掘りするような流れになったことがありました。

===[notoc]普段は言語化されないような画面上でのさまざまな工夫のノウハウ、暗黙知の共有の場になった

便利なショートカットキーやエディタでコードを書くときにどのような操作をエディタ上で行っているのかなどはなかなか言葉を通じて人に伝えるのは難しいものですが、モブプロを通じて、このようなキーやマウスの操作をすることでスムーズに操作できるのかに気付くことができた、といった出来事がありました。

===[notoc]メンバー間の知識の偏りをならすのに有効

一人のメンバーが知っている情報をほかのメンバーに伝えようとした場合に「モブプロ」という場は非常に有効であるというのが率直な印象です。また、分からない点があったときにその場ですぐに質問しやすい空気を醸成できていたことも、この効果を高めることに役立っていると感じます。

===[notoc]「わいわい」やるということの最大の実践の場になっている

PBL開始当初からチームで物事を進めていくことに重点を置いていたので、「わいわい」というキーワードはしばしばスプリントレトロスペクティブ（「11.5 スプリントレトロスペクティブ」参照）などでもメンバーの口から出るキーワードでした。「モブプロ」の場はまさにこの点を体現するような取り組みを総合的に行っている場だと感じられます。

== モブプロをやって大変だった点

===[notoc]メンバーのPC事情がバラバラ、メンバー固有のトラブル

PBL特有の問題として、使用しているPCのOSがWindows 10, 11, Mac(Intel), Mac(Apple Silicon), Ubuntuと入り乱れがち、という点があります。このため、開発環境を極力統一し、かつ導入も容易なしくみを構築するのはとても重要な観点です。PBLではLinux系のDockerコンテナを開発環境として使用しています。また、チームメンバーのスキルも踏まえ、簡単に開発環境が立ち上がっていることが確認でき、起動自体も容易にできるしくみを模索した結果、Visual Studio Codeの拡張機能であるDev Containerを活用することにしています。

また、メンバーのPC固有の問題が発生することもありました。開発中のSlack Botの動作確認のためにlocalhostのポートを開放する必要があるのですが、別のサービスと競合してしまった結果、特定のメンバーのみうまく動作しなくなってしまった、という事例が過去にありました。

===[notoc]基礎的な内容だけでも情報量が多くて大変

「モブプロ」では全員が参加するため、深い専門性を必要とするレベルまでは到達しない範囲のテーマを扱うことが多いですが、それでも非常に情報量が多くなってしまいがちです。全員で学ぶことは重要ですが、それゆえに個々のメンバーが学びたいこととのバランスを崩さないようにすることが重要であると日々感じさせられます。