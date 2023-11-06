
= スクラムイベント

スクラムイベントとは、スクラムガイドに規定されている以下のイベントのことです。

 * スプリント
 * スプリントプランニング
 * デイリースクラム
 * スプリントレビュー
 * スプリントレトロスペクティブ

私たちのような兼業スクラムチームには時間の制約もあり、スクラムガイドに規定されている内容をその理想通りの形で実施することは困難です。
そのため、スクラムガイドの精神は守りつつ、私たちのスクラムに合った形で実施しています。

== スプリント

スプリントは、スクラムにおける活動の基本単位となるサイクルのことで、実際のプロダクト開発作業に加え、スクラムイベントのすべてが１スプリントの中で行われます。

1スプリントの長さ（タイムボックス）は一般的には「1か月以下」とされていますが、私たちは２週間としました。その理由として、プロダクト開発に使える時間が半年少々しかなく、１スプリント１か月とするとスプリント数が少なくなりすぎること、および、全員がスクラムの役割を２回ずつローテーションするには14スプリント必要だったことがあります。

== スプリントプランニング

スプリントプランニングは、各スプリントの初めに、そのスプリントで実施する作業の計画をスクラムチーム全員で議論して決めるイベントです。

所要時間（タイムボックス）は、スクラムガイドでは「スプリントが1か月の場合、最大8時間。スプリントの期間が短ければ、スプリントプランニングの時間も短くすることが多い。」とされていますが、私たちのスクラムでは内容を絞り込み、１時間～１時間半程度で実施しています。

=== スプリントプランニングの流れ

私たちのスクラムでは、以下のような流れでスプリントプランニングを実施しています。

　０. プロダクトバックログの作成

　１. スプリントバックログの作成

　２. 完成の定義

　３. 作業量の見積もり

以下、各ステップについて順に説明します。

=== スプリントプランニングの詳細

==== プロダクトバックログの作成

プロダクトバックログは、プロダクトに付与する機能を開発優先順に並べた、スクラムチームの唯一の情報源ともいわれるリストで、プロダクトオーナーが内容の決定権を持っています。

スプリントプランニングまでにプロダクトバックログアイテムを選択可能な状態に準備しておくこと（つまり、プロダクトオーナーがプロダクトバックログを作成し、優先順位づけを行っておくこと）がスクラムガイドに規定されています。

私たちのスクラムでも、スプリントプランニングに先立ち、開発したい機能、および、それが誰にとってどのように価値があるのかをユーザーシナリオの形式でリストアップしてプロダクトバックログとしました。

==== スプリントバックログの作成

スプリントバックログは、各スプリントで何をどのように開発するかを記載するリストで、開発者が内容の決定権を持っています。

スプリントプランニングの際には、そのスプリントで実施する項目をプロダクトバックログから選択してスプリントバックログに移していきます。必要に応じてプロダクトバックログアイテムの追加や分割等（バックログリファインメント）も行います。

私たちのスクラムでも、まずプロダクトバックログからそのスプリントで実施するアイテムを選びます。前述のとおり、私たちのプロダクトバックログはユーザーストーリーのレベルで書かれているため、具体的な開発計画を立てるために、それらを具体的な機能に落とし込んでいきます。このようにして個別の機能に落とし込んだものを私たちは「スプリントバックログアイテム」と呼んでいます（本来のスクラムでは「スプリントバックログアイテム」を別途設けるのではなく、プロダクトバックログアイテム自体を個別の機能に分割・再定義するようです）。

==== 完成の定義

スプリントを経て機能が追加・改善されたプロダクトのことを「インクリメント」と呼びますが、どのような状態になったらそのインクリメントを完成とみなすのか、事前に定義することがスクラムガイドでも求められています。

私たちのスクラムでは、各スプリントバックログアイテム（スクラムガイドでいうプロダクトバックログアイテム）に対して、どの状態まで至ったら完成とするのか１件１件話し合って決め、スプリントバックログに明文化しています。この定義次第で作業量の見積もりが大きく変わるため、あらかじめ目線を合わせるためにも重要なステップだと感じています。

==== 作業量の見積もり

私たちのスクラムでは、スプリントバックログアイテムをさらにタスクレベルまで分解し、「スプリントタスク」という別リストにして管理しています。チームで決めた「完成の定義」を満たすインクリメントを作るのに必要なタスクを列挙し、それぞれについて作業時間を見積もります。作業時間の見積もりには「見積もりポーカー」の手法を用いています（無料ツールの Hatjitsu を活用しています）。各タスクに何ポモドーロ（第６章参照）必要そうかを各自が選択し、それを一斉に見せ合い、外れ値を出したメンバーの意見を聴き、チームとしての見積もりをすり合わせていきます。もし見積もりの結果、１日で終わらないと判断されたタスクは、１日で終わるタスクに分割します。

私たちのスクラムでは基本的にチーム全員のモブプログラミングでプロダクトを作成していくため、タスクの分担は行っていません。私たちの目的は学習ですので、分担して学び損ねる領域を出すよりも、全員で学びを得るのが最適と考えています。

=== スプリントプランニング体験談

 * 最初の内は具体的なやり方が分からなくてやり方を確立するのが大変だった。
 * 未知のタスクについて分量を見積もるのは毎回難しかったが、メンバーみんなで見積もりポーカーをして議論することで、一見どう考えれば良いか分からないようなタスクであっても比較的適切にタスク量見積もりができるようになった。
 * 見積もりポーカーの前に、タスクに関して知見があるメンバーからある程度内容を説明してもらったり、タスクの具体的な完了条件を確認することで、タスクに関する知識が少ないメンバーも見積もりができた。

== デイリースクラム

デイリースクラムは、毎日決まった時間に開発者が集まる15分間のコミュニケーションの場です。
ゴールに対する進捗を確認し、障害を特定し、必要に応じて次のデイリースクラムまでの作業計画を見直し、スプリントバックログを更新します。

私たちの多くはフルタイムの仕事を別途持っており、毎日デイリースクラムを行うことが現実的ではないため、毎日ではなく週3回のコアミーティングの冒頭15分間を利用してデイリースクラムを行っています。

=== デイリースクラムの詳細

デイリースクラムでは、各開発者が順番に以下の３つの質問に簡潔に答えていきます。

 1. 開発チームがスプリントゴールを達成するために、私が昨日やったことは何か？
 2. 開発チームがスプリントゴールを達成するために、私が今日やることは何か？
 3. 私や開発チームがスプリントゴールを達成するときの障害物を目撃したか？

この３つの質問は 2016年版までのスクラムガイドではルールとして、2017年版では、やり方の一例として、それぞれ記載されていましたが、2020 年版で完全に姿を消し、正式なスクラムの一部ではなくなりました。しかしこれはデイリースクラムのやり方をより自由にするための変更であって、この３つの質問が禁じられたわけではありません。

私たちのスクラムでは、各自が順番にこの３つの質問に答える形で発言し、他のメンバーからアドバイスをもらったり、サポートの相談をしたりしています。

注意すべき点として、
 * デイリースクラムは必ず15分間で終了させる
 ** 総時間が15分間に収まらなくなりそうな話はデイリースクラムからは切り離し、後で別途話す
 * ただの進捗報告の場にしない
 ** 「昨日はこれをやりました。今日はこれをやります」で終わるのではなく、スプリントゴール達成に向けて障害はないか、チームとして今できることはないかよく考え、課題提起と協議をする場にする

=== デイリースクラム体験談
 * デイリースクラムに慣れてくると、ただの進捗報告になってしまっていた。この問題をレトロスペクティブで取り上げ、デイリースクラムではまず今困っていることから話すルールを設けた。
 * デイリースクラムを毎日実施する代わりに、Slack に「ゆる悲鳴チャンネル」を設けて、困っていることの対応が遅れないようにした。でも、質問できる困りごとはググるか ChatGPT で自分で解決しようと必要以上に頑張ってしまったり、開発経験の浅いメンバーの「何が問題かわからず質問もできない」トラブルはデイリースクラムまで出てこないことも多かったので、Slack での困りごと共有は万能ではないと思った。
 * 気付くと進捗確認に戻ってしまうので、デイリースクラムは自分たちの開発の妨げになっているものを見える化して取り除くことを目的としていることを常に心に留めておかないと成功しない。
 * 困っていることの共有では個人的事情による進捗の困りごとなどの話もざっくばらんに出る空気感だったので、それぞれのメンバーの状況やコンディションがお互いに伝わり、貴重な場となった。
 * ある日の僕「困っていることないんだよなぁ…」

== スプリントレビュー

スプリントレビューとは、各スプリントの最後（スプリントレトロスペクティブの前）に、ステークホルダーに対してスプリントの成果を示し、自分たちの方向性がステークホルダーの求めているものからずれていないかを議論する場です。

スクラムガイド上、必須のイベントなのですが、私たちは「スプリントレビュー」という独立したイベントを実施していません。その理由としては、①主担当教員とのコアミーティングが週１回、副担当教員も含めたマンスリーレビューが月１回あり、これらの中で現在の方向性の共有やプロダクトのデモをし、方向性の修正をしていること、②我々が作るプロダクトのユーザは私たち自身であるため顧客からのフィードバックを常に受けられる状態で開発していること、および、③これらの状況があるにもかかわらずスプリント毎（2週に1回）にスプリントレビューを開催すると、限られた開発時間をいたずらに削ることにつながりかねないためです。

独立したイベントとしてのスプリントレビューを実施しなくとも、上記①②によってスクラムガイドが求めるスプリントレビューの内容は網羅されていると考え、私たちはこのような運用としました。

== スプリントレトロスペクティブ

スプリントレトロスペクティブとは、１スプリントの最終日にチーム全員でふりかえりを行うイベントです。振り返りの進め方は「アジャイルなチームをつくる ふりかえりガイドブック 始め方・ふりかえりの型・手法・マインドセット」@<fn>{retro} を参考に実施しています。以下この本のことを「ふりかえり本」と呼ぶことにします。

本節ではスプリントレトロスペクティブのことを「ふりかえり」と言い換えて記します。
ふりかえりは普段のPBL活動と同じくオンラインですべて実施をしています。ふせんツールとしては Miro(Free版)を使用しました。カメラはオフにして実施しています。

下記で説明する私たちが実施しているふりかえりでは、オンラインかつカメラオフで効果的に実施できる方法であると感じています。

//footnote[retro][森一樹. (2021). アジャイルなチームをつくるふりかえりガイドブック: 始め方・ふりかえりの型・手法・マインドセット. 翔泳社.]

===  ふりかえりの大まかな流れ

私たちのスクラムで実施したふりかえりの大まかな流れは下記になります。「１．アイスブレークを実施する」以外は、ふりかえり本に記してある流れを取り入れています。

 0. 事前準備を行う
 1. アイスブレークを実施する
 2. ふりかえりのルールを確認する
 3. 出来事を思い出す
 4. アイデアを出し合う
 5. アクションを決める
 6. ふりかえりをカイゼンする

==== 「個人作業」と「共有作業」の分割

ふりかえりの作業は基本的に個人で書き出す作業と共有する作業の2つの作業の繰り返しで実施します。すなわち、個人でふせんに内容を記す「個人作業」とチームでふせんに書いた内容を共有する「共有作業」の2つをワンセットで行っていきます。それぞれの作業は作業時間を必ず定義して、時間を測って実施します。初めは作業時間がどれだけかかるか分からないはずです。感覚で設定しましょう。時間通り終わらなくても問題ありません。事実、私たちのチームでも最初はかなり少なく作業時間を見積もってしまいました。次のスプリントで作業時間を修正すれば大丈夫です。作業時間を決めること自体が大切です。スプリントを重ねていくうちに段々と作業時間の見積もりが最適化されていきます。この後に記すふりかえりの詳細な流れで作業時間が出てきます。参考程度にはなりますが正解ではありません。チームメンバーの属性や能力・コンディションによって時間は増減しますので、スプリントを重ねて自分のチームに最適な時間を見つけていくことになるでしょう。

私たちのチームは、ふりかえりの時間は大切であるという共通認識が形成されていたため、最適なふりかえりの合計時間（150分程度）が分かった後もその時間をいたずらに短縮しようとはしませんでした。むしろ私たちのふりかえりにはそれだけ時間がかかることを受け入れて、内容を充実する方向性で取り組みました。

ふりかえりは思っている以上に疲れるイベントです。ポモドーロテクニックを取り入れて適宜休憩を取ることをお勧めします。

==== オンラインにおける作業スペースの概念

「個人作業」と「共有作業」の作業にメリハリをつけるため、「作業スペース」の概念をMiroに導入しました。「作業スペース」は「手元ゾーン」と「共有ゾーン」の2つが存在します。個人作業は手元ゾーンで実施し、共有作業はふせんに書いた内容を発言しながら、手元ゾーンから共有ゾーンにふせんを出すようにしました。手元ゾーンと共有ゾーンの一例を下記図に示します。左が手元ゾーン、右が共有ゾーンになっています。まずは「個人作業」の時間は左の手元ゾーンにある空のふせん（事前にファシリテーターが準備をしておく）に内容を記していきます。自分がどのふせんを使ってよいか分かるように、個人ごとにアイコンが置かれています。「個人作業」の時間が終了後に「共有作業」の時間を使って、発言者は発言しながら、ふせんをドラックアンドドロップして右の共有ゾーンに移します。この時すでに共有ゾーンに出ているふせんに似た内容があれば、そのふせんの近くに置きます。

//image[furikaeri1][オンラインにおける作業スペースの概念]

==== 共有作業の発言方法

「共有作業」における発言者の順番に関するルールは、公平な発言機会を確保するために重要です。私たちのルールでは、最初にファシリテーターが発言者Aさんを指名します。Aさんはふせんを出しながら発言をしていきます。Aさんのふせんが尽きたら、Aさんは次の発言者Bさんを指名します。Bさんのふせんが尽きたら、Bさんは次の発言者Cさんを指名します。以下、繰り返し行っていく方式を取ってます。ただし、このルールだけでは発言者以外が発言しにくくなることから、発言者が共有ゾーンにふせんを出したタイミングで、似たふせんを持っているほかのメンバーも自由に発言できるルールも導入しています。

たとえば、発言者Aさんが共有ゾーンに「モブプロが上手くいった」というふせんを出した場合、メンバーのCさんが「モブプロで理解が進んだ」というふせんを持っていたなら、Cさんはふせんを共有ゾーンの場に提示しながら、割り込んで発言できます。そして、Dさんが反対の意見「モブプロが上手くいかなかった」というふせんを持っていた場合、DさんもCさんに続いてふせんを出すことができます。こうしてモブプロの話題が一通り終わると、元の発言者Aさんが主導権を取り戻して次のふせんを出す流れになります。

繰り返して全てのふせんが共有ゾーンに出し終わったら、共有作業は終了です。ゾーンを分けることで手元ゾーンにふせんが残ってしまう事態を防ぐことができ、全員が十分に発言する機会を得られるようにしています。

=== ふりかえりの詳細な流れ

さて、以下ではふりかえりの各項目の詳細について記していきます。

=== 事前の準備を行う

ふりかえりの最初のフェーズは事前の準備になります。各項目に関して、スクラムマスターは事前の準備でMiroのフレームを作成しグループワークとして実施する内容を記しておきます。この事前の準備が特に重要になります。事前の準備でスクラムマスターが行うことは、「ふりかえり実施時にいかにメンバーがふりかえりの内容に集中できるか」を考えて、Miroを整備することです。

たとえば、アイスブレークの事前の準備の例を示します。左上に示した１の部分にアイスブレークのグループワークで実施する内容を記しています。また、２の部分にメンバーのアイコンと空のふせんを置いておきます。ここまで準備することで、メンバーはやることが分からなくなったり、ふせんを作成する手間や、どのふせんを使用するか迷う手間が省けて書くことに集中できます。

Miroなどオンラインツールを利用する利点の1つに、事前に準備した内容を再利用できる点が挙げられます。事前の準備で一度作ったテンプレートをコピー&ペーストすることで次のスプリントのふりかえりの準備がすぐ整います。オフライン実施ではふりかえりを実施するとふせんを移動するなどするため、事前に準備した内容が記録に残りづらいです。一方でオンライン実施ではテンプレートという形で事前の準備内容が記録に残るため、そのようなふりかえりのテンプレートの品質もスプリントを重ねるごとに高まっていきます。

//image[furikaeri2][事前の準備を行う]

==== アイスブレークを実施する

ふりかえりを実施して最初のフェーズはアイスブレークになります。アイスブレークの目的は、Miroの操作に慣れてもらうことと、メンバーとの会話を円滑に進めることです。PBL活動は基本的にオンラインで実施しているため雑談をする時間が普段ありません。アイスブレークで雑談する時間を取ることで、メンバーの人となりを知る機会にもなりました。

アイスブレークを実施するフェーズで実施したグループワークを下記に記します。

//note{

スプリント期間中にあった、PBL以外の出来事
（仕事、趣味なんでもOK）を2つ上げましょう。最後に感情を添えてください。
例：仕事が多くて楽しかった。地震が起きて怖かった。など。

個人作業：２分　共有：８分

//}

Miroのアレンジは下図のようにしました。

事前の準備でスクラムマスターが用意したふせん2枚に好きなことを記して共有します。

//image[furikaeri3][アイスブレークを実施する]

==== ふりかえりのルールを確認する

1回目のふりかえりでルールを作成し、以降のふりかえりでは必要に応じてルールを確認しました。ふりかえりのルールを確認するフェーズで実施したグループワークを下記に記します。DPA手法の詳細は「ふりかえり本」を参照してください。

//note{

手法：DPA (Design the Partnership Alliance)
１．どんな雰囲気でふりかえりを進めたいか決める。(1or2個)
個人作業２分
共有と合意３分
・全員が書いたふせんを共有して「全員が合意できる」ものだけふせんにマーク

２．その雰囲気を作り出すために何をするか決める。(1or2個)
個人作業２分
共有と合意３分
・全員が書いたふせんを共有して「全員が合意できる」ものだけふせんにマーク

３．合意した内容を読み上げて確認する。

//}

私たちのPBLで決めたふりかえりのルールは下図に示します。

私たちのPBLの活動では、時間に追われず進行するルールを設け、時間が多少延びてもふりかえりによる学びを重視しました。ふりかえりの各プロセスでは制限時間を設けていましたが、実際には何度も時間を延長するという対応を行いました。

ふりかえりはスプリントの最後に行う定期イベントで何度も実施します。そのため、毎回のふりかえりが楽しみになるようなルールを定めるとよいでしょう。「肩の力抜き抜きモードでやる」というルールは継続してふりかえりを行う上でかなり大切だと感じました。

ふりかえりの時カメラはオフにしてオンラインで実施しているので、共有作業の時にリアクションが見えにくい状況です。この点はMiroのリアクション機能を使用して補いました。ふりかえり中、軽い気持ちでリアクションボタンを押せる雰囲気を作るのが望ましいです。率先してリアクションボタンを連打しましょう！

//image[furikaeri4][合意した内容を読み上げて確認する。]

==== 出来事を思い出す

ここからがふりかえりの中身になっていきます。まずは、出来事を思い出すフェーズです。ふりかえりの行う上での基本作業になります。メンバーのふりかえり経験が少ないうちは、時間を取ってふせんにふりかえり期間の出来事を書くようにしましょう。たとえば、メジャーなKPTという手法でふりかえりを行う場合においても、いきなりKeep / Problem / Try を出すのではなく、必ず最初に出来事を思い出してチームで共有する時間を取りましょう。

私たちが出来事を思い出すフェーズで実施したグループワークから先は、スプリントごとにやり方が異なります。下記に一例を記します。

//note{

１．やったことを書き出す
※どうしても伝えたいのに忘れてしまった場合を除き、資料を見ないで記憶を頼りに出すこと。
※この時間で、わかったことも白いふせんに出してもよい。
個人作業：10分程度
共有：12分程度
・チームで行った仕事の内容は何か?
・チームメンバーが行った仕事の内容は何か?
・自分が行った仕事の内容は何か?
・意識的に行動した内容は何か?
・起こそうとした変化は何か?
・行ったカイゼンは何か?

２．わかったことを書き出す
「やったこと」から学んだこと、気付いたことを書き出す。
個人作業：7分程度
共有：7分程度
・１．で共有した内容を元に書き出す。
・１．で議論して「今」学んだこと、気付いたことでもOK。
・できるだけ他者のやったことに対してわかったことを出せるとよい。

//}

私たちが出来事を思い出すで実施したMiroのボードの様子の一例を下図に示します。

この図は共有作業の際、スプリント初日を左側に、スプリント最終日を右側に配置し、おおよその位置にふせんを置くようにしたものです。また、下の方にやったこと、上の方に分かったことを記したふせんが並んでいます。赤丸のドットシールや濃い色のふせんは次の節で紹介するアイデアを出し合うのフェーズで出たふせんになります。内容は後述します。

//image[furikaeri5][わかったことを書き出す]

==== アイデアを出し合う

出来事を思い出すフェーズの後に、アイデアを出し合うフェーズを実施します。アイデアを出し合うフェーズで実施したグループワークの一例を下記に記します。個人作業の時間では、出来事を思い出すフェーズで貼ったふせんを眺めながらアイデアを書き起こします。共有作業の時間では、出来事を思い出すフェーズで使用した共有スペースにふせんを出していきます。最後にドット投票を行い票が集まったアイデアを次のフェーズで具体化します。

//note{

１．選んだテーマに対して、次にやることのアイデアを書き出す。
・チーム全員で取り組むことを書き出す。
個人作業:7分程度
共有:7分程度

２．チームにとって大事だと思うものに投票する。
・1番目に大事だと思うもの: 6票 (アイデアが多い場合)
・2番目に大事だと思うもの: 3票
・3番目に大事だと思うもの: 1票
投票時間: 3分以内

//}

==== アクションを決める

アイデアを具体化する本フェーズでのグループワークを下記に記します。本フェーズのやり方は現状すべてのふりかえりで同じ方法を取っています。ふりかえりで決まったアクションはNotionに記載して確実に遂行します。私たちはNotionに情報を集約していたため、そこに記載しました。

//note{

手法：SMART
アイデアを出し合うで決まった「次やること」を具体的なアクションに落とし込む。
（あとでNotionに記載し、アクションを確実に遂行する）
時間：20分以内
・明確・具体的：Specific
・計測可能：Measurable
・達成可能：Achievable
・適切な・問題に関連のある：Relevant
・すぐにできる。または、期限が決まっている。：Timely / Time-bounded

また、5W1Hを明確にする
Why：なぜ
Who：誰が
When：いつ
What：何を
Where：どこで
How：どうやって

アクションは、精神論になっていないこと。
よくない例：
「意識する」
「注意する」
「頑張る」
「なんとかする」
「心がける」

//}

Miroの様子を下図に示します。

この回はモブプロに関する内容を元にアクションを決めています。真ん中の次やることに貼られているふせんは、アイデアを出し合うのフェーズで票が集まったふせんをコピー&ペーストして持ってきています。

//image[furikaeri6][アクションを決める]

==== ふりかえりをカイゼンする

ふりかえり最後のフェーズはふりかえりのカイゼンです。ふりかえり本で記されているプラスデルタ法を使用しました。ふりかえりをカイゼンするフェーズで実施したグループワークを下記に記します。この手法はすべてのスプリントのふりかえりの回で実施しました。


//note{

手法：プラスデルタ法
+：良かったこと、上手くいったこと
Δ：カイゼンしたいこと

・とにかく意見を出すのが目的です。
・意見を途切れさせることなくどんどん言っていく。
・出た意見に対して、レスポンスやツッコミはしない。
・ファシリのメモが追い付いていない場合、発言していない人が協力してふせんにメモする。
・人が書き終わるのを待つ必要はない。

時間：5分（制限時間または意見が出なくなったところで打ち切り）

//}

Miroの様子を下図に示します。

左に＋（良かったこと、上手くいったこと）右にΔ（カイゼンしたいこと）のふせんを準備しておき、参加者にどんどん発言してもらいます。ふせんに内容を記すのは発言していない人が協力して行います。発言が途切れた時点で本フェーズは終了になります。次回のファシリテーターはこのふせんを参考にふりかえり自体のカイゼンを行います。

//image[furikaeri7][ふりかえりをカイゼンする]

=== ふりかえり体験談

 * ２週間毎のレトロスペクティブ超癒やしの時間になっている
 * 最初のアイスブレークで、普段はできないプライベートの話をする。なかなか盛り上がる
 * 出来事を思い出すときに、「この実装は○○さんがやってくれて助かりました。ありがとうござます。」などメンバーをお互い称えることができて良かったです。ここら辺はメンバーのヒューマンスキルが皆さん高かったところも大きい気がします。
 * チームの出来事を思い出すことで、他人にフィードバックを返すことができる。普段の活動ではそのような機会がないので、ふりかえりの機会は大切にしたいです。
 * 成長を感じる
 * アクションの棚卸しをやってみたら自分たちの活動に対して一段メタ的な視点で振り返りができた
 * 学習を重視する観点でスクラムマスターを２週間ごとに変える形をとった結果、多様なレトロスペクティブを実践できた
 ** スクラムマスターが毎回新しいふりかえり手法を取り入れてレトロスペクティブを実施している
 * 振り返り本が神ということ。
 ** さまざまなふりかえり手法が具体的に載っている。わかりやすく説明されているので、そのまま実践に取り入れやすい
 * 他のメンバーの出した意見に触発された新たに考えを追加で出すという場面が多く、そのスプリントのやり方に対して相互に言語化することの利点を毎回感じることができた。
 * 2週間のうちにやったことを結構忘れてしまっていることがわかった。振り返りが定期的に開催されることで、ここまで自分ができた。ここまでやった。という実感が湧きやすくなる