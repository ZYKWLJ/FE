#include "../../include/__include.h"

/*
我有一个excel表格，里面有两列，分别是：单词	释义，例如：
abandon v. 遗弃；离开；放弃；终止；陷入n. 放任，狂热
现在我用C语言结构体来表示这些单词：
typedef struct string_and_meaning{
    String string;
    String meaning;
}String_and_meaning;

例如：
String_and_meaning String_and_meaning_abandon={
    .string="abandon",
    .meaning="v. 遗弃；离开；放弃；终止；陷入n. 放任，狂热",
};

请你使用python完成所有的单词导入，都做成上面的全局变量的形式。其中统一以String_and_meaning_为前缀，单词作为变量名。例如：
String_and_meaning_abandon,这个全局变量。

已知：excel文件的路径为：C:\Users\29001\Desktop\code\fun-eg-v1\大学英语六级词汇完整带音标-可打印-可编辑-正序版1.xls
请将文件中的所有单词导入到文件：C:\Users\29001\Desktop\code\fun-eg-v1\src\4_vocabulary\stringss.c中。

*/
Word *extract_word_from_string_and_meaning(String_and_meaning *string_and_meaning)
{

    Word *word = (Word *)malloc(sizeof(Word));

    word->word = string_and_meaning->string;

    srand(time(NULL));

    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字

    word->rectangle.coordinate.x = OUTERMOST_BORDER_X + rand() % (OUTERMOST_BORDER_WIDTH - strlen(word->word) - MARGIN_WORD_BORDER_X);
    word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + rand() % (OUTERMOST_BORDER_HEIGHT - MARGIN_WORD_BORDER_Y);
    word->rectangle.pattern.corner = WORD_BORDER_CORNER;
    word->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // 随机选择一个方向
    return word;
}


Word *extract_meaning_from_string_and_meaning(String_and_meaning *string_and_meaning)
{

    Word *word = (Word *)malloc(sizeof(Word));

    word->word = string_and_meaning->meaning;

    srand(time(NULL));

    word->rectangle.width_and_height.width = strlen(word->word) + MARGIN_WORD_BORDER_X; // 字符串长度 + 左右边框
    word->rectangle.width_and_height.height = MARGIN_WORD_BORDER_Y;                     // 上下边框 + 字

    word->rectangle.coordinate.x = OUTERMOST_BORDER_X;
    word->rectangle.coordinate.y = OUTERMOST_BORDER_Y + OUTERMOST_BORDER_HEIGHT + MEANING_MIDDLE_MARGIN;
    word->rectangle.pattern.corner = WORD_BORDER_CORNER;
    word->rectangle.pattern.vertical = WORD_BORDER_VERTICAL;
    word->rectangle.pattern.horizontal = WORD_BORDER_HORIZONTAL;

    word->direction = rand() % 4; // 随机选择一个方向
    return word;
}

String_and_meaning String_and_meaning_abandon = {
    .string = "abandon",
    .meaning = "v. 遗弃；离开；放弃；终止；陷入n. 放任，狂热"};

String_and_meaning String_and_meaning_ability = {
    .string = "ability",
    .meaning = "n. 能力，能耐；才能"};

String_and_meaning String_and_meaning_able = {
    .string = "able",
    .meaning = "adj. 能；[经管] 有能力的；能干的n. (Able)人名；(伊朗)阿布勒；(英)埃布尔"};

String_and_meaning String_and_meaning_abnormal = {
    .string = "abnormal",
    .meaning = "adj. 反常的，不规则的；变态的"};

String_and_meaning String_and_meaning_aboard = {
    .string = "aboard",
    .meaning = "adv. 在（飞机、火车、船）上；骑在（马）上；（喻）新入伙；（棒球）在垒上prep.  在 （船或飞机）上"};

String_and_meaning String_and_meaning_abolish = {
    .string = "abolish",
    .meaning = "vt. 废除，废止；取消，革除"};

String_and_meaning String_and_meaning_about = {
    .string = "about",
    .meaning = "adv.附近,大约,转向,左右,周围;prep.在附近,关于,在...周围,忙于"};

String_and_meaning String_and_meaning_above = {
    .string = "above",
    .meaning = "adj.上面的,上述的,上文的;adv.在上面;prep.在...上方,过于,超出"};

String_and_meaning String_and_meaning_abroad = {
    .string = "abroad",
    .meaning = "adv. 在国外；到海外adj. 往国外的n. 海外；异国"};

String_and_meaning String_and_meaning_abrupt = {
    .string = "abrupt",
    .meaning = "adj. 生硬的；突然的；唐突的；陡峭的"};

String_and_meaning String_and_meaning_absence = {
    .string = "absence",
    .meaning = "n. 没有；缺乏；缺席；不注意"};

String_and_meaning String_and_meaning_absent = {
    .string = "absent",
    .meaning = "adj. 缺席的；缺少的；心不在焉的；茫然的vt. 使缺席"};

String_and_meaning String_and_meaning_absolute = {
    .string = "absolute",
    .meaning = "adj. 绝对的；完全的；专制的n. 绝对；绝对事物"};

String_and_meaning String_and_meaning_absolutely = {
    .string = "absolutely",
    .meaning = "adv. 绝对地；完全地"};

String_and_meaning String_and_meaning_absorb = {
    .string = "absorb",
    .meaning = "vt. 吸收；吸引；承受；理解；使…全神贯注"};

String_and_meaning String_and_meaning_abstract = {
    .string = "abstract",
    .meaning = "adj. 纯理论的；抽象的；抽象派的n. 摘要；抽象；抽象的概念；抽象派艺术作品v. 摘要；提取；抽象化；退出；转移；使心不在焉"};

String_and_meaning String_and_meaning_absurd = {
    .string = "absurd",
    .meaning = "adj. 荒谬的；可笑的n. 荒诞；荒诞作品"};

String_and_meaning String_and_meaning_abundance = {
    .string = "abundance",
    .meaning = "n. 充裕，丰富"};

String_and_meaning String_and_meaning_abundant = {
    .string = "abundant",
    .meaning = "adj. 丰富的；充裕的；盛产的"};

String_and_meaning String_and_meaning_abuse = {
    .string = "abuse",
    .meaning = "n. 滥用；虐待；辱骂；弊端；恶习，陋习vt. 滥用；虐待；辱骂n. (Abuse)人名；(英)阿比斯"};

String_and_meaning String_and_meaning_academic = {
    .string = "academic",
    .meaning = "adj. 学术的；理论的；学院的n. 大学生，大学教师；学者"};

String_and_meaning String_and_meaning_academy = {
    .string = "academy",
    .meaning = "n. 学院；研究院；学会；专科院校"};

String_and_meaning String_and_meaning_accelerate = {
    .string = "accelerate",
    .meaning = "vt. 使……加快；使……增速vi. 加速；促进；增加"};

String_and_meaning String_and_meaning_acceleration = {
    .string = "acceleration",
    .meaning = "n. 加速，促进；[物] 加速度；跳级"};

String_and_meaning String_and_meaning_accent = {
    .string = "accent",
    .meaning = "n. 口音；重音；强调；特点；重音符号vt. 强调；重读；带…口音讲话"};

String_and_meaning String_and_meaning_accept = {
    .string = "accept",
    .meaning = "vt. 接受；承认；承担；承兑；容纳vi. 承认；同意；承兑"};

String_and_meaning String_and_meaning_acceptable = {
    .string = "acceptable",
    .meaning = "adj. 可接受的；合意的；可忍受的"};

String_and_meaning String_and_meaning_acceptance = {
    .string = "acceptance",
    .meaning = "n. 接纳；赞同；容忍"};

String_and_meaning String_and_meaning_access = {
    .string = "access",
    .meaning = "n.通路,访问,入门vt.存取,接近"};

String_and_meaning String_and_meaning_accessory = {
    .string = "accessory",
    .meaning = "n. 配件；附件；[法] 从犯adj. 副的；同谋的；附属的"};

String_and_meaning String_and_meaning_accident = {
    .string = "accident",
    .meaning = "n. 事故；意外；[法] 意外事件；机遇"};

String_and_meaning String_and_meaning_accidental = {
    .string = "accidental",
    .meaning = "adj. 意外的；偶然的；附属的；临时记号的n. 次要方面；非主要的特性；临时记号"};

String_and_meaning String_and_meaning_accommodate = {
    .string = "accommodate",
    .meaning = "vt. 容纳；使适应；供应；调解vi. 适应；调解"};

String_and_meaning String_and_meaning_accommodation = {
    .string = "accommodation",
    .meaning = "n. 住处，膳宿；调节；和解；预订铺位"};

String_and_meaning String_and_meaning_accompany = {
    .string = "accompany",
    .meaning = "vt. 陪伴，伴随；伴奏vi. 伴奏，伴唱"};

String_and_meaning String_and_meaning_accomplish = {
    .string = "accomplish",
    .meaning = "vt. 完成；实现；达到"};

String_and_meaning String_and_meaning_accord = {
    .string = "accord",
    .meaning = "n. 符合；一致；协议；自愿vt. 使一致；给予vi. 符合；一致"};

String_and_meaning String_and_meaning_accordance = {
    .string = "accordance",
    .meaning = "n. 按照，依据；一致，和谐"};

String_and_meaning String_and_meaning_accordingly = {
    .string = "accordingly",
    .meaning = "adv. 因此，于是；相应地；照着"};

String_and_meaning String_and_meaning_account = {
    .string = "account",
    .meaning = "n. 账户；解释；账目，账单；理由；描述vi. 解释；导致；报账vt. 认为；把…视为"};

String_and_meaning String_and_meaning_accumulate = {
    .string = "accumulate",
    .meaning = "vi. 累积；积聚vt. 积攒"};

String_and_meaning String_and_meaning_accuracy = {
    .string = "accuracy",
    .meaning = "n. [数] 精确度，准确性"};

String_and_meaning String_and_meaning_accurate = {
    .string = "accurate",
    .meaning = "adj. 精确的"};

String_and_meaning String_and_meaning_accuse = {
    .string = "accuse",
    .meaning = "vt. 控告，指控；谴责；归咎于vi. 指责；控告"};

String_and_meaning String_and_meaning_accustom = {
    .string = "accustom",
    .meaning = "v. 使习惯于，使适应"};

String_and_meaning String_and_meaning_accustomed = {
    .string = "accustomed",
    .meaning = "adj. 习惯的；通常的；独有的v. 使习惯于（accustom的过去分词）"};

String_and_meaning String_and_meaning_ache = {
    .string = "ache",
    .meaning = "n.疼痛vi.觉得疼痛,渴望"};

String_and_meaning String_and_meaning_achieve = {
    .string = "achieve",
    .meaning = "vt. 取得；获得；实现；成功vi. 达到预期的目的，实现预期的结果，如愿以偿"};

String_and_meaning String_and_meaning_achievement = {
    .string = "achievement",
    .meaning = "n. 成就；完成；达到；成绩"};

String_and_meaning String_and_meaning_acid = {
    .string = "acid",
    .meaning = "n. 酸；俚迷幻药adj. 酸的；讽刺的；刻薄的"};

String_and_meaning String_and_meaning_acknowledge = {
    .string = "acknowledge",
    .meaning = "vt. 承认；答谢；报偿；告知已收到"};

String_and_meaning String_and_meaning_acquaint = {
    .string = "acquaint",
    .meaning = "vt. 使熟悉；使认识"};

String_and_meaning String_and_meaning_acquaintance = {
    .string = "acquaintance",
    .meaning = "n. 熟人；相识；了解；知道"};

String_and_meaning String_and_meaning_acquire = {
    .string = "acquire",
    .meaning = "vt. 获得；取得；学到；捕获"};

String_and_meaning String_and_meaning_acquisition = {
    .string = "acquisition",
    .meaning = "n. 获得物，获得；收购"};

String_and_meaning String_and_meaning_acre = {
    .string = "acre",
    .meaning = "n. 土地，地产；英亩"};

String_and_meaning String_and_meaning_across = {
    .string = "across",
    .meaning = "adv.横过,交叉地,在对面 prep.越过,交叉,在...的那边,在...对面那边"};

String_and_meaning String_and_meaning_act = {
    .string = "act",
    .meaning = "n.幕,法案,法令,动作,举动,节目,(戏剧的)幕vi.行动,产生...的效果,担当,表演,假装,表现,见效vt.扮演,装作"};

String_and_meaning String_and_meaning_action = {
    .string = "action",
    .meaning = "n. 行动；活动；功能；战斗；情节n. （Action）（英）埃克申（人名）"};

String_and_meaning String_and_meaning_activate = {
    .string = "activate",
    .meaning = "vt. 刺激；使活动；使活泼；使产生放射性vi. 激活；有活力"};

String_and_meaning String_and_meaning_active = {
    .string = "active",
    .meaning = "adj. 积极的；活跃的；主动的；有效的；现役的n. 主动语态；积极分子"};

String_and_meaning String_and_meaning_activity = {
    .string = "activity",
    .meaning = "n. 活动；行动；活跃"};

String_and_meaning String_and_meaning_actor = {
    .string = "actor",
    .meaning = "n. 男演员；行动者；作用物"};

String_and_meaning String_and_meaning_actress = {
    .string = "actress",
    .meaning = "n. 女演员"};

String_and_meaning String_and_meaning_actual = {
    .string = "actual",
    .meaning = "adj. 真实的，实际的；现行的，目前的"};

String_and_meaning String_and_meaning_actually = {
    .string = "actually",
    .meaning = "adv. 实际上；事实上"};

String_and_meaning String_and_meaning_acute = {
    .string = "acute",
    .meaning = "adj. 严重的，[医] 急性的；敏锐的；激烈的；尖声的"};

String_and_meaning String_and_meaning_ad = {
    .string = "ad",
    .meaning = "abbr. 优势 (advantage)n. 广告；促销活动；预告片（advertisement，非正式）"};

String_and_meaning String_and_meaning_adapt = {
    .string = "adapt",
    .meaning = "vt. 使适应；改编vi. 适应"};

String_and_meaning String_and_meaning_add = {
    .string = "add",
    .meaning = "vi. 加；增加；加起来；做加法vt. 增加，添加；补充说；计算…总和n. 加法，加法运算"};

String_and_meaning String_and_meaning_addition = {
    .string = "addition",
    .meaning = "n. 添加；[数] 加法；增加物"};

String_and_meaning String_and_meaning_additional = {
    .string = "additional",
    .meaning = "adj. 附加的，额外的"};

String_and_meaning String_and_meaning_address = {
    .string = "address",
    .meaning = "n.地址,致辞,演讲,说话的技巧vt.向...致辞,演说,写姓名地址,从事,忙于"};

String_and_meaning String_and_meaning_adequate = {
    .string = "adequate",
    .meaning = "adj. 充足的；适当的；胜任的"};

String_and_meaning String_and_meaning_adhere = {
    .string = "adhere",
    .meaning = "vi. 坚持；依附；粘着；追随vt. 使粘附"};

String_and_meaning String_and_meaning_adjacent = {
    .string = "adjacent",
    .meaning = "adj. 邻近的，毗连的"};

String_and_meaning String_and_meaning_adjective = {
    .string = "adjective",
    .meaning = "adj. 形容词的；从属的n. 形容词"};

String_and_meaning String_and_meaning_adjoin = {
    .string = "adjoin",
    .meaning = "vi. 毗连，邻接vt. 毗连，邻接"};

String_and_meaning String_and_meaning_adjust = {
    .string = "adjust",
    .meaning = "vt. 调整，使…适合；校准vi. 调整，校准；适应"};

String_and_meaning String_and_meaning_administer = {
    .string = "administer",
    .meaning = "vt. 管理；执行；给予vi. 给予帮助；执行遗产管理人的职责；担当管理人"};

String_and_meaning String_and_meaning_administration = {
    .string = "administration",
    .meaning = "n. 管理；行政；实施；行政机构"};

String_and_meaning String_and_meaning_admire = {
    .string = "admire",
    .meaning = "vt. 钦佩；赞美vi. 钦佩；称赞"};

String_and_meaning String_and_meaning_admission = {
    .string = "admission",
    .meaning = "n. 承认；入场费；进入许可；坦白；录用"};

String_and_meaning String_and_meaning_admit = {
    .string = "admit",
    .meaning = "vt. 承认；准许进入；可容纳vi. 承认；容许"};

String_and_meaning String_and_meaning_adolescent = {
    .string = "adolescent",
    .meaning = "adj. 青春期的；未成熟的n. 青少年"};

String_and_meaning String_and_meaning_adopt = {
    .string = "adopt",
    .meaning = "vt. 采取；接受；收养；正式通过vi. 采取；过继"};

String_and_meaning String_and_meaning_adult = {
    .string = "adult",
    .meaning = "adj. 成年的；成熟的n. 成年人"};

String_and_meaning String_and_meaning_advance = {
    .string = "advance",
    .meaning = "n. 发展；前进；增长；预付款vt. 提出；预付；使……前进；将……提前vi. 前进；进展；上涨adj. 预先的；先行的"};

String_and_meaning String_and_meaning_advanced = {
    .string = "advanced",
    .meaning = "adj. 先进的；高级的；晚期的；年老的v. 前进；增加；上涨（advance的过去式和过去分词形式）"};

String_and_meaning String_and_meaning_advantage = {
    .string = "advantage",
    .meaning = "n. 优势；利益；有利条件vi. 获利vt. 有利于；使处于优势"};

String_and_meaning String_and_meaning_advent = {
    .string = "advent",
    .meaning = "n. 到来；出现；基督降临；基督降临节"};

String_and_meaning String_and_meaning_adventure = {
    .string = "adventure",
    .meaning = "n. 冒险；冒险精神；投机活动vt. 冒险；大胆说出vi. 冒险"};

String_and_meaning String_and_meaning_adverb = {
    .string = "adverb",
    .meaning = "n. 副词adj. 副词的"};

String_and_meaning String_and_meaning_adverse = {
    .string = "adverse",
    .meaning = "adj. 不利的；相反的；敌对的（名词adverseness，副词adversely）"};

String_and_meaning String_and_meaning_advertise = {
    .string = "advertise",
    .meaning = "vt. 通知；为…做广告；使突出vi. 做广告，登广告；作宣传"};

String_and_meaning String_and_meaning_advertisement = {
    .string = "advertisement",
    .meaning = "n. 广告，宣传"};

String_and_meaning String_and_meaning_advice = {
    .string = "advice",
    .meaning = "n. 建议；忠告；劝告；通知"};

String_and_meaning String_and_meaning_advisable = {
    .string = "advisable",
    .meaning = "adj. 明智的，可取的，适当的"};

String_and_meaning String_and_meaning_advise = {
    .string = "advise",
    .meaning = "vt. 建议；劝告，忠告；通知；警告vi. 建议；与…商量"};

String_and_meaning String_and_meaning_advocate = {
    .string = "advocate",
    .meaning = "v. 提倡，拥护；为……辩护n. 拥护者；辩护者；辩护律师，出庭律师；律师；为（某团体）谋利益者"};

String_and_meaning String_and_meaning_aerial = {
    .string = "aerial",
    .meaning = "adj. 空中的，航空的；空气的；空想的n. [电讯] 天线"};

String_and_meaning String_and_meaning_aero = {
    .string = "aero",
    .meaning = "adj.航空的,飞行的,飞机的"};

String_and_meaning String_and_meaning_aeroplane = {
    .string = "aeroplane",
    .meaning = "n. 飞机（等于airplane）"};

String_and_meaning String_and_meaning_aesthetic = {
    .string = "aesthetic",
    .meaning = "adj. 美的；美学的；审美的，具有审美趣味的n. 审美；美学"};

String_and_meaning String_and_meaning_affair = {
    .string = "affair",
    .meaning = "n. 事情；事务；私事；（尤指关系不长久的）风流韵事"};

String_and_meaning String_and_meaning_affect = {
    .string = "affect",
    .meaning = "vt. 影响；感染；感动；假装vi. 倾向；喜欢n. 情感；引起感情的因素"};

String_and_meaning String_and_meaning_affection = {
    .string = "affection",
    .meaning = "n. 喜爱，感情；影响；感染"};

String_and_meaning String_and_meaning_affiliate = {
    .string = "affiliate",
    .meaning = "v. （使）附属，隶属；加入，加盟，并入；接纳；紧密联系n. 分支机构；子公司；分社；联号"};

String_and_meaning String_and_meaning_affirm = {
    .string = "affirm",
    .meaning = "vt. 肯定；断言vi. 确认；断言"};

String_and_meaning String_and_meaning_afflict = {
    .string = "afflict",
    .meaning = "vt. 折磨；使痛苦；使苦恼"};

String_and_meaning String_and_meaning_afford = {
    .string = "afford",
    .meaning = "vt. 买得起；给予，提供n. (Afford) （英、美）阿福德（人名）"};

String_and_meaning String_and_meaning_afraid = {
    .string = "afraid",
    .meaning = "adj. 害怕的；恐怕；担心的"};

String_and_meaning String_and_meaning_Africa = {
    .string = "Africa",
    .meaning = "n. 非洲"};

String_and_meaning String_and_meaning_African = {
    .string = "African",
    .meaning = "adj. （与）非洲（有关）的；非洲人的n. 非洲人（尤指黑人）；非洲黑人后裔"};

String_and_meaning String_and_meaning_after = {
    .string = "after",
    .meaning = "prep. 在……之后；在……身后；反复；跟随；追求；以……命名conj. 在……之后adv. 后来，以后adj. 后来的，以后的；后部的"};

String_and_meaning String_and_meaning_afternoon = {
    .string = "afternoon",
    .meaning = "n. 午后，下午"};

String_and_meaning String_and_meaning_afterward = {
    .string = "afterward",
    .meaning = "adv. 以后，后来"};

String_and_meaning String_and_meaning_again = {
    .string = "again",
    .meaning = "adv. 又，此外；再一次；再说；增加n. （英、保）阿盖恩"};

String_and_meaning String_and_meaning_against = {
    .string = "against",
    .meaning = "prep.相反,反对,逆着,靠着,倚着"};

String_and_meaning String_and_meaning_age = {
    .string = "age",
    .meaning = "n. 年龄；时代；寿命，使用年限；阶段vi. 成熟；变老vt. 使成熟；使变老，使上年纪n. (Age)人名；(瑞典)阿格；(日)扬 (姓)；(西、荷)阿赫"};

String_and_meaning String_and_meaning_agency = {
    .string = "agency",
    .meaning = "n. 代理，中介；代理处，经销处；作用"};

String_and_meaning String_and_meaning_agenda = {
    .string = "agenda",
    .meaning = "n. 议程；日常工作事项；日程表"};

String_and_meaning String_and_meaning_agent = {
    .string = "agent",
    .meaning = "n. 代理人，代理商；药剂；特工；动因vt. 由…作中介；由…代理adj. 代理的n. (Agent)人名；(罗)阿真特"};

String_and_meaning String_and_meaning_aggravate = {
    .string = "aggravate",
    .meaning = "vt. 加重；使恶化；激怒"};

String_and_meaning String_and_meaning_aggressive = {
    .string = "aggressive",
    .meaning = "adj. 侵略性的；好斗的；有进取心的；有闯劲的"};

String_and_meaning String_and_meaning_agitation = {
    .string = "agitation",
    .meaning = "n. 激动；搅动；煽动；烦乱"};

String_and_meaning String_and_meaning_ago = {
    .string = "ago",
    .meaning = "adv. 以前adj. 以前的n. (Ago) （美）阿戈（人名）"};

String_and_meaning String_and_meaning_agony = {
    .string = "agony",
    .meaning = "n. 苦恼；极大的痛苦；临死的挣扎"};

String_and_meaning String_and_meaning_agree = {
    .string = "agree",
    .meaning = "vt. 同意，赞成；承认；约定，商定vi. 同意，意见一致；约定，商定"};

String_and_meaning String_and_meaning_agreeable = {
    .string = "agreeable",
    .meaning = "adj. 令人愉快的；适合的；和蔼可亲的"};

String_and_meaning String_and_meaning_agreement = {
    .string = "agreement",
    .meaning = "n. 协议；同意，一致"};

String_and_meaning String_and_meaning_agriculture = {
    .string = "agriculture",
    .meaning = "n. 农业；农耕；农业生产；农艺，农学"};

String_and_meaning String_and_meaning_ahead = {
    .string = "ahead",
    .meaning = "adv. 朝前地，在前面；提前地；领先；（为进步而）向前地；（数量或价值上）更多，更高；将来；获得成功；占优势adj. 在前的，领先的；提前的"};

String_and_meaning String_and_meaning_AI = {
    .string = "AI",
    .meaning = "abbr. 人工智能（artificial intelligence）"};

String_and_meaning String_and_meaning_aid = {
    .string = "aid",
    .meaning = "n. 援助；帮助；助手；帮助者vt. 援助；帮助；有助于vi. 帮助n. (Aid)人名；(阿拉伯、印、英)艾德"};

String_and_meaning String_and_meaning_aim = {
    .string = "aim",
    .meaning = "v. 目的在于；引导；把……对准；瞄准n. 目的；瞄准"};

String_and_meaning String_and_meaning_air = {
    .string = "air",
    .meaning = "n. 空气，大气；天空；样子；曲调vt. 使通风，晾干；夸耀vi. 通风"};

String_and_meaning String_and_meaning_aircraft = {
    .string = "aircraft",
    .meaning = "n. 飞机，航空器"};

String_and_meaning String_and_meaning_airline = {
    .string = "airline",
    .meaning = "n. 航空公司；航线adj. 航线的"};

String_and_meaning String_and_meaning_airplane = {
    .string = "airplane",
    .meaning = "n. 飞机"};

String_and_meaning String_and_meaning_airport = {
    .string = "airport",
    .meaning = "n. 机场；航空站"};

String_and_meaning String_and_meaning_alarm = {
    .string = "alarm",
    .meaning = "n. 闹钟；警报，警告器；惊慌vt. 警告；使惊恐"};

String_and_meaning String_and_meaning_alcohol = {
    .string = "alcohol",
    .meaning = "n. 酒精，乙醇"};

String_and_meaning String_and_meaning_alert = {
    .string = "alert",
    .meaning = "adj.提防的,警惕的n.警惕,警报"};

String_and_meaning String_and_meaning_alien = {
    .string = "alien",
    .meaning = "adj. 外国的；相异的，性质不同的；不相容的n. 外国人，外侨；外星人vt. 让渡，转让n. (Alien)人名；(法)阿利安"};

String_and_meaning String_and_meaning_alike = {
    .string = "alike",
    .meaning = "adj. 相似的；相像的adv. 十分相像地，很相似地；两者都，同样地；同等对待地，一视同仁地n. (Alike) （印、美）艾立凯（人名）"};

String_and_meaning String_and_meaning_alive = {
    .string = "alive",
    .meaning = "adj. 活着的；活泼的；有生气的"};

String_and_meaning String_and_meaning_all = {
    .string = "all",
    .meaning = "adj.全部的,所有的,整个的adv.完全,更加,越发 pron.全部"};

String_and_meaning String_and_meaning_allege = {
    .string = "allege",
    .meaning = "vt. 宣称，断言；提出…作为理由"};

String_and_meaning String_and_meaning_alleviate = {
    .string = "alleviate",
    .meaning = "vt. 减轻，缓和"};

String_and_meaning String_and_meaning_alliance = {
    .string = "alliance",
    .meaning = "n. 联盟，联合；联姻"};

String_and_meaning String_and_meaning_allocate = {
    .string = "allocate",
    .meaning = "vt. 分配；拨出vi. 分配；指定"};

String_and_meaning String_and_meaning_allow = {
    .string = "allow",
    .meaning = "vt. 允许；给予；认可vi. 容许；考虑"};

String_and_meaning String_and_meaning_allowance = {
    .string = "allowance",
    .meaning = "n. 津贴，零用钱；允许；限额vt. 定量供应"};

String_and_meaning String_and_meaning_alloy = {
    .string = "alloy",
    .meaning = "n. 合金v. 把……铸成合金；使……减低成色n. (Alloy) （美、法、英、巴、加）阿洛伊（人名）"};

String_and_meaning String_and_meaning_ally = {
    .string = "ally",
    .meaning = "n. 同盟国；伙伴；同盟者；助手vt. 使联盟；使联合vi. 联合；结盟n. (Ally)人名；(巴基)阿利；(法)阿利；(英)艾丽(女子教名 Alice 的简称)；(尼日利)阿利"};

String_and_meaning String_and_meaning_almost = {
    .string = "almost",
    .meaning = "adv. 差不多，几乎"};

String_and_meaning String_and_meaning_alone = {
    .string = "alone",
    .meaning = "adj. 独自的；单独的；单干的；孤独的；仅仅的；唯一的adv. 独自地；单独地；单干地；只，仅仅；仅仅……就；唯一地；独力地"};

String_and_meaning String_and_meaning_along = {
    .string = "along",
    .meaning = "prep. 沿着；顺着；（事件）进展adv. 一起；向前；来到；越来越（好）；一直"};

String_and_meaning String_and_meaning_alongside = {
    .string = "alongside",
    .meaning = "prep. 在……旁边，沿着……的边；与 ……一起，合作；与……同时，共存；与……相比adv. 在旁边"};

String_and_meaning String_and_meaning_aloud = {
    .string = "aloud",
    .meaning = "adv. 大声地；出声地"};

String_and_meaning String_and_meaning_alphabet = {
    .string = "alphabet",
    .meaning = "n. 字母表，字母系统；入门，初步n. Google创建的名为Alphabet的公司，改变Google原有公司架构，旨在使其当下主要业务和长期投资项目间的区别更加清晰。"};

String_and_meaning String_and_meaning_already = {
    .string = "already",
    .meaning = "adv. 已经，早已；先前"};

String_and_meaning String_and_meaning_also = {
    .string = "also",
    .meaning = "adv. 也；而且；同样conj. 并且；另外n. (Also)人名；(罗)阿尔索"};

String_and_meaning String_and_meaning_alter = {
    .string = "alter",
    .meaning = "vt. 改变，更改vi. 改变；修改n. （Alter）（美、德）阿尔特（人名）"};

String_and_meaning String_and_meaning_alternate = {
    .string = "alternate",
    .meaning = "adj.交替的,轮流的,预备的v.交替,轮流,改变"};

String_and_meaning String_and_meaning_alternative = {
    .string = "alternative",
    .meaning = "adj. 供选择的；选择性的；交替的n. 二中择一；供替代的选择"};

String_and_meaning String_and_meaning_although = {
    .string = "although",
    .meaning = "conj. 尽管，虽然；但是，然而"};

String_and_meaning String_and_meaning_altitude = {
    .string = "altitude",
    .meaning = "n. 高地；高度；[数] 顶垂线；（等级和地位等的）高级；海拔"};

String_and_meaning String_and_meaning_altogether = {
    .string = "altogether",
    .meaning = "adv. 完全地；总共；总而言之n. 整个；裸体"};

String_and_meaning String_and_meaning_aluminium = {
    .string = "aluminium",
    .meaning = "n. 铝adj. 铝的"};

String_and_meaning String_and_meaning_always = {
    .string = "always",
    .meaning = "adv. 永远，一直；总是；常常"};

String_and_meaning String_and_meaning_amateur = {
    .string = "amateur",
    .meaning = "n. 业余爱好者；生手，外行adj. 业余爱好的；业余的；外行的；不熟练的"};

String_and_meaning String_and_meaning_amaze = {
    .string = "amaze",
    .meaning = "vt. 使吃惊"};

String_and_meaning String_and_meaning_ambassador = {
    .string = "ambassador",
    .meaning = "n. 大使；代表；使节"};

String_and_meaning String_and_meaning_ambiguous = {
    .string = "ambiguous",
    .meaning = "adj. 模糊不清的，模棱两可的；不明确的，不明朗的；引起歧义的"};

String_and_meaning String_and_meaning_ambition = {
    .string = "ambition",
    .meaning = "n. 野心，雄心；抱负，志向vt. 追求；有…野心"};

String_and_meaning String_and_meaning_ambitious = {
    .string = "ambitious",
    .meaning = "adj. 野心勃勃的；有雄心的；热望的；炫耀的"};

String_and_meaning String_and_meaning_ambulance = {
    .string = "ambulance",
    .meaning = "n. [车辆][医] 救护车；战时流动医院"};

String_and_meaning String_and_meaning_amend = {
    .string = "amend",
    .meaning = "vt. 修改；改善，改进vi. 改正，改善；改过自新n. (Amend)人名；(德、英)阿门德"};

String_and_meaning String_and_meaning_amends = {
    .string = "amends",
    .meaning = "n. 赔偿；赔罪v. 修订（amend的第三人称单数）；改进"};

String_and_meaning String_and_meaning_America = {
    .string = "America",
    .meaning = "n. 美洲（包括北美和南美洲）；美国"};

String_and_meaning String_and_meaning_American = {
    .string = "American",
    .meaning = "n. 美国人，美洲人；美国英语adj. 美国的，美洲的；地道美国式的"};

String_and_meaning String_and_meaning_among = {
    .string = "among",
    .meaning = "prep. 在……中间，周围是；在……之中，……之一；与……在一起；在三者或以上（中选择）；以及；为……所特有；（群体内部）相互间"};

String_and_meaning String_and_meaning_amongst = {
    .string = "amongst",
    .meaning = "prep. 在……当中（等于 among）"};

String_and_meaning String_and_meaning_amount = {
    .string = "amount",
    .meaning = "n. 数量，数额；总数；（感情、特质的）程度v. 总计，合计；等于，相当于；发展成，变成"};

String_and_meaning String_and_meaning_ampere = {
    .string = "ampere",
    .meaning = "n. 安培（计算电流强度的标准单位）"};

String_and_meaning String_and_meaning_ample = {
    .string = "ample",
    .meaning = "adj. 丰富的；足够的；宽敞的n. (Ample)人名；(西)安普尔"};

String_and_meaning String_and_meaning_amplify = {
    .string = "amplify",
    .meaning = "vt. 放大，扩大；增强；详述vi. 详述"};

String_and_meaning String_and_meaning_amuse = {
    .string = "amuse",
    .meaning = "vt. 娱乐；消遣；使发笑；使愉快"};

String_and_meaning String_and_meaning_analogy = {
    .string = "analogy",
    .meaning = "n. 类比；类推；类似"};

String_and_meaning String_and_meaning_analyse = {
    .string = "analyse",
    .meaning = "vt. 分析；分解；细察"};

String_and_meaning String_and_meaning_analysis = {
    .string = "analysis",
    .meaning = "n. 分析；分解；验定"};

String_and_meaning String_and_meaning_analytic = {
    .string = "analytic",
    .meaning = "adj. 分析的；解析的；善于分析的"};

String_and_meaning String_and_meaning_analytical = {
    .string = "analytical",
    .meaning = "adj. 分析的；解析的；善于分析的"};

String_and_meaning String_and_meaning_ancestor = {
    .string = "ancestor",
    .meaning = "n. 始祖，祖先；被继承人"};

String_and_meaning String_and_meaning_anchor = {
    .string = "anchor",
    .meaning = "n. 锚；抛锚停泊；靠山；新闻节目主播vt. 抛锚；使固定；主持节目vi. 抛锚adj. 末棒的；最后一棒的"};

String_and_meaning String_and_meaning_ancient = {
    .string = "ancient",
    .meaning = "adj. 古代的；古老的，过时的；年老的n. 古代人；老人"};

String_and_meaning String_and_meaning_and = {
    .string = "and",
    .meaning = "conj. 和，与；就；而且；但是；然后n. (And)人名；(土、瑞典)安德"};

String_and_meaning String_and_meaning_angel = {
    .string = "angel",
    .meaning = "n.天使,完善可爱的人"};

String_and_meaning String_and_meaning_anger = {
    .string = "anger",
    .meaning = "n. 怒，愤怒；忿怒vt. 使发怒，激怒；恼火vi. 发怒；恼火n. (Anger)人名；(罗)安杰尔；(法)安热；(德、捷、瑞典)安格尔"};

String_and_meaning String_and_meaning_angle = {
    .string = "angle",
    .meaning = "n. 角，角度；视角；立场；角铁；（古）鱼钩v. 斜移；从……角度提供信息；钓鱼；谋取"};

String_and_meaning String_and_meaning_Angle = {
    .string = "Angle",
    .meaning = "n. 盎格鲁人"};

String_and_meaning String_and_meaning_angry = {
    .string = "angry",
    .meaning = "adj. 生气的；愤怒的；狂暴的；（伤口等）发炎的"};

String_and_meaning String_and_meaning_animal = {
    .string = "animal",
    .meaning = "n. 动物adj. 动物的"};

String_and_meaning String_and_meaning_ankle = {
    .string = "ankle",
    .meaning = "n. 踝关节，踝"};

String_and_meaning String_and_meaning_anniversary = {
    .string = "anniversary",
    .meaning = "n. 周年纪念日"};

String_and_meaning String_and_meaning_announce = {
    .string = "announce",
    .meaning = "vt. 宣布；述说；预示；播报vi. 宣布参加竞选；当播音员"};

String_and_meaning String_and_meaning_announcer = {
    .string = "announcer",
    .meaning = "n. [广播] 广播员；宣告者"};

String_and_meaning String_and_meaning_annoy = {
    .string = "annoy",
    .meaning = "vt. 骚扰；惹恼；打搅vi. 惹恼；令人讨厌；打搅n. 烦恼（等于annoyance）"};

String_and_meaning String_and_meaning_annual = {
    .string = "annual",
    .meaning = "adj. 年度的；每年的n. 年刊，年鉴；一年生植物"};

String_and_meaning String_and_meaning_anonymous = {
    .string = "anonymous",
    .meaning = "adj. 匿名的，无名的；无个性特征的"};

String_and_meaning String_and_meaning_another = {
    .string = "another",
    .meaning = "det. 又一，另一；另外的，不同的；类似pron. 又一，另一；另外的，不同的；类似adj. 不同的；另一个（人）；类似的"};

String_and_meaning String_and_meaning_answer = {
    .string = "answer",
    .meaning = "n.答案,回答,答辩,抗辩v.回答说,答复说,符合,反响,响应"};

String_and_meaning String_and_meaning_ant = {
    .string = "ant",
    .meaning = "n. 蚂蚁n. (Ant)人名；(土、芬)安特"};

String_and_meaning String_and_meaning_antarctic = {
    .string = "antarctic",
    .meaning = "adj. 南极的；[地理] 南极地带的n. (the Antarctic) 南极洲；南极地区"};

String_and_meaning String_and_meaning_anticipate = {
    .string = "anticipate",
    .meaning = "v. 预料，预期；预见，预计（并做准备）； 期盼，期望； 先于……做，早于……行动；在期限内履行（义务），偿还（债务）；提前使用"};

String_and_meaning String_and_meaning_antique = {
    .string = "antique",
    .meaning = "adj. 古老的，年代久远的；过时的，古董的；古风的，古式的n. 古董，古玩；古风，古希腊和古罗马艺术风格vi. 觅购古玩"};

String_and_meaning String_and_meaning_anxiety = {
    .string = "anxiety",
    .meaning = "n. 焦虑；渴望；挂念；令人焦虑的事"};

String_and_meaning String_and_meaning_anxious = {
    .string = "anxious",
    .meaning = "adj. 焦虑的；担忧的；渴望的；急切的"};

String_and_meaning String_and_meaning_any = {
    .string = "any",
    .meaning = "adj.任何的,任何一种,所有的 pron.无论那一个,任何"};

String_and_meaning String_and_meaning_anybody = {
    .string = "anybody",
    .meaning = "pron. 任何人；有人，别人；随便哪一个人n. 重要人物；平常人"};

String_and_meaning String_and_meaning_anyhow = {
    .string = "anyhow",
    .meaning = "adv. 总之；无论如何；不管怎样"};

String_and_meaning String_and_meaning_anyone = {
    .string = "anyone",
    .meaning = "pron. 任何人；某个人；任何……的人；重要人物；（没有）一个人（用于否定句）；任何一个人"};

String_and_meaning String_and_meaning_anything = {
    .string = "anything",
    .meaning = "pron. 任何东西，任何事物；随便哪个东西；重要东西；某事物（用于疑问句和条件分句中）adv. 根本，究竟（表否定）"};

String_and_meaning String_and_meaning_anyway = {
    .string = "anyway",
    .meaning = "adv. 无论如何，不管怎样；总之"};

String_and_meaning String_and_meaning_anywhere = {
    .string = "anywhere",
    .meaning = "adv. 在任何地方；无论何处n. 任何地方"};

String_and_meaning String_and_meaning_apart = {
    .string = "apart",
    .meaning = "adv. 相距；与众不同地；分离着adj. 分离的；与众不同的"};

String_and_meaning String_and_meaning_apartment = {
    .string = "apartment",
    .meaning = "n. 公寓；房间"};

String_and_meaning String_and_meaning_apologize = {
    .string = "apologize",
    .meaning = "vi. 道歉，谢罪；辩解，辩护"};

String_and_meaning String_and_meaning_apology = {
    .string = "apology",
    .meaning = "n. 道歉；谢罪；辩护；勉强的替代物"};

String_and_meaning String_and_meaning_apparatus = {
    .string = "apparatus",
    .meaning = "n. 装置，设备；仪器；器官"};

String_and_meaning String_and_meaning_apparent = {
    .string = "apparent",
    .meaning = "adj. 显然的；表面上的"};

String_and_meaning String_and_meaning_appeal = {
    .string = "appeal",
    .meaning = "n.请求,呼吁,上诉,吸引力,要求;vi.求助,诉请,要求;vt.控诉"};

String_and_meaning String_and_meaning_appear = {
    .string = "appear",
    .meaning = "v. 出现；显得；似乎vi. 出庭；登场"};

String_and_meaning String_and_meaning_appearance = {
    .string = "appearance",
    .meaning = "n. 外貌，外观；出现，露面"};

String_and_meaning String_and_meaning_appendix = {
    .string = "appendix",
    .meaning = "n. 附录；阑尾；附加物"};

String_and_meaning String_and_meaning_appetite = {
    .string = "appetite",
    .meaning = "n. 食欲；嗜好"};

String_and_meaning String_and_meaning_applaud = {
    .string = "applaud",
    .meaning = "vt. 赞同；称赞；向…喝彩vi. 喝彩；鼓掌欢迎"};

String_and_meaning String_and_meaning_apple = {
    .string = "apple",
    .meaning = "n. 苹果"};

String_and_meaning String_and_meaning_appliance = {
    .string = "appliance",
    .meaning = "n. 器具；器械；装置；应用"};

String_and_meaning String_and_meaning_applicable = {
    .string = "applicable",
    .meaning = "adj. 可适用的；可应用的；合适的"};

String_and_meaning String_and_meaning_application = {
    .string = "application",
    .meaning = "n. 应用；申请；应用程序；敷用；（对事物、学习等）投入"};

String_and_meaning String_and_meaning_apply = {
    .string = "apply",
    .meaning = "vt. 申请；涂，敷；应用vi. 申请；涂，敷；适用；请求"};

String_and_meaning String_and_meaning_appoint = {
    .string = "appoint",
    .meaning = "vt. 任命；指定；约定vi. 任命；委派"};

String_and_meaning String_and_meaning_appointment = {
    .string = "appointment",
    .meaning = "n. 任命；约定；任命的职位"};

String_and_meaning String_and_meaning_appraisal = {
    .string = "appraisal",
    .meaning = "n. 评价；估价（尤指估价财产，以便征税）；估计"};

String_and_meaning String_and_meaning_appreciable = {
    .string = "appreciable",
    .meaning = "adj. 可感知的；可评估的；相当可观的"};

String_and_meaning String_and_meaning_appreciate = {
    .string = "appreciate",
    .meaning = "vt. 欣赏；感激；领会；鉴别vi. 增值；涨价"};

String_and_meaning String_and_meaning_apprehension = {
    .string = "apprehension",
    .meaning = "n. 理解；恐惧；逮捕；忧惧"};

String_and_meaning String_and_meaning_approach = {
    .string = "approach",
    .meaning = "n.接近,逼近,走进,方法,步骤,途径,通路vt.接近,动手处理vi.靠近"};

String_and_meaning String_and_meaning_appropriate = {
    .string = "appropriate",
    .meaning = "adj. 适当的；恰当的；合适的vt. 占用，拨出"};

String_and_meaning String_and_meaning_approval = {
    .string = "approval",
    .meaning = "n. 批准；认可；赞成"};

String_and_meaning String_and_meaning_approve = {
    .string = "approve",
    .meaning = "vt. 批准；赞成；为…提供证据vi. 批准；赞成；满意"};

String_and_meaning String_and_meaning_approximate = {
    .string = "approximate",
    .meaning = "adj. 近似的，大概的v. 接近，近似；粗略估计"};

String_and_meaning String_and_meaning_approximately = {
    .string = "approximately",
    .meaning = "adv. 大约，近似地；近于"};

String_and_meaning String_and_meaning_April = {
    .string = "April",
    .meaning = "n. 四月"};

String_and_meaning String_and_meaning_apt = {
    .string = "apt",
    .meaning = "adj. 恰当的；有…倾向的；灵敏的n. (Apt)人名；(法、波、英)阿普特"};

String_and_meaning String_and_meaning_Arabian = {
    .string = "Arabian",
    .meaning = "adj. 阿拉伯（人）的，（与）阿拉伯（有关）的n. （史）阿拉伯人（或居民）"};

String_and_meaning String_and_meaning_arbitrary = {
    .string = "arbitrary",
    .meaning = "adj. [数] 任意的；武断的；专制的"};

String_and_meaning String_and_meaning_arc = {
    .string = "arc",
    .meaning = "n. 弧（度）；弧光（全称electric arc）；弧形物；天穹adj. 圆弧的；反三角函数的vt. 形成电弧；走弧线n. (Arc)人名；(法)阿尔克"};

String_and_meaning String_and_meaning_arch = {
    .string = "arch",
    .meaning = "n. 弓形，拱形；拱门adj. 主要的vt. 使…弯成弓形；用拱连接vi. 拱起；成为弓形n. (Arch)人名；(德)阿尔希；(英)阿奇"};

String_and_meaning String_and_meaning_architect = {
    .string = "architect",
    .meaning = "n. 建筑师缔造者"};

String_and_meaning String_and_meaning_architecture = {
    .string = "architecture",
    .meaning = "n. 建筑学；建筑风格；建筑式样；架构"};

String_and_meaning String_and_meaning_arctic = {
    .string = "arctic",
    .meaning = "adj. 北极的；极寒的n. 北极圈；御寒防水套鞋n. (Arctic)人名；(英)阿克蒂克"};

String_and_meaning String_and_meaning_area = {
    .string = "area",
    .meaning = "n. 区域，地区；面积；范围n. （Area）（西）阿雷亚（人名）"};

String_and_meaning String_and_meaning_argue = {
    .string = "argue",
    .meaning = "vi. 争论，辩论；提出理由vt. 辩论，争论；证明；说服n. (Argue)人名；(英、法)阿格"};

String_and_meaning String_and_meaning_argument = {
    .string = "argument",
    .meaning = "n. 论证；论据；争吵；内容提要；数，逻自变数；语言学主词，受词"};

String_and_meaning String_and_meaning_arise = {
    .string = "arise",
    .meaning = "vi. 出现；上升；起立n. (Arise) （美、印、德、英）阿里塞（人名）"};

String_and_meaning String_and_meaning_arithmetic = {
    .string = "arithmetic",
    .meaning = "n. 算术，算法；数字"};

String_and_meaning String_and_meaning_arm = {
    .string = "arm",
    .meaning = "n. 手臂；武器；袖子；装备；部门vi. 武装起来vt. 武装；备战"};

String_and_meaning String_and_meaning_army = {
    .string = "army",
    .meaning = "n. 陆军，军队"};

String_and_meaning String_and_meaning_around = {
    .string = "around",
    .meaning = "adv.周围,四周,到处,大约,左右 prep.在...周围,四处"};

String_and_meaning String_and_meaning_arouse = {
    .string = "arouse",
    .meaning = "vt. 引起；唤醒；鼓励vi. 激发；醒来；发奋"};

String_and_meaning String_and_meaning_arrange = {
    .string = "arrange",
    .meaning = "vt. 安排；排列；整理vi. 安排；排列；协商"};

String_and_meaning String_and_meaning_arrangement = {
    .string = "arrangement",
    .meaning = "n. 布置；整理；准备；安排"};

String_and_meaning String_and_meaning_array = {
    .string = "array",
    .meaning = "n. 数组，阵列；排列，列阵；大批，一系列；衣服vt. 排列，部署；打扮"};

String_and_meaning String_and_meaning_arrest = {
    .string = "arrest",
    .meaning = "v. 逮捕；（司法机关）扣留（船只）；阻止；吸引；心跳停止，心脏病发作；n. 逮捕，监禁； 停止，中止n. (Arrest) （法）阿雷斯特（人名）"};

String_and_meaning String_and_meaning_arrival = {
    .string = "arrival",
    .meaning = "n. 到来；到达；到达者"};

String_and_meaning String_and_meaning_arrive = {
    .string = "arrive",
    .meaning = "vi. 到达；成功；达成；出生n. (Arrive)人名；(法)阿里夫"};

String_and_meaning String_and_meaning_arrow = {
    .string = "arrow",
    .meaning = "n. 箭，箭头；箭状物；箭头记号vt. 以箭头指示；箭一般地飞向n. (Arrow)人名；(英)阿罗"};

String_and_meaning String_and_meaning_art = {
    .string = "art",
    .meaning = "n.艺术,艺术品,技术,巧妙,美术"};

String_and_meaning String_and_meaning_article = {
    .string = "article",
    .meaning = "n. 文章；物品；条款；[语] 冠词vt. 订约将…收为学徒或见习生；使…受协议条款的约束vi. 签订协议；进行控告"};

String_and_meaning String_and_meaning_articulate = {
    .string = "articulate",
    .meaning = "adj.有关节的,发音清晰的vt.用关节连接,接合,清晰明白地说"};

String_and_meaning String_and_meaning_artificial = {
    .string = "artificial",
    .meaning = "adj. 人造的；仿造的；虚伪的；非原产地的；武断的"};

String_and_meaning String_and_meaning_artist = {
    .string = "artist",
    .meaning = "n. 艺术家；美术家（尤指画家）；大师"};

String_and_meaning String_and_meaning_artistic = {
    .string = "artistic",
    .meaning = "adj. 艺术的；风雅的；有美感的"};

String_and_meaning String_and_meaning_as = {
    .string = "as",
    .meaning = "adv.同样地,被看作,象 prep.当做 conj.与...一样,当...之时,象,因为 [域] American Samoa,东萨摩亚 [军] Air to Surface,空对地 (As)symb [化]砷 (arsenic)"};

String_and_meaning String_and_meaning_ascend = {
    .string = "ascend",
    .meaning = "vi. 上升；登高；追溯vt. 攀登，上升"};

String_and_meaning String_and_meaning_ascertain = {
    .string = "ascertain",
    .meaning = "vt. 确定；查明；探知"};

String_and_meaning String_and_meaning_ascribe = {
    .string = "ascribe",
    .meaning = "vt. 归因于；归咎于"};

String_and_meaning String_and_meaning_ash = {
    .string = "ash",
    .meaning = "n.灰,灰烬,[植]岑树"};

String_and_meaning String_and_meaning_ashamed = {
    .string = "ashamed",
    .meaning = "adj. 羞愧的，羞耻的；惭愧的，内疚的；尴尬的；因怕难堪而不愿意的；觉得丢脸的"};

String_and_meaning String_and_meaning_Asia = {
    .string = "Asia",
    .meaning = "n. 亚洲"};

String_and_meaning String_and_meaning_Asian = {
    .string = "Asian",
    .meaning = "n. 亚洲人adj. 亚洲的；亚洲人的"};

String_and_meaning String_and_meaning_aside = {
    .string = "aside",
    .meaning = "adv. 离开，撇开；在旁边n. 旁白；私语，悄悄话；离题的话prep. 在…旁边"};

String_and_meaning String_and_meaning_ask = {
    .string = "ask",
    .meaning = "vt. 问，询问；要求；需要；邀请；讨价vi. 问，询问；要求n. （Ask）（芬、瑞典）阿斯克（人名）"};

String_and_meaning String_and_meaning_asleep = {
    .string = "asleep",
    .meaning = "adj. 睡着的；麻木的；长眠的；不积极的；不专心的adv. 熟睡地；进入睡眠状态（地）"};

String_and_meaning String_and_meaning_aspect = {
    .string = "aspect",
    .meaning = "n. 方面；方向；形势；外貌"};

String_and_meaning String_and_meaning_assault = {
    .string = "assault",
    .meaning = "n. 攻击；袭击vt. 攻击；袭击vi. 袭击；动武"};

String_and_meaning String_and_meaning_assemble = {
    .string = "assemble",
    .meaning = "vt. 集合，聚集；装配；收集vi. 集合，聚集"};

String_and_meaning String_and_meaning_assembly = {
    .string = "assembly",
    .meaning = "n. 装配；集会，集合n. 汇编，编译"};

String_and_meaning String_and_meaning_assert = {
    .string = "assert",
    .meaning = "vt. 维护，坚持；断言；主张；声称"};

String_and_meaning String_and_meaning_assess = {
    .string = "assess",
    .meaning = "vt. 评定；估价；对…征税"};

String_and_meaning String_and_meaning_asset = {
    .string = "asset",
    .meaning = "n. 资产；优点；有用的东西；有利条件；财产；有价值的人或物n. （法）阿塞（人名）"};

String_and_meaning String_and_meaning_assign = {
    .string = "assign",
    .meaning = "vt. 分配；指派；[计][数] 赋值vi. 将财产过户（尤指过户给债权人）"};

String_and_meaning String_and_meaning_assignment = {
    .string = "assignment",
    .meaning = "n. 分配；任务；作业；功课"};

String_and_meaning String_and_meaning_assimilate = {
    .string = "assimilate",
    .meaning = "vt. 吸收；使同化；把…比作；使相似vi. 吸收；同化"};

String_and_meaning String_and_meaning_assist = {
    .string = "assist",
    .meaning = "v.援助,帮助"};

String_and_meaning String_and_meaning_assistant = {
    .string = "assistant",
    .meaning = "n. 助手，助理，助教adj. 辅助的，助理的；有帮助的"};

String_and_meaning String_and_meaning_associate = {
    .string = "associate",
    .meaning = "vt.使发生联系,使联合vi.交往,结交n.合作人,同事adj.副的"};

String_and_meaning String_and_meaning_association = {
    .string = "association",
    .meaning = "n. 协会，联盟，社团；联合；联想"};

String_and_meaning String_and_meaning_assume = {
    .string = "assume",
    .meaning = "vi. 设想；承担；采取vt. 假定；僭取；篡夺；夺取；擅用；侵占"};

String_and_meaning String_and_meaning_assumption = {
    .string = "assumption",
    .meaning = "n. 假定；设想；担任；采取"};

String_and_meaning String_and_meaning_assurance = {
    .string = "assurance",
    .meaning = "n. 保证，担保；（人寿）保险；确信；断言；厚脸皮，无耻"};

String_and_meaning String_and_meaning_assure = {
    .string = "assure",
    .meaning = "vt. 保证；担保；使确信；弄清楚"};

String_and_meaning String_and_meaning_astonish = {
    .string = "astonish",
    .meaning = "v. （使）惊讶；（使）害怕"};

String_and_meaning String_and_meaning_astronaut = {
    .string = "astronaut",
    .meaning = "n. 宇航员，航天员；太空旅行者"};

String_and_meaning String_and_meaning_astronomy = {
    .string = "astronomy",
    .meaning = "n. 天文学"};

String_and_meaning String_and_meaning_at = {
    .string = "at",
    .meaning = "prep.在,于,向,对准,在...方面;Austria,奥地利"};

String_and_meaning String_and_meaning_athlete = {
    .string = "athlete",
    .meaning = "n. 运动员，体育家；身强力壮的人"};

String_and_meaning String_and_meaning_Atlantic = {
    .string = "Atlantic",
    .meaning = "n. 大西洋adj. 大西洋的"};

String_and_meaning String_and_meaning_atmosphere = {
    .string = "atmosphere",
    .meaning = "n. 气氛；大气；空气"};

String_and_meaning String_and_meaning_atmospheric = {
    .string = "atmospheric",
    .meaning = "adj. 大气的，大气层的"};

String_and_meaning String_and_meaning_atom = {
    .string = "atom",
    .meaning = "n. 原子"};

String_and_meaning String_and_meaning_atomic = {
    .string = "atomic",
    .meaning = "adj. 原子的，原子能的；微粒子的"};

String_and_meaning String_and_meaning_attach = {
    .string = "attach",
    .meaning = "vt. 使依附；贴上；系上；使依恋vi. 附加；附属；伴随"};

String_and_meaning String_and_meaning_attack = {
    .string = "attack",
    .meaning = "n. 攻击；抨击；疾病发作vt. 攻击；抨击；动手干vi. 攻击；腐蚀n. (Attack)人名；(瑞典)阿塔克"};

String_and_meaning String_and_meaning_attain = {
    .string = "attain",
    .meaning = "vt. 达到，实现；获得；到达vi. 达到；获得；到达n. 成就"};

String_and_meaning String_and_meaning_attempt = {
    .string = "attempt",
    .meaning = "n. 企图，试图；攻击vt. 企图，试图；尝试"};

String_and_meaning String_and_meaning_attend = {
    .string = "attend",
    .meaning = "vt. 出席；上（大学等）；照料；招待；陪伴vi. 出席；致力于；照料；照顾"};

String_and_meaning String_and_meaning_attendance = {
    .string = "attendance",
    .meaning = "n. 出席；到场；出席人数；考勤"};

String_and_meaning String_and_meaning_attendant = {
    .string = "attendant",
    .meaning = "n. 服务员，侍者；随员，陪从；参与者adj. 伴随的；陪伴的"};

String_and_meaning String_and_meaning_attention = {
    .string = "attention",
    .meaning = "n. 注意力；关心；立正！（口令）"};

String_and_meaning String_and_meaning_attentive = {
    .string = "attentive",
    .meaning = "adj. 注意的；体贴的；留心的"};

String_and_meaning String_and_meaning_attitude = {
    .string = "attitude",
    .meaning = "n. 态度；看法；意见；姿势"};

String_and_meaning String_and_meaning_attorney = {
    .string = "attorney",
    .meaning = "n. 律师；代理人；检察官"};

String_and_meaning String_and_meaning_attract = {
    .string = "attract",
    .meaning = "vt. 吸引；引起vi. 吸引；有吸引力"};

String_and_meaning String_and_meaning_attraction = {
    .string = "attraction",
    .meaning = "n. 吸引，吸引力；引力；吸引人的事物"};

String_and_meaning String_and_meaning_attractive = {
    .string = "attractive",
    .meaning = "adj. 吸引人的；有魅力的；引人注目的"};

String_and_meaning String_and_meaning_attribute = {
    .string = "attribute",
    .meaning = "n. 属性；特质vt. 归属；把……归于"};

String_and_meaning String_and_meaning_audience = {
    .string = "audience",
    .meaning = "n. 观众；听众；读者；接见；正式会见；拜会"};

String_and_meaning String_and_meaning_augment = {
    .string = "augment",
    .meaning = "vi. 增加；增大vt. 增加；增大n. 增加；增大"};

String_and_meaning String_and_meaning_August = {
    .string = "August",
    .meaning = "n. 八月n. （美、德、英、波）奥古斯特（人名）adj. （august）威严的，令人敬畏的"};

String_and_meaning String_and_meaning_aunt = {
    .string = "aunt",
    .meaning = "n. 阿姨；姑妈；伯母；舅妈"};

String_and_meaning String_and_meaning_aural = {
    .string = "aural",
    .meaning = "adj. 听觉的；耳的；气味的；先兆的n. (Aural)人名；(西)奥拉尔"};

String_and_meaning String_and_meaning_Australia = {
    .string = "Australia",
    .meaning = "n. 澳大利亚，澳洲"};

String_and_meaning String_and_meaning_Australian = {
    .string = "Australian",
    .meaning = "adj. 澳大利亚的，澳大利亚人的；（动物地理区划）澳新区的；澳大利亚植物区系界的n. 澳大利亚人"};

String_and_meaning String_and_meaning_authentic = {
    .string = "authentic",
    .meaning = "adj. 真正的，真实的；可信的"};

String_and_meaning String_and_meaning_author = {
    .string = "author",
    .meaning = "n. 作者；作家；创始人vt. 创作出版"};

String_and_meaning String_and_meaning_authoritative = {
    .string = "authoritative",
    .meaning = "adj. 有权威的；命令式的；当局的"};

String_and_meaning String_and_meaning_authority = {
    .string = "authority",
    .meaning = "n. 权威；权力；当局"};

String_and_meaning String_and_meaning_authorize = {
    .string = "authorize",
    .meaning = "vt. 批准，认可；授权给；委托代替"};

String_and_meaning String_and_meaning_auto = {
    .string = "auto",
    .meaning = "n. 汽车（等于automobile）；自动vi. 乘汽车n. (Auto)人名；(葡)奥托"};

String_and_meaning String_and_meaning_automatic = {
    .string = "automatic",
    .meaning = "adj. 自动的；无意识的；必然的n. 自动机械；自动手枪"};

String_and_meaning String_and_meaning_automation = {
    .string = "automation",
    .meaning = "n. 自动化；自动操作"};

String_and_meaning String_and_meaning_automobile = {
    .string = "automobile",
    .meaning = "n. 汽车vt. 驾驶汽车[ 过去式 automobiled 过去分词 automobiled 现在分词 automobiling ]"};

String_and_meaning String_and_meaning_autonomy = {
    .string = "autonomy",
    .meaning = "n. 自治，自治权"};

String_and_meaning String_and_meaning_autumn = {
    .string = "autumn",
    .meaning = "n. 秋天；成熟期；渐衰期，凋落期adj. 秋天的，秋季的n. (Autumn)人名；(英)奥特姆"};

String_and_meaning String_and_meaning_auxiliary = {
    .string = "auxiliary",
    .meaning = "adj. 辅助的；副的；附加的；（发动机、设备等）备用的n. 助动词；辅助者，辅助物；附属机构；（北美）志愿队；（海军的）辅助舰队"};

String_and_meaning String_and_meaning_avail = {
    .string = "avail",
    .meaning = "v. 有助于；（使）对某人有利n. 效用，利益"};

String_and_meaning String_and_meaning_available = {
    .string = "available",
    .meaning = "adj. 可获得的；可购得的；可找到的；有空的"};

String_and_meaning String_and_meaning_avenue = {
    .string = "avenue",
    .meaning = "n. 大街；林荫大道；（达到某物的）途径，手段，方法，渠道"};

String_and_meaning String_and_meaning_average = {
    .string = "average",
    .meaning = "n.平均,平均水平,平均数,海损adj.一般的,通常的,平均的vt.平均为,均分,使平衡,达到平均水平vi.买进,卖出"};

String_and_meaning String_and_meaning_avert = {
    .string = "avert",
    .meaning = "vt. 避免，防止；转移"};

String_and_meaning String_and_meaning_aviation = {
    .string = "aviation",
    .meaning = "n. 航空；飞行术；飞机制造业"};

String_and_meaning String_and_meaning_avoid = {
    .string = "avoid",
    .meaning = "vt. 避免；避开，躲避；消除"};

String_and_meaning String_and_meaning_await = {
    .string = "await",
    .meaning = "vt. 等候，等待；期待"};

String_and_meaning String_and_meaning_awake = {
    .string = "awake",
    .meaning = "adj. 醒着的v. 觉醒，意识到；使醒来，被唤起，激发起"};

String_and_meaning String_and_meaning_award = {
    .string = "award",
    .meaning = "n.奖,奖品vt.授予,判给"};

String_and_meaning String_and_meaning_aware = {
    .string = "aware",
    .meaning = "adj. 意识到的；知道的；有…方面知识的；懂世故的n. (Aware)人名；(阿拉伯、索)阿瓦雷"};

String_and_meaning String_and_meaning_away = {
    .string = "away",
    .meaning = "adv. 离去，离开；在远处"};

String_and_meaning String_and_meaning_awful = {
    .string = "awful",
    .meaning = "adj. 可怕的；极坏的；极讨厌的；难受的；使人敬畏的；非常的adv. 极其，非常"};

String_and_meaning String_and_meaning_awfully = {
    .string = "awfully",
    .meaning = "adv. 可怕地；十分；非常；很"};

String_and_meaning String_and_meaning_awkward = {
    .string = "awkward",
    .meaning = "adj. 尴尬的；笨拙的；棘手的；不合适的"};

String_and_meaning String_and_meaning_ax = {
    .string = "ax",
    .meaning = "v. 削减，删除；用斧修整；解雇；询问n. 斧头；爵士乐器（尤指吉他或萨克斯管）n. (Ax) （德、芬）阿克斯（人名）"};

String_and_meaning String_and_meaning_axis = {
    .string = "axis",
    .meaning = "n. 轴；轴线；轴心国"};

String_and_meaning String_and_meaning_baby = {
    .string = "baby",
    .meaning = "n. 婴儿，婴孩；孩子气的人vt. 纵容，娇纵；把……当婴儿般对待adj. 婴儿的；幼小的n. (Baby)人名；(法、葡)巴比；(英)巴比，芭比(女名)；(俄)巴贝"};

String_and_meaning String_and_meaning_bachelor = {
    .string = "bachelor",
    .meaning = "n. 学士；单身汉；（尚未交配的）小雄兽n. (Bachelor)人名；(英)巴彻勒"};

String_and_meaning String_and_meaning_back = {
    .string = "back",
    .meaning = "adj.后面的,在后面,早过去的,前(欠)的钱adv.向后地n.背部,后面v.后退,支持"};

String_and_meaning String_and_meaning_background = {
    .string = "background",
    .meaning = "n. 背景；隐蔽的位置vt. 作…的背景adj. 背景的；发布背景材料的"};

String_and_meaning String_and_meaning_backward = {
    .string = "backward",
    .meaning = "adv.adj.向后地(的),相反地(的),追溯,退步,由好变坏"};

String_and_meaning String_and_meaning_bacteria = {
    .string = "bacteria",
    .meaning = "n. [微] 细菌"};

String_and_meaning String_and_meaning_bad = {
    .string = "bad",
    .meaning = "adj. 坏的；严重的；劣质的n. 坏事；坏人adv. 很，非常；坏地；邪恶地n. (Bad)人名；(罗)巴德"};

String_and_meaning String_and_meaning_badge = {
    .string = "badge",
    .meaning = "n. 徽章；证章；标记vt. 授给…徽章"};

String_and_meaning String_and_meaning_badly = {
    .string = "badly",
    .meaning = "adv. 非常，很；严重地，厉害地；恶劣地"};

String_and_meaning String_and_meaning_badminton = {
    .string = "badminton",
    .meaning = "n. 羽毛球"};

String_and_meaning String_and_meaning_baffle = {
    .string = "baffle",
    .meaning = "vt. 使…困惑；使…受挫折；用挡板控制n. 挡板；困惑vi. 做徒劳挣扎"};

String_and_meaning String_and_meaning_bag = {
    .string = "bag",
    .meaning = "n. 包；袋；猎获物；（俚）一瓶啤酒vt. 猎获；把…装入袋中；放弃；得分；占据，私吞；使膨大；毁掉vi. 松垂；变形"};

String_and_meaning String_and_meaning_baggage = {
    .string = "baggage",
    .meaning = "n. 行李；[交] 辎重（军队的）"};

String_and_meaning String_and_meaning_bake = {
    .string = "bake",
    .meaning = "vt. 烤，烘焙vi. 烘面包；被烤干；受热n. 烤；烘烤食品n. (Bake)人名；(德、瑞典)巴克"};

String_and_meaning String_and_meaning_balance = {
    .string = "balance",
    .meaning = "n. 平衡；余额；匀称vt. 使平衡；结算；使相称vi. 保持平衡；相称；抵销n. (Balance)人名；(西)巴兰塞"};

String_and_meaning String_and_meaning_bald = {
    .string = "bald",
    .meaning = "adj.光秃的,单调的,枯燥的"};

String_and_meaning String_and_meaning_ball = {
    .string = "ball",
    .meaning = "n. 球；舞会vi. 成团块vt. 捏成球形n. (Ball)人名；(土)巴勒；(英、西)鲍尔；(法、德、俄、罗、捷)巴尔"};

String_and_meaning String_and_meaning_ballet = {
    .string = "ballet",
    .meaning = "n. 芭蕾舞，芭蕾舞曲，芭蕾舞剧；芭蕾舞团；芭蕾式交流n. (Ballet) （法、美）巴莱（人名）"};

String_and_meaning String_and_meaning_balloon = {
    .string = "balloon",
    .meaning = "n.气球"};

String_and_meaning String_and_meaning_ban = {
    .string = "ban",
    .meaning = "n.禁令vt.禁止,取缔(书刊等)"};

String_and_meaning String_and_meaning_banana = {
    .string = "banana",
    .meaning = "n. 香蕉；喜剧演员；大鹰钩鼻n. （Banana）（葡、津）巴纳纳（人名）"};

String_and_meaning String_and_meaning_band = {
    .string = "band",
    .meaning = "n. 带，环；[物] 波段；（演奏流行音乐的）乐队；人群vi. 用带绑扎；给……镶边"};

String_and_meaning String_and_meaning_bandage = {
    .string = "bandage",
    .meaning = "n. 绷带vt. 用绷带包扎"};

String_and_meaning String_and_meaning_bang = {
    .string = "bang",
    .meaning = "n. 刘海；重击；突然巨响adv. 直接地；砰然地；突然巨响地vt. 重击；发巨响；粗俚性交n. (Bang)（英、乍）班，(芬、德、丹)邦（人名）"};

String_and_meaning String_and_meaning_bank = {
    .string = "bank",
    .meaning = "n. 银行；岸；浅滩；储库vt. 将…存入银行；倾斜转弯vi. 堆积；倾斜转弯n. (Bank)人名；(英、德、俄)班克；(法、匈)邦克"};

String_and_meaning String_and_meaning_bankrupt = {
    .string = "bankrupt",
    .meaning = "adj. 破产的vt. 使破产n. [经] 破产者"};

String_and_meaning String_and_meaning_banner = {
    .string = "banner",
    .meaning = "n. 横幅图片的广告模式n. 旗帜，横幅,标语n. 人名(英、德、罗)班纳"};

String_and_meaning String_and_meaning_bar = {
    .string = "bar",
    .meaning = "n. 条，棒；酒吧；障碍；法庭vt. 禁止；阻拦prep. 除……外n. (Bar)人名；(阿拉伯、德、法、俄、罗、捷、波、葡、以)巴尔"};

String_and_meaning String_and_meaning_barber = {
    .string = "barber",
    .meaning = "n. （为男子理发的）理发师；男子理发店v. 为（男子）理发；当理发师n. (Barber) （美）巴伯（人名）"};

String_and_meaning String_and_meaning_bare = {
    .string = "bare",
    .meaning = "adj. 空的；赤裸的，无遮蔽的vt. 露出，使赤裸n. (Bare)人名；(英)贝尔"};

String_and_meaning String_and_meaning_barely = {
    .string = "barely",
    .meaning = "adv. 仅仅，勉强；几乎不；公开地；贫乏地"};

String_and_meaning String_and_meaning_bargain = {
    .string = "bargain",
    .meaning = "n. 交易；便宜货；契约vt. （谈价钱后）卖vi. 讨价还价；谈判"};

String_and_meaning String_and_meaning_bark = {
    .string = "bark",
    .meaning = "n. 树皮；深青棕色；毛皮；皮肤；狗叫vt. 狗叫；尖叫；剥皮n. (Bark)人名；(英、西、德、捷、法、芬、瑞典)巴克；(阿拉伯、俄)巴尔克"};

String_and_meaning String_and_meaning_barn = {
    .string = "barn",
    .meaning = "n. 谷仓；畜棚；车库；靶（核反应截面单位）vt. 把……贮存入仓"};

String_and_meaning String_and_meaning_barrel = {
    .string = "barrel",
    .meaning = "n. 桶； 一桶（的量）；枪管，炮管；（马等四足动物的）躯干v. 快速移动；把……装入桶内n. (Barrel) （法、意）巴雷尔（人名）"};

String_and_meaning String_and_meaning_barren = {
    .string = "barren",
    .meaning = "adj. 贫瘠的；不生育的；无益的；沉闷无趣的；空洞的n. 荒地n. (Barren)人名；(西、英)巴伦"};

String_and_meaning String_and_meaning_barrier = {
    .string = "barrier",
    .meaning = "n. 障碍物，屏障；界线vt. 把……关入栅栏n. （Barrier）（法）巴里耶（人名）"};

String_and_meaning String_and_meaning_base = {
    .string = "base",
    .meaning = "n.底部,基础,根据地,基地,本部,基数,(运动)出发点vt.以...作基础,基于... adj.卑鄙的,低级的"};

String_and_meaning String_and_meaning_basement = {
    .string = "basement",
    .meaning = "n. 地下室；地窖"};

String_and_meaning String_and_meaning_basic = {
    .string = "basic",
    .meaning = "adj. 基本的；基础的n. 基础；要素"};

String_and_meaning String_and_meaning_basically = {
    .string = "basically",
    .meaning = "adv. 主要地，基本上"};

String_and_meaning String_and_meaning_basin = {
    .string = "basin",
    .meaning = "n. 水池；流域；盆地；盆n. (Basin)人名；(俄)巴辛；(法)巴赞"};

String_and_meaning String_and_meaning_basis = {
    .string = "basis",
    .meaning = "n. 基础；底部；主要成分；基本原则或原理"};

String_and_meaning String_and_meaning_basket = {
    .string = "basket",
    .meaning = "n. 篮子；（篮球比赛的）得分；一篮之量；篮筐vt. 装入篮"};

String_and_meaning String_and_meaning_basketball = {
    .string = "basketball",
    .meaning = "n. 篮球；篮球运动"};

String_and_meaning String_and_meaning_bat = {
    .string = "bat",
    .meaning = "n. 蝙蝠；球棒；球拍；批处理文件的扩展名vt. 用球棒击球；击球率达…vi. 轮到击球；用球棒击球n. (Bat)人名；(蒙、英)巴特"};

String_and_meaning String_and_meaning_batch = {
    .string = "batch",
    .meaning = "n. 一批；一炉；一次所制之量vt. 分批处理n. (Batch)人名；(英)巴奇"};

String_and_meaning String_and_meaning_bath = {
    .string = "bath",
    .meaning = "n. 沐浴；浴室；浴盆vt. 洗澡vi. 洗澡"};

String_and_meaning String_and_meaning_bathe = {
    .string = "bathe",
    .meaning = "vt. 沐浴；用水洗vi. 洗澡；沐浴n. 洗澡；游泳n. (Bathe)人名；(德)巴特；(英)巴思"};

String_and_meaning String_and_meaning_bathroom = {
    .string = "bathroom",
    .meaning = "n. 浴室；厕所；盥洗室"};

String_and_meaning String_and_meaning_battery = {
    .string = "battery",
    .meaning = "n. [电] 电池，蓄电池n. [法]殴打n. [军]炮台，炮位"};

String_and_meaning String_and_meaning_battle = {
    .string = "battle",
    .meaning = "n. 战役；斗争vi. 斗争；作战vt. 与…作战n. (Battle)人名；(英)巴特尔；(法)巴特勒；(西)巴特莱"};

String_and_meaning String_and_meaning_bay = {
    .string = "bay",
    .meaning = "n. 海湾；狗吠声vt. 向…吠叫vi. 吠叫；大声叫嚷n. (Bay)人名；(越)七；(英、老)贝；(德、意、罗、捷、土、丹)巴伊；(匈)鲍伊；(瑞典)巴伊"};

String_and_meaning String_and_meaning_be = {
    .string = "be",
    .meaning = "vt. 是； 有，存在； 做，成为； 发生n. (Be)人名；(缅)拜；(日)部(姓)；(朝)培；(中非)贝"};

String_and_meaning String_and_meaning_beach = {
    .string = "beach",
    .meaning = "n. 海滩；湖滨vt. 将…拖上岸vi. 搁浅；定居n. (Beach)人名；(英)比奇"};

String_and_meaning String_and_meaning_beam = {
    .string = "beam",
    .meaning = "n. 横梁；光线；电波；船宽；[计量] 秤杆vt. 发送；以梁支撑；用…照射；流露vi. 照射；堆满笑容n. (Beam)人名；(阿拉伯)贝亚姆；(英)比姆"};

String_and_meaning String_and_meaning_bean = {
    .string = "bean",
    .meaning = "n. 豆；嘴峰；毫无价值的东西vt. 击…的头部n. (Bean)人名；(英)比恩"};

String_and_meaning String_and_meaning_bear = {
    .string = "bear",
    .meaning = "n.熊v.负担,忍受,带给,具有,挤,向"};

String_and_meaning String_and_meaning_beard = {
    .string = "beard",
    .meaning = "n.胡须"};

String_and_meaning String_and_meaning_bearing = {
    .string = "bearing",
    .meaning = "n. [机] 轴承；关系；方位；举止v. 忍受（bear的ing形式）"};

String_and_meaning String_and_meaning_beast = {
    .string = "beast",
    .meaning = "n. 野兽；畜生，人面兽心的人"};

String_and_meaning String_and_meaning_beat = {
    .string = "beat",
    .meaning = "n.敲打,拍子,巡逻区域v.打,打败"};

String_and_meaning String_and_meaning_beautiful = {
    .string = "beautiful",
    .meaning = "adj. 美丽的；出色的；迷人的"};

String_and_meaning String_and_meaning_beauty = {
    .string = "beauty",
    .meaning = "n. 美；美丽；美人；美好的东西"};

String_and_meaning String_and_meaning_because = {
    .string = "because",
    .meaning = "conj. 因为，由于prep. 因为某人（某事物）"};

String_and_meaning String_and_meaning_become = {
    .string = "become",
    .meaning = "vi. 成为；变得；变成vt. 适合；相称"};

String_and_meaning String_and_meaning_bed = {
    .string = "bed",
    .meaning = "n. 床；基础；河底，海底vt. 使睡觉；安置，嵌入；栽种vi. 上床；分层"};

String_and_meaning String_and_meaning_bee = {
    .string = "bee",
    .meaning = "n. 蜜蜂，蜂；勤劳的人n. (Bee)人名；(赤几)贝埃；(东南亚国家华语)美；(英)比(女子教名Beatrix和Beatrice的昵称)"};

String_and_meaning String_and_meaning_beef = {
    .string = "beef",
    .meaning = "n. 牛肉；肌肉；食用牛；牢骚vi. 抱怨，告发；发牢骚vt. 养；加强"};

String_and_meaning String_and_meaning_beer = {
    .string = "beer",
    .meaning = "n. 啤酒vi. 喝啤酒n. (Beer)人名；(法、德、俄、罗、捷、瑞典)贝尔；(英、西、南非)[纺] 比尔"};

String_and_meaning String_and_meaning_before = {
    .string = "before",
    .meaning = "adv.在前,以前 prep.在...之前 conj.在...之前,与其...宁可"};

String_and_meaning String_and_meaning_beforehand = {
    .string = "beforehand",
    .meaning = "adv. 事先；预先adj. 提前的；预先准备好的"};

String_and_meaning String_and_meaning_beg = {
    .string = "beg",
    .meaning = "vt. 乞讨；恳求；回避正题vi. 乞讨；请求n. (Beg)人名；(德、塞、巴基)贝格"};

String_and_meaning String_and_meaning_beggar = {
    .string = "beggar",
    .meaning = "n. 乞丐；穷人；家伙vt. 使贫穷；使沦为乞丐"};

String_and_meaning String_and_meaning_begin = {
    .string = "begin",
    .meaning = "vt. 开始vi. 开始；首先"};

String_and_meaning String_and_meaning_beginner = {
    .string = "beginner",
    .meaning = "n. 初学者；新手"};

String_and_meaning String_and_meaning_beginning = {
    .string = "beginning",
    .meaning = "n. 开始；起点v. 开始；创建（begin的ing形式）"};

String_and_meaning String_and_meaning_behalf = {
    .string = "behalf",
    .meaning = "n. 代表；利益"};

String_and_meaning String_and_meaning_behave = {
    .string = "behave",
    .meaning = "vi. 表现；（机器等）运转；举止端正；（事物）起某种作用vt. 使守规矩；使表现得…"};

String_and_meaning String_and_meaning_behavior = {
    .string = "behavior",
    .meaning = "n. 行为，举止；态度；反应"};

String_and_meaning String_and_meaning_behind = {
    .string = "behind",
    .meaning = "adv.在后地 prep.在...之后"};

String_and_meaning String_and_meaning_being = {
    .string = "being",
    .meaning = "n. 存在；生物；身心；生活，有生命；本质adj. 存在的v. 存在；在场；从事；就是；代表（be 的现在分词）"};

String_and_meaning String_and_meaning_belief = {
    .string = "belief",
    .meaning = "n. 相信，信赖；信仰；教义"};

String_and_meaning String_and_meaning_believe = {
    .string = "believe",
    .meaning = "vi. 信任；料想；笃信宗教vt. 相信；认为；信任"};

String_and_meaning String_and_meaning_bell = {
    .string = "bell",
    .meaning = "n. 铃，钟；钟声，铃声；钟状物vt. 装钟于，系铃于vi. 鸣钟；成钟状鼓起"};

String_and_meaning String_and_meaning_belong = {
    .string = "belong",
    .meaning = "vi. 属于，应归入；居住；适宜；应被放置"};

String_and_meaning String_and_meaning_beloved = {
    .string = "beloved",
    .meaning = "adj. 心爱的；挚爱的n. 心爱的人；亲爱的教友"};

String_and_meaning String_and_meaning_below = {
    .string = "below",
    .meaning = "prep.在...下面,adv.在下,在页底"};

String_and_meaning String_and_meaning_belt = {
    .string = "belt",
    .meaning = "n. 带；腰带；地带vt. 用带子系住；用皮带抽打vi. 猛击n. (Belt)人名；(英、法、德、西)贝尔特"};

String_and_meaning String_and_meaning_bench = {
    .string = "bench",
    .meaning = "n. 长凳；工作台；替补队员vt. 给…以席位；为…设置条凳n. (Bench)人名；(英)本奇；(德)本希；(丹)本克"};

String_and_meaning String_and_meaning_bend = {
    .string = "bend",
    .meaning = "v.弯曲,专心于,屈服n.弯曲"};

String_and_meaning String_and_meaning_beneath = {
    .string = "beneath",
    .meaning = "prep. 在……之下；（对某人来说）不够好，不相称；低于，次于n. 在下方，在底下"};

String_and_meaning String_and_meaning_beneficial = {
    .string = "beneficial",
    .meaning = "adj. 有益的，有利的；可享利益的"};

String_and_meaning String_and_meaning_benefit = {
    .string = "benefit",
    .meaning = "n. 利益，好处；救济金vt. 有益于，对…有益vi. 受益，得益"};

String_and_meaning String_and_meaning_berry = {
    .string = "berry",
    .meaning = "n. 浆果（葡萄，番茄等）vi. 采集浆果n. (Berry)人名；(法、英、德、意、葡)贝里；(匈)拜里"};

String_and_meaning String_and_meaning_beside = {
    .string = "beside",
    .meaning = "prep. 在旁边；与……相比；紧靠；除……以外（还）；除……以外（不再）adv. 在附近；况且，此外"};

String_and_meaning String_and_meaning_besides = {
    .string = "besides",
    .meaning = "prep. 除……之外（还）adv. 况且，再说；此外，以及"};

String_and_meaning String_and_meaning_best = {
    .string = "best",
    .meaning = "adj.最好的adv.最好地,最,极n.最佳状态或作品,最好的东西"};

String_and_meaning String_and_meaning_bet = {
    .string = "bet",
    .meaning = "n.赌,打赌v.赌,赌钱"};

String_and_meaning String_and_meaning_betray = {
    .string = "betray",
    .meaning = "vt. 背叛；出卖；泄露（秘密）；露出…迹象"};

String_and_meaning String_and_meaning_better = {
    .string = "better",
    .meaning = "adj.较好的adv.更好的,更多的,更佳的"};

String_and_meaning String_and_meaning_between = {
    .string = "between",
    .meaning = "prep. （空间、时间、数量等）在……之间；往返于；（表关系）两……之间；合用；一起adv. （时间或空间）介于……之间；在期间"};

String_and_meaning String_and_meaning_bewilder = {
    .string = "bewilder",
    .meaning = "vt. 使迷惑，使不知所措"};

String_and_meaning String_and_meaning_beyond = {
    .string = "beyond",
    .meaning = "prep. 在（或向）……较远的一边；超过，越过；晚于，迟于adv. 在另一边；在（或向）更远处n. 远处的事物；来世，再生"};

String_and_meaning String_and_meaning_bias = {
    .string = "bias",
    .meaning = "n. 偏见；偏爱；斜纹；乖离率vt. 使存偏见adj. 偏斜的adv. 偏斜地n. (Bias)人名；(法、德、葡、喀)比亚斯；(英)拜厄斯"};

String_and_meaning String_and_meaning_Bible = {
    .string = "Bible",
    .meaning = "n. 圣经"};

String_and_meaning String_and_meaning_bibliography = {
    .string = "bibliography",
    .meaning = "n. 参考书目；文献目录"};

String_and_meaning String_and_meaning_bicycle = {
    .string = "bicycle",
    .meaning = "n. 自行车vi. 骑脚踏车vt. 骑自行车运送"};

String_and_meaning String_and_meaning_bid = {
    .string = "bid",
    .meaning = "vt.出价,投标,祝愿,命令,吩咐n.出价,投标v.支付"};

String_and_meaning String_and_meaning_big = {
    .string = "big",
    .meaning = "adj. 大的；重要的；量大的adv. 大量地；顺利；夸大地n. （Big）（土）比格（人名）"};

String_and_meaning String_and_meaning_bike = {
    .string = "bike",
    .meaning = "n. 自行车；脚踏车vi. 骑自行车（或摩托车）n. (Bike)人名；(土、土库、塞)比克"};

String_and_meaning String_and_meaning_bill = {
    .string = "bill",
    .meaning = "n. [法] 法案；广告；账单；[金融] 票据；钞票；清单vt. 宣布；开账单；用海报宣传"};

String_and_meaning String_and_meaning_billion = {
    .string = "billion",
    .meaning = "n. 十亿；大量num. 十亿adj. 十亿的n. （Billion）（法）比利翁（人名）"};

String_and_meaning String_and_meaning_bind = {
    .string = "bind",
    .meaning = "vi. 结合；装订；有约束力；过紧vt. 绑；约束；装订；包扎；凝固n. 捆绑；困境；讨厌的事情；植物的藤蔓n. (Bind)人名；(德)宾德"};

String_and_meaning String_and_meaning_biography = {
    .string = "biography",
    .meaning = "n. 传记；档案；个人简介"};

String_and_meaning String_and_meaning_biology = {
    .string = "biology",
    .meaning = "n. （一个地区全部的）生物；生物学"};

String_and_meaning String_and_meaning_bird = {
    .string = "bird",
    .meaning = "n. 鸟；家伙；羽毛球vt. 向…喝倒彩；起哄vi. 猎鸟；观察研究野鸟n. (Bird)人名；(英、西)伯德"};

String_and_meaning String_and_meaning_birth = {
    .string = "birth",
    .meaning = "n. 出生；血统，出身；起源"};

String_and_meaning String_and_meaning_birthday = {
    .string = "birthday",
    .meaning = "n. 生日，诞辰；诞生的日子"};

String_and_meaning String_and_meaning_biscuit = {
    .string = "biscuit",
    .meaning = "n. 小点心，饼干"};

String_and_meaning String_and_meaning_bit = {
    .string = "bit",
    .meaning = "n.小块,少量,片刻,马嚼子,辅币vt.上马嚼子,控制 vbl.咬n.[计]位,比特"};

String_and_meaning String_and_meaning_bite = {
    .string = "bite",
    .meaning = "vt. 咬；刺痛n. 咬；一口；咬伤；刺痛vi. 咬；刺痛abbr. 机内测试设备（Built-In Test Equipment）n. (Bite)人名；(匈)比泰"};

String_and_meaning String_and_meaning_bitter = {
    .string = "bitter",
    .meaning = "adj. 苦的；痛苦的；尖刻的；充满仇恨的n. 苦味；苦啤酒adv. 激烈地；严寒刺骨地vt. 使变苦n. (Bitter)人名；(英、法、德、芬、捷、匈)比特"};

String_and_meaning String_and_meaning_bitterly = {
    .string = "bitterly",
    .meaning = "adv. 苦涩地，悲痛地，残酷地，怨恨地；极其，非常，强烈地"};

String_and_meaning String_and_meaning_bizarre = {
    .string = "bizarre",
    .meaning = "adj. 奇异的（指态度，容貌，款式等）"};

String_and_meaning String_and_meaning_black = {
    .string = "black",
    .meaning = "n.黑色,黑颜料,黑人adj.黑色的,弄脏了的,忧郁的vt.(使)变黑,涂黑"};

String_and_meaning String_and_meaning_blackboard = {
    .string = "blackboard",
    .meaning = "n. 黑板"};

String_and_meaning String_and_meaning_blade = {
    .string = "blade",
    .meaning = "n. 叶片；刀片，刀锋；剑"};

String_and_meaning String_and_meaning_blame = {
    .string = "blame",
    .meaning = "vt. 责备；归咎于n. 责备；责任；过失"};

String_and_meaning String_and_meaning_blank = {
    .string = "blank",
    .meaning = "adj.空白的,空着的,失色的,没有表情的n.空白,美 表格"};

String_and_meaning String_and_meaning_blanket = {
    .string = "blanket",
    .meaning = "n. 毛毯，毯子；毯状物，覆盖层adj. 总括的，全体的；没有限制的vt. 覆盖，掩盖；用毯覆盖"};

String_and_meaning String_and_meaning_blast = {
    .string = "blast",
    .meaning = "n. 爆炸；冲击波；一阵vi. 猛攻vt. 爆炸；损害；使枯萎n. (Blast)人名；(德)布拉斯特"};

String_and_meaning String_and_meaning_blaze = {
    .string = "blaze",
    .meaning = "n.火焰,光辉,情感爆发vi.燃烧,照耀,激发vt.在树皮上刻路标,公开宣布"};

String_and_meaning String_and_meaning_bleak = {
    .string = "bleak",
    .meaning = "adj. 阴冷的；荒凉的，无遮蔽的；黯淡的，无希望的；冷酷的；单调的"};

String_and_meaning String_and_meaning_bleed = {
    .string = "bleed",
    .meaning = "vt. 使出血；榨取vi. 流血；渗出；悲痛"};

String_and_meaning String_and_meaning_blend = {
    .string = "blend",
    .meaning = "vt. 混合vi. 混合；协调n. 混合；掺合物"};

String_and_meaning String_and_meaning_bless = {
    .string = "bless",
    .meaning = "vt. 祝福；保佑；赞美n. (Bless)人名；(英、意、德、匈)布莱斯"};

String_and_meaning String_and_meaning_blind = {
    .string = "blind",
    .meaning = "adj. 盲目的；瞎的adv. 盲目地；看不见地n. 掩饰，借口；百叶窗vt. 使失明；使失去理智n. (Blind)人名；(法)布兰；(德、瑞典)布林德"};

String_and_meaning String_and_meaning_block = {
    .string = "block",
    .meaning = "n. 块；街区；大厦；障碍物vt. 阻止；阻塞；限制；封盖adj. 成批的，大块的；交通堵塞的n. (Block)人名；(英、法、德、西、葡、芬、罗)布洛克"};

String_and_meaning String_and_meaning_blood = {
    .string = "blood",
    .meaning = "n. 血，血液；血统vt. 从…抽血；使先取得经验n. (Blood)人名；(英、西)布拉德"};

String_and_meaning String_and_meaning_bloom = {
    .string = "bloom",
    .meaning = "n. 花；青春；旺盛vt. 使开花；使茂盛vi. 开花；茂盛n. (Bloom)人名；(瑞典、西)布洛姆；(英)布卢姆"};

String_and_meaning String_and_meaning_blossom = {
    .string = "blossom",
    .meaning = "n. 花；开花期；兴旺期；花开的状态；漂亮的人v. 开花；兴旺；成功发展n. (Blossom) 布洛瑟姆（人名）"};

String_and_meaning String_and_meaning_blow = {
    .string = "blow",
    .meaning = "n.殴打,突然的打击v.风吹,吹气于,叫,喘气"};

String_and_meaning String_and_meaning_blue = {
    .string = "blue",
    .meaning = "n.蓝色adj.蓝色的,忧郁的,沮丧的"};

String_and_meaning String_and_meaning_blunder = {
    .string = "blunder",
    .meaning = "n. 愚蠢（或粗心）的错误，大错v. 犯大错，笨嘴笨舌；跌跌撞撞地走；误入（某地）"};

String_and_meaning String_and_meaning_blunt = {
    .string = "blunt",
    .meaning = "adj. 钝的，不锋利的；生硬的；直率的vt. 使迟钝n. (Blunt)人名；(英)布伦特"};

String_and_meaning String_and_meaning_blush = {
    .string = "blush",
    .meaning = "vi. 脸红；感到惭愧n. 脸红；红色；羞愧vt. 红著脸表示；使成红色n. (Blush)人名；(英)布拉什"};

String_and_meaning String_and_meaning_board = {
    .string = "board",
    .meaning = "n. 董事会；木板；甲板；膳食vt. 上（飞机、车、船等）；用板盖上；给提供膳宿vi. 寄宿n. (Board)人名；(英、西)博德"};

String_and_meaning String_and_meaning_boast = {
    .string = "boast",
    .meaning = "vt. 夸口说，自吹自擂说；以有…而自豪n. 自夸；值得夸耀的事物，引以为荣的事物vi. 自吹自擂n. (Boast)人名；(英)博斯特"};

String_and_meaning String_and_meaning_boat = {
    .string = "boat",
    .meaning = "n. 小船；轮船vi. 划船"};

String_and_meaning String_and_meaning_body = {
    .string = "body",
    .meaning = "n. 身体；主体；大量；团体；主要部分vt. 赋以形体n. (Body)人名；(英、法、罗)博迪"};

String_and_meaning String_and_meaning_boil = {
    .string = "boil",
    .meaning = "n.沸点,沸腾,疖子v.煮沸,激动"};

String_and_meaning String_and_meaning_bold = {
    .string = "bold",
    .meaning = "adj. 大胆的，英勇的；黑体的；厚颜无耻的；险峻的n. (Bold)人名；(英、德、罗、捷、瑞典)博尔德"};

String_and_meaning String_and_meaning_bolt = {
    .string = "bolt",
    .meaning = "n.门闩,螺钉,闪电,跑掉v.上门闩,囫囵吞下,逃跑"};

String_and_meaning String_and_meaning_bomb = {
    .string = "bomb",
    .meaning = "n. 炸弹；长传；气溶胶弹式容器；像炸弹的物体（如火山弹）；掺大麻的香烟；（钓鱼的）梨形重物v. 轰炸，投弹；疾行；（考试、演出等）惨败"};

String_and_meaning String_and_meaning_bond = {
    .string = "bond",
    .meaning = "n. 债券；结合；约定；粘合剂；纽带vi. 结合，团结在一起vt. 使结合；以…作保n. (Bond)人名；(英、德、西、刚(金)、瑞典)邦德"};

String_and_meaning String_and_meaning_bone = {
    .string = "bone",
    .meaning = "n. 骨；骨骼vt. 剔去……的骨；施骨肥于vi. 苦学；专心致志n. （Bone）（英）博恩；（法、西、罗、塞）博内；（老）奔（人名）"};

String_and_meaning String_and_meaning_bonus = {
    .string = "bonus",
    .meaning = "n. 奖金；红利；额外津贴n. (Bonus)人名；(西、塞)博努斯"};

String_and_meaning String_and_meaning_book = {
    .string = "book",
    .meaning = "n. 书籍；卷；账簿；名册；工作簿vt. 预订；登记n. (Book)人名；(中)卜(广东话·威妥玛)；(朝)北；(英)布克；(瑞典)博克"};

String_and_meaning String_and_meaning_boom = {
    .string = "boom",
    .meaning = "n.繁荣,隆隆声v.发隆隆声,兴隆,大事宣传"};

String_and_meaning String_and_meaning_boost = {
    .string = "boost",
    .meaning = "vt. 促进；增加；支援vi. 宣扬；偷窃n. 推动；帮助；宣扬n. (Boost)人名；(英)布斯特；(德)博斯特"};

String_and_meaning String_and_meaning_boot = {
    .string = "boot",
    .meaning = "n.美 (长统)靴,靴子v.导入"};

String_and_meaning String_and_meaning_booth = {
    .string = "booth",
    .meaning = "n. 货摊；公用电话亭n. (Booth)人名；(英)布思；(德、瑞典)博特"};

String_and_meaning String_and_meaning_border = {
    .string = "border",
    .meaning = "n. 边境；边界；国界vt. 接近；与…接壤；在…上镶边vi. 接界；近似n. (Border)人名；(英)博德"};

String_and_meaning String_and_meaning_bore = {
    .string = "bore",
    .meaning = "vi. 钻孔vt. 钻孔；使烦扰n. 孔；令人讨厌的人n. (Bore)人名；(法)博尔；(塞、马里)博雷"};

String_and_meaning String_and_meaning_born = {
    .string = "born",
    .meaning = "v. 出生；出现（bear 的过去分词）adj. 天生的；出生的；天赋的；创造的n. (Born) （美、德、爱、英、丹）博恩（人名）"};

String_and_meaning String_and_meaning_borrow = {
    .string = "borrow",
    .meaning = "vi. 借；借用；从其他语言中引入vt. 借；借用n. (Borrow)人名；(英)博罗"};

String_and_meaning String_and_meaning_bosom = {
    .string = "bosom",
    .meaning = "n. 胸；胸怀；中间；胸襟；内心；乳房；内部vt. 怀抱；把…藏在心中adj. 知心的；亲密的n. (Bosom)人名；(西)博索姆"};

String_and_meaning String_and_meaning_boss = {
    .string = "boss",
    .meaning = "n. 老板；首领；工头vt. 指挥，调遣；当…的领导vi. 当首领，发号施令n. (Boss)人名；(英、法、德、西、瑞典)博斯"};

String_and_meaning String_and_meaning_both = {
    .string = "both",
    .meaning = "det. 双方，两者pron. 双方，两者adv. 双方都，两者都；不仅……而且……conj. 既……且……；并；两者皆n. (Both) 博特（人名）"};

String_and_meaning String_and_meaning_bother = {
    .string = "bother",
    .meaning = "vt. 烦扰，打扰；使……不安；使……恼怒vi. 操心，麻烦；烦恼n. 麻烦；烦恼"};

String_and_meaning String_and_meaning_bottle = {
    .string = "bottle",
    .meaning = "n. 瓶子；一瓶的容量vt. 控制；把…装入瓶中vi. （街头艺人演出后）收拢钱币"};

String_and_meaning String_and_meaning_bottom = {
    .string = "bottom",
    .meaning = "n. 底部；末端；臀部；尽头adj. 底部的vt. 装底；测量深浅；查明真相vi. 到达底部；建立基础n. (Bottom)人名；(英)博顿"};

String_and_meaning String_and_meaning_bough = {
    .string = "bough",
    .meaning = "n. 大树枝n. (Bough)人名；(英)博夫"};

String_and_meaning String_and_meaning_bounce = {
    .string = "bounce",
    .meaning = "v.(使)反跳,弹起,(指支票)被银行退票,弹跳n.(球)跳起,弹回"};

String_and_meaning String_and_meaning_bound = {
    .string = "bound",
    .meaning = "n.跃进,跳,范围,限度adj.正要启程的,开往...去的,被束缚的,装订的v.跳跃,限制"};

String_and_meaning String_and_meaning_boundary = {
    .string = "boundary",
    .meaning = "n. 边界；范围；分界线"};

String_and_meaning String_and_meaning_bow = {
    .string = "bow",
    .meaning = "n. 弓；蝴蝶结；琴弓；船头v. 鞠躬，点头；低（头）；屈从；（使）弯曲；用琴弓拉奏（弦乐器）n. (Bow) （美、英、爱尔兰）鲍（人名）"};

String_and_meaning String_and_meaning_bowl = {
    .string = "bowl",
    .meaning = "n. 碗；木球；大酒杯vi. 玩保龄球；滑动；平稳快速移动vt. 投球；旋转；平稳快速移动"};

String_and_meaning String_and_meaning_box = {
    .string = "box",
    .meaning = "n.盒子,箱,包厢,岗亭,一拳v.装...入盒中,打耳光,拳击"};

String_and_meaning String_and_meaning_boy = {
    .string = "boy",
    .meaning = "n. 男孩；男人n. (Boy) （美、印、法、荷）布瓦（人名）"};

String_and_meaning String_and_meaning_boycott = {
    .string = "boycott",
    .meaning = "v. 联合抵制；拒绝购买；拒绝参加n. 联合抵制n. (Boycott) 博伊科特（人名）"};

String_and_meaning String_and_meaning_brace = {
    .string = "brace",
    .meaning = "n.支柱,带子,振作精神vt.支住,撑牢,振作起来,奋起adj.曲柄的v.支持"};

String_and_meaning String_and_meaning_bracket = {
    .string = "bracket",
    .meaning = "n. 支架，墙上凸出的托架；括号；等级，范围vt. 括在一起；把…归入同一类；排除"};

String_and_meaning String_and_meaning_brain = {
    .string = "brain",
    .meaning = "n. 头脑，智力；脑袋vt. 猛击…的头部n. (Brain)人名；(英)布雷恩"};

String_and_meaning String_and_meaning_brake = {
    .string = "brake",
    .meaning = "n. 刹车；阻碍（物）；敞篷四轮马车；纤维捣碎机；灌木丛；欧洲蕨v. 刹车；阻碍"};

String_and_meaning String_and_meaning_branch = {
    .string = "branch",
    .meaning = "n. 分支；分公司；分部；树枝；支流；岔路；（血管）分枝v. 发出新枝；岔开，分岔；出现分歧n. (Branch) 布兰奇（人名）"};

String_and_meaning String_and_meaning_brand = {
    .string = "brand",
    .meaning = "n.商标,牌子,烙印vt.打火印,污辱"};

String_and_meaning String_and_meaning_brandy = {
    .string = "brandy",
    .meaning = "n. 白兰地酒n. (Brandy)人名；(法)布朗迪"};

String_and_meaning String_and_meaning_brass = {
    .string = "brass",
    .meaning = "n. 黄铜；黄铜制品；铜管乐器；厚脸皮；位高权重者n. （Brass）（英、法、德）布拉斯（人名）"};

String_and_meaning String_and_meaning_brave = {
    .string = "brave",
    .meaning = "adj.勇敢的"};

String_and_meaning String_and_meaning_Brazil = {
    .string = "Brazil",
    .meaning = "n. 巴西（拉丁美洲国家）"};

String_and_meaning String_and_meaning_Brazilian = {
    .string = "Brazilian",
    .meaning = "adj. 巴西的；巴西人的n. 巴西人"};

String_and_meaning String_and_meaning_bread = {
    .string = "bread",
    .meaning = "n. 面包；生计vt. 在…上洒面包屑"};

String_and_meaning String_and_meaning_breadth = {
    .string = "breadth",
    .meaning = "n. 宽度，幅度；宽宏"};

String_and_meaning String_and_meaning_break = {
    .string = "break",
    .meaning = "n.休息,暂停,破裂,突变v.打破,违犯,折断,削弱,超过,突变"};

String_and_meaning String_and_meaning_breakdown = {
    .string = "breakdown",
    .meaning = "n. 故障；崩溃；分解；分类；衰弱；跺脚曳步舞"};

String_and_meaning String_and_meaning_breakfast = {
    .string = "breakfast",
    .meaning = "n. 早餐；早饭vi. 吃早餐vt. 为…供应早餐"};

String_and_meaning String_and_meaning_breast = {
    .string = "breast",
    .meaning = "n. 乳房，胸部；胸怀；心情vt. 以胸对着；与…搏斗"};

String_and_meaning String_and_meaning_breath = {
    .string = "breath",
    .meaning = "n. 呼吸，气息；一口气，（呼吸的）一次；瞬间，瞬息；微风；迹象；无声音，气音"};

String_and_meaning String_and_meaning_breathe = {
    .string = "breathe",
    .meaning = "vi. 呼吸；低语；松口气；（风）轻拂vt. 呼吸；使喘息；流露；低声说"};

String_and_meaning String_and_meaning_breed = {
    .string = "breed",
    .meaning = "v.(使)繁殖,教养,抚养n.品种,种类"};

String_and_meaning String_and_meaning_breeze = {
    .string = "breeze",
    .meaning = "n. 微风；轻而易举的事；煤屑；焦炭渣；小风波vi. 吹微风；逃走n. (Breeze)人名；(法)布雷兹"};

String_and_meaning String_and_meaning_bribe = {
    .string = "bribe",
    .meaning = "v. 向……行贿；诱哄（尤指小孩）n. 贿赂；（尤指用来哄小孩做事的）好处n. (Bribe) （美）布里韦（人名）"};

String_and_meaning String_and_meaning_brick = {
    .string = "brick",
    .meaning = "n. 砖，砖块；砖形物；心肠好的人vt. 用砖砌adj. 用砖做的；似砖的n. (Brick)人名；(英、法、瑞典)布里克"};

String_and_meaning String_and_meaning_bridge = {
    .string = "bridge",
    .meaning = "n. 桥；桥牌；桥接器；船桥vt. 架桥；渡过n. (Bridge)人名；(英)布里奇"};

String_and_meaning String_and_meaning_brief = {
    .string = "brief",
    .meaning = "adj. 简短的，简洁的；短暂的，草率的n. 摘要，简报；概要，诉书vt. 简报，摘要；作…的提要n. （Brief）（英）布里夫（人名）"};

String_and_meaning String_and_meaning_bright = {
    .string = "bright",
    .meaning = "adj. 明亮的，鲜明的；聪明的；愉快的adv. 明亮地；光明地；欢快地n. 车头灯光n. (Bright)人名；(英)布赖特"};

String_and_meaning String_and_meaning_brighten = {
    .string = "brighten",
    .meaning = "vi. 明亮；变亮；活跃；快乐高兴vt. 使闪亮；使生辉；使快乐高兴n. (Brighten)人名；(英)布赖滕"};

String_and_meaning String_and_meaning_brilliant = {
    .string = "brilliant",
    .meaning = "adj. 灿烂的，闪耀的；杰出的；有才气的；精彩的，绝妙的"};

String_and_meaning String_and_meaning_brim = {
    .string = "brim",
    .meaning = "n. 边；边缘；帽檐vi. 满溢；溢出vt. 使……满溢n. （Brim）（英）布里姆（人名）"};

String_and_meaning String_and_meaning_bring = {
    .string = "bring",
    .meaning = "vt. 带来；提供；引起；使处于某种情况或境地；使朝某方向移动；指控；强迫（自己）n. （Bring）（英、瑞典）布林（人名）"};

String_and_meaning String_and_meaning_brisk = {
    .string = "brisk",
    .meaning = "adj. 敏锐的，活泼的，轻快的；凛冽的vi. 活跃起来；变得轻快vt. 使……活泼；使……轻快；使……兴旺n. (Brisk)人名；(法、芬)布里斯克"};

String_and_meaning String_and_meaning_bristle = {
    .string = "bristle",
    .meaning = "n. 刚毛；粗硬短须，胡子楂；刷子毛；猪鬃v. （毛发）竖起；发怒；被侵犯；戒备"};

String_and_meaning String_and_meaning_Britain = {
    .string = "Britain",
    .meaning = "n. 英国；不列颠"};

String_and_meaning String_and_meaning_British = {
    .string = "British",
    .meaning = "adj. 英国的，大不列颠及北爱尔兰联合王国的；英国人的；英联邦的；大英帝国的n. 英国人"};

String_and_meaning String_and_meaning_brittle = {
    .string = "brittle",
    .meaning = "adj. 易碎的，脆弱的；易生气的"};

String_and_meaning String_and_meaning_broad = {
    .string = "broad",
    .meaning = "adj. 宽的，辽阔的；显著的；大概的n. 宽阔部分adv. 宽阔地n. (Broad)人名；(英、德)布罗德"};

String_and_meaning String_and_meaning_broadcast = {
    .string = "broadcast",
    .meaning = "n.广播,播音v.播撒(种子),广播 (无线电或电视)广播 播送,播放"};

String_and_meaning String_and_meaning_broken = {
    .string = "broken",
    .meaning = "adj. 破碎的；坏掉的v. 折断；打碎；损坏（break的过去分词）"};

String_and_meaning String_and_meaning_bronze = {
    .string = "bronze",
    .meaning = "n. 青铜；古铜色；青铜制品adj. 青铜色的；青铜制的vt. 镀青铜于vi. 变成青铜色，被晒黑n. (Bronze)人名；(葡)布龙泽"};

String_and_meaning String_and_meaning_brood = {
    .string = "brood",
    .meaning = "n.(动物中鸟或家禽的)一窝,(同种或同类的)一伙vt.孵,沉思"};

String_and_meaning String_and_meaning_brook = {
    .string = "brook",
    .meaning = "n. 小溪，小河v. 容忍，允许（尤指不同意见）n. (Brook) （加、美、爱、英）布鲁克（人名）"};

String_and_meaning String_and_meaning_broom = {
    .string = "broom",
    .meaning = "n. 扫帚；金雀花；飞天扫帚（出自《哈利·波特》）vt. 扫除vi. 桩顶开花或开裂n. （Broom）（英）布鲁姆（人名）"};

String_and_meaning String_and_meaning_brother = {
    .string = "brother",
    .meaning = "n. 兄弟；同事；战友int. 我的老兄！n. (Brother)人名；(英)布拉泽"};

String_and_meaning String_and_meaning_brow = {
    .string = "brow",
    .meaning = "n. 眉，眉毛；额；表情n. (Brow)人名；(西)布劳"};

String_and_meaning String_and_meaning_brown = {
    .string = "brown",
    .meaning = "adj. 棕色的，褐色的；太阳晒黑的vi. 变成褐色n. 褐色，棕色vt. 使变成褐色n. (Brown)人名；(英、意、芬、捷、德、法、西、葡)布朗"};

String_and_meaning String_and_meaning_bruise = {
    .string = "bruise",
    .meaning = "n. 擦伤；挫伤；青肿vt. 使受瘀伤；使受挫伤vi. 擦伤；受伤"};

String_and_meaning String_and_meaning_brush = {
    .string = "brush",
    .meaning = "n. 刷子；画笔；毛笔；争吵；冲突；灌木丛地带；矮树丛；狐狸尾巴vt. 刷；画；vi. 刷；擦过；掠过；（经过时）轻触"};

String_and_meaning String_and_meaning_brutal = {
    .string = "brutal",
    .meaning = "adj. 残忍的；野蛮的，不讲理的"};

String_and_meaning String_and_meaning_brute = {
    .string = "brute",
    .meaning = "adj.残忍的,畜生般的n.残忍的人,畜生"};

String_and_meaning String_and_meaning_bubble = {
    .string = "bubble",
    .meaning = "n. 气泡，泡沫，泡状物；透明圆形罩，圆形顶vi. 沸腾，冒泡；发出气泡声vt. 使冒泡；滔滔不绝地说"};

String_and_meaning String_and_meaning_bucket = {
    .string = "bucket",
    .meaning = "n. 桶，水桶；铲斗；一桶的量；（俚）篮球得分v. 倾盆而下；颠簸着行进n. （Bucket）（德）布克特（人名）"};

String_and_meaning String_and_meaning_buckle = {
    .string = "buckle",
    .meaning = "n. 带扣，搭钩；（尤指鞋的）扣形饰物v. 扣住，用搭扣装饰；屈服，退让；使弯曲变形；（人）精神崩溃n. (Buckle) （美、英、加）巴克尔（人名）"};

String_and_meaning String_and_meaning_bud = {
    .string = "bud",
    .meaning = "n. 芽，萌芽；蓓蕾vi. 发芽，萌芽vt. 使发芽n. (Bud)人名；(英)巴德；(中)布特(蒙语·汉语拼音)；(罗、匈)布德"};

String_and_meaning String_and_meaning_budget = {
    .string = "budget",
    .meaning = "n. 预算，预算费vt. 安排，预定；把…编入预算vi. 编预算，做预算adj. 廉价的"};

String_and_meaning String_and_meaning_buffer = {
    .string = "buffer",
    .meaning = "n. [计] 缓冲区；缓冲器，[车辆] 减震器vt. 缓冲"};

String_and_meaning String_and_meaning_bug = {
    .string = "bug",
    .meaning = "n. 臭虫，小虫；故障；窃听器vt. 烦扰，打扰；装窃听器vi. 装置窃听器；打扰"};

String_and_meaning String_and_meaning_build = {
    .string = "build",
    .meaning = "vt. 建立；建筑vi. 建筑；建造n. 构造；体形；体格"};

String_and_meaning String_and_meaning_building = {
    .string = "building",
    .meaning = "n. 建筑；建筑物v. 建筑；建立；增加（build的ing形式）"};

String_and_meaning String_and_meaning_bulb = {
    .string = "bulb",
    .meaning = "n. 电灯泡；鳞茎；球状物vi. 生球茎；膨胀成球状"};

String_and_meaning String_and_meaning_bulk = {
    .string = "bulk",
    .meaning = "n. 体积，容量；大多数，大部分；大块vt. 使扩大，使形成大量；使显得重要n. （Bulk）（土）布尔克（人名）"};

String_and_meaning String_and_meaning_bull = {
    .string = "bull",
    .meaning = "n.[动]公牛,粗壮如牛的人"};

String_and_meaning String_and_meaning_bullet = {
    .string = "bullet",
    .meaning = "n. 子弹；只选某党全部候选人的投票；豆子vi. 射出；迅速行进n. (Bullet)人名；(法)比莱"};

String_and_meaning String_and_meaning_bulletin = {
    .string = "bulletin",
    .meaning = "n. 公告，公报vt. 公布，公告"};

String_and_meaning String_and_meaning_bump = {
    .string = "bump",
    .meaning = "n. 肿块，隆起物；撞击vi. 碰撞，撞击；颠簸而行vt. 碰，撞；颠簸adv. 突然地，猛烈地n. (Bump)人名；(英、西)邦普"};

String_and_meaning String_and_meaning_bunch = {
    .string = "bunch",
    .meaning = "n. 群；串；突出物vi. 隆起；打褶；形成一串vt. 使成一串；使打褶n. (Bunch)人名；(英)邦奇"};

String_and_meaning String_and_meaning_bundle = {
    .string = "bundle",
    .meaning = "n. 束；捆vt. 捆vi. 匆忙离开"};

String_and_meaning String_and_meaning_burden = {
    .string = "burden",
    .meaning = "n. 负担；责任；船的载货量vt. 使负担；烦扰；装货于n. (Burden)人名；(英)伯登"};

String_and_meaning String_and_meaning_bureau = {
    .string = "bureau",
    .meaning = "n. 局，处；衣柜；办公桌n. (Bureau)人名；(法)比罗"};

String_and_meaning String_and_meaning_bureaucracy = {
    .string = "bureaucracy",
    .meaning = "n. 官僚主义；官僚机构；官僚政治"};

String_and_meaning String_and_meaning_burial = {
    .string = "burial",
    .meaning = "n. 埋葬；葬礼；弃绝adj. 埋葬的"};

String_and_meaning String_and_meaning_burn = {
    .string = "burn",
    .meaning = "vt. 燃烧；烧毁，灼伤；激起……的愤怒vi. 燃烧；烧毁；发热n. 灼伤，烧伤；烙印n. （Burn）（英）伯恩（人名）"};

String_and_meaning String_and_meaning_burst = {
    .string = "burst",
    .meaning = "v.爆裂,炸破,急于,爆发n.突然破裂,爆发,脉冲"};

String_and_meaning String_and_meaning_bury = {
    .string = "bury",
    .meaning = "vt. 埋葬；隐藏n. (Bury)人名；(法)比里；(英、西)伯里；(德、意、罗、波、捷、匈)布里；(俄)布雷"};

String_and_meaning String_and_meaning_bus = {
    .string = "bus",
    .meaning = "n. 公共汽车vt. 乘公共汽车"};

String_and_meaning String_and_meaning_bush = {
    .string = "bush",
    .meaning = "n. 灌木；矮树丛vt. 以灌木装饰；使…精疲力竭vi. 丛生；浓密地生长adj. 如灌木般长得低矮的；粗野的"};

String_and_meaning String_and_meaning_business = {
    .string = "business",
    .meaning = "n. 商业，交易; 生意; 事务，业务; 职业，行业;"};

String_and_meaning String_and_meaning_busy = {
    .string = "busy",
    .meaning = "adj. 忙碌的；热闹的；正被占用的vt. 使忙于n. (Busy)人名；(匈)布希；(法)比西"};

String_and_meaning String_and_meaning_but = {
    .string = "but",
    .meaning = "conj. 但是；而是；然而adv. 仅仅，只prep. 除…以外n. (But)人名；(俄、罗)布特；(越)笔"};

String_and_meaning String_and_meaning_butcher = {
    .string = "butcher",
    .meaning = "n. 屠夫；肉店；刽子手；（火车或剧院的）小贩v. 屠杀（人）；屠宰（动物）；弄砸n. (Butcher) （美、爱、英）布彻（人名）"};

String_and_meaning String_and_meaning_butter = {
    .string = "butter",
    .meaning = "n. 黄油，奶油；像黄油的食品；奉承话v. 涂黄油于；讨好"};

String_and_meaning String_and_meaning_butterfly = {
    .string = "butterfly",
    .meaning = "n. 蝴蝶；蝶泳；举止轻浮的人；追求享乐的人"};

String_and_meaning String_and_meaning_button = {
    .string = "button",
    .meaning = "n. 按钮；纽扣vt. 扣住；扣紧；在…上装纽扣vi. 扣住；装有纽扣；扣上纽扣n. (Button)人名；(英)巴顿"};

String_and_meaning String_and_meaning_buy = {
    .string = "buy",
    .meaning = "vt. 购买；买得起；获得；贿赂；相信n. 购买；所购的物品；合算的东西n. （Buy）（法）比伊（人名）"};

String_and_meaning String_and_meaning_buzz = {
    .string = "buzz",
    .meaning = "n.嗡嗡声v.作嗡嗡声,嗡嗡作响,逼近"};

String_and_meaning String_and_meaning_by = {
    .string = "by",
    .meaning = "prep. 由，被；通过；相差……；到……之前；在……旁边adv. 经过；（时间）过去；在旁边；短暂访问n. （体育比赛）轮空晋级adj. 旁边的，侧面的"};

String_and_meaning String_and_meaning_bypass = {
    .string = "bypass",
    .meaning = "n. 旁路，支路；旁通管，分流术v. 绕过，避开；忽视，不顾（规章制度）；设旁路，迂回"};

String_and_meaning String_and_meaning_cabbage = {
    .string = "cabbage",
    .meaning = "n. 卷心菜，甘蓝菜，洋白菜；（俚)脑袋；（非正式、侮辱）植物人（常用于英式英语）；（俚）钱，尤指纸币（常用于美式俚语）"};

String_and_meaning String_and_meaning_cabin = {
    .string = "cabin",
    .meaning = "n. 小屋；客舱；船舱vt. 把…关在小屋里vi. 住在小屋里n. (Cabin)人名；(法)卡班"};

String_and_meaning String_and_meaning_cabinet = {
    .string = "cabinet",
    .meaning = "n. 内阁；橱柜；展览艺术品的小陈列室；外壳adj. 内阁的；私下的，秘密的"};

String_and_meaning String_and_meaning_cable = {
    .string = "cable",
    .meaning = "n. 缆绳；电缆；海底电报vt. 打电报vi. 打海底电报"};

String_and_meaning String_and_meaning_cafe = {
    .string = "cafe",
    .meaning = "n. 咖啡馆；小餐馆"};

String_and_meaning String_and_meaning_cafeteria = {
    .string = "cafeteria",
    .meaning = "n. 自助餐厅； 小餐厅；快餐厅"};

String_and_meaning String_and_meaning_cage = {
    .string = "cage",
    .meaning = "n. 笼，兽笼；牢房，监狱vt. 把…关进笼子；把…囚禁起来n. (Cage)人名；(法)卡热；(英)凯奇"};

String_and_meaning String_and_meaning_cake = {
    .string = "cake",
    .meaning = "n. 蛋糕；块状物；利益总额vt. 使结块vi. 结成块状n. (Cake)人名；(英)凯克；(塞)察凯"};

String_and_meaning String_and_meaning_calculate = {
    .string = "calculate",
    .meaning = "vi. 计算；以为；作打算vt. 计算；预测；认为；打算"};

String_and_meaning String_and_meaning_calculation = {
    .string = "calculation",
    .meaning = "n. 计算；估计；计算的结果；深思熟虑"};

String_and_meaning String_and_meaning_calculator = {
    .string = "calculator",
    .meaning = "n. 计算器；计算者"};

String_and_meaning String_and_meaning_calendar = {
    .string = "calendar",
    .meaning = "n. 日历；[天] 历法；日程表vt. 将…列入表中；将…排入日程表"};

String_and_meaning String_and_meaning_call = {
    .string = "call",
    .meaning = "vi. 呼叫；拜访；叫牌vt. 呼叫；称呼；召集n. 电话；呼叫；要求；访问n. (Call)人名；(瑞典、罗)卡尔；(英)考尔"};

String_and_meaning String_and_meaning_calm = {
    .string = "calm",
    .meaning = "adj. 静的，平静的；沉着的vt. 使平静；使镇定vi. 平静下来；镇定下来n. 风平浪静n. (Calm)人名；(法、德)卡尔姆"};

String_and_meaning String_and_meaning_camel = {
    .string = "camel",
    .meaning = "n. [畜牧][脊椎] 骆驼；打捞浮筒；工作作风官僚adj. 驼色的；暗棕色的vi. 工作刻板平庸n. (Camel)人名；(法)卡梅尔；(阿拉伯)卡迈勒"};

String_and_meaning String_and_meaning_camera = {
    .string = "camera",
    .meaning = "n. 照相机；摄影机n. (Camera)人名；(英、意、西)卡梅拉"};

String_and_meaning String_and_meaning_camp = {
    .string = "camp",
    .meaning = "n.露营地,阵营vi.露营,扎营"};

String_and_meaning String_and_meaning_campaign = {
    .string = "campaign",
    .meaning = "n. 运动；活动；战役，军事行动；竞选v. 领导或参加运动；参加竞选"};

String_and_meaning String_and_meaning_campus = {
    .string = "campus",
    .meaning = "n. （大学）校园；大学，大学生活；校园内的草地n. (Campus)人名；(英)坎帕斯；(意、罗)坎普斯；(法)康皮斯"};

String_and_meaning String_and_meaning_can = {
    .string = "can",
    .meaning = "vt.装进罐中,把食品装罐n.罐头,铁罐 conj.能,可以"};

String_and_meaning String_and_meaning_Canada = {
    .string = "Canada",
    .meaning = "n. 加拿大（北美洲国家）"};

String_and_meaning String_and_meaning_Canadian = {
    .string = "Canadian",
    .meaning = "adj. 加拿大的；加拿大人的；加拿大文化的n. 加拿大人；加拿大河（美国河流）"};

String_and_meaning String_and_meaning_canal = {
    .string = "canal",
    .meaning = "n. 运河；[地理] 水道；[建] 管道；灌溉水渠vt. 在…开凿运河n. (Canal)人名；(英、法、西、意、葡)卡纳尔；(土)贾纳尔"};

String_and_meaning String_and_meaning_cancel = {
    .string = "cancel",
    .meaning = "vt. 取消；删去vi. 取消，撤销；相互抵消n. 取消，撤销n. （Cancel）（法）康塞尔（人名）"};

String_and_meaning String_and_meaning_cancer = {
    .string = "cancer",
    .meaning = "n. 癌症；恶性肿瘤"};

String_and_meaning String_and_meaning_candidate = {
    .string = "candidate",
    .meaning = "n. 候选人，候补者；应试者"};

String_and_meaning String_and_meaning_candle = {
    .string = "candle",
    .meaning = "n. 蜡烛；烛光；烛形物vt. 对着光检查"};

String_and_meaning String_and_meaning_candy = {
    .string = "candy",
    .meaning = "n. 糖果，巧克力；冰糖；（糖果包装的）毒品；中看不中用的东西v. 把……制成蜜饯；用糖煮；使结晶"};

String_and_meaning String_and_meaning_cannon = {
    .string = "cannon",
    .meaning = "n. 大炮；加农炮；榴弹炮；机关炮vi. 炮轰；开炮vt. 炮轰n. (Cannon)人名；(英、葡)坎农"};

String_and_meaning String_and_meaning_canoe = {
    .string = "canoe",
    .meaning = "n. 独木舟；轻舟vi. 乘独木舟vt. 用独木舟运"};

String_and_meaning String_and_meaning_canon = {
    .string = "canon",
    .meaning = "n. 标准；教规；正典圣经；教士"};

String_and_meaning String_and_meaning_canteen = {
    .string = "canteen",
    .meaning = "n. 食堂，小卖部；水壶"};

String_and_meaning String_and_meaning_canvas = {
    .string = "canvas",
    .meaning = "n. 帆布vt. 用帆布覆盖，用帆布装备adj. 帆布制的"};

String_and_meaning String_and_meaning_cap = {
    .string = "cap",
    .meaning = "n. 盖；帽子vi. 脱帽致意vt. 覆盖；胜过；给……戴帽；加盖于n. (Cap) （法、德、罗）卡普（人名）；（塞、捷）察普（人名）"};

String_and_meaning String_and_meaning_capable = {
    .string = "capable",
    .meaning = "adj. 有能力的；有才干的；容许……的；可以做（某事）的；综合性的；有资格的"};

String_and_meaning String_and_meaning_capacity = {
    .string = "capacity",
    .meaning = "n. 能力；容量；资格，地位；生产力"};

String_and_meaning String_and_meaning_capital = {
    .string = "capital",
    .meaning = "n. 首都，省会；资金；大写字母；资本家adj. 首都的；重要的；大写的n. (Capital)人名；(法)卡皮塔尔"};

String_and_meaning String_and_meaning_capsule = {
    .string = "capsule",
    .meaning = "n. 胶囊；蒴果；太空舱；小容器adj. 压缩的；概要的vt. 压缩；简述"};

String_and_meaning String_and_meaning_captain = {
    .string = "captain",
    .meaning = "n. 队长，首领；船长；上尉；海军上校vt. 指挥；率领"};

String_and_meaning String_and_meaning_captive = {
    .string = "captive",
    .meaning = "adj. 被俘虏的；被迷住的n. 俘虏；迷恋者"};

String_and_meaning String_and_meaning_capture = {
    .string = "capture",
    .meaning = "vt. 俘获；夺得；捕捉，拍摄，录制n. 捕获；战利品，俘虏"};

String_and_meaning String_and_meaning_car = {
    .string = "car",
    .meaning = "n. 汽车；车厢n. (Car)人名；(土)贾尔；(法、西)卡尔；(塞)察尔"};

String_and_meaning String_and_meaning_carbon = {
    .string = "carbon",
    .meaning = "n. [化学] 碳；碳棒；复写纸adj. 碳的；碳处理的n. (Carbon)人名；(西)卡尔翁；(法)卡尔邦；(英)卡本"};

String_and_meaning String_and_meaning_card = {
    .string = "card",
    .meaning = "n. 卡片；纸牌；明信片vt. 记于卡片上n. （Card）（英）卡德（人名）"};

String_and_meaning String_and_meaning_care = {
    .string = "care",
    .meaning = "n. 关怀；照料；谨慎；忧虑vi. 照顾；关心；喜爱；顾虑vt. 在意；希望或喜欢n. (Care)人名；(英)凯尔；(塞)察蕾"};

String_and_meaning String_and_meaning_career = {
    .string = "career",
    .meaning = "n. 生涯；职业；事业；速度，全速adj. 作为毕生职业的vi. 全速前进，猛冲"};

String_and_meaning String_and_meaning_careful = {
    .string = "careful",
    .meaning = "adj. 仔细的，小心的"};

String_and_meaning String_and_meaning_careless = {
    .string = "careless",
    .meaning = "adj. 粗心的；无忧无虑的；淡漠的n. (Careless)人名；(英)凯尔利斯"};

String_and_meaning String_and_meaning_cargo = {
    .string = "cargo",
    .meaning = "n. 货物，船货n. (Cargo)人名；(英、西)卡戈"};

String_and_meaning String_and_meaning_carpenter = {
    .string = "carpenter",
    .meaning = "n. 木匠，木工vi. 当木匠，做木匠工作vt. 制作n. (Carpenter)人名；(英、葡、法)卡彭特"};

String_and_meaning String_and_meaning_carpet = {
    .string = "carpet",
    .meaning = "n.地毯"};

String_and_meaning String_and_meaning_carriage = {
    .string = "carriage",
    .meaning = "n. 运输；运费；四轮马车；举止；客车厢"};

String_and_meaning String_and_meaning_carrier = {
    .string = "carrier",
    .meaning = "n. [化学] 载体；运送者；带菌者；货架n. (Carrier)人名；(英)卡里尔；(法)卡里耶"};

String_and_meaning String_and_meaning_carrot = {
    .string = "carrot",
    .meaning = "n. 胡萝卜诱饵"};

String_and_meaning String_and_meaning_carry = {
    .string = "carry",
    .meaning = "vt. 拿，扛；携带；支持；搬运vi. 能达到；被携带；被搬运n. 运载；[计] 进位；射程n. (Carry)人名；(英)卡里"};

String_and_meaning String_and_meaning_cart = {
    .string = "cart",
    .meaning = "n. 二轮运货马车vt. 用车装载vi. 驾运货马车；用运货车运送n. (Cart)人名；(法)卡尔；(英、芬)卡特"};

String_and_meaning String_and_meaning_cartoon = {
    .string = "cartoon",
    .meaning = "n. 卡通片，[电影] 动画片；连环漫画vt. 为…画漫画vi. 画漫画"};

String_and_meaning String_and_meaning_carve = {
    .string = "carve",
    .meaning = "vt. 雕刻；切开；开创vi. 切开；做雕刻工作n. (Carve)人名；(西、瑞典)卡韦"};

String_and_meaning String_and_meaning_case = {
    .string = "case",
    .meaning = "n. 情况；实例；箱vt. 包围；把…装于容器中n. (Case)人名；(英)凯斯；(西)卡塞；(法)卡斯"};

String_and_meaning String_and_meaning_cash = {
    .string = "cash",
    .meaning = "n. 现款，现金vt. 将…兑现；支付现款n. (Cash)人名；(英)卡什"};

String_and_meaning String_and_meaning_cassette = {
    .string = "cassette",
    .meaning = "n. 卡带；盒式磁带"};

String_and_meaning String_and_meaning_cast = {
    .string = "cast",
    .meaning = "n.投掷,铸件,脱落物,一瞥,演员表v.投,抛,投射,浇铸,计算,派(角色)"};

String_and_meaning String_and_meaning_castle = {
    .string = "castle",
    .meaning = "n. 城堡；象棋中的车vt. 置…于城堡中；筑城堡防御n. (Castle)人名；(英)卡斯尔"};

String_and_meaning String_and_meaning_casual = {
    .string = "casual",
    .meaning = "adj. 随便的；非正式的；临时的；偶然的n. 便装；临时工人；待命士兵"};

String_and_meaning String_and_meaning_casualty = {
    .string = "casualty",
    .meaning = "n. 意外事故；伤亡人员；急诊室"};

String_and_meaning String_and_meaning_cat = {
    .string = "cat",
    .meaning = "n. 猫，猫科动物"};

String_and_meaning String_and_meaning_catalog = {
    .string = "catalog",
    .meaning = "n. [图情][计] 目录；登记vt. 登记；为…编目录vi. 编目录；按确定价格收入目录（等于catalogue）"};

String_and_meaning String_and_meaning_catch = {
    .string = "catch",
    .meaning = "vt. 赶上；抓住；感染；了解vi. 赶上；抓住n. 捕捉；捕获物；窗钩"};

String_and_meaning String_and_meaning_category = {
    .string = "category",
    .meaning = "n. 种类，分类；[数] 范畴"};

String_and_meaning String_and_meaning_cater = {
    .string = "cater",
    .meaning = "vt. 投合，迎合；满足需要；提供饮食及服务n. (Cater)人名；(英)凯特"};

String_and_meaning String_and_meaning_cathedral = {
    .string = "cathedral",
    .meaning = "n. 大教堂"};

String_and_meaning String_and_meaning_catholic = {
    .string = "catholic",
    .meaning = "adj. 天主教的；宽宏大量的n. 天主教徒；罗马天主教"};

String_and_meaning String_and_meaning_cattle = {
    .string = "cattle",
    .meaning = "n. 牛；牲畜（骂人的话）；家畜；无价值的人n. (Cattle)人名；(意)卡特莱"};

String_and_meaning String_and_meaning_cause = {
    .string = "cause",
    .meaning = "n. 原因；事业；目标vt. 引起；使遭受"};

String_and_meaning String_and_meaning_caution = {
    .string = "caution",
    .meaning = "n. 小心，谨慎；警告，警示vt. 警告"};

String_and_meaning String_and_meaning_cautious = {
    .string = "cautious",
    .meaning = "adj. 谨慎的；十分小心的"};

String_and_meaning String_and_meaning_cave = {
    .string = "cave",
    .meaning = "n. 山洞，洞穴；窑洞v. 塌落；屈服；洞穴探险；挖洞穴int. （旧，校园俚语）当心n. (Cave) （美、爱）凯夫（人名）"};

String_and_meaning String_and_meaning_cavity = {
    .string = "cavity",
    .meaning = "n. 腔；洞，凹处"};

String_and_meaning String_and_meaning_cease = {
    .string = "cease",
    .meaning = "vi. 停止；终了vt. 停止；结束n. 停止"};

String_and_meaning String_and_meaning_ceiling = {
    .string = "ceiling",
    .meaning = "n. 天花板；上限"};

String_and_meaning String_and_meaning_celebrate = {
    .string = "celebrate",
    .meaning = "vt. 庆祝；举行；赞美；祝贺；宣告vi. 庆祝；过节；举行宗教仪式"};

String_and_meaning String_and_meaning_cell = {
    .string = "cell",
    .meaning = "n. 细胞；电池；蜂房的巢室；单人小室vi. 住在牢房或小室中n. (Cell)人名；(英)塞尔"};

String_and_meaning String_and_meaning_cellar = {
    .string = "cellar",
    .meaning = "n. 地窖；酒窖；地下室vt. 把…藏入地窖n. (Cellar)人名；(捷)采拉尔"};

String_and_meaning String_and_meaning_cement = {
    .string = "cement",
    .meaning = "n.水泥,接合剂vt.接合,用水泥涂,巩固vi.粘牢"};

String_and_meaning String_and_meaning_census = {
    .string = "census",
    .meaning = "n. 人口普查，人口调查；（官方的）统计，调查vt. 实施统计调查"};

String_and_meaning String_and_meaning_cent = {
    .string = "cent",
    .meaning = "n. 分；一分的硬币；森特（等于半音程的百分之一）n. (Cent)人名；(法)桑"};

String_and_meaning String_and_meaning_center = {
    .string = "center",
    .meaning = "n. 中心，中央；中锋；中心点vi. 居中，被置于中心vt. 集中，使聚集在一点；定中心adj. 中央的，位在正中的n. （Center）森特（人名）"};

String_and_meaning String_and_meaning_centigrade = {
    .string = "centigrade",
    .meaning = "adj. 摄氏温度的；百分度的n. 摄氏温标"};

String_and_meaning String_and_meaning_centimetre = {
    .string = "centimetre",
    .meaning = "n. 厘米；公分"};

String_and_meaning String_and_meaning_central = {
    .string = "central",
    .meaning = "adj. 中心的；主要的；中枢的n. 电话总机"};

String_and_meaning String_and_meaning_centre = {
    .string = "centre",
    .meaning = "n.中心,中央,中心区v.集中"};

String_and_meaning String_and_meaning_century = {
    .string = "century",
    .meaning = "n. 世纪，百年；（板球）一百分"};

String_and_meaning String_and_meaning_ceramic = {
    .string = "ceramic",
    .meaning = "adj. 陶瓷的；陶器的；制陶艺术的n. 陶瓷；陶瓷制品"};

String_and_meaning String_and_meaning_cereal = {
    .string = "cereal",
    .meaning = "n. 谷类，谷物；谷类食品；谷类植物adj. 谷类的；谷类制成的"};

String_and_meaning String_and_meaning_ceremony = {
    .string = "ceremony",
    .meaning = "n. 典礼，仪式；礼节，礼仪；客套，虚礼"};

String_and_meaning String_and_meaning_certain = {
    .string = "certain",
    .meaning = "adj. 某一；必然的；确信；无疑的；有把握的pron. 某些；某几个n. (Certain)人名；(葡)塞尔塔因；(法)塞尔坦"};

String_and_meaning String_and_meaning_certainly = {
    .string = "certainly",
    .meaning = "adv. 当然；行（用于回答）；必定"};

String_and_meaning String_and_meaning_certainty = {
    .string = "certainty",
    .meaning = "n. 必然；确实；确实的事情"};

String_and_meaning String_and_meaning_certificate = {
    .string = "certificate",
    .meaning = "n. 证书；文凭，合格证书；电影放映许可证v. 发给证明书，用证书证明"};

String_and_meaning String_and_meaning_certify = {
    .string = "certify",
    .meaning = "v. 证明；保证"};

String_and_meaning String_and_meaning_chain = {
    .string = "chain",
    .meaning = "n. 链；束缚；枷锁vt. 束缚；囚禁；用铁链锁住"};

String_and_meaning String_and_meaning_chair = {
    .string = "chair",
    .meaning = "n. 椅子；讲座；（会议的）主席位；大学教授的职位vt. 担任（会议的）主席；使…入座；使就任要职n. (Chair)人名；(法)谢尔"};

String_and_meaning String_and_meaning_chairman = {
    .string = "chairman",
    .meaning = "n. 主席，会长；董事长"};

String_and_meaning String_and_meaning_chalk = {
    .string = "chalk",
    .meaning = "n.粉笔,白垩vt.用粉笔写,和以白垩"};

String_and_meaning String_and_meaning_challenge = {
    .string = "challenge",
    .meaning = "n.挑战vt.向...挑战"};

String_and_meaning String_and_meaning_chamber = {
    .string = "chamber",
    .meaning = "n. （身体或器官内的）室，膛；房间；会所adj. 室内的；私人的，秘密的vt. 把…关在室内；装填（弹药等）n. (Chamber)人名；(英)钱伯"};

String_and_meaning String_and_meaning_champion = {
    .string = "champion",
    .meaning = "n. 冠军；拥护者；战士vt. 支持；拥护adj. 优胜的；第一流的n. (Champion)人名；(英)钱皮恩；(法)尚皮翁"};

String_and_meaning String_and_meaning_chance = {
    .string = "chance",
    .meaning = "n. 机会，际遇；运气，侥幸；可能性vt. 偶然发生；冒……的险vi. 碰巧；偶然被发现adj. 意外的，偶然的，碰巧的n. (Chance)人名；(英)钱斯"};

String_and_meaning String_and_meaning_change = {
    .string = "change",
    .meaning = "n.改变,变化,转变,找回的零钱,找头,辅币vt.改变,变革,改造,兑换"};

String_and_meaning String_and_meaning_channel = {
    .string = "channel",
    .meaning = "n.海峡,水道,沟,路线vt.引导,开导,形成河道 信道,频道"};

String_and_meaning String_and_meaning_chaos = {
    .string = "chaos",
    .meaning = "n. 混沌，混乱n. (Chaos)人名；(西)查奥斯"};

String_and_meaning String_and_meaning_chapter = {
    .string = "chapter",
    .meaning = "n. 章，回；（俱乐部、协会等的）分会；人生或历史上的重要时期vt. 把…分成章节"};

String_and_meaning String_and_meaning_character = {
    .string = "character",
    .meaning = "n. 性格，品质；特性；角色；[计] 字符vt. 印，刻；使具有特征n. (Character)人名；(英)克拉克特"};

String_and_meaning String_and_meaning_characteristic = {
    .string = "characteristic",
    .meaning = "adj. 典型的；特有的；表示特性的n. 特征；特性；特色"};

String_and_meaning String_and_meaning_characterize = {
    .string = "characterize",
    .meaning = "vt. 描绘…的特性；具有…的特征vi. 塑造人物"};

String_and_meaning String_and_meaning_charge = {
    .string = "charge",
    .meaning = "n.负荷,电荷,费用,主管,掌管,充电,充气,装料v.装满,控诉,责令,告诫,指示,加罪于,冲锋,收费"};

String_and_meaning String_and_meaning_charity = {
    .string = "charity",
    .meaning = "n. 慈善；施舍；慈善团体；宽容；施舍物"};

String_and_meaning String_and_meaning_charm = {
    .string = "charm",
    .meaning = "n. 魅力，吸引力；魔力vt. 使陶醉；行魔法vi. 有魔力；用符咒"};

String_and_meaning String_and_meaning_charming = {
    .string = "charming",
    .meaning = "adj. 迷人的；可爱的v. 使陶醉（charm的现在分词）"};

String_and_meaning String_and_meaning_chart = {
    .string = "chart",
    .meaning = "n. 图表；海图；图纸；排行榜vt. 绘制……的图表；在海图上标出；详细计划；记录；记述；跟踪（进展或发展）n. （Chart）（泰）察（人名）"};

String_and_meaning String_and_meaning_charter = {
    .string = "charter",
    .meaning = "n. 宪章；执照；特许状；（法律或政策的）漏洞；（飞机、船等的）租用v. 包租；发给特许执照adj. 包租的n. (Charter) （美、英）查特（人名）"};

String_and_meaning String_and_meaning_chase = {
    .string = "chase",
    .meaning = "vt. 追逐；追捕；试图赢得；雕镂vi. 追逐；追赶；奔跑n. 追逐；追赶；追击n. (Chase)人名；(英)蔡斯；(法)沙斯"};

String_and_meaning String_and_meaning_chat = {
    .string = "chat",
    .meaning = "vi. 聊天，闲谈；网聊n. 聊天，闲谈；（尤指非正式的）谈话；网聊；石；鸣禽n. (Chat) （美、泰、英）沙（人名）"};

String_and_meaning String_and_meaning_cheap = {
    .string = "cheap",
    .meaning = "adj. 便宜的；小气的；不值钱的adv. 便宜地"};

String_and_meaning String_and_meaning_cheat = {
    .string = "cheat",
    .meaning = "vt. 欺骗；骗取vi. 欺骗；作弊n. 欺骗，作弊；骗子"};

String_and_meaning String_and_meaning_check = {
    .string = "check",
    .meaning = "vt. 检查，核对；制止，抑制；在…上打勾；托运vi. 核实，查核；中止；打勾；[象棋]将一军n. 美支票；制止，抑制；检验，核对n. （英）切克（人名）"};

String_and_meaning String_and_meaning_cheek = {
    .string = "cheek",
    .meaning = "n. 面颊，脸颊；臀部vt. 无礼地向…讲话，对…大胆无礼n. (Cheek)人名；(英)奇克"};

String_and_meaning String_and_meaning_cheer = {
    .string = "cheer",
    .meaning = "n.愉快,欢呼v.(使)快活,(对)欢呼"};

String_and_meaning String_and_meaning_cheerful = {
    .string = "cheerful",
    .meaning = "adj. 快乐的；愉快的；高兴的"};

String_and_meaning String_and_meaning_cheese = {
    .string = "cheese",
    .meaning = "n. [食品] 奶酪；干酪；要人vt. 停止adj. 叛变的；胆小的"};

String_and_meaning String_and_meaning_chemical = {
    .string = "chemical",
    .meaning = "n. 化学制品，化学药品adj. 化学的"};

String_and_meaning String_and_meaning_chemist = {
    .string = "chemist",
    .meaning = "n. 化学家；化学工作者；药剂师；炼金术士"};

String_and_meaning String_and_meaning_chemistry = {
    .string = "chemistry",
    .meaning = "n. 化学；化学过程"};

String_and_meaning String_and_meaning_cheque = {
    .string = "cheque",
    .meaning = "n. 支票"};

String_and_meaning String_and_meaning_cherish = {
    .string = "cherish",
    .meaning = "vt. 珍爱；怀有（感情等）；抱有（希望等）"};

String_and_meaning String_and_meaning_cherry = {
    .string = "cherry",
    .meaning = "n. 樱桃；樱桃树；如樱桃的鲜红色；处女膜，处女n. (Cherry)人名；(法、阿拉伯)谢里；(英)彻丽(女子教名Charity的昵称)"};

String_and_meaning String_and_meaning_chess = {
    .string = "chess",
    .meaning = "n. 国际象棋，西洋棋n. (Chess)人名；(英)切斯"};

String_and_meaning String_and_meaning_chest = {
    .string = "chest",
    .meaning = "n. 胸，胸部；衣柜；箱子；金库"};

String_and_meaning String_and_meaning_chew = {
    .string = "chew",
    .meaning = "vt.咀爵(食物等)v.咀嚼,认真考虑"};

String_and_meaning String_and_meaning_chicken = {
    .string = "chicken",
    .meaning = "n. 鸡肉；小鸡；胆小鬼，懦夫adj. 鸡肉的；胆怯的；幼小的"};

String_and_meaning String_and_meaning_chief = {
    .string = "chief",
    .meaning = "n. 首领；酋长；主要部分adj. 首席的；主要的；主任的adv. 主要地；首要地"};

String_and_meaning String_and_meaning_child = {
    .string = "child",
    .meaning = "n. 儿童，小孩，孩子；产物；子孙；幼稚的人；弟子n. （英）蔡尔德（人名）"};

String_and_meaning String_and_meaning_childhood = {
    .string = "childhood",
    .meaning = "n. 童年时期；幼年时代"};

String_and_meaning String_and_meaning_childish = {
    .string = "childish",
    .meaning = "adj. 幼稚的，孩子气的"};

String_and_meaning String_and_meaning_chill = {
    .string = "chill",
    .meaning = "n. 寒冷；寒意；寒心adj. 寒冷的；冷漠的；扫兴的vt. 冷冻，冷藏；使寒心；使感到冷vi. 冷藏；变冷"};

String_and_meaning String_and_meaning_chimney = {
    .string = "chimney",
    .meaning = "n. 烟囱"};

String_and_meaning String_and_meaning_chin = {
    .string = "chin",
    .meaning = "n.下巴,下颚"};

String_and_meaning String_and_meaning_China = {
    .string = "China",
    .meaning = "n. 中国adj. 中国的；中国制造的n. (china) 瓷器adj. (china) 瓷制的"};

String_and_meaning String_and_meaning_china = {
    .string = "china",
    .meaning = "n. 瓷器adj. 瓷制的n. (China) 中国adj. (China) 中国的"};

String_and_meaning String_and_meaning_Chinese = {
    .string = "Chinese",
    .meaning = "n. 中文，汉语；中国人adj. 中国的，中国人的；中国话的"};

String_and_meaning String_and_meaning_chip = {
    .string = "chip",
    .meaning = "n.碎片,筹码v.削成碎片,碎裂 芯片"};

String_and_meaning String_and_meaning_chocolate = {
    .string = "chocolate",
    .meaning = "n. 巧克力，巧克力糖；巧克力色adj. 巧克力色的；巧克力口味的n. (Chocolate)人名；(葡)绍科拉特"};

String_and_meaning String_and_meaning_choice = {
    .string = "choice",
    .meaning = "n. 选择；选择权；精选品adj. 精选的；仔细推敲的"};

String_and_meaning String_and_meaning_choke = {
    .string = "choke",
    .meaning = "vt. 呛；使窒息；阻塞；抑制；扑灭vi. 窒息；阻塞；说不出话来n. 窒息；噎；[动力] 阻气门"};

String_and_meaning String_and_meaning_choose = {
    .string = "choose",
    .meaning = "vt. 选择，决定vi. 选择，挑选"};

String_and_meaning String_and_meaning_chop = {
    .string = "chop",
    .meaning = "n.砍,排骨,官印,商标vt.剁碎,砍,(风浪)突变"};

String_and_meaning String_and_meaning_chord = {
    .string = "chord",
    .meaning = "n. 弦；和弦；香水的基调n. (Chord)人名；(英)科德"};

String_and_meaning String_and_meaning_chorus = {
    .string = "chorus",
    .meaning = "n. 合唱队；齐声；歌舞队vt. 合唱；异口同声地说vi. 合唱；异口同声地说话n. (Chorus)人名；(法)肖吕斯"};

String_and_meaning String_and_meaning_Christian = {
    .string = "Christian",
    .meaning = "n. 基督徒，信徒adj. 基督教的；信基督教的"};

String_and_meaning String_and_meaning_Christmas = {
    .string = "Christmas",
    .meaning = "n. 圣诞节；圣诞节期间"};

String_and_meaning String_and_meaning_chronic = {
    .string = "chronic",
    .meaning = "adj. 慢性的；长期的；习惯性的n. (Chronic)人名；(英)克罗尼克"};

String_and_meaning String_and_meaning_church = {
    .string = "church",
    .meaning = "n. 教堂；礼拜；教派adj. 教会的；礼拜的vt. 领…到教堂接受宗教仪式n. (Church)人名；(英)丘奇"};

String_and_meaning String_and_meaning_cigarette = {
    .string = "cigarette",
    .meaning = "n. 香烟；纸烟"};

String_and_meaning String_and_meaning_cinema = {
    .string = "cinema",
    .meaning = "n. 电影；电影院；电影业，电影制作术n. (Cinema)人名；(意)奇内马"};

String_and_meaning String_and_meaning_circle = {
    .string = "circle",
    .meaning = "n. 循环，周期；圆；圈子；圆形物vi. 盘旋，旋转；环行vt. 画圆圈；环绕…移动"};

String_and_meaning String_and_meaning_circuit = {
    .string = "circuit",
    .meaning = "n. [电子] 电路，回路；巡回；一圈；环道vi. 环行vt. 绕回…环行"};

String_and_meaning String_and_meaning_circular = {
    .string = "circular",
    .meaning = "adj. 循环的；圆形的n. 通知，传单"};

String_and_meaning String_and_meaning_circulate = {
    .string = "circulate",
    .meaning = "vi. 传播，流传；循环；流通vt. 使循环；使流通；使传播"};

String_and_meaning String_and_meaning_circulation = {
    .string = "circulation",
    .meaning = "n. 流通，传播；循环；发行量；（图书的）借出"};

String_and_meaning String_and_meaning_circumference = {
    .string = "circumference",
    .meaning = "n. 圆周；周长；胸围"};

String_and_meaning String_and_meaning_circumstance = {
    .string = "circumstance",
    .meaning = "n. 环境；状况；境遇；（尤指）经济状况；命运vt. 处于某种情况"};

String_and_meaning String_and_meaning_circus = {
    .string = "circus",
    .meaning = "n. 马戏；马戏团"};

String_and_meaning String_and_meaning_cite = {
    .string = "cite",
    .meaning = "vt. 引用；传讯；想起；表彰"};

String_and_meaning String_and_meaning_citizen = {
    .string = "citizen",
    .meaning = "n. 公民；市民；老百姓"};

String_and_meaning String_and_meaning_city = {
    .string = "city",
    .meaning = "n. 城市，都市adj. 城市的；都会的"};

String_and_meaning String_and_meaning_civil = {
    .string = "civil",
    .meaning = "adj. 公民的；民间的；文职的；有礼貌的；根据民法的n. (Civil)人名；(土)吉维尔；(法)西维尔"};

String_and_meaning String_and_meaning_civilian = {
    .string = "civilian",
    .meaning = "n. 平民，百姓adj. 民用的，百姓的，平民的"};

String_and_meaning String_and_meaning_civilization = {
    .string = "civilization",
    .meaning = "n. 文明；文化"};

String_and_meaning String_and_meaning_civilize = {
    .string = "civilize",
    .meaning = "vt. 使文明；教化；使开化vi. 变得文明"};

String_and_meaning String_and_meaning_claim = {
    .string = "claim",
    .meaning = "n.(根据权利提出)要求,要求权,主张,要求而得到的东西vt.(根据权利)要求,认领,声称,主张,需要"};

String_and_meaning String_and_meaning_clamp = {
    .string = "clamp",
    .meaning = "n.夹子,夹具,夹钳vt.夹住,夹紧"};

String_and_meaning String_and_meaning_clap = {
    .string = "clap",
    .meaning = "vi. 鼓掌，拍手；啪地关上vt. 拍手，鼓掌；轻轻拍打某人n. 鼓掌；拍手声n. (Clap)人名；(西、英)克拉普"};

String_and_meaning String_and_meaning_clarify = {
    .string = "clarify",
    .meaning = "vt. 澄清；阐明vi. 得到澄清；变得明晰；得到净化"};

String_and_meaning String_and_meaning_clarity = {
    .string = "clarity",
    .meaning = "n. 清楚，明晰；透明n. (Clarity)人名；(英)克拉里蒂"};

String_and_meaning String_and_meaning_clash = {
    .string = "clash",
    .meaning = "n. 冲突，不协调；碰撞声，铿锵声vi. 冲突，抵触；砰地相碰撞，发出铿锵声vt. 使碰撞作声"};

String_and_meaning String_and_meaning_clasp = {
    .string = "clasp",
    .meaning = "n. 扣子，钩子；握手vt. 紧抱；扣紧；紧紧缠绕vi. 扣住"};

String_and_meaning String_and_meaning_class = {
    .string = "class",
    .meaning = "n.班级,阶级,社会等级,种类,(一节)课vt.把...分类(或分等级)"};

String_and_meaning String_and_meaning_classic = {
    .string = "classic",
    .meaning = "adj. 经典的；古典的，传统的；最优秀的n. 名著；经典著作；大艺术家"};

String_and_meaning String_and_meaning_classical = {
    .string = "classical",
    .meaning = "adj. 古典的；经典的；传统的；第一流的n. 古典音乐"};

String_and_meaning String_and_meaning_classification = {
    .string = "classification",
    .meaning = "n. 分类；类别，等级"};

String_and_meaning String_and_meaning_classify = {
    .string = "classify",
    .meaning = "vt. 分类；分等"};

String_and_meaning String_and_meaning_classmate = {
    .string = "classmate",
    .meaning = "n. 同班同学"};

String_and_meaning String_and_meaning_classroom = {
    .string = "classroom",
    .meaning = "n. 教室"};

String_and_meaning String_and_meaning_clause = {
    .string = "clause",
    .meaning = "n. 条款；[计] 子句n. (Clause)人名；(法)克洛斯"};

String_and_meaning String_and_meaning_claw = {
    .string = "claw",
    .meaning = "n. 爪；螯，钳；爪形器具vi. 用爪抓（或挖）vt. 用爪抓（或挖）"};

String_and_meaning String_and_meaning_clay = {
    .string = "clay",
    .meaning = "n. [土壤] 粘土；泥土；肉体；似黏土的东西vt. 用黏土处理n. (Clay)人名；(英、法、西、意、葡)克莱"};

String_and_meaning String_and_meaning_clean = {
    .string = "clean",
    .meaning = "adj. 清洁的，干净的；清白的vt. 使干净vi. 打扫，清扫adv. 完全地n. 打扫n. (Clean)人名；(英)克林"};

String_and_meaning String_and_meaning_clear = {
    .string = "clear",
    .meaning = "adj. 清楚的；清澈的；晴朗的；无罪的vt. 通过；清除；使干净；跳过vi. 放晴；变清澈adv. 清晰地；完全地n. 清除；空隙n. (Clear)人名；(英)克利尔"};

String_and_meaning String_and_meaning_clearance = {
    .string = "clearance",
    .meaning = "n. 清除；（货物的）清仓甩卖；空隙；准许；（飞机起降的）许可；（支票）过户，结算；（足球比赛中）解围"};

String_and_meaning String_and_meaning_clearly = {
    .string = "clearly",
    .meaning = "adv. 清晰地；明显地；无疑地；明净地"};

String_and_meaning String_and_meaning_clerk = {
    .string = "clerk",
    .meaning = "n. 职员，办事员；店员；书记；记账员；古牧师，教士vi. 当销售员，当店员；当职员n. （英）克拉克（人名）"};

String_and_meaning String_and_meaning_clever = {
    .string = "clever",
    .meaning = "adj. 聪明的；机灵的；熟练的[ 比较级cleverer 最高级 cleverest ]"};

String_and_meaning String_and_meaning_client = {
    .string = "client",
    .meaning = "n. [经] 客户；顾客；委托人"};

String_and_meaning String_and_meaning_cliff = {
    .string = "cliff",
    .meaning = "n. 悬崖；绝壁n. (Cliff)人名；(英)克利夫"};

String_and_meaning String_and_meaning_climate = {
    .string = "climate",
    .meaning = "n. 气候；风气；思潮；风土"};

String_and_meaning String_and_meaning_climax = {
    .string = "climax",
    .meaning = "n. 高潮；顶点；层进法；极点"};

String_and_meaning String_and_meaning_climb = {
    .string = "climb",
    .meaning = "v.攀登,爬n.攀登,爬"};

String_and_meaning String_and_meaning_cling = {
    .string = "cling",
    .meaning = "vi. 坚持，墨守；紧贴；附着"};

String_and_meaning String_and_meaning_clinic = {
    .string = "clinic",
    .meaning = "n. 临床；诊所；卫生所，卫生室；医务室"};

String_and_meaning String_and_meaning_clip = {
    .string = "clip",
    .meaning = "n.夹子,回形针,子弹夹vt.夹住,剪短,修剪"};

String_and_meaning String_and_meaning_cloak = {
    .string = "cloak",
    .meaning = "n.斗蓬,宽大外衣,掩护vt.用外衣遮蔽,披斗篷"};

String_and_meaning String_and_meaning_clock = {
    .string = "clock",
    .meaning = "n. 时钟；计时器vt. 记录；记时vi. 打卡；记录时间n. (Clock)人名；(英)克洛克"};

String_and_meaning String_and_meaning_clockwise = {
    .string = "clockwise",
    .meaning = "adv. 顺时针方向地adj. 顺时针方向的"};

String_and_meaning String_and_meaning_close = {
    .string = "close",
    .meaning = "v.关,关闭,结束,停止,使靠近,靠拢,会合,包围n.结束adj.近的,紧密的,精密的,齐根的,封闭的,亲密的,闷气的adv.接近,紧密地"};

String_and_meaning String_and_meaning_closely = {
    .string = "closely",
    .meaning = "adv. 紧密地；接近地；严密地；亲近地"};

String_and_meaning String_and_meaning_closet = {
    .string = "closet",
    .meaning = "n. 壁橱；议事室，密室；小房间adj. 秘密的，私下的；空谈的vt. 把…关在私室中n. (Closet)人名；(法)克洛塞"};

String_and_meaning String_and_meaning_cloth = {
    .string = "cloth",
    .meaning = "n. 布；织物；桌布adj. 布制的n. (Cloth)人名；(德)克洛特"};

String_and_meaning String_and_meaning_clothe = {
    .string = "clothe",
    .meaning = "vt. 给…穿衣；覆盖；赋予"};

String_and_meaning String_and_meaning_clothes = {
    .string = "clothes",
    .meaning = "n. 衣服"};

String_and_meaning String_and_meaning_clothing = {
    .string = "clothing",
    .meaning = "n. （总称）[服装] 服装；帆装v. 覆盖（clothe的ing形式）；给…穿衣"};

String_and_meaning String_and_meaning_cloud = {
    .string = "cloud",
    .meaning = "n. 云；阴云；云状物；一大群；黑斑vt. 使混乱；以云遮蔽；使忧郁；玷污vi. 阴沉；乌云密布n. （Cloud） 克劳德（人名）"};

String_and_meaning String_and_meaning_cloudy = {
    .string = "cloudy",
    .meaning = "adj. 多云的；阴天的；愁容满面的"};

String_and_meaning String_and_meaning_club = {
    .string = "club",
    .meaning = "n. 俱乐部，社团；夜总会；棍棒；（扑克牌中的）梅花vt. 用棍棒打；募集vi. 集资；组成俱乐部adj. 俱乐部的n. (Club) (巴、印、阿)克拉布（人名）"};

String_and_meaning String_and_meaning_clue = {
    .string = "clue",
    .meaning = "n. 线索；（故事等的）情节vt. 为…提供线索；为…提供情况"};

String_and_meaning String_and_meaning_clumsy = {
    .string = "clumsy",
    .meaning = "adj. 笨拙的笨拙地不得当的不得当地"};

String_and_meaning String_and_meaning_cluster = {
    .string = "cluster",
    .meaning = "n. 群；簇；丛；串vi. 群聚；丛生vt. 使聚集；聚集在某人的周围n. (Cluster)人名；(英)克拉斯特"};

String_and_meaning String_and_meaning_clutch = {
    .string = "clutch",
    .meaning = "v. 紧握；（因害怕或痛苦）突然抓住；突然感到恐惧n. 离合器（踏板）；一群；控制；紧握；一窝蛋；女式无带手提包adj. 紧要关头的"};

String_and_meaning String_and_meaning_coach = {
    .string = "coach",
    .meaning = "n. 教练；旅客车厢；长途公车；四轮大马车vt. 训练；指导vi. 作指导；接受辅导；坐马车旅行n.  蔻驰（皮革品牌）"};

String_and_meaning String_and_meaning_coal = {
    .string = "coal",
    .meaning = "n. 煤；（尤指燃烧着的）煤块；木炭v. 供煤；采煤，提炼煤；把……烧成炭；加煤"};

String_and_meaning String_and_meaning_coarse = {
    .string = "coarse",
    .meaning = "adj. 粗糙的；粗俗的；下等的"};

String_and_meaning String_and_meaning_coast = {
    .string = "coast",
    .meaning = "n. 海岸；滑行v. 滑行；（交通工具）快速平稳地移动；得过且过，做事不费力；沿岸航行v. (Coast) （英、美）科斯特（人名）"};

String_and_meaning String_and_meaning_coat = {
    .string = "coat",
    .meaning = "n. 外套vt. 覆盖…的表面n. (Coat)人名；(法)科阿"};

String_and_meaning String_and_meaning_cock = {
    .string = "cock",
    .meaning = "n. 公鸡；龙头；雄鸟；头目vt. 使竖起；使耸立；使朝上vi. 翘起；竖起；大摇大摆n. (Cock)人名；(英、西、瑞典)科克"};

String_and_meaning String_and_meaning_code = {
    .string = "code",
    .meaning = "n. 代码，密码；编码；法典vt. 编码；制成法典vi. 指定遗传密码n. (Code)人名；(英、法、西)科德"};

String_and_meaning String_and_meaning_coffee = {
    .string = "coffee",
    .meaning = "n. 咖啡；咖啡豆；咖啡色n. (Coffee)人名；(英)科菲"};

String_and_meaning String_and_meaning_coherent = {
    .string = "coherent",
    .meaning = "adj. 连贯的，一致的；明了的；清晰的；凝聚性的；互相耦合的；粘在一起的；共格的"};

String_and_meaning String_and_meaning_coil = {
    .string = "coil",
    .meaning = "v.盘绕,卷"};

String_and_meaning String_and_meaning_coin = {
    .string = "coin",
    .meaning = "n.硬币vt.铸造(硬币)"};

String_and_meaning String_and_meaning_coincide = {
    .string = "coincide",
    .meaning = "vi. 一致，符合；同时发生vi. (在性格、品质等方面)完全一致，相符"};

String_and_meaning String_and_meaning_coincidence = {
    .string = "coincidence",
    .meaning = "n. 巧合；一致；同时发生"};

String_and_meaning String_and_meaning_cold = {
    .string = "cold",
    .meaning = "adj. 寒冷的；冷淡的，不热情的；失去知觉的n. 寒冷；感冒adv. 完全地"};

String_and_meaning String_and_meaning_collaboration = {
    .string = "collaboration",
    .meaning = "n. 合作；勾结；通敌"};

String_and_meaning String_and_meaning_collapse = {
    .string = "collapse",
    .meaning = "n.倒塌,崩溃,失败,虚脱vi.倒塌,崩溃,瓦解,失败,病倒"};

String_and_meaning String_and_meaning_collar = {
    .string = "collar",
    .meaning = "n. 衣领；颈圈vt. 抓住；给…上领子；给…套上颈圈n. (Collar)人名；(法)科拉尔；(西)科利亚尔；(英)科勒"};

String_and_meaning String_and_meaning_colleague = {
    .string = "colleague",
    .meaning = "n. 同事，同僚"};

String_and_meaning String_and_meaning_collect = {
    .string = "collect",
    .meaning = "vt. 收集；募捐vi. 收集；聚集；募捐adv. 由收件人付款地adj. 由收件人付款的n. (Collect)人名；(英)科莱克特"};

String_and_meaning String_and_meaning_collection = {
    .string = "collection",
    .meaning = "n. 采集，聚集；[税收] 征收；收藏品；募捐"};

String_and_meaning String_and_meaning_collective = {
    .string = "collective",
    .meaning = "adj. 集体的；共同的；集合的；集体主义的n. 集团；集合体；集合名词"};

String_and_meaning String_and_meaning_college = {
    .string = "college",
    .meaning = "n. 大学；学院；学会"};

String_and_meaning String_and_meaning_collide = {
    .string = "collide",
    .meaning = "vi. 碰撞；抵触，冲突vt. 使碰撞；使相撞"};

String_and_meaning String_and_meaning_collision = {
    .string = "collision",
    .meaning = "n. 碰撞；冲突；（意见，看法）的抵触；（政党等的）倾轧"};

String_and_meaning String_and_meaning_colonel = {
    .string = "colonel",
    .meaning = "n. 陆军上校n. (Colonel)人名；(法、罗)科洛内尔"};

String_and_meaning String_and_meaning_colonial = {
    .string = "colonial",
    .meaning = "adj. 殖民的，殖民地的；（建筑，家具）殖民地时期式样的；（动物，植物）群体的；受英国殖民统治时期的n. 殖民地居民；殖民地时期式样的房屋"};

String_and_meaning String_and_meaning_colony = {
    .string = "colony",
    .meaning = "n. 殖民地；移民队；种群；动物栖息地"};

String_and_meaning String_and_meaning_color = {
    .string = "color",
    .meaning = "n. 颜色；肤色；颜料；脸色vt. 粉饰；给...涂颜色；歪曲vi. 变色；获得颜色"};

String_and_meaning String_and_meaning_column = {
    .string = "column",
    .meaning = "n. 纵队，列；专栏；圆柱，柱形物"};

String_and_meaning String_and_meaning_comb = {
    .string = "comb",
    .meaning = "n. 梳子；蜂巢；鸡冠vt. 梳头发；梳毛vi. （浪）涌起"};

String_and_meaning String_and_meaning_combat = {
    .string = "combat",
    .meaning = "n. 战斗；搏斗；争论，反对v. 与……战斗；防止，抑制（尤用于新闻报道）adj. 战斗的；为……斗争的n. (Combat) （法）孔巴（人名）"};

String_and_meaning String_and_meaning_combination = {
    .string = "combination",
    .meaning = "n. 结合；组合；联合；[化学] 化合"};

String_and_meaning String_and_meaning_combine = {
    .string = "combine",
    .meaning = "vt. 使化合；使联合，使结合vi. 联合，结合；化合n. 联合收割机；联合企业"};

String_and_meaning String_and_meaning_come = {
    .string = "come",
    .meaning = "vi. 来；开始；出现；发生；变成；到达vt. 做；假装；将满（…岁）int. 嗨！n. (Come)人名；(英)科姆；(阿尔巴)乔梅"};

String_and_meaning String_and_meaning_comedy = {
    .string = "comedy",
    .meaning = "n. 喜剧；喜剧性；有趣的事情"};

String_and_meaning String_and_meaning_comet = {
    .string = "comet",
    .meaning = "n. [天] 彗星n. (Comet)人名；(法)科梅"};

String_and_meaning String_and_meaning_comfort = {
    .string = "comfort",
    .meaning = "n. 安慰；舒适；安慰者vt. 安慰；使（痛苦等）缓和"};

String_and_meaning String_and_meaning_comfortable = {
    .string = "comfortable",
    .meaning = "adj. 舒适的，舒服的n. 盖被"};

String_and_meaning String_and_meaning_command = {
    .string = "command",
    .meaning = "n.命令,掌握,司令部v.命令,指挥,克制,支配,博得,俯临"};

String_and_meaning String_and_meaning_commander = {
    .string = "commander",
    .meaning = "n. 指挥官，长官；海军中校；英国高级警官"};

String_and_meaning String_and_meaning_commemorate = {
    .string = "commemorate",
    .meaning = "vt. 庆祝，纪念；成为…的纪念"};

String_and_meaning String_and_meaning_commence = {
    .string = "commence",
    .meaning = "v. 开始；着手；英获得学位"};

String_and_meaning String_and_meaning_commend = {
    .string = "commend",
    .meaning = "vt. 推荐；称赞；把…委托vi. 称赞；表扬"};

String_and_meaning String_and_meaning_comment = {
    .string = "comment",
    .meaning = "n.注释,评论,意见vi.注释,评论"};

String_and_meaning String_and_meaning_commentary = {
    .string = "commentary",
    .meaning = "n. 评论；注释；评注；说明"};

String_and_meaning String_and_meaning_commerce = {
    .string = "commerce",
    .meaning = "n. 贸易；商业；商务"};

String_and_meaning String_and_meaning_commercial = {
    .string = "commercial",
    .meaning = "adj. 商业的；营利的；靠广告收入的n. 商业广告"};

String_and_meaning String_and_meaning_commission = {
    .string = "commission",
    .meaning = "n. 委员会；佣金；服务费；犯；委任；委任状vt. 委任；使服役；委托制作"};

String_and_meaning String_and_meaning_commit = {
    .string = "commit",
    .meaning = "vt. 犯罪；把...交托给；指派…作战；使…承担义务；（公开地）表示意见vi. 忠于（某个人、机构等）；承诺"};

String_and_meaning String_and_meaning_commitment = {
    .string = "commitment",
    .meaning = "n. 承诺，保证；委托；承担义务；献身；花费金钱、时间、人力等"};

String_and_meaning String_and_meaning_committee = {
    .string = "committee",
    .meaning = "n. 委员会"};

String_and_meaning String_and_meaning_commodity = {
    .string = "commodity",
    .meaning = "n. 商品，货物；日用品"};

String_and_meaning String_and_meaning_common = {
    .string = "common",
    .meaning = "adj. 共同的；普通的；一般的；通常的n. 普通；平民；公有地n. （Common）（法）科蒙，（英）康芒（人名）"};

String_and_meaning String_and_meaning_commonly = {
    .string = "commonly",
    .meaning = "adv. 一般地；通常地；普通地"};

String_and_meaning String_and_meaning_commonplace = {
    .string = "commonplace",
    .meaning = "n. 司空见惯的事，普通的东西；老生常谈adj. 平凡的，普通的；平庸的，陈腐的"};

String_and_meaning String_and_meaning_commonwealth = {
    .string = "commonwealth",
    .meaning = "n. 联邦；共和国；国民整体"};

String_and_meaning String_and_meaning_communicate = {
    .string = "communicate",
    .meaning = "vi. 通讯，传达；相通；交流；感染vt. 传达；感染；显露"};

String_and_meaning String_and_meaning_communication = {
    .string = "communication",
    .meaning = "n. 通讯，[通信] 通信；交流；信函"};

String_and_meaning String_and_meaning_communism = {
    .string = "communism",
    .meaning = "n. 共产主义"};

String_and_meaning String_and_meaning_communist = {
    .string = "communist",
    .meaning = "n. 共产党员；共产主义者adj. 共产主义的"};

String_and_meaning String_and_meaning_community = {
    .string = "community",
    .meaning = "n. 社区；[生态] 群落；共同体；团体"};

String_and_meaning String_and_meaning_commute = {
    .string = "commute",
    .meaning = "vi. （搭乘车、船等）通勤；代偿vt. 减刑；交换；用……交换；使……变成n. 通勤（口语）"};

String_and_meaning String_and_meaning_compact = {
    .string = "compact",
    .meaning = "adj. 袖珍的；紧凑的；坚实的；矮小而健壮的；简洁的n. 小汽车；带镜小粉盒；契约v. 把……压实；使简洁；使紧密，压缩；订立（协定）"};

String_and_meaning String_and_meaning_companion = {
    .string = "companion",
    .meaning = "n. 同伴；朋友；指南；手册vt. 陪伴n. (Companion)人名；(英)康帕宁"};

String_and_meaning String_and_meaning_company = {
    .string = "company",
    .meaning = "n. 公司；陪伴，同伴；连队vi. 古交往vt. 古陪伴n. （Company）（美、瑞）孔帕尼（人名）"};

String_and_meaning String_and_meaning_comparable = {
    .string = "comparable",
    .meaning = "adj. 类似的，可比较的；同等的，相当的"};

String_and_meaning String_and_meaning_comparative = {
    .string = "comparative",
    .meaning = "adj. 比较的；相当的n. 比较级；对手"};

String_and_meaning String_and_meaning_compare = {
    .string = "compare",
    .meaning = "v. 比较，对比；与……类似，将……比作；相比，匹敌；构成（形容词或副词）的比较级和最高级n. 比较"};

String_and_meaning String_and_meaning_comparison = {
    .string = "comparison",
    .meaning = "n. 比较；对照；比喻；比较关系"};

String_and_meaning String_and_meaning_compartment = {
    .string = "compartment",
    .meaning = "n. [建] 隔间；区划；卧车上的小客房vt. 分隔；划分"};

String_and_meaning String_and_meaning_compass = {
    .string = "compass",
    .meaning = "n. 指南针，罗盘；圆规vt. 包围"};

String_and_meaning String_and_meaning_compatible = {
    .string = "compatible",
    .meaning = "adj. 兼容的；能共处的；可并立的"};

String_and_meaning String_and_meaning_compel = {
    .string = "compel",
    .meaning = "vt. 强迫，迫使；强使发生n. (Compel)人名；(法)孔佩尔"};

String_and_meaning String_and_meaning_compensate = {
    .string = "compensate",
    .meaning = "vi. 补偿，赔偿；抵消vt. 补偿，赔偿；付报酬"};

String_and_meaning String_and_meaning_compete = {
    .string = "compete",
    .meaning = "vi. 竞争；比赛；对抗"};

String_and_meaning String_and_meaning_competence = {
    .string = "competence",
    .meaning = "n. 能力，胜任；权限；作证能力；足以过舒适生活的收入"};

String_and_meaning String_and_meaning_competent = {
    .string = "competent",
    .meaning = "adj. 胜任的；有能力的；能干的；足够的"};

String_and_meaning String_and_meaning_competition = {
    .string = "competition",
    .meaning = "n. 竞争；比赛，竞赛"};

String_and_meaning String_and_meaning_competitive = {
    .string = "competitive",
    .meaning = "adj. 竞争的；比赛的；求胜心切的"};

String_and_meaning String_and_meaning_compile = {
    .string = "compile",
    .meaning = "vt. 编译；编制；编辑；[图情] 汇编"};

String_and_meaning String_and_meaning_complain = {
    .string = "complain",
    .meaning = "vi. 投诉；发牢骚；诉说vt. 抱怨；控诉"};

String_and_meaning String_and_meaning_complaint = {
    .string = "complaint",
    .meaning = "n. 抱怨；诉苦；疾病；委屈"};

String_and_meaning String_and_meaning_complement = {
    .string = "complement",
    .meaning = "n. 补语；余角；补足物vt. 补足，补助"};

String_and_meaning String_and_meaning_complete = {
    .string = "complete",
    .meaning = "adj. 完整的；完全的；彻底的vt. 完成，使完满；完成或结束；填写（表格）"};

String_and_meaning String_and_meaning_completely = {
    .string = "completely",
    .meaning = "adv. 完全地，彻底地；完整地"};

String_and_meaning String_and_meaning_complex = {
    .string = "complex",
    .meaning = "adj. 复杂的；合成的n. 复合体；综合设施"};

String_and_meaning String_and_meaning_complicate = {
    .string = "complicate",
    .meaning = "vt. 使复杂化；使恶化；使卷入"};

String_and_meaning String_and_meaning_complicated = {
    .string = "complicated",
    .meaning = "adj. 难懂的，复杂的"};

String_and_meaning String_and_meaning_complication = {
    .string = "complication",
    .meaning = "n. 并发症；复杂；复杂化；混乱"};

String_and_meaning String_and_meaning_compliment = {
    .string = "compliment",
    .meaning = "n. 恭维；称赞；问候；致意；道贺vt. 恭维；称赞"};

String_and_meaning String_and_meaning_comply = {
    .string = "comply",
    .meaning = "vi. 遵守；顺从，遵从；答应"};

String_and_meaning String_and_meaning_component = {
    .string = "component",
    .meaning = "n. 组成部分；成分；组件，元件adj. 组成的；构成的"};

String_and_meaning String_and_meaning_compose = {
    .string = "compose",
    .meaning = "vt. 构成；写作；使平静；排…的版vi. 组成；作曲；排字"};

String_and_meaning String_and_meaning_composite = {
    .string = "composite",
    .meaning = "adj.合成的,复合的n.合成物"};

String_and_meaning String_and_meaning_composition = {
    .string = "composition",
    .meaning = "n. 作文，作曲，作品；[材] 构成；合成物；成分"};

String_and_meaning String_and_meaning_compound = {
    .string = "compound",
    .meaning = "n. [化学] 化合物；混合物；复合词；有围栏（或围墙）的场地（内有工厂或其他建筑群）adj. 复合的；混合的v. 合成；混合；恶化，加重；和解，妥协"};

String_and_meaning String_and_meaning_comprehension = {
    .string = "comprehension",
    .meaning = "n. 理解；包含"};

String_and_meaning String_and_meaning_comprehensive = {
    .string = "comprehensive",
    .meaning = "adj. 综合的；广泛的；有理解力的n. 综合学校；专业综合测验"};

String_and_meaning String_and_meaning_compress = {
    .string = "compress",
    .meaning = "vi. 受压缩小vt. 压缩，压紧；精简"};

String_and_meaning String_and_meaning_comprise = {
    .string = "comprise",
    .meaning = "vt. 包含；由…组成"};

String_and_meaning String_and_meaning_compromise = {
    .string = "compromise",
    .meaning = "n. 妥协，和解；妥协（或折中）方案；达成妥协v. 妥协，折中；违背（原则），达不到（标准）；（因行为不当）使陷入危险，名誉受损"};

String_and_meaning String_and_meaning_compulsory = {
    .string = "compulsory",
    .meaning = "adj. 义务的；必修的；被强制的n. （花样滑冰、竞技体操等的）规定动作"};

String_and_meaning String_and_meaning_compute = {
    .string = "compute",
    .meaning = "vt. 计算；估算；用计算机计算vi. 计算；估算；推断n. 计算；估计；推断"};

String_and_meaning String_and_meaning_computer = {
    .string = "computer",
    .meaning = "n. 计算机；电脑；电子计算机"};

String_and_meaning String_and_meaning_comrade = {
    .string = "comrade",
    .meaning = "n. 同志；伙伴n. (Comrade)人名；(尼日利)科姆拉德"};

String_and_meaning String_and_meaning_conceal = {
    .string = "conceal",
    .meaning = "vt. 隐藏；隐瞒"};

String_and_meaning String_and_meaning_concede = {
    .string = "concede",
    .meaning = "vt. 承认；退让；给予，容许vi. 让步"};

String_and_meaning String_and_meaning_conceive = {
    .string = "conceive",
    .meaning = "vt. 怀孕；构思；以为；持有vi. 怀孕；设想；考虑"};

String_and_meaning String_and_meaning_concentrate = {
    .string = "concentrate",
    .meaning = "vi. 集中；浓缩；全神贯注；聚集vt. 集中；浓缩n. 浓缩，精选；浓缩液"};

String_and_meaning String_and_meaning_concentration = {
    .string = "concentration",
    .meaning = "n. 浓度；集中；浓缩；专心；集合"};

String_and_meaning String_and_meaning_concept = {
    .string = "concept",
    .meaning = "n. 观念，概念"};

String_and_meaning String_and_meaning_conception = {
    .string = "conception",
    .meaning = "n. 怀孕；概念；设想；开始"};

String_and_meaning String_and_meaning_concern = {
    .string = "concern",
    .meaning = "vt. 影响，牵扯（某人）；关系到，涉及；使担心n. 担心，忧虑；关爱，关心；关心的事，负责的事；关系；公司，企业；（非正式）复杂的物体"};

String_and_meaning String_and_meaning_concerning = {
    .string = "concerning",
    .meaning = "prep. 关于；就…而言v. 涉及；使关心（concern的ing形式）；忧虑"};

String_and_meaning String_and_meaning_concert = {
    .string = "concert",
    .meaning = "n. 音乐会；一致；和谐vt. 使协调；协同安排vi. 协调；协力adj. 音乐会用的；在音乐会上演出的"};

String_and_meaning String_and_meaning_concession = {
    .string = "concession",
    .meaning = "n. 让步；特许（权）；承认；退位"};

String_and_meaning String_and_meaning_concise = {
    .string = "concise",
    .meaning = "adj. 简明的，简洁的"};

String_and_meaning String_and_meaning_conclude = {
    .string = "conclude",
    .meaning = "vt. 推断；决定，作结论；结束vi. 推断；断定；决定"};

String_and_meaning String_and_meaning_conclusion = {
    .string = "conclusion",
    .meaning = "n. 结论；结局；推论"};

String_and_meaning String_and_meaning_concrete = {
    .string = "concrete",
    .meaning = "adj. 混凝土的；实在的，具体的；有形的vi. 凝结vt. 使凝固；用混凝土修筑n. 具体物；凝结物"};

String_and_meaning String_and_meaning_condemn = {
    .string = "condemn",
    .meaning = "vt. 谴责；判刑，定罪；声讨"};

String_and_meaning String_and_meaning_condense = {
    .string = "condense",
    .meaning = "vi. 浓缩；凝结vt. 使浓缩；使压缩"};

String_and_meaning String_and_meaning_condition = {
    .string = "condition",
    .meaning = "n. 条件；情况；环境；身份vt. 决定；使适应；使健康；以…为条件"};

String_and_meaning String_and_meaning_conduct = {
    .string = "conduct",
    .meaning = "v. 组织，实施，进行；指挥（音乐）；带领，引导；举止，表现；传导（热或电）n. 行为举止；管理（方式），实施（办法）；引导"};

String_and_meaning String_and_meaning_conductor = {
    .string = "conductor",
    .meaning = "n. 导体；售票员；领导者；管理人"};

String_and_meaning String_and_meaning_confer = {
    .string = "confer",
    .meaning = "vt. 授予；给予vi. 协商n. (Confer)人名；(英)康弗"};

String_and_meaning String_and_meaning_conference = {
    .string = "conference",
    .meaning = "n. 会议；讨论；协商；联盟；（正式）讨论会；[工会、工党用语]（每年的）大会vi. 举行或参加（系列）会议"};

String_and_meaning String_and_meaning_confess = {
    .string = "confess",
    .meaning = "vt. 承认；坦白；忏悔；供认vi. 承认；坦白；忏悔；供认"};

String_and_meaning String_and_meaning_confidence = {
    .string = "confidence",
    .meaning = "n. 信心；信任；秘密adj. （美）诈骗的；骗得信任的"};

String_and_meaning String_and_meaning_confident = {
    .string = "confident",
    .meaning = "adj. 自信的；确信的"};

String_and_meaning String_and_meaning_confidential = {
    .string = "confidential",
    .meaning = "adj. 机密的；表示信任的；获信任的"};

String_and_meaning String_and_meaning_configuration = {
    .string = "configuration",
    .meaning = "n. 配置；结构；外形"};

String_and_meaning String_and_meaning_confine = {
    .string = "confine",
    .meaning = "vt.限制,禁闭n.界限,边界"};

String_and_meaning String_and_meaning_confirm = {
    .string = "confirm",
    .meaning = "vt. 确认；确定；证实；批准；使巩固"};

String_and_meaning String_and_meaning_conflict = {
    .string = "conflict",
    .meaning = "n. 冲突，矛盾；斗争；争执vi. 冲突，抵触；争执；战斗"};

String_and_meaning String_and_meaning_conform = {
    .string = "conform",
    .meaning = "vi. 符合；遵照；适应环境vt. 使遵守；使一致；使顺从adj. 一致的；顺从的"};

String_and_meaning String_and_meaning_confront = {
    .string = "confront",
    .meaning = "vt. 面对；遭遇；比较"};

String_and_meaning String_and_meaning_confuse = {
    .string = "confuse",
    .meaning = "vt. 使混乱；使困惑"};

String_and_meaning String_and_meaning_confusion = {
    .string = "confusion",
    .meaning = "n. 混淆，混乱；困惑"};

String_and_meaning String_and_meaning_congratulate = {
    .string = "congratulate",
    .meaning = "vt. 祝贺；恭喜；庆贺"};

String_and_meaning String_and_meaning_congratulation = {
    .string = "congratulation",
    .meaning = "n. 祝贺；贺辞"};

String_and_meaning String_and_meaning_congress = {
    .string = "congress",
    .meaning = "n. 国会；代表大会；会议；社交"};

String_and_meaning String_and_meaning_conjunction = {
    .string = "conjunction",
    .meaning = "n. 结合；[语] 连接词；同时发生"};

String_and_meaning String_and_meaning_connect = {
    .string = "connect",
    .meaning = "vt. 连接；联合；关连；链接vi. 连接，连结；联合"};

String_and_meaning String_and_meaning_connection = {
    .string = "connection",
    .meaning = "n. 连接；关系；人脉；连接件"};

String_and_meaning String_and_meaning_conquer = {
    .string = "conquer",
    .meaning = "vt. 战胜，征服；攻克，攻取vi. 胜利；得胜"};

String_and_meaning String_and_meaning_conquest = {
    .string = "conquest",
    .meaning = "n. 征服，战胜；战利品n. (Conquest)人名；(英)康奎斯特"};

String_and_meaning String_and_meaning_conscience = {
    .string = "conscience",
    .meaning = "n. 道德心，良心n. (Conscience)人名；(法)孔西延斯"};

String_and_meaning String_and_meaning_conscientious = {
    .string = "conscientious",
    .meaning = "adj. 认真的；尽责的；本着良心的；小心谨慎的"};

String_and_meaning String_and_meaning_conscious = {
    .string = "conscious",
    .meaning = "adj. 意识到的；故意的；神志清醒的"};

String_and_meaning String_and_meaning_consciousness = {
    .string = "consciousness",
    .meaning = "n. 意识；知觉；觉悟；感觉"};

String_and_meaning String_and_meaning_consecutive = {
    .string = "consecutive",
    .meaning = "adj. 连贯的；连续不断的"};

String_and_meaning String_and_meaning_consensus = {
    .string = "consensus",
    .meaning = "n. 一致；舆论；合意"};

String_and_meaning String_and_meaning_consent = {
    .string = "consent",
    .meaning = "vi.同意,赞成,答应n.同意,赞成,允诺"};

String_and_meaning String_and_meaning_consequence = {
    .string = "consequence",
    .meaning = "n. 结果；重要性；推论"};

String_and_meaning String_and_meaning_consequent = {
    .string = "consequent",
    .meaning = "adj. 随之发生的，作为结果的；（河流、山谷）顺向的；合乎逻辑的n. （逻辑）后件，推断；（音乐）答句；分母"};

String_and_meaning String_and_meaning_consequently = {
    .string = "consequently",
    .meaning = "adv. 因此；结果；所以"};

String_and_meaning String_and_meaning_conservation = {
    .string = "conservation",
    .meaning = "n. 保存，保持；保护"};

String_and_meaning String_and_meaning_conservative = {
    .string = "conservative",
    .meaning = "adj. 保守的n. 保守派，守旧者"};

String_and_meaning String_and_meaning_conserve = {
    .string = "conserve",
    .meaning = "vt. 保存；将…做成蜜饯；使守恒n. 果酱；蜜饯"};

String_and_meaning String_and_meaning_consider = {
    .string = "consider",
    .meaning = "vt. 考虑；认为；考虑到；细想vi. 考虑；认为；细想"};

String_and_meaning String_and_meaning_considerable = {
    .string = "considerable",
    .meaning = "adj. 相当大的；重要的，值得考虑的"};

String_and_meaning String_and_meaning_considerate = {
    .string = "considerate",
    .meaning = "adj. 体贴的；体谅的；考虑周到的"};

String_and_meaning String_and_meaning_consideration = {
    .string = "consideration",
    .meaning = "n. 考虑；原因；关心；报酬"};

String_and_meaning String_and_meaning_consist = {
    .string = "consist",
    .meaning = "vi. 由…组成；在于；符合"};

String_and_meaning String_and_meaning_consistent = {
    .string = "consistent",
    .meaning = "adj. 始终如一的，一致的；坚持的"};

String_and_meaning String_and_meaning_consolidate = {
    .string = "consolidate",
    .meaning = "vt. 巩固，使固定；联合vi. 巩固，加强"};

String_and_meaning String_and_meaning_conspicuous = {
    .string = "conspicuous",
    .meaning = "adj. 显著的；显而易见的"};

String_and_meaning String_and_meaning_constant = {
    .string = "constant",
    .meaning = "adj. 不变的；恒定的；经常的n. [数] 常数；恒量n. (Constant)人名；(德)康斯坦特"};

String_and_meaning String_and_meaning_constituent = {
    .string = "constituent",
    .meaning = "n. 成分；选民；委托人adj. 构成的；选举的；有任命（或选举）权的；立宪的；有宪法制定（或修改）权的"};

String_and_meaning String_and_meaning_constitution = {
    .string = "constitution",
    .meaning = "n. 宪法；章程；构造；组成；体格"};

String_and_meaning String_and_meaning_constrain = {
    .string = "constrain",
    .meaning = "vt. 驱使；强迫；束缚"};

String_and_meaning String_and_meaning_construct = {
    .string = "construct",
    .meaning = "vt.建造,构造,创立"};

String_and_meaning String_and_meaning_construction = {
    .string = "construction",
    .meaning = "n. 建设；建筑物；解释；造句"};

String_and_meaning String_and_meaning_consult = {
    .string = "consult",
    .meaning = "vt. 查阅；商量；向…请教vi. 请教；商议；当顾问"};

String_and_meaning String_and_meaning_consultant = {
    .string = "consultant",
    .meaning = "n. 顾问；咨询者；会诊医生"};

String_and_meaning String_and_meaning_consume = {
    .string = "consume",
    .meaning = "vt. 消耗，消费；使…着迷；挥霍vi. 耗尽，毁灭；耗尽生命"};

String_and_meaning String_and_meaning_consumer = {
    .string = "consumer",
    .meaning = "n. 消费者；用户，顾客"};

String_and_meaning String_and_meaning_consumption = {
    .string = "consumption",
    .meaning = "n. 消费；消耗；肺痨"};

String_and_meaning String_and_meaning_contact = {
    .string = "contact",
    .meaning = "n. 接触，联系vt. 使接触，联系vi. 使接触，联系"};

String_and_meaning String_and_meaning_contain = {
    .string = "contain",
    .meaning = "vt. 包含；控制；容纳；牵制（敌军）vi. 含有；自制"};

String_and_meaning String_and_meaning_container = {
    .string = "container",
    .meaning = "n. 集装箱；容器"};

String_and_meaning String_and_meaning_contaminate = {
    .string = "contaminate",
    .meaning = "vt. 污染，弄脏"};

String_and_meaning String_and_meaning_contemplate = {
    .string = "contemplate",
    .meaning = "vt. 沉思；注视；思忖；预期vi. 冥思苦想；深思熟虑"};

String_and_meaning String_and_meaning_contemporary = {
    .string = "contemporary",
    .meaning = "adj. 发生（属）于同时期的；当代的n. 同代人，同龄人；同时期的东西"};

String_and_meaning String_and_meaning_contempt = {
    .string = "contempt",
    .meaning = "n. 轻视，蔑视；耻辱"};

String_and_meaning String_and_meaning_contend = {
    .string = "contend",
    .meaning = "vi. 竞争；奋斗；斗争；争论vt. 主张；为...斗争"};

String_and_meaning String_and_meaning_content = {
    .string = "content",
    .meaning = "n. 内容，目录；满足；容量adj. 满意的vt. 使满意n. （Content）（法）孔唐（人名）"};

String_and_meaning String_and_meaning_contest = {
    .string = "contest",
    .meaning = "n.论争,竞赛v.,争论,争辩,竞赛,争夺"};

String_and_meaning String_and_meaning_context = {
    .string = "context",
    .meaning = "n. 环境；上下文；来龙去脉"};

String_and_meaning String_and_meaning_continent = {
    .string = "continent",
    .meaning = "n. 大陆，洲，陆地adj. 自制的，克制的"};

String_and_meaning String_and_meaning_continual = {
    .string = "continual",
    .meaning = "adj. 持续不断的；频繁的"};

String_and_meaning String_and_meaning_continue = {
    .string = "continue",
    .meaning = "vi. 继续，延续；仍旧，连续vt. 继续说…；使…继续；使…延长"};

String_and_meaning String_and_meaning_continuous = {
    .string = "continuous",
    .meaning = "adj. 连续的，持续的；继续的；连绵不断的"};

String_and_meaning String_and_meaning_contract = {
    .string = "contract",
    .meaning = "n. 合同，契约；婚约；（非正式）暗杀协议；（桥牌）定约v. 收缩，缩短；感染；订约；订（婚）；负（债）；结交"};

String_and_meaning String_and_meaning_contradict = {
    .string = "contradict",
    .meaning = "vt. 反驳；否定；与…矛盾；与…抵触vi. 反驳；否认；发生矛盾"};

String_and_meaning String_and_meaning_contradiction = {
    .string = "contradiction",
    .meaning = "n. 矛盾；否认；反驳"};

String_and_meaning String_and_meaning_contrary = {
    .string = "contrary",
    .meaning = "adj. 相反的；对立的adv. 相反地n. 相反；反面"};

String_and_meaning String_and_meaning_contrast = {
    .string = "contrast",
    .meaning = "vt.使与...对比,使与...对照vi.和...形成对照n.对比,对照,(对照中的)差异"};

String_and_meaning String_and_meaning_contribute = {
    .string = "contribute",
    .meaning = "vt. 贡献，出力；投稿；捐献vi. 有助于，促成，是……的原因之一；发表意见，提议"};

String_and_meaning String_and_meaning_contribution = {
    .string = "contribution",
    .meaning = "n. 贡献；捐献；投稿"};

String_and_meaning String_and_meaning_contrive = {
    .string = "contrive",
    .meaning = "vt. 设计；发明；图谋vi. 谋划；设法做到"};

String_and_meaning String_and_meaning_control = {
    .string = "control",
    .meaning = "n. 控制；管理；抑制；操纵装置vt. 控制；管理；抑制"};

String_and_meaning String_and_meaning_controversial = {
    .string = "controversial",
    .meaning = "adj. 有争议的；有争论的"};

String_and_meaning String_and_meaning_controversy = {
    .string = "controversy",
    .meaning = "n. 争论；论战；辩论"};

String_and_meaning String_and_meaning_convenience = {
    .string = "convenience",
    .meaning = "n. 便利；厕所；便利的事物"};

String_and_meaning String_and_meaning_convenient = {
    .string = "convenient",
    .meaning = "adj. 方便的；近便的；实用的；&lt;废语&gt;适当的"};

String_and_meaning String_and_meaning_convention = {
    .string = "convention",
    .meaning = "n. 大会；[法] 惯例；[计] 约定；[法] 协定；习俗"};

String_and_meaning String_and_meaning_conventional = {
    .string = "conventional",
    .meaning = "adj. 符合习俗的，传统的；常见的；惯例的"};

String_and_meaning String_and_meaning_converge = {
    .string = "converge",
    .meaning = "vt. 使汇聚vi. 聚集；靠拢；收敛"};

String_and_meaning String_and_meaning_conversation = {
    .string = "conversation",
    .meaning = "n. 交谈，会话；社交；交往，交际；会谈；（人与计算机的）人机对话"};

String_and_meaning String_and_meaning_conversely = {
    .string = "conversely",
    .meaning = "adv. 相反地"};

String_and_meaning String_and_meaning_conversion = {
    .string = "conversion",
    .meaning = "n. 转换；变换；[金融] 兑换；改变信仰"};

String_and_meaning String_and_meaning_convert = {
    .string = "convert",
    .meaning = "vt. 使转变；转换…；使…改变信仰vi. 转变，变换；皈依；改变信仰n. 皈依者；改变宗教信仰者n. (Convert)人名；(法)孔韦尔"};

String_and_meaning String_and_meaning_convey = {
    .string = "convey",
    .meaning = "vt. 传达；运输；让与"};

String_and_meaning String_and_meaning_convict = {
    .string = "convict",
    .meaning = "vt. 证明…有罪；宣告…有罪n. 罪犯"};

String_and_meaning String_and_meaning_conviction = {
    .string = "conviction",
    .meaning = "n. 定罪；确信；证明有罪；确信，坚定的信仰"};

String_and_meaning String_and_meaning_convince = {
    .string = "convince",
    .meaning = "vt. 说服；使确信，使信服"};

String_and_meaning String_and_meaning_cook = {
    .string = "cook",
    .meaning = "v. 做饭，烹调；（食物）被烧煮；（非正式）篡改，伪造；密谋；干得起劲n. 厨师n. (Cook) （美）库克（人名）"};

String_and_meaning String_and_meaning_cool = {
    .string = "cool",
    .meaning = "adj. 凉爽的；冷静的；出色的vt. 使…冷却；使…平静下来vi. 变凉；平息n. 凉爽；凉爽的空气adv. 冷静地n. (Cool)人名；(法)科尔；(英)库尔"};

String_and_meaning String_and_meaning_cooperate = {
    .string = "cooperate",
    .meaning = "vi. 合作，配合；协力"};

String_and_meaning String_and_meaning_cooperative = {
    .string = "cooperative",
    .meaning = "adj. 合作的；合作社的n. 合作社"};

String_and_meaning String_and_meaning_coordinate = {
    .string = "coordinate",
    .meaning = "v. 调节，配合；使动作协调；（衣服、家具等）搭配；与……形成共价键adj. 同等的，并列的；配位的；坐标的n. 坐标；配套服装；同等的人或物"};

String_and_meaning String_and_meaning_cope = {
    .string = "cope",
    .meaning = "vi. 处理；对付；竞争n. 长袍n. (Cope)人名；(英)科普；(西)科佩"};

String_and_meaning String_and_meaning_copper = {
    .string = "copper",
    .meaning = "n. 铜；铜币；警察adj. 铜制的vt. 镀铜n. (Copper)人名；(英)科珀"};

String_and_meaning String_and_meaning_copy = {
    .string = "copy",
    .meaning = "n. 副本；一册；稿件；作业本；（报纸、杂志的）题材；广告文字vt. 复制；抄写；抄送；抄袭；效仿；收到，听见vi. 复制；抄写"};

String_and_meaning String_and_meaning_cord = {
    .string = "cord",
    .meaning = "n. 绳索；束缚vt. 用绳子捆绑n. (Cord)人名；(法)科尔；(英)科德"};

String_and_meaning String_and_meaning_cordial = {
    .string = "cordial",
    .meaning = "adj. 热情友好的；由衷的；兴奋的n. 甜果汁饮料；镇定药；兴奋剂；甜香酒"};

String_and_meaning String_and_meaning_core = {
    .string = "core",
    .meaning = "n. 核心；要点；果心；[计] 磁心vt. 挖...的核n. (Core)人名；(英)科尔；(西、意)科雷"};

String_and_meaning String_and_meaning_corn = {
    .string = "corn",
    .meaning = "n. （美）玉米；（英）谷物；[皮肤] 鸡眼vt. 腌；使成颗粒n. (Corn)人名；(英、法、瑞典)科恩"};

String_and_meaning String_and_meaning_corner = {
    .string = "corner",
    .meaning = "n. 角落，拐角处；地区，偏僻处；困境，窘境vi. 囤积；相交成角vt. 垄断；迫至一隅；使陷入绝境；把…难住n. (Corner)人名；(法)科尔内；(英)科纳"};

String_and_meaning String_and_meaning_corporate = {
    .string = "corporate",
    .meaning = "adj. 法人的；共同的，全体的；社团的；公司的；企业的"};

String_and_meaning String_and_meaning_corporation = {
    .string = "corporation",
    .meaning = "n. 公司；法人（团体）；社团；市政当局"};

String_and_meaning String_and_meaning_corps = {
    .string = "corps",
    .meaning = "n. 军团；兵种；兵队；（德国大学的）学生联合会n. （Corps）（西、德）科尔普斯（人名）"};

String_and_meaning String_and_meaning_correct = {
    .string = "correct",
    .meaning = "adj. （政治或思想）正确的；恰当的；端正的v. 改正；批改（学生作业）；校正；指出错误；抵消；校准（仪器）；修正、调整（数据）"};

String_and_meaning String_and_meaning_correction = {
    .string = "correction",
    .meaning = "n. 改正，修正"};

String_and_meaning String_and_meaning_correlate = {
    .string = "correlate",
    .meaning = "vi. 关联vt. 使有相互关系；互相有关系n. 相关物；相关联的人"};

String_and_meaning String_and_meaning_correspond = {
    .string = "correspond",
    .meaning = "vi. 符合，一致；相应；通信"};

String_and_meaning String_and_meaning_correspondence = {
    .string = "correspondence",
    .meaning = "n. 通信；一致；相当"};

String_and_meaning String_and_meaning_correspondent = {
    .string = "correspondent",
    .meaning = "n. 通讯记者；客户；通信者；代理商行"};

String_and_meaning String_and_meaning_corresponding = {
    .string = "corresponding",
    .meaning = "adj. 相当的，相应的；一致的；通信的v. 类似（correspond的ing形式）；相配"};

String_and_meaning String_and_meaning_corridor = {
    .string = "corridor",
    .meaning = "n. 走廊"};

String_and_meaning String_and_meaning_corrode = {
    .string = "corrode",
    .meaning = "vt. 侵蚀；损害vi. 受腐蚀；起腐蚀作用"};

String_and_meaning String_and_meaning_corrupt = {
    .string = "corrupt",
    .meaning = "adj. 腐败的，贪污的；堕落的vt. 使腐烂；使堕落，使恶化vi. 堕落，腐化；腐烂"};

String_and_meaning String_and_meaning_cosmic = {
    .string = "cosmic",
    .meaning = "adj. 宇宙的（等于cosmical）"};

String_and_meaning String_and_meaning_cost = {
    .string = "cost",
    .meaning = "n.成本,价钱,代价vt.价值为,(使)花费(金钱,时间,劳力等),使失去(生命,健康等),令人付出vi.花费"};

String_and_meaning String_and_meaning_costly = {
    .string = "costly",
    .meaning = "adj. 昂贵的；代价高的n. (Costly)人名；(英)科斯特利"};

String_and_meaning String_and_meaning_costume = {
    .string = "costume",
    .meaning = "n. 服装，装束；戏装，剧装vt. 给…穿上服装"};

String_and_meaning String_and_meaning_cottage = {
    .string = "cottage",
    .meaning = "n. 小屋；村舍；（农舍式的）小别墅"};

String_and_meaning String_and_meaning_cotton = {
    .string = "cotton",
    .meaning = "n. 棉花；棉布；棉线vi. 一致；理解；和谐；亲近adj. 棉的；棉制的n. (Cotton)人名；(英、西、葡)科顿；(法)戈登"};

String_and_meaning String_and_meaning_couch = {
    .string = "couch",
    .meaning = "n. 睡椅，长沙发；床；卧榻vi. 蹲伏，埋伏；躺着vt. 使躺下；表达；弯下n. (Couch)人名；(英)库奇"};

String_and_meaning String_and_meaning_cough = {
    .string = "cough",
    .meaning = "v. 咳嗽；咳出；突然发出刺耳的声音；厉声说出；供认n. 咳嗽，咳嗽声；咳嗽病n. (Cough) （美、英）考夫（人名）"};

String_and_meaning String_and_meaning_could = {
    .string = "could",
    .meaning = "aux. 能够， 可以；可能；差点就，本来有可能；很想v. 能（can 的过去式）"};

String_and_meaning String_and_meaning_council = {
    .string = "council",
    .meaning = "n. 委员会；会议；理事会；地方议会；顾问班子n. (Council)人名；(英)康斯尔"};

String_and_meaning String_and_meaning_counsel = {
    .string = "counsel",
    .meaning = "n. 法律顾问；忠告；商议；讨论；决策vt. 建议；劝告vi. 商讨；提出忠告"};

String_and_meaning String_and_meaning_count = {
    .string = "count",
    .meaning = "v.数,计算,计算在内,认为,有价值n.计数,计算,注意,伯爵"};

String_and_meaning String_and_meaning_counter = {
    .string = "counter",
    .meaning = "n.计算器,计数器,计算者,柜台,筹码adv.prep.相反地"};

String_and_meaning String_and_meaning_counterpart = {
    .string = "counterpart",
    .meaning = "n. 副本；配对物；极相似的人或物"};

String_and_meaning String_and_meaning_country = {
    .string = "country",
    .meaning = "n. 国家，国土；国民；乡下，农村；乡村；故乡adj. 祖国的，故乡的；地方的，乡村的；国家的；粗鲁的；乡村音乐的"};

String_and_meaning String_and_meaning_countryside = {
    .string = "countryside",
    .meaning = "n. 农村，乡下；乡下的全体居民"};

String_and_meaning String_and_meaning_county = {
    .string = "county",
    .meaning = "n. 郡，县"};

String_and_meaning String_and_meaning_couple = {
    .string = "couple",
    .meaning = "n. 对；夫妇；数个vi. 结合；成婚vt. 结合；连接；连合n. (Couple)人名；(法)库普勒"};

String_and_meaning String_and_meaning_courage = {
    .string = "courage",
    .meaning = "n. 勇气；胆量n. (Courage)人名；(英)卡里奇；(法)库拉热"};

String_and_meaning String_and_meaning_course = {
    .string = "course",
    .meaning = "n. 科目；课程；过程；进程；道路；路线，航向；一道菜vt. 追赶；跑过vi. 指引航线；快跑"};

String_and_meaning String_and_meaning_court = {
    .string = "court",
    .meaning = "n. 法院；球场；朝廷；奉承vt. 招致（失败、危险等）；向…献殷勤；设法获得vi. 求爱n. (Court)人名；(英)考特；(法)库尔"};

String_and_meaning String_and_meaning_courtesy = {
    .string = "courtesy",
    .meaning = "n. 礼貌；好意；恩惠adj. 殷勤的；被承认的；出于礼节的"};

String_and_meaning String_and_meaning_cousin = {
    .string = "cousin",
    .meaning = "n. 堂兄弟姊妹；表兄弟姊妹"};

String_and_meaning String_and_meaning_cover = {
    .string = "cover",
    .meaning = "n.盖子,封面,藉口vt.覆盖,铺,掩饰,保护,掩护,包括,包含,适用vi.覆盖,涂,代替"};

String_and_meaning String_and_meaning_cow = {
    .string = "cow",
    .meaning = "n. 奶牛，母牛；母兽vt. 威胁，恐吓"};

String_and_meaning String_and_meaning_coward = {
    .string = "coward",
    .meaning = "n. 懦夫，懦弱的人adj. 胆小的，懦怯的n. (Coward)人名；(英)科沃德"};

String_and_meaning String_and_meaning_crack = {
    .string = "crack",
    .meaning = "n.裂缝,噼啪声v.(使)破裂,裂纹,(使)爆裂adj.最好的,高明的"};

String_and_meaning String_and_meaning_cradle = {
    .string = "cradle",
    .meaning = "n. 摇篮；发源地；发祥地；支船架vt. 抚育；把...搁在支架上；把...放在摇篮内"};

String_and_meaning String_and_meaning_craft = {
    .string = "craft",
    .meaning = "n. 工艺；手艺；太空船vt. 精巧地制作n. (Craft)人名；(英、德、罗)克拉夫特"};

String_and_meaning String_and_meaning_crane = {
    .string = "crane",
    .meaning = "n. 吊车，起重机；鹤vi. 伸着脖子看；迟疑，踌躇vt. 用起重机起吊；伸长脖子n. (Crane)人名；(意、葡)克拉内；(英、法、西)克兰"};

String_and_meaning String_and_meaning_crash = {
    .string = "crash",
    .meaning = "n.碰撞,坠落,坠毁,撞击声,爆裂声v.碰撞,坠落,坠毁,(指商业公司,政府等)破产,垮台"};

String_and_meaning String_and_meaning_crawl = {
    .string = "crawl",
    .meaning = "vi. 爬行；匍匐行进vt. 爬行；缓慢地行进n. 爬行；养鱼池；匍匐而行"};

String_and_meaning String_and_meaning_crazy = {
    .string = "crazy",
    .meaning = "adj. 疯狂的；狂热的，着迷的"};

String_and_meaning String_and_meaning_cream = {
    .string = "cream",
    .meaning = "n. 奶油，乳脂；精华；面霜；乳酪"};

String_and_meaning String_and_meaning_create = {
    .string = "create",
    .meaning = "vt. 创造，创作；造成"};

String_and_meaning String_and_meaning_creation = {
    .string = "creation",
    .meaning = "n. 创造，创作；创作物，产物"};

String_and_meaning String_and_meaning_creative = {
    .string = "creative",
    .meaning = "adj. 创造性的"};

String_and_meaning String_and_meaning_creature = {
    .string = "creature",
    .meaning = "n. 动物，生物；人；创造物"};

String_and_meaning String_and_meaning_credit = {
    .string = "credit",
    .meaning = "n. 信用，信誉；[金融] 贷款；学分；信任；声望vt. 相信，信任；把…归给，归功于；赞颂"};

String_and_meaning String_and_meaning_creep = {
    .string = "creep",
    .meaning = "vi. 爬行；蔓延；慢慢地移动；起鸡皮疙瘩n. 爬行；毛骨悚然的感觉；谄媚者；非玩家控制的小兵（游戏术语）"};

String_and_meaning String_and_meaning_crew = {
    .string = "crew",
    .meaning = "n. 队，组；全体人员，全体船员vi. 一起工作vt. 使当船员n. (Crew)人名；(英、西)克鲁"};

String_and_meaning String_and_meaning_cricket = {
    .string = "cricket",
    .meaning = "n. 板球，板球运动；蟋蟀"};

String_and_meaning String_and_meaning_crime = {
    .string = "crime",
    .meaning = "n. 罪行，犯罪；罪恶；犯罪活动vt. 控告……违反纪律"};

String_and_meaning String_and_meaning_criminal = {
    .string = "criminal",
    .meaning = "adj. 犯罪的；刑事的；罪过的，错误的；不道德的；令人震惊的n. 罪犯"};

String_and_meaning String_and_meaning_cripple = {
    .string = "cripple",
    .meaning = "v. （使）跛；（使）残废；削弱；严重毁坏（机器）；给……造成严重问题n. 古，冒犯跛子，残废人"};

String_and_meaning String_and_meaning_crisis = {
    .string = "crisis",
    .meaning = "n. 危机；危险期；决定性时刻adj. 危机的；用于处理危机的"};

String_and_meaning String_and_meaning_crisp = {
    .string = "crisp",
    .meaning = "adj. 脆的；新鲜的；易碎的vt. 使卷曲；使发脆vi. 卷曲；发脆n. 松脆物；油炸马铃薯片n. (Crisp)人名；(英)克里斯普"};

String_and_meaning String_and_meaning_criterion = {
    .string = "criterion",
    .meaning = "n. （批评判断的）标准；准则；规范；准据"};

String_and_meaning String_and_meaning_critic = {
    .string = "critic",
    .meaning = "n. 批评家，评论家；爱挑剔的人"};

String_and_meaning String_and_meaning_critical = {
    .string = "critical",
    .meaning = "adj. 鉴定的；[核] 临界的；批评的，爱挑剔的；危险的；决定性的；评论的"};

String_and_meaning String_and_meaning_criticism = {
    .string = "criticism",
    .meaning = "n. 批评；考证；苛求"};

String_and_meaning String_and_meaning_criticize = {
    .string = "criticize",
    .meaning = "vt. 批评；评论；非难vi. 批评；评论；苛求"};

String_and_meaning String_and_meaning_crop = {
    .string = "crop",
    .meaning = "n. 产量；农作物；庄稼；平头vt. 种植；收割；修剪；剪短vi. 收获"};

String_and_meaning String_and_meaning_cross = {
    .string = "cross",
    .meaning = "n. 交叉，十字；十字架，十字形物vi. 交叉；杂交；横过vt. 杂交；渡过；使相交adj. 交叉的，相反的；乖戾的；生气的"};

String_and_meaning String_and_meaning_crow = {
    .string = "crow",
    .meaning = "n. 乌鸦；鸣叫；（非正式）丑妇；撬棍v. 打鸣；自鸣得意；欢呼"};

String_and_meaning String_and_meaning_crowd = {
    .string = "crowd",
    .meaning = "n. 人群；观众；（非正式）一伙人；众多v. （一批人）（使）挤满；逼近（某人）；聚集；（想法或观点）塞满脑子；催促（因而使人生气或不快）"};

String_and_meaning String_and_meaning_crown = {
    .string = "crown",
    .meaning = "n. 王冠；花冠；王权；顶点vt. 加冕；居…之顶；表彰；使圆满完成n. (Crown)人名；(英)克朗"};

String_and_meaning String_and_meaning_crucial = {
    .string = "crucial",
    .meaning = "adj. 重要的；决定性的；定局的；决断的"};

String_and_meaning String_and_meaning_crude = {
    .string = "crude",
    .meaning = "adj. 粗糙的；天然的，未加工的；粗鲁的n. 原油；天然的物质"};

String_and_meaning String_and_meaning_cruel = {
    .string = "cruel",
    .meaning = "adj. 残酷的，残忍的；使人痛苦的，让人受难的；无情的，严酷的"};

String_and_meaning String_and_meaning_cruise = {
    .string = "cruise",
    .meaning = "vi.巡游,巡航n.巡游,巡航"};

String_and_meaning String_and_meaning_crush = {
    .string = "crush",
    .meaning = "vt.压碎,碾碎,压服,压垮,粉碎,(使)变形"};

String_and_meaning String_and_meaning_crust = {
    .string = "crust",
    .meaning = "n. 地壳；外壳；面包皮；坚硬外皮vi. 结硬皮；结成外壳vt. 盖以硬皮；在…上结硬皮"};

String_and_meaning String_and_meaning_cry = {
    .string = "cry",
    .meaning = "vi.哭,流泪v.叫,喊n.哭泣,哭声,叫喊,喊声"};

String_and_meaning String_and_meaning_crystal = {
    .string = "crystal",
    .meaning = "n. 结晶，晶体；水晶；水晶饰品adj. 水晶的；透明的，清澈的n. (Crystal)人名；(英)克里斯特尔，克丽丝特尔 (女名)"};

String_and_meaning String_and_meaning_cube = {
    .string = "cube",
    .meaning = "n. 立方；立方体；骰子vt. 使成立方形；使自乘二次；量…的体积n. (Cube)人名；(瑞典、德)库贝"};

String_and_meaning String_and_meaning_cubic = {
    .string = "cubic",
    .meaning = "adj. 立方体的，立方的n. (Cubic)人名；(罗)库比克"};

String_and_meaning String_and_meaning_cucumber = {
    .string = "cucumber",
    .meaning = "n. 黄瓜；胡瓜"};

String_and_meaning String_and_meaning_cue = {
    .string = "cue",
    .meaning = "n. 提示，暗示；线索vt. 给…暗示n. (Cue)人名；(西)库埃"};

String_and_meaning String_and_meaning_culminate = {
    .string = "culminate",
    .meaning = "vi. 到绝顶；达到高潮；达到顶点vt. 使结束；使达到高潮"};

String_and_meaning String_and_meaning_cultivate = {
    .string = "cultivate",
    .meaning = "vt. 培养；陶冶；耕作"};

String_and_meaning String_and_meaning_culture = {
    .string = "culture",
    .meaning = "n. 文化，文明；修养；栽培vt. [细胞][微] 培养（等于cultivate）"};

String_and_meaning String_and_meaning_cumulative = {
    .string = "cumulative",
    .meaning = "adj. 累积的"};

String_and_meaning String_and_meaning_cunning = {
    .string = "cunning",
    .meaning = "adj. 狡猾的；巧妙的；可爱的n. 狡猾"};

String_and_meaning String_and_meaning_cup = {
    .string = "cup",
    .meaning = "n. 杯子；奖杯；酒杯vt. 使成杯状；为…拔火罐"};

String_and_meaning String_and_meaning_cupboard = {
    .string = "cupboard",
    .meaning = "n. 碗柜；食橱"};

String_and_meaning String_and_meaning_curb = {
    .string = "curb",
    .meaning = "n. 抑制；路边；勒马绳vt. 控制；勒住"};

String_and_meaning String_and_meaning_cure = {
    .string = "cure",
    .meaning = "v.治愈,治疗n.治愈,痊愈"};

String_and_meaning String_and_meaning_curiosity = {
    .string = "curiosity",
    .meaning = "n. 好奇，好奇心；珍品，古董，古玩"};

String_and_meaning String_and_meaning_curious = {
    .string = "curious",
    .meaning = "adj. 好奇的，有求知欲的；古怪的；爱挑剔的"};

String_and_meaning String_and_meaning_curl = {
    .string = "curl",
    .meaning = "vt. 使…卷曲；使卷起来vi. 卷曲；盘绕n. 卷曲；卷发；螺旋状物n. (Curl)人名；(英)柯尔"};

String_and_meaning String_and_meaning_currency = {
    .string = "currency",
    .meaning = "n. 货币；通货"};

String_and_meaning String_and_meaning_current = {
    .string = "current",
    .meaning = "adj. 现在的；流通的，通用的；最近的；草写的n. （水，气，电）流；趋势；涌流n. （Current）（英）柯伦特（人名）"};

String_and_meaning String_and_meaning_curriculum = {
    .string = "curriculum",
    .meaning = "n. 课程；总课程"};

String_and_meaning String_and_meaning_curse = {
    .string = "curse",
    .meaning = "n. 诅咒；咒骂vt. 诅咒；咒骂vi. 诅咒；咒骂"};

String_and_meaning String_and_meaning_curt = {
    .string = "curt",
    .meaning = "adj. 简短而失礼的，唐突无礼的；简略的，简要的；草率的n. (Curt) （美）库尔特（人名）"};

String_and_meaning String_and_meaning_curtain = {
    .string = "curtain",
    .meaning = "n. 幕；窗帘vt. 遮蔽；装上门帘"};

String_and_meaning String_and_meaning_curve = {
    .string = "curve",
    .meaning = "n. 曲线；弯曲；曲线球；曲线图表vt. 弯；使弯曲vi. 成曲形adj. 弯曲的；曲线形的"};

String_and_meaning String_and_meaning_cushion = {
    .string = "cushion",
    .meaning = "n. 垫子；起缓解作用之物；（猪等的）臀肉；银行储蓄vt. 给…安上垫子；把…安置在垫子上；缓和…的冲击"};

String_and_meaning String_and_meaning_custom = {
    .string = "custom",
    .meaning = "n. 习惯，惯例；风俗；经常光顾；[总称]（经常性的）顾客adj. （衣服等）定做的，定制的"};

String_and_meaning String_and_meaning_customary = {
    .string = "customary",
    .meaning = "adj. 习惯的；通常的n. 习惯法汇编"};

String_and_meaning String_and_meaning_customer = {
    .string = "customer",
    .meaning = "n. 顾客；家伙"};

String_and_meaning String_and_meaning_cut = {
    .string = "cut",
    .meaning = "v.切(割、削),(直线等)相交,剪,截,刺穿,刺痛,删节,开辟n.(刀、剑、鞭等的)切削,削减,删节,伤口,切口"};

String_and_meaning String_and_meaning_cycle = {
    .string = "cycle",
    .meaning = "n. 循环；周期；自行车；整套；一段时间vt. 使循环；使轮转vi. 循环；骑自行车；轮转"};

String_and_meaning String_and_meaning_cylinder = {
    .string = "cylinder",
    .meaning = "n. 圆筒；汽缸；[数] 柱面；圆柱状物"};

String_and_meaning String_and_meaning_cynical = {
    .string = "cynical",
    .meaning = "adj. 愤世嫉俗的；冷嘲的"};

String_and_meaning String_and_meaning_daily = {
    .string = "daily",
    .meaning = "adj. 日常的；每日的n. 日报；朝来夜去的女佣adv. 日常地；每日；天天n. (Daily)人名；(英)戴利"};

String_and_meaning String_and_meaning_dairy = {
    .string = "dairy",
    .meaning = "n. 奶制品；乳牛；制酪场；乳品店；牛奶及乳品业adj. 乳品的；牛奶的；牛奶制的；产乳的"};

String_and_meaning String_and_meaning_dam = {
    .string = "dam",
    .meaning = "n. 10米（等于 decametre）；水坝；水库；（牙科手术中的）橡皮障；母畜，母兽v. 筑坝；阻止，控制n. (Dam) （美）丹（人名）"};

String_and_meaning String_and_meaning_damage = {
    .string = "damage",
    .meaning = "n. 损害；损毁；赔偿金vi. 损害；损毁vt. 损害，毁坏"};

String_and_meaning String_and_meaning_damn = {
    .string = "damn",
    .meaning = "v.谴责"};

String_and_meaning String_and_meaning_damp = {
    .string = "damp",
    .meaning = "adj. 潮湿的n. 潮湿；气馁；沼气v. （使）潮湿；（使）沮丧，抑制；灭火；限止（钢琴或其他乐器琴弦）的音；减幅"};

String_and_meaning String_and_meaning_dance = {
    .string = "dance",
    .meaning = "n. 舞蹈；舞会；舞曲vi. 跳舞；跳跃；飘扬vt. 跳舞；使跳跃adj. 舞蹈的；用于跳舞的n. (Dance)人名；(英)丹斯；(法)当斯"};

String_and_meaning String_and_meaning_danger = {
    .string = "danger",
    .meaning = "n. 危险；危险物，威胁n. (Danger)人名；(法)当热"};

String_and_meaning String_and_meaning_dangerous = {
    .string = "dangerous",
    .meaning = "adj. 危险的危险地"};

String_and_meaning String_and_meaning_dare = {
    .string = "dare",
    .meaning = "v. 胆敢；激（某人做某事）；（诗、文）冒险，挑战n. 挑战；激将n. (Dare) （美）达雷（人名）"};

String_and_meaning String_and_meaning_daring = {
    .string = "daring",
    .meaning = "adj. 大胆的，勇敢的n. 胆量，勇气v. 敢（dare的现在分词）n. (Daring)人名；(英、瑞典)达林"};

String_and_meaning String_and_meaning_dark = {
    .string = "dark",
    .meaning = "n.黑暗,夜,黄昏,暗色,无知,模糊adj.黑暗的,暗的,(头发、皮肤等)黑色的,隐秘的,无知的,隐晦的,模糊的"};

String_and_meaning String_and_meaning_darling = {
    .string = "darling",
    .meaning = "n. 心爱的人；亲爱的n. (Darling)人名；(英)达林"};

String_and_meaning String_and_meaning_dash = {
    .string = "dash",
    .meaning = "n.少量(搀加物),冲撞,破折号,锐气,精力,干劲vi.猛掷,冲撞vt.泼溅,使猛撞,搀和,使破灭,使沮丧,匆忙完成"};

String_and_meaning String_and_meaning_data = {
    .string = "data",
    .meaning = "n. 数据（datum 的复数）；资料n. （Data）（日）驮太（姓）；（印、葡）达塔（人名）"};

String_and_meaning String_and_meaning_date = {
    .string = "date",
    .meaning = "n. 日期；约会；年代；枣椰子vi. 过时；注明日期；始于（某一历史时期）vt. 确定…年代；和…约会n. (Date)人名；(日)伊达 (姓)；(英)戴特"};

String_and_meaning String_and_meaning_daughter = {
    .string = "daughter",
    .meaning = "n. 女儿；[遗][农学] 子代adj. 女儿的；子代的"};

String_and_meaning String_and_meaning_dawn = {
    .string = "dawn",
    .meaning = "n. 黎明；开端vt. 破晓；出现；被领悟n. (Dawn)人名；(西)道恩"};

String_and_meaning String_and_meaning_day = {
    .string = "day",
    .meaning = "n. 一天；时期；白昼adv. 每天；经常在白天地adj. 日间的；逐日的n. (Day)人名；(英、法、西)戴；(越)岱；(阿拉伯、土)达伊"};

String_and_meaning String_and_meaning_daylight = {
    .string = "daylight",
    .meaning = "n. 白天；日光；黎明；公开"};

String_and_meaning String_and_meaning_dazzle = {
    .string = "dazzle",
    .meaning = "v. （强光等）使目眩；（美貌、技能等）使倾倒；使眼花缭乱n. 耀眼炫目；令人眼花缭乱的东西（或特性）；耀眼的光；灿烂，绚烂"};

String_and_meaning String_and_meaning_dead = {
    .string = "dead",
    .meaning = "adj. 无生命的；呆板的；废弃了的adv. 完全地n. 死者"};

String_and_meaning String_and_meaning_deadly = {
    .string = "deadly",
    .meaning = "adj. 致命的；非常的；死一般的adv. 非常；如死一般地"};

String_and_meaning String_and_meaning_deaf = {
    .string = "deaf",
    .meaning = "adj. 聋的"};

String_and_meaning String_and_meaning_deal = {
    .string = "deal",
    .meaning = "n.交易,(政治上的)密约,待遇,份量,口买卖vi.处理,应付,做生意vt.分配,分给(out),发牌,给予"};

String_and_meaning String_and_meaning_dear = {
    .string = "dear",
    .meaning = "adj.昂贵的,亲爱的int.[表示惊讶,怜悯等],Oh,～!"};

String_and_meaning String_and_meaning_death = {
    .string = "death",
    .meaning = "n. 死；死亡；死神；毁灭n. (Death)人名；(英)迪阿思"};

String_and_meaning String_and_meaning_debate = {
    .string = "debate",
    .meaning = "n. 辩论；（正式的）讨论v. （尤指正式）讨论，辩论；仔细考虑"};

String_and_meaning String_and_meaning_debt = {
    .string = "debt",
    .meaning = "n. 债务；借款；罪过"};

String_and_meaning String_and_meaning_decade = {
    .string = "decade",
    .meaning = "n. 十年，十年期；十"};

String_and_meaning String_and_meaning_decay = {
    .string = "decay",
    .meaning = "v. 衰退，衰减；衰败；腐烂，腐朽n. 衰退，衰减；衰败；腐烂，腐朽n. (Decay) （法、美、意、英、希）德凯（人名）"};

String_and_meaning String_and_meaning_deceit = {
    .string = "deceit",
    .meaning = "n. 欺骗；谎言；欺诈手段"};

String_and_meaning String_and_meaning_deceive = {
    .string = "deceive",
    .meaning = "v. 欺骗；行骗"};

String_and_meaning String_and_meaning_December = {
    .string = "December",
    .meaning = "n. 十二月"};

String_and_meaning String_and_meaning_decent = {
    .string = "decent",
    .meaning = "adj. 正派的；得体的；相当好的"};

String_and_meaning String_and_meaning_decide = {
    .string = "decide",
    .meaning = "vt. 决定；解决；判决vi. 决定，下决心"};

String_and_meaning String_and_meaning_decimal = {
    .string = "decimal",
    .meaning = "adj. 小数的；十进位的n. 小数"};

String_and_meaning String_and_meaning_decision = {
    .string = "decision",
    .meaning = "n. 决定，决心；决议"};

String_and_meaning String_and_meaning_decisive = {
    .string = "decisive",
    .meaning = "adj. 决定性的；果断的，坚定的"};

String_and_meaning String_and_meaning_deck = {
    .string = "deck",
    .meaning = "n. 甲板；（船或公共汽车的）一层；露天平台；转盘装置vt. 装饰；装甲板；打扮n. (Deck)人名；（英、法、德）德克"};

String_and_meaning String_and_meaning_declaration = {
    .string = "declaration",
    .meaning = "n. （纳税品等的）申报；宣布；公告；申诉书"};

String_and_meaning String_and_meaning_declare = {
    .string = "declare",
    .meaning = "vt. 宣布，声明；断言，宣称vi. 声明，宣布"};

String_and_meaning String_and_meaning_decline = {
    .string = "decline",
    .meaning = "n. 下降；衰退；斜面vi. 下降；衰落；谢绝vt. 谢绝；婉拒"};

String_and_meaning String_and_meaning_decorate = {
    .string = "decorate",
    .meaning = "vt. 装饰；布置；授勋给vi. 装饰；布置"};

String_and_meaning String_and_meaning_decrease = {
    .string = "decrease",
    .meaning = "v. 减少，减小，降低n. 减少，减小；减少量；减少过程"};

String_and_meaning String_and_meaning_dedicate = {
    .string = "dedicate",
    .meaning = "vt. 致力；献身；题献"};

String_and_meaning String_and_meaning_deduce = {
    .string = "deduce",
    .meaning = "vt. 推论，推断；演绎出"};

String_and_meaning String_and_meaning_deed = {
    .string = "deed",
    .meaning = "n. 行动；功绩；证书；[法] 契据vt. 立契转让"};

String_and_meaning String_and_meaning_deem = {
    .string = "deem",
    .meaning = "vt. 认为，视作；相信vi. 认为，持某种看法；作某种评价n. (Deem)人名；(英)迪姆"};

String_and_meaning String_and_meaning_deep = {
    .string = "deep",
    .meaning = "adj.深的,纵深的,远离中心的,深奥的,难懂的,(指人)诡计多端的,低沉的(声音)adv.深入地,迟n.深渊,深处"};

String_and_meaning String_and_meaning_deepen = {
    .string = "deepen",
    .meaning = "vt. 使加深；使强烈；使低沉vi. 变深；变低沉"};

String_and_meaning String_and_meaning_deer = {
    .string = "deer",
    .meaning = "n. 鹿n. (Deer)人名；(英)迪尔"};

String_and_meaning String_and_meaning_defeat = {
    .string = "defeat",
    .meaning = "v. 击败；挫败（某人）；阻止达成（目的）；反对（动议或提议）；（使）无法理解；（使）无效n. 失败；战胜"};

String_and_meaning String_and_meaning_defect = {
    .string = "defect",
    .meaning = "n. 缺点，缺陷；不足之处vi. 变节；叛变"};

String_and_meaning String_and_meaning_defence = {
    .string = "defence",
    .meaning = "n. 防御；防卫；答辩；防卫设备"};

String_and_meaning String_and_meaning_defend = {
    .string = "defend",
    .meaning = "vt. 辩护；防护vi. 保卫；防守"};

String_and_meaning String_and_meaning_deficiency = {
    .string = "deficiency",
    .meaning = "n. 缺陷，缺点；缺乏；不足的数额"};

String_and_meaning String_and_meaning_deficit = {
    .string = "deficit",
    .meaning = "n. 赤字；不足额"};

String_and_meaning String_and_meaning_define = {
    .string = "define",
    .meaning = "vt. 定义；使明确；规定n. (Define)人名；(英)德法恩；(葡)德菲内"};

String_and_meaning String_and_meaning_definite = {
    .string = "definite",
    .meaning = "adj. 一定的；确切的"};

String_and_meaning String_and_meaning_definitely = {
    .string = "definitely",
    .meaning = "adv. 清楚地，当然；明确地，肯定地"};

String_and_meaning String_and_meaning_definition = {
    .string = "definition",
    .meaning = "n. 定义；[物] 清晰度；解说"};

String_and_meaning String_and_meaning_defy = {
    .string = "defy",
    .meaning = "vt. 藐视；公然反抗；挑衅；使落空n. 挑战；对抗"};

String_and_meaning String_and_meaning_degenerate = {
    .string = "degenerate",
    .meaning = "v. 使退化；恶化；堕落adj. 退化的；堕落的；退化的；简并的n. 堕落的人"};

String_and_meaning String_and_meaning_degrade = {
    .string = "degrade",
    .meaning = "vt. 贬低；使……丢脸；使……降级；使……降解vi. 降级，降低；退化"};

String_and_meaning String_and_meaning_degree = {
    .string = "degree",
    .meaning = "n. 程度，等级；度；学位；阶层"};

String_and_meaning String_and_meaning_delay = {
    .string = "delay",
    .meaning = "v. 延期；（使）耽搁；推迟n. 延迟的时间；延期；延时；延迟器n. (Delay) （美）德莱（人名）"};

String_and_meaning String_and_meaning_delegate = {
    .string = "delegate",
    .meaning = "n. 代表，会议代表；委员会成员v. 授（权），把……委托给他人；委派……为代表，任命"};

String_and_meaning String_and_meaning_delegation = {
    .string = "delegation",
    .meaning = "n. 代表团；授权；委托"};

String_and_meaning String_and_meaning_delete = {
    .string = "delete",
    .meaning = "vt. 删除"};

String_and_meaning String_and_meaning_deliberate = {
    .string = "deliberate",
    .meaning = "adj. 故意的；深思熟虑的；从容的vt. 仔细考虑；商议"};

String_and_meaning String_and_meaning_delicate = {
    .string = "delicate",
    .meaning = "adj. 微妙的；精美的，雅致的；柔和的；易碎的；纤弱的；清淡可口的"};

String_and_meaning String_and_meaning_delicious = {
    .string = "delicious",
    .meaning = "adj. 美味的；可口的"};

String_and_meaning String_and_meaning_delight = {
    .string = "delight",
    .meaning = "n. 高兴vi. 高兴vt. 使高兴n. (Delight)人名；(英)迪莱特"};

String_and_meaning String_and_meaning_deliver = {
    .string = "deliver",
    .meaning = "vt. 交付；发表；递送；释放；给予（打击）；给…接生vi. 实现；传送；履行；投递n. 投球"};

String_and_meaning String_and_meaning_delivery = {
    .string = "delivery",
    .meaning = "n. [贸易] 交付；分娩；递送"};

String_and_meaning String_and_meaning_delta = {
    .string = "delta",
    .meaning = "n. （河流的）三角洲；德耳塔（希腊字母的第四个字）n. (Delta)人名；(英、罗、葡)德尔塔"};

String_and_meaning String_and_meaning_demand = {
    .string = "demand",
    .meaning = "n. （坚决的或困难的）要求；（顾客的）需求v. 强烈要求；需要；逼问；查问，查询n. (Demand) （德）德曼德（人名）"};

String_and_meaning String_and_meaning_democracy = {
    .string = "democracy",
    .meaning = "n. 民主，民主主义；民主政治"};

String_and_meaning String_and_meaning_democratic = {
    .string = "democratic",
    .meaning = "adj. 民主的；民主政治的；大众的"};

String_and_meaning String_and_meaning_demonstrate = {
    .string = "demonstrate",
    .meaning = "vt. 证明；展示；论证vi. 示威"};

String_and_meaning String_and_meaning_denial = {
    .string = "denial",
    .meaning = "n. 否认；拒绝；节制；背弃"};

String_and_meaning String_and_meaning_denote = {
    .string = "denote",
    .meaning = "vt. 表示，指示"};

String_and_meaning String_and_meaning_denounce = {
    .string = "denounce",
    .meaning = "vt. 谴责；告发；公然抨击；通告废除"};

String_and_meaning String_and_meaning_dense = {
    .string = "dense",
    .meaning = "adj. 稠密的；浓厚的；愚钝的"};

String_and_meaning String_and_meaning_density = {
    .string = "density",
    .meaning = "n. 密度"};

String_and_meaning String_and_meaning_dentist = {
    .string = "dentist",
    .meaning = "n. 牙科医生牙医诊所"};

String_and_meaning String_and_meaning_deny = {
    .string = "deny",
    .meaning = "vt. 否定，否认；拒绝给予；拒绝…的要求vi. 否认；拒绝"};

String_and_meaning String_and_meaning_depart = {
    .string = "depart",
    .meaning = "vi. 离开；出发，起程；违反；去世adj. 逝世的"};

String_and_meaning String_and_meaning_department = {
    .string = "department",
    .meaning = "n. 部；部门；系；科；局"};

String_and_meaning String_and_meaning_departure = {
    .string = "departure",
    .meaning = "n. 离开；出发；违背"};

String_and_meaning String_and_meaning_depend = {
    .string = "depend",
    .meaning = "vi. 依赖，依靠；取决于；相信，信赖"};

String_and_meaning String_and_meaning_dependent = {
    .string = "dependent",
    .meaning = "adj. 依靠的；从属的；取决于…的n. 依赖他人者；受赡养者"};

String_and_meaning String_and_meaning_depict = {
    .string = "depict",
    .meaning = "vt. 描述；描画"};

String_and_meaning String_and_meaning_deposit = {
    .string = "deposit",
    .meaning = "n. 存款；押金；订金；保证金；沉淀物vt. 使沉积；存放vi. 沉淀"};

String_and_meaning String_and_meaning_depress = {
    .string = "depress",
    .meaning = "vt. 压抑；使沮丧；使萧条"};

String_and_meaning String_and_meaning_depression = {
    .string = "depression",
    .meaning = "n. 沮丧；忧愁；抑郁症；洼地；不景气；低气压区"};

String_and_meaning String_and_meaning_deprive = {
    .string = "deprive",
    .meaning = "vt. 使丧失，剥夺"};

String_and_meaning String_and_meaning_depth = {
    .string = "depth",
    .meaning = "n. [海洋] 深度；深奥"};

String_and_meaning String_and_meaning_depute = {
    .string = "depute",
    .meaning = "v. 向（某人）授权；委派（某人）n. 受权人"};

String_and_meaning String_and_meaning_derive = {
    .string = "derive",
    .meaning = "vt. 源于；得自；获得vi. 起源n. （Derive）（法）德里夫（人名）"};

String_and_meaning String_and_meaning_descend = {
    .string = "descend",
    .meaning = "vi. 下降；下去；下来；遗传；屈尊vt. 下去；沿…向下"};

String_and_meaning String_and_meaning_descendant = {
    .string = "descendant",
    .meaning = "n. 后裔，子孙；（由过去类似物发展来的）派生物；（机器等）后继型产品adj. 下降的；祖传的"};

String_and_meaning String_and_meaning_descent = {
    .string = "descent",
    .meaning = "n. 下降；血统；袭击vt. 除去…的气味；使…失去香味"};

String_and_meaning String_and_meaning_describe = {
    .string = "describe",
    .meaning = "vt. 描述，形容；描绘"};

String_and_meaning String_and_meaning_description = {
    .string = "description",
    .meaning = "n. 描述，描写；类型；说明书"};

String_and_meaning String_and_meaning_desert = {
    .string = "desert",
    .meaning = "n.沙漠,应得的赏罚,功过adj.沙漠的,不毛的,荒凉的vt.放弃,遗弃,逃跑vi.逃掉,逃亡,开小差"};

String_and_meaning String_and_meaning_deserve = {
    .string = "deserve",
    .meaning = "vi. 应受，应得vt. 应受，应得"};

String_and_meaning String_and_meaning_design = {
    .string = "design",
    .meaning = "n. 设计；构思；设计图样；装饰图案；打算v. 设计，构思；计划；制造，意欲n. (Design) （巴、印、俄）迪赛（人名）"};

String_and_meaning String_and_meaning_designate = {
    .string = "designate",
    .meaning = "vt. 指定；指派；标出；把…定名为adj. 指定的；选定的"};

String_and_meaning String_and_meaning_desirable = {
    .string = "desirable",
    .meaning = "adj. 可取的，值得拥有的，令人向往的；引起性欲的，性感的n. 称心如意的东西，合意的人，好的品质"};

String_and_meaning String_and_meaning_desire = {
    .string = "desire",
    .meaning = "n. 欲望；要求，心愿；性欲vt. 想要；要求；希望得到……vi. 渴望n. （Desire）（刚（布）、英）德西雷（人名）"};

String_and_meaning String_and_meaning_desk = {
    .string = "desk",
    .meaning = "n. 办公桌；服务台；编辑部；（美）讲道台；乐谱架adj. 书桌的；桌上用的；伏案做的"};

String_and_meaning String_and_meaning_despair = {
    .string = "despair",
    .meaning = "n. 绝望；令人绝望的人或事vi. 绝望，丧失信心"};

String_and_meaning String_and_meaning_despatch = {
    .string = "despatch",
    .meaning = "v. 派遣；发送；迅速处理；杀死；匆匆吃下，匆匆离开（等于 dispatch）n. 派遣；发送；急件；报道；杀死（等于 dispatch）"};

String_and_meaning String_and_meaning_desperate = {
    .string = "desperate",
    .meaning = "adj. 不顾一切的；令人绝望的；极度渴望的"};

String_and_meaning String_and_meaning_despise = {
    .string = "despise",
    .meaning = "vt. 轻视，鄙视"};

String_and_meaning String_and_meaning_despite = {
    .string = "despite",
    .meaning = "prep. 即使，尽管n. （诗/文）侮辱，伤害；轻视，鄙视；憎恨vt. 废语故意使烦恼，故意伤害；古蔑视，轻蔑"};

String_and_meaning String_and_meaning_destination = {
    .string = "destination",
    .meaning = "n. 目的地，终点"};

String_and_meaning String_and_meaning_destined = {
    .string = "destined",
    .meaning = "adj. 注定的；命定的；去往…的v. 注定（destine的过去式和过去分词）"};

String_and_meaning String_and_meaning_destiny = {
    .string = "destiny",
    .meaning = "n. 命运，定数，天命n. (Destiny)人名；(英)德斯蒂尼，德斯蒂妮(女名)"};

String_and_meaning String_and_meaning_destroy = {
    .string = "destroy",
    .meaning = "vt. 破坏；消灭；毁坏"};

String_and_meaning String_and_meaning_destruction = {
    .string = "destruction",
    .meaning = "n. 破坏，毁灭；摧毁"};

String_and_meaning String_and_meaning_destructive = {
    .string = "destructive",
    .meaning = "adj. 破坏的；毁灭性的；有害的，消极的"};

String_and_meaning String_and_meaning_detach = {
    .string = "detach",
    .meaning = "vt. 分离；派遣；使超然"};

String_and_meaning String_and_meaning_detail = {
    .string = "detail",
    .meaning = "n. 细节，琐事；具体信息；次要部分；分队，支队vt. 详述；选派vi. 画详图"};

String_and_meaning String_and_meaning_detect = {
    .string = "detect",
    .meaning = "vt. 察觉；发现；探测"};

String_and_meaning String_and_meaning_detection = {
    .string = "detection",
    .meaning = "n. 侦查，探测；发觉，发现；察觉"};

String_and_meaning String_and_meaning_detective = {
    .string = "detective",
    .meaning = "n. 警探；私人侦探；刑侦adj. 侦探的；侦察的"};

String_and_meaning String_and_meaning_deteriorate = {
    .string = "deteriorate",
    .meaning = "vi. 恶化，变坏vt. 恶化"};

String_and_meaning String_and_meaning_determination = {
    .string = "determination",
    .meaning = "n. 决心；果断；测定"};

String_and_meaning String_and_meaning_determine = {
    .string = "determine",
    .meaning = "v. （使）下决心，（使）做出决定vt. 决定，确定；判定，判决；限定vi. 确定；决定；判决，终止；[主用于法律]了结，终止，结束"};

String_and_meaning String_and_meaning_develop = {
    .string = "develop",
    .meaning = "vt. 开发；进步；使成长；使显影vi. 发育；生长；进化；显露"};

String_and_meaning String_and_meaning_development = {
    .string = "development",
    .meaning = "n. 发展；开发；发育；住宅小区（专指由同一开发商开发的）；[摄] 显影"};

String_and_meaning String_and_meaning_deviate = {
    .string = "deviate",
    .meaning = "vi. 脱离；越轨vt. 使偏离"};

String_and_meaning String_and_meaning_device = {
    .string = "device",
    .meaning = "n. 装置；策略；图案；设备；终端"};

String_and_meaning String_and_meaning_devil = {
    .string = "devil",
    .meaning = "n. 魔鬼；撒旦；家伙；恶棍；淘气鬼；冒失鬼vt. 虐待，折磨；（用扯碎机）扯碎；（替作家，律师等）做助手；抹辣味料烤制或煎煮"};

String_and_meaning String_and_meaning_devise = {
    .string = "devise",
    .meaning = "vt. 设计；想出；发明；图谋；遗赠给n. 遗赠n. (Devise) （美、法）德维兹（人名）"};

String_and_meaning String_and_meaning_devote = {
    .string = "devote",
    .meaning = "v. 致力于，奉献于；把……用于，作……专用；降祸于，诅咒"};

String_and_meaning String_and_meaning_dew = {
    .string = "dew",
    .meaning = "n. 珠，滴；露水；清新vt. （露水等）弄湿vi. 结露水n. (Dew)人名；(德)德夫；(英)迪尤"};

String_and_meaning String_and_meaning_diagnose = {
    .string = "diagnose",
    .meaning = "vt. 诊断；断定vi. 诊断；判断"};

String_and_meaning String_and_meaning_diagram = {
    .string = "diagram",
    .meaning = "n. 图表；图解vt. 用图解法表示"};

String_and_meaning String_and_meaning_dial = {
    .string = "dial",
    .meaning = "n. 转盘；刻度盘；钟面vi. 拨号vt. 给…拨号打电话n. (Dial)人名；(英)戴尔"};

String_and_meaning String_and_meaning_dialect = {
    .string = "dialect",
    .meaning = "n. 方言，土话；同源语；行话；个人用语特征adj. 方言的"};

String_and_meaning String_and_meaning_dialog = {
    .string = "dialog",
    .meaning = "n. 对话；会话"};

String_and_meaning String_and_meaning_diameter = {
    .string = "diameter",
    .meaning = "n. 直径"};

String_and_meaning String_and_meaning_diamond = {
    .string = "diamond",
    .meaning = "n. 钻石，金刚石；菱形；方块牌adj. 菱形的；金刚钻的n. （Diamond）（英、意、葡）戴蒙德；（法）迪亚蒙（人名）"};

String_and_meaning String_and_meaning_diary = {
    .string = "diary",
    .meaning = "n. 日志，日记；日记簿"};

String_and_meaning String_and_meaning_dictate = {
    .string = "dictate",
    .meaning = "vt. 命令；口述；使听写vi. 口述；听写n. 命令；指示"};

String_and_meaning String_and_meaning_dictation = {
    .string = "dictation",
    .meaning = "n. 听写；口述；命令"};

String_and_meaning String_and_meaning_dictionary = {
    .string = "dictionary",
    .meaning = "n. 字典；词典"};

String_and_meaning String_and_meaning_die = {
    .string = "die",
    .meaning = "vi. 死亡；凋零；熄灭vt. 死，死于……n. 冲模，钢模；骰子n. (Die) （法、美、德）迭（人名）"};

String_and_meaning String_and_meaning_diet = {
    .string = "diet",
    .meaning = "n. 饮食；食物；规定饮食vi. 节食vt. [医] 照规定饮食n. (Diet)人名；(法)迪耶"};

String_and_meaning String_and_meaning_differ = {
    .string = "differ",
    .meaning = "vt. 使…相异；使…不同vi. 相异；意见分歧n. (Differ)人名；(法)迪费"};

String_and_meaning String_and_meaning_difference = {
    .string = "difference",
    .meaning = "n. 差异；不同；争执"};

String_and_meaning String_and_meaning_different = {
    .string = "different",
    .meaning = "adj. 不同的；个别的，与众不同的"};

String_and_meaning String_and_meaning_differentiate = {
    .string = "differentiate",
    .meaning = "vi. 区分，区别vt. 区分，区别"};

String_and_meaning String_and_meaning_difficult = {
    .string = "difficult",
    .meaning = "adj. 困难的；不随和的；执拗的"};

String_and_meaning String_and_meaning_difficulty = {
    .string = "difficulty",
    .meaning = "n. 困难，困境"};

String_and_meaning String_and_meaning_diffuse = {
    .string = "diffuse",
    .meaning = "adj. 弥漫的；散开的vt. 扩散；传播；漫射vi. 传播；四散"};

String_and_meaning String_and_meaning_dig = {
    .string = "dig",
    .meaning = "vt. 挖，掘；探究vi. 挖掘n. 戳，刺；挖苦n. (Dig)人名；(罗)迪格"};

String_and_meaning String_and_meaning_digest = {
    .string = "digest",
    .meaning = "vt. 消化；吸收；融会贯通vi. 消化n. 文摘；摘要"};

String_and_meaning String_and_meaning_digital = {
    .string = "digital",
    .meaning = "adj. 数字的；手指的n. 数字；键"};

String_and_meaning String_and_meaning_dignity = {
    .string = "dignity",
    .meaning = "n. 尊严；高贵"};

String_and_meaning String_and_meaning_dilemma = {
    .string = "dilemma",
    .meaning = "n. 困境；进退两难；两刀论法"};

String_and_meaning String_and_meaning_diligent = {
    .string = "diligent",
    .meaning = "adj. 勤勉的；用功的，费尽心血的n. (Diligent)人名；(法)迪利让"};

String_and_meaning String_and_meaning_dilute = {
    .string = "dilute",
    .meaning = "v. 稀释，冲淡；削弱；变稀薄，变淡adj. 稀释的；淡的；（颜色、光线）浅的"};

String_and_meaning String_and_meaning_dim = {
    .string = "dim",
    .meaning = "adj.暗淡的,模糊的,无光泽的,悲观的,怀疑的vt.使暗淡,使失去光泽n.美俚笨蛋、傻子"};

String_and_meaning String_and_meaning_dimension = {
    .string = "dimension",
    .meaning = "n. 方面;[数] 维；尺寸；次元；容积adj. 规格的vt. 标出尺寸"};

String_and_meaning String_and_meaning_diminish = {
    .string = "diminish",
    .meaning = "vt. 使减少；使变小vi. 减少，缩小；变小"};

String_and_meaning String_and_meaning_dine = {
    .string = "dine",
    .meaning = "vt. 宴请vi. 进餐，用餐n. (Dine)（意、葡）迪内（人名）；（英）戴恩（人名）；（法）迪纳（人名）"};

String_and_meaning String_and_meaning_dinner = {
    .string = "dinner",
    .meaning = "n. 晚餐，晚宴；宴会；正餐n. (Dinner)人名；(法)迪内"};

String_and_meaning String_and_meaning_dip = {
    .string = "dip",
    .meaning = "v. 浸，蘸; 下降，减少; 浏览; 给(动物)洗药浴; 将(汽车前灯)调为近光 n. 减少; 低洼处; 药浴液; 蘸酱; (短时的)游泳，泡水; 浏览"};

String_and_meaning String_and_meaning_diploma = {
    .string = "diploma",
    .meaning = "n. 毕业证书，学位证书；公文，文书；奖状vt. 发给…毕业文凭"};

String_and_meaning String_and_meaning_diplomatic = {
    .string = "diplomatic",
    .meaning = "adj. 外交的；外交上的；老练的"};

String_and_meaning String_and_meaning_direct = {
    .string = "direct",
    .meaning = "adj. 直接的；直系的；亲身的；恰好的vt. 管理；指挥；导演；指向vi. 指导；指挥adv. 直接地；正好；按直系关系"};

String_and_meaning String_and_meaning_direction = {
    .string = "direction",
    .meaning = "n. 方向；指导；趋势；用法说明"};

String_and_meaning String_and_meaning_directly = {
    .string = "directly",
    .meaning = "adv. 直接地；立即；马上；正好地；坦率地conj. 一…就"};

String_and_meaning String_and_meaning_director = {
    .string = "director",
    .meaning = "n. 主任，主管；导演；人事助理n. (Director)人名；(英)迪雷克托"};

String_and_meaning String_and_meaning_directory = {
    .string = "directory",
    .meaning = "n. [计] 目录；工商名录；姓名地址录adj. 指导的；咨询的"};

String_and_meaning String_and_meaning_dirt = {
    .string = "dirt",
    .meaning = "n. 污垢，泥土；灰尘，尘土；下流话"};

String_and_meaning String_and_meaning_dirty = {
    .string = "dirty",
    .meaning = "adj. 下流的，卑鄙的；肮脏的；恶劣的；暗淡的vt. 弄脏vi. 变脏"};

String_and_meaning String_and_meaning_disable = {
    .string = "disable",
    .meaning = "vt. 使失去能力；使残废；使无资格"};

String_and_meaning String_and_meaning_disadvantage = {
    .string = "disadvantage",
    .meaning = "n. 缺点；不利条件；损失"};

String_and_meaning String_and_meaning_disagree = {
    .string = "disagree",
    .meaning = "vi. 不同意；不一致；争执；不适宜"};

String_and_meaning String_and_meaning_disappear = {
    .string = "disappear",
    .meaning = "vi. 消失；失踪；不复存在vt. 使…不存在；使…消失"};

String_and_meaning String_and_meaning_disappoint = {
    .string = "disappoint",
    .meaning = "vt. 使失望"};

String_and_meaning String_and_meaning_disaster = {
    .string = "disaster",
    .meaning = "n. 灾难，灾祸；不幸"};

String_and_meaning String_and_meaning_disastrous = {
    .string = "disastrous",
    .meaning = "adj. 灾难性的；损失惨重的；悲伤的"};

String_and_meaning String_and_meaning_discard = {
    .string = "discard",
    .meaning = "vt. 抛弃；放弃；丢弃vi. 放弃n. 抛弃；被丢弃的东西或人"};

String_and_meaning String_and_meaning_discern = {
    .string = "discern",
    .meaning = "vt. 觉察出；识别；了解；隐约看见vi. 辨别"};

String_and_meaning String_and_meaning_discharge = {
    .string = "discharge",
    .meaning = "vt.卸下,放出,清偿(债务),履行(义务),解雇,开(炮),放(枪),射(箭)vi.卸货,流注n.卸货,流出,放电"};

String_and_meaning String_and_meaning_discipline = {
    .string = "discipline",
    .meaning = "n. 学科；纪律；训练；惩罚vt. 训练，训导；惩戒"};

String_and_meaning String_and_meaning_disclose = {
    .string = "disclose",
    .meaning = "vt. 公开；揭露"};

String_and_meaning String_and_meaning_discount = {
    .string = "discount",
    .meaning = "n. 折扣；贴现率vi. 贴现；打折扣出售商品vt. 打折扣；将…贴现；贬损；低估；忽视"};

String_and_meaning String_and_meaning_discourage = {
    .string = "discourage",
    .meaning = "vt. 阻止；使气馁"};

String_and_meaning String_and_meaning_discover = {
    .string = "discover",
    .meaning = "vt. 发现；发觉vi. 发现"};

String_and_meaning String_and_meaning_discovery = {
    .string = "discovery",
    .meaning = "n. 发现，发觉；被发现的事物"};

String_and_meaning String_and_meaning_discrepancy = {
    .string = "discrepancy",
    .meaning = "n. 不符；矛盾；相差"};

String_and_meaning String_and_meaning_discrete = {
    .string = "discrete",
    .meaning = "adj. 离散的，不连续的n. 分立元件；独立部件"};

String_and_meaning String_and_meaning_discriminate = {
    .string = "discriminate",
    .meaning = "vt. 歧视；区别；辨别vi. 区别；辨别"};

String_and_meaning String_and_meaning_discuss = {
    .string = "discuss",
    .meaning = "vt. 讨论；论述，辩论"};

String_and_meaning String_and_meaning_discussion = {
    .string = "discussion",
    .meaning = "n. 讨论，议论"};

String_and_meaning String_and_meaning_disease = {
    .string = "disease",
    .meaning = "n. 病，[医] 疾病；弊病vt. 传染；使…有病"};

String_and_meaning String_and_meaning_disguise = {
    .string = "disguise",
    .meaning = "vt. 掩饰；假装；隐瞒n. 伪装；假装；用作伪装的东西"};

String_and_meaning String_and_meaning_disgust = {
    .string = "disgust",
    .meaning = "n. 厌恶，嫌恶vt. 使厌恶；使作呕"};

String_and_meaning String_and_meaning_dish = {
    .string = "dish",
    .meaning = "n. 盘；餐具；一盘食物；外貌有吸引力的人vt. 盛于碟盘中；分发；使某人的希望破灭；说（某人）的闲话vi. 成碟状；闲谈"};

String_and_meaning String_and_meaning_dishonour = {
    .string = "dishonour",
    .meaning = "n. 耻辱，丢脸；拒付v. 使丢脸；不履行（诺言等）；不尊重；拒付，拒绝承兑；（古）强奸"};

String_and_meaning String_and_meaning_disk = {
    .string = "disk",
    .meaning = "n. [计] 磁盘，磁碟片；圆盘，盘状物；唱片"};

String_and_meaning String_and_meaning_dislike = {
    .string = "dislike",
    .meaning = "vt. 不喜欢，厌恶n. 嫌恶，反感，不喜爱"};

String_and_meaning String_and_meaning_dismay = {
    .string = "dismay",
    .meaning = "n. 沮丧，灰心；惊慌vt. 使沮丧；使惊慌"};

String_and_meaning String_and_meaning_dismiss = {
    .string = "dismiss",
    .meaning = "vt. 解散；解雇；开除；让...离开；不予理会、不予考虑vi. 解散"};

String_and_meaning String_and_meaning_disorder = {
    .string = "disorder",
    .meaning = "n. 混乱；骚乱vt. 使失调；扰乱"};

String_and_meaning String_and_meaning_dispatch = {
    .string = "dispatch",
    .meaning = "vt.分派,派遣n.派遣,急件"};

String_and_meaning String_and_meaning_disperse = {
    .string = "disperse",
    .meaning = "vt. 分散；使散开；传播vi. 分散adj. 分散的"};

String_and_meaning String_and_meaning_displace = {
    .string = "displace",
    .meaning = "vt. 取代；置换；转移；把…免职；排水"};

String_and_meaning String_and_meaning_display = {
    .string = "display",
    .meaning = "n. 显示；炫耀vt. 显示；表现；陈列vi. [动] 作炫耀行为adj. 展览的；陈列用的"};

String_and_meaning String_and_meaning_displease = {
    .string = "displease",
    .meaning = "vt. 使生气；触怒vi. 使生气；使不快"};

String_and_meaning String_and_meaning_disposal = {
    .string = "disposal",
    .meaning = "n. 处理；支配；清理；安排"};

String_and_meaning String_and_meaning_dispose = {
    .string = "dispose",
    .meaning = "vt. 处理；处置；安排；使倾向于vi. 处理；安排；（能够）决定；击败；杀死n. 处置；性情"};

String_and_meaning String_and_meaning_disposition = {
    .string = "disposition",
    .meaning = "n. 处置；[心理] 性情；[军] 部署；倾向"};

String_and_meaning String_and_meaning_dispute = {
    .string = "dispute",
    .meaning = "n. 辩论；争吵；意见不同v. 辩论；对……进行质疑；争夺；抵抗（进攻）"};

String_and_meaning String_and_meaning_disregard = {
    .string = "disregard",
    .meaning = "v. 忽视，无视，不尊重n. 忽视，无视，不尊重"};

String_and_meaning String_and_meaning_disrupt = {
    .string = "disrupt",
    .meaning = "vt. 破坏；使瓦解；使分裂；使中断；使陷于混乱adj. 分裂的，中断的；分散的"};

String_and_meaning String_and_meaning_dissatisfy = {
    .string = "dissatisfy",
    .meaning = "v. 使不满，使失望"};

String_and_meaning String_and_meaning_dissipate = {
    .string = "dissipate",
    .meaning = "vt. 浪费；使…消散vi. 驱散；放荡"};

String_and_meaning String_and_meaning_dissolve = {
    .string = "dissolve",
    .meaning = "vt. 使溶解；使分解；使液化vi. 溶解；解散；消失n. 叠化画面；画面的溶暗"};

String_and_meaning String_and_meaning_distance = {
    .string = "distance",
    .meaning = "n. 距离；远方；疏远；间隔vt. 疏远；把…远远甩在后面"};

String_and_meaning String_and_meaning_distant = {
    .string = "distant",
    .meaning = "adj. 遥远的；冷漠的；远隔的；不友好的，冷淡的"};

String_and_meaning String_and_meaning_distil = {
    .string = "distil",
    .meaning = "vi. 蒸馏；提炼；渗出vt. 蒸馏；提取…的精华；使渗出"};

String_and_meaning String_and_meaning_distinct = {
    .string = "distinct",
    .meaning = "adj. 明显的；独特的；清楚的；有区别的"};

String_and_meaning String_and_meaning_distinction = {
    .string = "distinction",
    .meaning = "n. 区别；差别；特性；荣誉、勋章"};

String_and_meaning String_and_meaning_distinguish = {
    .string = "distinguish",
    .meaning = "vt. 区分；辨别；使杰出，使表现突出vi. 区别，区分；辨别"};

String_and_meaning String_and_meaning_distort = {
    .string = "distort",
    .meaning = "vt. 扭曲；使失真；曲解vi. 扭曲；变形"};

String_and_meaning String_and_meaning_distract = {
    .string = "distract",
    .meaning = "vt. 转移；分心"};

String_and_meaning String_and_meaning_distress = {
    .string = "distress",
    .meaning = "n. 危难，不幸；贫困；悲痛vt. 使悲痛；使贫困"};

String_and_meaning String_and_meaning_distribute = {
    .string = "distribute",
    .meaning = "vt. 分配；散布；分开；把…分类"};

String_and_meaning String_and_meaning_distribution = {
    .string = "distribution",
    .meaning = "n. 分布；分配；供应"};

String_and_meaning String_and_meaning_district = {
    .string = "district",
    .meaning = "n. 区域；地方；行政区"};

String_and_meaning String_and_meaning_disturb = {
    .string = "disturb",
    .meaning = "vt. 打扰；妨碍；使不安；弄乱；使恼怒vi. 打扰；妨碍"};

String_and_meaning String_and_meaning_disturbance = {
    .string = "disturbance",
    .meaning = "n. 干扰；骚乱；忧虑"};

String_and_meaning String_and_meaning_ditch = {
    .string = "ditch",
    .meaning = "n.沟,沟渠,壕沟"};

String_and_meaning String_and_meaning_dive = {
    .string = "dive",
    .meaning = "vi.潜水,跳水,下潜,俯冲n.潜水,跳水,下潜,俯冲"};

String_and_meaning String_and_meaning_diverse = {
    .string = "diverse",
    .meaning = "adj. 不同的，相异的；多种多样的，形形色色的"};

String_and_meaning String_and_meaning_diversion = {
    .string = "diversion",
    .meaning = "n. 转移；消遣；分散注意力"};

String_and_meaning String_and_meaning_divert = {
    .string = "divert",
    .meaning = "vt. 转移；使…欢娱；使…转向vi. 转移n. (Divert)人名；(法)迪韦尔"};

String_and_meaning String_and_meaning_divide = {
    .string = "divide",
    .meaning = "v. （使）分开，分成；分配，分担；分隔；（道路）分叉；使产生分歧；（数）除，除以n. 分歧，差异；分水岭；界限"};

String_and_meaning String_and_meaning_divine = {
    .string = "divine",
    .meaning = "adj. 神圣的；非凡的；天赐的；极好的vt. 占卜；预言；用占卜勘探vi. 占卜；预言；使用占卜勘探矿n. 牧师；神学家n. (Divine)人名；(英)迪万"};

String_and_meaning String_and_meaning_division = {
    .string = "division",
    .meaning = "n. [数] 除法；部门；分配；分割；师（军队）；赛区"};

String_and_meaning String_and_meaning_divorce = {
    .string = "divorce",
    .meaning = "n. 离婚；分离；离婚判决；离婚的男子v. 与（某人）离婚；分离，脱离；彻底分割"};

String_and_meaning String_and_meaning_dizzy = {
    .string = "dizzy",
    .meaning = "adj. 晕眩的；使人头晕的；昏乱的；心不在焉的；愚蠢的vt. 使头晕眼花；使混乱；使茫然n. (Dizzy)人名；(英)迪齐"};

String_and_meaning String_and_meaning_do = {
    .string = "do",
    .meaning = "v. 做，干，办（某事）"};

String_and_meaning String_and_meaning_dock = {
    .string = "dock",
    .meaning = "n. 码头；船坞；被告席；尾巴的骨肉部分vt. 使靠码头；剪短vi. 入船坞n. （Dock）程序坞n. （Dock）人名；(老)多；(英、法、瑞典)多克"};

String_and_meaning String_and_meaning_doctor = {
    .string = "doctor",
    .meaning = "n.医生,博士,[古]学者,俚修理师vt.授以博士学位,诊断,修改,美治疗,搀混(食物、饮料),修改vi.行医"};

String_and_meaning String_and_meaning_doctrine = {
    .string = "doctrine",
    .meaning = "n. 主义；学说；教义；信条"};

String_and_meaning String_and_meaning_document = {
    .string = "document",
    .meaning = "n. 文件，公文；[计] 文档；证件vt. 记录，记载"};

String_and_meaning String_and_meaning_dog = {
    .string = "dog",
    .meaning = "n. 狗；卑鄙的人；(俚)朋友vt. 跟踪；尾随"};

String_and_meaning String_and_meaning_dollar = {
    .string = "dollar",
    .meaning = "n. 美元；元 (美国、加拿大、澳大利亚以及其他一些国家的货币单位)n. (Dollar)人名；(英)多拉尔"};

String_and_meaning String_and_meaning_domain = {
    .string = "domain",
    .meaning = "n. 领域；域名；产业；地产n. (Domain)人名；(英、法)多曼"};

String_and_meaning String_and_meaning_dome = {
    .string = "dome",
    .meaning = "n. 圆屋顶vi. 成圆顶状vt. 加圆屋顶于…上n. (Dome)人名；(法)多姆"};

String_and_meaning String_and_meaning_domestic = {
    .string = "domestic",
    .meaning = "adj. 国内的；家庭的；驯养的；一心只管家务的n. 国货；佣人"};

String_and_meaning String_and_meaning_dominant = {
    .string = "dominant",
    .meaning = "adj. 显性的；占优势的；支配的，统治的n. 显性"};

String_and_meaning String_and_meaning_dominate = {
    .string = "dominate",
    .meaning = "vt. 控制；支配；占优势；在…中占主要地位vi. 占优势；处于支配地位"};

String_and_meaning String_and_meaning_donate = {
    .string = "donate",
    .meaning = "vt. 捐赠；捐献vi. 捐赠；捐献"};

String_and_meaning String_and_meaning_donkey = {
    .string = "donkey",
    .meaning = "n. 驴子；傻瓜；顽固的人"};

String_and_meaning String_and_meaning_doom = {
    .string = "doom",
    .meaning = "n. 厄运；死亡；判决；世界末日vt. 注定；判决；使失败n. (Doom)人名；(泰)伦"};

String_and_meaning String_and_meaning_door = {
    .string = "door",
    .meaning = "n. 门；家，户；门口；通道n. (Door)人名；(英)多尔"};

String_and_meaning String_and_meaning_dorm = {
    .string = "dorm",
    .meaning = "n. 宿舍（等于dormitory）n. (Dorm)人名；(瑞典)多尔姆"};

String_and_meaning String_and_meaning_dormitory = {
    .string = "dormitory",
    .meaning = "n. 宿舍，学生宿舍adj. 住宅区的"};

String_and_meaning String_and_meaning_dose = {
    .string = "dose",
    .meaning = "n. 剂量；一剂，一服vi. 服药vt. 给药；给…服药n. (Dose)人名；(德)多泽；(意、西、葡、塞)多塞；(英)多斯"};

String_and_meaning String_and_meaning_dot = {
    .string = "dot",
    .meaning = "n. 点，圆点；嫁妆vi. 打上点vt. 加小点于n. (Dot)人名；(中)多(广东话·威妥玛)；(英)多特(女子教名 Dorothea 和 Dorothy 的昵称)；(越)突"};

String_and_meaning String_and_meaning_double = {
    .string = "double",
    .meaning = "n.两倍,[计] 双精度型adj.两倍的,双重的vt.使加倍vi.加倍,快步走,加倍努力"};

String_and_meaning String_and_meaning_doubt = {
    .string = "doubt",
    .meaning = "n. 怀疑；疑问；疑惑v. 怀疑；不信；恐怕；拿不准"};

String_and_meaning String_and_meaning_doubtful = {
    .string = "doubtful",
    .meaning = "adj. 可疑的；令人生疑的；疑心的；不能确定的"};

String_and_meaning String_and_meaning_doubtless = {
    .string = "doubtless",
    .meaning = "adv. 无疑地，肯定地；大概adj. 无疑的，确定的"};

String_and_meaning String_and_meaning_down = {
    .string = "down",
    .meaning = "adj.向下的adv.向下,在下面,下去,降下 prep.往下,沿着n.绒毛,软毛,开阔的高地"};

String_and_meaning String_and_meaning_downstairs = {
    .string = "downstairs",
    .meaning = "adv. 在楼下adj. 楼下的n. 楼下"};

String_and_meaning String_and_meaning_downward = {
    .string = "downward",
    .meaning = "adj. 向下的，下降的adv. 向下"};

String_and_meaning String_and_meaning_dozen = {
    .string = "dozen",
    .meaning = "n. 十二个，一打adj. 一打的"};

String_and_meaning String_and_meaning_draft = {
    .string = "draft",
    .meaning = "n.草稿,草案,草图vt.起草,为...打样,设计v.草拟"};

String_and_meaning String_and_meaning_drag = {
    .string = "drag",
    .meaning = "v.拖,拖曳,缓慢而费力地行动n.拖拉"};

String_and_meaning String_and_meaning_dragon = {
    .string = "dragon",
    .meaning = "n. 龙；（大型）蜥蜴；凶恶的人；严厉而有警觉性的女人n. （Dragon）（匈）德劳贡；（英、法、芬、罗、匈）德拉贡（人名）"};

String_and_meaning String_and_meaning_drain = {
    .string = "drain",
    .meaning = "n.排水沟,消耗,排水vt.排出沟外,喝干,耗尽vi.排水,流干"};

String_and_meaning String_and_meaning_drainage = {
    .string = "drainage",
    .meaning = "n. 排水；排水系统；污水；排水面积"};

String_and_meaning String_and_meaning_drama = {
    .string = "drama",
    .meaning = "n. 戏剧，戏剧艺术；剧本；戏剧性事件n. (Drama)人名；(刚(金))德拉马"};

String_and_meaning String_and_meaning_dramatic = {
    .string = "dramatic",
    .meaning = "adj. 巨大的；急剧的；引人注目的；令人激动的；戏剧的"};

String_and_meaning String_and_meaning_dramatization = {
    .string = "dramatization",
    .meaning = "n. 编剧；改编成戏剧"};

String_and_meaning String_and_meaning_drastic = {
    .string = "drastic",
    .meaning = "adj. 激烈的；猛烈的n. 烈性泻药"};

String_and_meaning String_and_meaning_draw = {
    .string = "draw",
    .meaning = "vt. 画；拉；吸引vi. 拉；拖n. 平局；抽签n. （Draw）（英）德劳（人名）"};

String_and_meaning String_and_meaning_drawback = {
    .string = "drawback",
    .meaning = "n. 缺点，不利条件；退税"};

String_and_meaning String_and_meaning_drawer = {
    .string = "drawer",
    .meaning = "n. 抽屉；开票人；出票人；起草者；酒馆侍n. n.（德）德拉韦尔（人名）"};

String_and_meaning String_and_meaning_drawing = {
    .string = "drawing",
    .meaning = "n. 图画；牵引；素描术v. 绘画；吸引（draw的ing形式）；拖曳"};

String_and_meaning String_and_meaning_dread = {
    .string = "dread",
    .meaning = "v. 惧怕，担心；敬畏n. 恐惧，可怕的人（或物）；（鸟群的）惊飞，惊起；将头发编成“骇人”发型的人adj. 可怕的；令人敬畏的"};

String_and_meaning String_and_meaning_dream = {
    .string = "dream",
    .meaning = "n. 睡梦；梦想，愿望；恍惚；极美好的人（或事物）；幻想；梦境般的事v. 做梦，梦见；梦想；虚度光阴；想到；开小差；想象adj. 理想的，完美的"};

String_and_meaning String_and_meaning_dress = {
    .string = "dress",
    .meaning = "n.女服,童装,服装,衣服v.(给...)穿衣"};

String_and_meaning String_and_meaning_drift = {
    .string = "drift",
    .meaning = "n. 漂流，漂移；趋势；漂流物vi. 漂流，漂移；漂泊vt. 使…漂流；使…受风吹积"};

String_and_meaning String_and_meaning_drill = {
    .string = "drill",
    .meaning = "n. 训练；钻孔机；钻子；播种机；演习vi. 钻孔；训练vt. 钻孔；训练；条播n. (Drill)人名；(德、英)德里尔"};

String_and_meaning String_and_meaning_drink = {
    .string = "drink",
    .meaning = "n.饮料,酒,酗酒,一口(或一些)饮料v.喝,喝酒,(植物、土壤等的)吸水,举杯庆贺"};

String_and_meaning String_and_meaning_drip = {
    .string = "drip",
    .meaning = "n.水滴v.(使)滴下"};

String_and_meaning String_and_meaning_drive = {
    .string = "drive",
    .meaning = "n.驾车,驱动器,快车道,推进力,驱使,动力,干劲,击球vt.开车,驱赶,推动、发动(机器等),驾驶(马车,汽车等)vi.开车,猛击,飞跑n.[计]驱动器"};

String_and_meaning String_and_meaning_driver = {
    .string = "driver",
    .meaning = "n. 驾驶员；驱动程序；起子；传动器n. (Driver)人名；(德)德里弗；(英)德赖弗"};

String_and_meaning String_and_meaning_drop = {
    .string = "drop",
    .meaning = "v. 推动；帮助；宣扬；下降；终止n. 滴；落下；空投；微量；滴剂"};

String_and_meaning String_and_meaning_drought = {
    .string = "drought",
    .meaning = "n. 干旱；缺乏n. (Drought)人名；(英)德劳特"};

String_and_meaning String_and_meaning_drown = {
    .string = "drown",
    .meaning = "vt. 淹没；把…淹死vi. 淹死；溺死n. (Drown)人名；(英)德朗"};

String_and_meaning String_and_meaning_drug = {
    .string = "drug",
    .meaning = "n. 药；毒品；麻醉药；滞销货vt. 使服麻醉药；使服毒品；掺麻醉药于vi. 吸毒n. （Drug）（罗）德鲁格（人名）"};

String_and_meaning String_and_meaning_drum = {
    .string = "drum",
    .meaning = "n.鼓,鼓声,鼓形圆桶,[解]鼓膜,鼓室vi.击鼓,作鼓声vt.打鼓奏"};

String_and_meaning String_and_meaning_drunk = {
    .string = "drunk",
    .meaning = "v. 喝酒（drink 的过去分词）adj. 喝醉的n. 醉汉，醉酒者；酒鬼，酗酒者；非正式纵饮，醉酒"};

String_and_meaning String_and_meaning_dry = {
    .string = "dry",
    .meaning = "adj. 干的；口渴的；枯燥无味的；禁酒的vt. 把…弄干vi. 变干n. 干涸n. (Dry)人名；(法)德里"};

String_and_meaning String_and_meaning_dual = {
    .string = "dual",
    .meaning = "adj. 双的；双重的n. 双数；双数词vt. 把……改为双幅车道n. （Dual）（法）迪阿尔（人名）"};

String_and_meaning String_and_meaning_dubious = {
    .string = "dubious",
    .meaning = "adj. 可疑的；暧昧的；无把握的；半信半疑的"};

String_and_meaning String_and_meaning_duck = {
    .string = "duck",
    .meaning = "n. 鸭子；鸭肉；（英）宝贝儿；零分vi. 闪避；没入水中vt. 躲避；猛按…入水n. (Duck)人名；(德、葡、匈)杜克"};

String_and_meaning String_and_meaning_due = {
    .string = "due",
    .meaning = "adj. 到期的；预期的；应付的；应得的；恰当的，适当的n. 应付款；应得之物adv. 正（置于方位词前）n. （Due）迪尤（人名）"};

String_and_meaning String_and_meaning_dull = {
    .string = "dull",
    .meaning = "adj. 钝的；迟钝的；无趣的；呆滞的；阴暗的vt. 使迟钝；使阴暗；缓和vi. 减少；变迟钝n. (Dull)人名；(罗、匈)杜尔；(柬)杜；(英)达尔"};

String_and_meaning String_and_meaning_dumb = {
    .string = "dumb",
    .meaning = "adj. 哑的，无说话能力的；不说话的，无声音的"};

String_and_meaning String_and_meaning_dump = {
    .string = "dump",
    .meaning = "vt.倾倒(垃圾),倾卸n.堆存处"};

String_and_meaning String_and_meaning_duplicate = {
    .string = "duplicate",
    .meaning = "vt. 复制；使加倍n. 副本；复制品adj. 复制的；二重的vi. 复制；重复"};

String_and_meaning String_and_meaning_durable = {
    .string = "durable",
    .meaning = "adj. 耐用的，持久的n. 耐用品"};

String_and_meaning String_and_meaning_duration = {
    .string = "duration",
    .meaning = "n. 持续，持续的时间，期间；音长，音延"};

String_and_meaning String_and_meaning_during = {
    .string = "during",
    .meaning = "prep. 在…...的期间；在......期间的某个时候n. (During) （美、瑞、英）迪兰（人名）"};

String_and_meaning String_and_meaning_dusk = {
    .string = "dusk",
    .meaning = "n. 黄昏，薄暮；幽暗，昏暗adj. 微暗的vt. 使变微暗vi. 变微暗"};

String_and_meaning String_and_meaning_dust = {
    .string = "dust",
    .meaning = "n. 灰尘；尘埃；尘土vt. 撒；拂去灰尘vi. 拂去灰尘；化为粉末n. (Dust)人名；(德、俄)杜斯特"};

String_and_meaning String_and_meaning_duty = {
    .string = "duty",
    .meaning = "n. 责任；[税收] 关税；职务n. (Duty)人名；(英)迪蒂"};

String_and_meaning String_and_meaning_dwell = {
    .string = "dwell",
    .meaning = "vi. 居住；存在于；细想某事"};

String_and_meaning String_and_meaning_dwelling = {
    .string = "dwelling",
    .meaning = "n. 住处；寓所v. 居住（dwell的现在分词）"};

String_and_meaning String_and_meaning_dye = {
    .string = "dye",
    .meaning = "n. 染料；染色v. 染；把……染上颜色；被染色n. (Dye) （美、法）戴伊（人名）"};

String_and_meaning String_and_meaning_dying = {
    .string = "dying",
    .meaning = "adj.垂死的"};

String_and_meaning String_and_meaning_dynamic = {
    .string = "dynamic",
    .meaning = "adj. 动态的；动力的；动力学的；有活力的n. 动态；动力"};

String_and_meaning String_and_meaning_each = {
    .string = "each",
    .meaning = "det. （两个或两个以上的人或物中）各自pron. （两个或两个以上的人或物中）每个adv. 每个地adj. 各自的"};

String_and_meaning String_and_meaning_eager = {
    .string = "eager",
    .meaning = "adj. 渴望的；热切的；热心的n. (Eager)人名；(英)伊格"};

String_and_meaning String_and_meaning_eagle = {
    .string = "eagle",
    .meaning = "n. 鹰；鹰状标饰n. (Eagle)人名；(英)伊格尔"};

String_and_meaning String_and_meaning_ear = {
    .string = "ear",
    .meaning = "n. 耳朵；穗；听觉；倾听vi. （美俚）听见；抽穗n. (Ear)人名；(柬)伊"};

String_and_meaning String_and_meaning_early = {
    .string = "early",
    .meaning = "adj. 早期的；早熟的adv. 提早；在初期n. (Early)人名；(英)厄尔利"};

String_and_meaning String_and_meaning_earn = {
    .string = "earn",
    .meaning = "vt. 赚，赚得；获得，挣得；使得到；博得n. (Earn)人名；(泰)炎"};

String_and_meaning String_and_meaning_earnest = {
    .string = "earnest",
    .meaning = "adj. 认真的，热心的；重要的n. 认真；定金；诚挚n. (Earnest)人名；(英)欧内斯特"};

String_and_meaning String_and_meaning_earnings = {
    .string = "earnings",
    .meaning = "n. 收入"};

String_and_meaning String_and_meaning_earth = {
    .string = "earth",
    .meaning = "n. 地球；地表，陆地；土地，土壤；尘事，俗事；兽穴vt. 把（电线）[电] 接地；盖（土）；追赶入洞穴vi. 躲进地洞"};

String_and_meaning String_and_meaning_earthquake = {
    .string = "earthquake",
    .meaning = "n. 地震；大动荡"};

String_and_meaning String_and_meaning_ease = {
    .string = "ease",
    .meaning = "n. 容易；舒适；安逸v. 减轻，缓解；小心缓缓地移动；使容易；放松；（使）贬值；（股票价格、利率等）下降，下跌"};

String_and_meaning String_and_meaning_easily = {
    .string = "easily",
    .meaning = "adv. 容易地；无疑地"};

String_and_meaning String_and_meaning_east = {
    .string = "east",
    .meaning = "n.东方,东,东部地区adj.东方的,从向东来的adv.在东方,向东方,朝东方"};

String_and_meaning String_and_meaning_easter = {
    .string = "easter",
    .meaning = "n. 复活节"};

String_and_meaning String_and_meaning_eastern = {
    .string = "eastern",
    .meaning = "adj. 东方的；朝东的；东洋的n. 东方人；（美国）东部地区的人"};

String_and_meaning String_and_meaning_easy = {
    .string = "easy",
    .meaning = "adj. 容易的；舒适的adv. 不费力地，从容地vi. 停止划桨vt. 发出停划命令"};

String_and_meaning String_and_meaning_eat = {
    .string = "eat",
    .meaning = "vt. 吃，喝；腐蚀；烦扰vi. 进食；腐蚀，侵蚀"};

String_and_meaning String_and_meaning_eccentric = {
    .string = "eccentric",
    .meaning = "adj. 古怪的，反常的n. 古怪的人"};

String_and_meaning String_and_meaning_echo = {
    .string = "echo",
    .meaning = "vt. 反射；重复vi. 随声附和；发出回声n. 回音；效仿"};

String_and_meaning String_and_meaning_eclipse = {
    .string = "eclipse",
    .meaning = "n.食,日蚀,月蚀,蒙蔽,衰落vt.引起日蚀,引起月蚀,超越,使黯然失色"};

String_and_meaning String_and_meaning_ecology = {
    .string = "ecology",
    .meaning = "n. 生态学；社会生态学"};

String_and_meaning String_and_meaning_economic = {
    .string = "economic",
    .meaning = "adj. 经济的，经济上的；经济学的"};

String_and_meaning String_and_meaning_economical = {
    .string = "economical",
    .meaning = "adj. 经济的；节约的；合算的"};

String_and_meaning String_and_meaning_economics = {
    .string = "economics",
    .meaning = "n. 经济学；国家的经济状况"};

String_and_meaning String_and_meaning_economy = {
    .string = "economy",
    .meaning = "n. 经济；节约；理财n. (Economy)人名；(英)伊科诺米"};

String_and_meaning String_and_meaning_edge = {
    .string = "edge",
    .meaning = "n. 边缘；优势；刀刃；锋利vt. 使锐利；将…开刃；给…加上边vi. 缓缓移动；侧着移动n. (Edge)人名；(英)埃奇"};

String_and_meaning String_and_meaning_edible = {
    .string = "edible",
    .meaning = "adj. 可食用的n. 食品；食物"};

String_and_meaning String_and_meaning_edit = {
    .string = "edit",
    .meaning = "vt. 编辑；校订n. 编辑工作n. (Edit)人名；(罗、匈)埃迪特"};

String_and_meaning String_and_meaning_edition = {
    .string = "edition",
    .meaning = "n. 版本；版次；集"};

String_and_meaning String_and_meaning_editor = {
    .string = "editor",
    .meaning = "n. 编者，编辑；社论撰写人；编辑装置"};

String_and_meaning String_and_meaning_editorial = {
    .string = "editorial",
    .meaning = "adj. 编辑的，主编的；社论的n. （报刊）社论，（美国电台）评论"};

String_and_meaning String_and_meaning_educate = {
    .string = "educate",
    .meaning = "vt. 教育；培养；训练vi. 教育；训练"};

String_and_meaning String_and_meaning_education = {
    .string = "education",
    .meaning = "n. 教育；培养；教育学"};

String_and_meaning String_and_meaning_effect = {
    .string = "effect",
    .meaning = "n. 影响；效果；作用vt. 产生；达到目的"};

String_and_meaning String_and_meaning_effective = {
    .string = "effective",
    .meaning = "adj. 有效的，起作用的；实际的，实在的；给人深刻印象"};

String_and_meaning String_and_meaning_efficiency = {
    .string = "efficiency",
    .meaning = "n. 效率；效能；功效"};

String_and_meaning String_and_meaning_efficient = {
    .string = "efficient",
    .meaning = "adj. 有效率的；有能力的；生效的"};

String_and_meaning String_and_meaning_effort = {
    .string = "effort",
    .meaning = "n. 努力；成就"};

String_and_meaning String_and_meaning_egg = {
    .string = "egg",
    .meaning = "n. 蛋；卵子；家伙；鸡蛋vt. 煽动；怂恿n. (Egg)人名；(法、英)埃格"};

String_and_meaning String_and_meaning_ego = {
    .string = "ego",
    .meaning = "n. 自我；自负；自我意识n. (Ego)人名；(日)依怙 (姓)；(法)埃戈"};

String_and_meaning String_and_meaning_eight = {
    .string = "eight",
    .meaning = "num. 八；八个；第八；八岁；八点adj. 八的n. 八人划船队"};

String_and_meaning String_and_meaning_eighteen = {
    .string = "eighteen",
    .meaning = "n. 十八，十八个adj. 十八个的，十八的num. 十八"};

String_and_meaning String_and_meaning_eighth = {
    .string = "eighth",
    .meaning = "adj. 第八的；八分之一的num. 第八；八分之一"};

String_and_meaning String_and_meaning_eighty = {
    .string = "eighty",
    .meaning = "n. 八十；八十岁；八十年代adj. 八十的，八十个的；八十岁的num. 八十"};

String_and_meaning String_and_meaning_either = {
    .string = "either",
    .meaning = "adj.任一的,(两方中的)每一方的 pron.任一,随便任一个 conj.或者,也"};

String_and_meaning String_and_meaning_eject = {
    .string = "eject",
    .meaning = "vt. 喷射；驱逐，逐出"};

String_and_meaning String_and_meaning_elaborate = {
    .string = "elaborate",
    .meaning = "adj. 精心制作的；详尽的；煞费苦心的vt. 精心制作；详细阐述；从简单成分合成（复杂有机物）vi. 详细描述；变复杂"};

String_and_meaning String_and_meaning_elapse = {
    .string = "elapse",
    .meaning = "vi. 消逝；时间过去n. 流逝；时间的过去"};

String_and_meaning String_and_meaning_elastic = {
    .string = "elastic",
    .meaning = "adj. 有弹性的；灵活的；易伸缩的n. 松紧带；橡皮圈"};

String_and_meaning String_and_meaning_elbow = {
    .string = "elbow",
    .meaning = "n. 肘部；弯头；扶手vt. 推挤；用手肘推开"};

String_and_meaning String_and_meaning_elder = {
    .string = "elder",
    .meaning = "n.年长者,老人,父辈adj.年长的,资格老的,"};

String_and_meaning String_and_meaning_elderly = {
    .string = "elderly",
    .meaning = "adj. 上了年纪的；过了中年的；稍老的"};

String_and_meaning String_and_meaning_elect = {
    .string = "elect",
    .meaning = "vt.选举,推选v.选择,作出选择,选举,选举,选举"};

String_and_meaning String_and_meaning_election = {
    .string = "election",
    .meaning = "n. 选举；当选；选择权；上帝的选拔"};

String_and_meaning String_and_meaning_electric = {
    .string = "electric",
    .meaning = "adj. 电的；电动的；发电的；导电的；令人震惊的n. 电；电气车辆；带电体"};

String_and_meaning String_and_meaning_electrical = {
    .string = "electrical",
    .meaning = "adj. 有关电的；电气科学的"};

String_and_meaning String_and_meaning_electrician = {
    .string = "electrician",
    .meaning = "n. 电工；电气技师"};

String_and_meaning String_and_meaning_electricity = {
    .string = "electricity",
    .meaning = "n. 电力；电流；强烈的紧张情绪"};

String_and_meaning String_and_meaning_electron = {
    .string = "electron",
    .meaning = "n. 电子"};

String_and_meaning String_and_meaning_electronic = {
    .string = "electronic",
    .meaning = "adj. 电子的n. 电子电路；电子器件"};

String_and_meaning String_and_meaning_electronics = {
    .string = "electronics",
    .meaning = "n. 电子学；电子工业"};

String_and_meaning String_and_meaning_elegant = {
    .string = "elegant",
    .meaning = "adj. 高雅的，优雅的；讲究的；简炼的；简洁的"};

String_and_meaning String_and_meaning_element = {
    .string = "element",
    .meaning = "n. 元素；要素；原理；成分；自然环境n. (Element)人名；(德)埃勒门特；(英)埃利门特"};

String_and_meaning String_and_meaning_elementary = {
    .string = "elementary",
    .meaning = "adj. 基本的；初级的；[化学] 元素的"};

String_and_meaning String_and_meaning_elephant = {
    .string = "elephant",
    .meaning = "n. 象；大号图画纸"};

String_and_meaning String_and_meaning_elevate = {
    .string = "elevate",
    .meaning = "vt. 提升；举起；振奋情绪等；提升…的职位"};

String_and_meaning String_and_meaning_elevator = {
    .string = "elevator",
    .meaning = "n. 电梯；升降机；升降舵；起卸机"};

String_and_meaning String_and_meaning_eleven = {
    .string = "eleven",
    .meaning = "n. 十一；十一个adj. 十一的；十一个的num. 十一；十一个"};

String_and_meaning String_and_meaning_eleventh = {
    .string = "eleventh",
    .meaning = "num. 第十一；十一和弦adj. 第十一（个）的n. 十一分之一"};

String_and_meaning String_and_meaning_elicit = {
    .string = "elicit",
    .meaning = "vt. 抽出，引出；引起"};

String_and_meaning String_and_meaning_eligible = {
    .string = "eligible",
    .meaning = "adj. 合格的，合适的；符合条件的；有资格当选的n. 合格者；适任者；有资格者"};

String_and_meaning String_and_meaning_eliminate = {
    .string = "eliminate",
    .meaning = "vt. 消除；排除"};

String_and_meaning String_and_meaning_elimination = {
    .string = "elimination",
    .meaning = "n. 消除；淘汰；除去"};

String_and_meaning String_and_meaning_elite = {
    .string = "elite",
    .meaning = "n. 精英；精华；中坚分子"};

String_and_meaning String_and_meaning_eloquent = {
    .string = "eloquent",
    .meaning = "adj. 意味深长的；雄辩的，有口才的；有说服力的；动人的"};

String_and_meaning String_and_meaning_else = {
    .string = "else",
    .meaning = "adv. 其他；否则；另外adj. 别的；其他的n. (Else)人名；(英)埃尔斯；(德)埃尔泽；(芬、丹)埃尔塞"};

String_and_meaning String_and_meaning_elsewhere = {
    .string = "elsewhere",
    .meaning = "adv. 在别处；到别处"};

String_and_meaning String_and_meaning_embark = {
    .string = "embark",
    .meaning = "v. 上船（或飞机）；（使）上船（或登记）；从事"};

String_and_meaning String_and_meaning_embarrass = {
    .string = "embarrass",
    .meaning = "v. （尤指在社交场合）使窘迫，使尴尬；使困惑；使为难；使复杂化；陷入经济困难；妨碍（人、移动、行动）"};

String_and_meaning String_and_meaning_embassy = {
    .string = "embassy",
    .meaning = "n. 大使馆；大使馆全体人员"};

String_and_meaning String_and_meaning_embed = {
    .string = "embed",
    .meaning = "vt. 栽种；使嵌入，使插入；使深留脑中"};

String_and_meaning String_and_meaning_embody = {
    .string = "embody",
    .meaning = "vt. 体现，使具体化；具体表达n. (Embody)人名；(英)恩博迪"};

String_and_meaning String_and_meaning_embrace = {
    .string = "embrace",
    .meaning = "vt. 拥抱；欣然采纳；信奉；包含vi. 拥抱n. 拥抱；采纳"};

String_and_meaning String_and_meaning_emerge = {
    .string = "emerge",
    .meaning = "vi. 浮现；摆脱；暴露"};

String_and_meaning String_and_meaning_emergency = {
    .string = "emergency",
    .meaning = "n. 紧急情况；突发事件；非常时刻adj. 紧急的；备用的"};

String_and_meaning String_and_meaning_emit = {
    .string = "emit",
    .meaning = "vt. 发出，放射；发行；发表"};

String_and_meaning String_and_meaning_emotion = {
    .string = "emotion",
    .meaning = "n. 情感；情绪"};

String_and_meaning String_and_meaning_emotional = {
    .string = "emotional",
    .meaning = "adj. 情绪的；易激动的；感动人的"};

String_and_meaning String_and_meaning_emperor = {
    .string = "emperor",
    .meaning = "n. 皇帝，君主"};

String_and_meaning String_and_meaning_emphasis = {
    .string = "emphasis",
    .meaning = "n. 重点；强调；加强语气"};

String_and_meaning String_and_meaning_emphasize = {
    .string = "emphasize",
    .meaning = "vt. 强调，着重"};

String_and_meaning String_and_meaning_empire = {
    .string = "empire",
    .meaning = "n. 帝国；帝王统治，君权n. (Empire)人名；(法)昂皮尔"};

String_and_meaning String_and_meaning_empirical = {
    .string = "empirical",
    .meaning = "adj. 经验主义的，完全根据经验的；实证的"};

String_and_meaning String_and_meaning_employ = {
    .string = "employ",
    .meaning = "vt. 使用，采用；雇用；使忙于，使从事于n. 使用；雇用"};

String_and_meaning String_and_meaning_employee = {
    .string = "employee",
    .meaning = "n. 雇员；从业员工"};

String_and_meaning String_and_meaning_employer = {
    .string = "employer",
    .meaning = "n. 雇主，老板"};

String_and_meaning String_and_meaning_employment = {
    .string = "employment",
    .meaning = "n. 使用；职业；雇用"};

String_and_meaning String_and_meaning_empty = {
    .string = "empty",
    .meaning = "adj. 空的；无意义的；无知的；徒劳的vt. 使失去；使......成为空的vi. 成为空的；流空n. 空车；空的东西"};

String_and_meaning String_and_meaning_enable = {
    .string = "enable",
    .meaning = "v. 使能够；使成为可能；授予权利或方法；（计算机）启动"};

String_and_meaning String_and_meaning_enclose = {
    .string = "enclose",
    .meaning = "vt. 围绕；装入；放入封套"};

String_and_meaning String_and_meaning_enclosure = {
    .string = "enclosure",
    .meaning = "n. 附件；围墙；围场"};

String_and_meaning String_and_meaning_encounter = {
    .string = "encounter",
    .meaning = "v. 遭遇；邂逅；遇到n. 遭遇；偶然碰见"};

String_and_meaning String_and_meaning_encourage = {
    .string = "encourage",
    .meaning = "vt. 鼓励，怂恿；激励；支持"};

String_and_meaning String_and_meaning_end = {
    .string = "end",
    .meaning = "n. 结束；目标；尽头；末端；死亡vi. 结束，终止；终结vt. 结束，终止；终结n. (End)人名；(英、德)恩德"};

String_and_meaning String_and_meaning_endeavor = {
    .string = "endeavor",
    .meaning = "n. 努力；尽力（等于 endeavour）vi. 努力；尽力（等于 endeavour）vt. 努力；尽力（等于 endeavour）"};

String_and_meaning String_and_meaning_ending = {
    .string = "ending",
    .meaning = "n. 结局；结尾；末梢；词尾v. 结束；终止（end 的现在分词）"};

String_and_meaning String_and_meaning_endless = {
    .string = "endless",
    .meaning = "adj. 无止境的；连续的；环状的；漫无目的的"};

String_and_meaning String_and_meaning_endow = {
    .string = "endow",
    .meaning = "vt. 赋予；捐赠；天生具有"};

String_and_meaning String_and_meaning_endurance = {
    .string = "endurance",
    .meaning = "n. 忍耐力；耐久性；持续时间"};

String_and_meaning String_and_meaning_endure = {
    .string = "endure",
    .meaning = "vt. 忍耐；容忍vi. 忍耐；持续"};

String_and_meaning String_and_meaning_enemy = {
    .string = "enemy",
    .meaning = "n. 敌人，仇敌；敌军adj. 敌人的，敌方的"};

String_and_meaning String_and_meaning_energetic = {
    .string = "energetic",
    .meaning = "adj. 精力充沛的；积极的；有力的"};

String_and_meaning String_and_meaning_energy = {
    .string = "energy",
    .meaning = "n. [物] 能量；精力；活力；精神"};

String_and_meaning String_and_meaning_enforce = {
    .string = "enforce",
    .meaning = "vt. 实施，执行；强迫，强制"};

String_and_meaning String_and_meaning_engage = {
    .string = "engage",
    .meaning = "vt. 吸引，占用；使参加；雇佣；使订婚；预定；攻击，与……开战；使啮合vi. 从事；参与；答应，保证"};

String_and_meaning String_and_meaning_engagement = {
    .string = "engagement",
    .meaning = "n. 婚约；约会；交战；诺言；进场（游戏术语）n. 参与度（指用户点赞、转发、评论、下载文档、观看视频、咨询等交互行为）"};

String_and_meaning String_and_meaning_engine = {
    .string = "engine",
    .meaning = "n. 引擎，发动机；机车，火车头；工具"};

String_and_meaning String_and_meaning_engineer = {
    .string = "engineer",
    .meaning = "n. 工程师；工兵；火车司机vt. 设计；策划；精明地处理vi. 设计；建造"};

String_and_meaning String_and_meaning_engineering = {
    .string = "engineering",
    .meaning = "n. 工程，工程学v. 设计；管理（engineer的ing形式）；建造"};

String_and_meaning String_and_meaning_England = {
    .string = "England",
    .meaning = "n. 英格兰"};

String_and_meaning String_and_meaning_English = {
    .string = "English",
    .meaning = "adj. 英格兰人的；英格兰的；英文的n. 英语；英格兰人；（台球中的）侧旋v. 把……译成英语n. （美、加、英、澳）英格利希（人名）"};

String_and_meaning String_and_meaning_enhance = {
    .string = "enhance",
    .meaning = "vt. 提高；加强；增加"};

String_and_meaning String_and_meaning_enjoy = {
    .string = "enjoy",
    .meaning = "vt. 欣赏，享受；喜爱；使过得快活"};

String_and_meaning String_and_meaning_enlarge = {
    .string = "enlarge",
    .meaning = "vi. 扩大；放大；详述vt. 扩大；使增大；扩展"};

String_and_meaning String_and_meaning_enlighten = {
    .string = "enlighten",
    .meaning = "vt. 启发，启蒙；教导，开导；照耀"};

String_and_meaning String_and_meaning_enormous = {
    .string = "enormous",
    .meaning = "adj. 庞大的，巨大的；凶暴的，极恶的"};

String_and_meaning String_and_meaning_enough = {
    .string = "enough",
    .meaning = "adv. 足够地，充足地n. 很多；充足adj. 充足的int. 够了！"};

String_and_meaning String_and_meaning_enrich = {
    .string = "enrich",
    .meaning = "vt. 使充实；使肥沃；使富足n. (Enrich)人名；(西)恩里奇"};

String_and_meaning String_and_meaning_enroll = {
    .string = "enroll",
    .meaning = "vt. 登记；使加入；把...记入名册；使入伍vi. 参加；登记；注册；记入名册"};

String_and_meaning String_and_meaning_ensue = {
    .string = "ensue",
    .meaning = "v. 接着发生，因而发生；追求"};

String_and_meaning String_and_meaning_ensure = {
    .string = "ensure",
    .meaning = "vt. 保证，确保；使安全"};

String_and_meaning String_and_meaning_entail = {
    .string = "entail",
    .meaning = "vt. 使需要，必需；承担；遗传给；蕴含n. 引起；需要；继承"};

String_and_meaning String_and_meaning_enter = {
    .string = "enter",
    .meaning = "vt. 进入；开始；参加vi. 参加，登场；进去n. [计] 输入；回车n. (Enter)人名；(英)恩特"};

String_and_meaning String_and_meaning_enterprise = {
    .string = "enterprise",
    .meaning = "n. 企业；事业；进取心；事业心"};

String_and_meaning String_and_meaning_entertain = {
    .string = "entertain",
    .meaning = "vt. 娱乐；招待；怀抱；容纳vi. 款待"};

String_and_meaning String_and_meaning_entertainment = {
    .string = "entertainment",
    .meaning = "n. 娱乐；消遣；款待"};

String_and_meaning String_and_meaning_enthusiasm = {
    .string = "enthusiasm",
    .meaning = "n. 热心，热忱，热情"};

String_and_meaning String_and_meaning_enthusiastic = {
    .string = "enthusiastic",
    .meaning = "adj. 热情的；热心的；狂热的"};

String_and_meaning String_and_meaning_entire = {
    .string = "entire",
    .meaning = "adj. 全部的，整个的；全体的n. (Entire)人名；(英)恩泰尔"};

String_and_meaning String_and_meaning_entitle = {
    .string = "entitle",
    .meaning = "v. 给（某人）权利（或资格）；给……题名；称呼"};

String_and_meaning String_and_meaning_entity = {
    .string = "entity",
    .meaning = "n. 实体；存在"};

String_and_meaning String_and_meaning_entrance = {
    .string = "entrance",
    .meaning = "n. 入口；进入vt. 使出神，使入迷"};

String_and_meaning String_and_meaning_entrepreneur = {
    .string = "entrepreneur",
    .meaning = "n. 企业家；承包人；主办者"};

String_and_meaning String_and_meaning_entry = {
    .string = "entry",
    .meaning = "n. 进入；入口；条目；登记；报关手续；对土地的侵占"};

String_and_meaning String_and_meaning_envelope = {
    .string = "envelope",
    .meaning = "n. 信封，封皮；包膜；[天] 包层；包迹"};

String_and_meaning String_and_meaning_environment = {
    .string = "environment",
    .meaning = "n. 环境，外界"};

String_and_meaning String_and_meaning_envisage = {
    .string = "envisage",
    .meaning = "v. 设想，想像；正视，面对"};

String_and_meaning String_and_meaning_envy = {
    .string = "envy",
    .meaning = "n. 嫉妒，妒忌；羡慕vt. 嫉妒，妒忌；羡慕vi. 感到妒忌；显示出妒忌"};

String_and_meaning String_and_meaning_episode = {
    .string = "episode",
    .meaning = "n. 一段经历；插曲；一段情节；（电视连续剧或广播的）一集；插话；有趣的事件"};

String_and_meaning String_and_meaning_epoch = {
    .string = "epoch",
    .meaning = "n. [地质] 世；新纪元；新时代；时间上的一点"};

String_and_meaning String_and_meaning_equal = {
    .string = "equal",
    .meaning = "adj. 平等的；相等的；胜任的vt. 等于；比得上n. 对手；匹敌；同辈；相等的事物"};

String_and_meaning String_and_meaning_equality = {
    .string = "equality",
    .meaning = "n. 平等；相等；[数] 等式"};

String_and_meaning String_and_meaning_equation = {
    .string = "equation",
    .meaning = "n. 方程式，等式；相等；[化学] 反应式"};

String_and_meaning String_and_meaning_equator = {
    .string = "equator",
    .meaning = "n. 赤道"};

String_and_meaning String_and_meaning_equilibrium = {
    .string = "equilibrium",
    .meaning = "n. 均衡；平静；保持平衡的能力"};

String_and_meaning String_and_meaning_equip = {
    .string = "equip",
    .meaning = "vt. 装备，配备"};

String_and_meaning String_and_meaning_equipment = {
    .string = "equipment",
    .meaning = "n. 设备，装备；器材"};

String_and_meaning String_and_meaning_equivalent = {
    .string = "equivalent",
    .meaning = "adj. （在价值、数量等方面）相等的；等价的；等效的；等量的；同意义的n. 对等的人（或事物）；当量"};

String_and_meaning String_and_meaning_era = {
    .string = "era",
    .meaning = "n. 时代；年代；纪元n. (Era)人名；(意、芬、印)埃拉"};

String_and_meaning String_and_meaning_erect = {
    .string = "erect",
    .meaning = "adj. 竖立的，笔直的；因性刺激而勃起的；（毛发）竖起的v. （使）竖立；建造；创立；安装；勃起"};

String_and_meaning String_and_meaning_erosion = {
    .string = "erosion",
    .meaning = "n. 侵蚀，腐蚀"};

String_and_meaning String_and_meaning_erroneous = {
    .string = "erroneous",
    .meaning = "adj. 错误的；不正确的"};

String_and_meaning String_and_meaning_error = {
    .string = "error",
    .meaning = "n. 误差；错误；过失"};

String_and_meaning String_and_meaning_erupt = {
    .string = "erupt",
    .meaning = "vi. 爆发；喷出；发疹；长牙vt. 爆发；喷出"};

String_and_meaning String_and_meaning_escape = {
    .string = "escape",
    .meaning = "n.逃,逃亡,溢出设备,出口,逃跑,[植]野生vi.逃脱,避开,溜走vt.逃避,避免,被忘掉"};

String_and_meaning String_and_meaning_escort = {
    .string = "escort",
    .meaning = "n. 陪同；护航舰；护卫队；护送者vt. 护送；陪同；为…护航"};

String_and_meaning String_and_meaning_especially = {
    .string = "especially",
    .meaning = "adv. 特别；尤其；格外"};

String_and_meaning String_and_meaning_essay = {
    .string = "essay",
    .meaning = "n. 散文；试图；随笔vt. 尝试；对…做试验"};

String_and_meaning String_and_meaning_essence = {
    .string = "essence",
    .meaning = "n. 本质，实质；精华；香精n. (Essence)人名；(英)埃森丝"};

String_and_meaning String_and_meaning_essential = {
    .string = "essential",
    .meaning = "adj. 基本的；必要的；本质的；精华的n. 本质；要素；要点；必需品"};

String_and_meaning String_and_meaning_establish = {
    .string = "establish",
    .meaning = "v. 建立，创立；确立；获得接受；查实，证实"};

String_and_meaning String_and_meaning_establishment = {
    .string = "establishment",
    .meaning = "n. 确立，制定；公司；设施"};

String_and_meaning String_and_meaning_estate = {
    .string = "estate",
    .meaning = "n. 房地产；财产；身份"};

String_and_meaning String_and_meaning_esthetic = {
    .string = "esthetic",
    .meaning = "adj. 审美的（等于aesthetic）；感觉的n. 美学；审美家；唯美主义者"};

String_and_meaning String_and_meaning_estimate = {
    .string = "estimate",
    .meaning = "n. 估计，估价；判断，看法v. 估计，估量；判断，评价"};

String_and_meaning String_and_meaning_eternal = {
    .string = "eternal",
    .meaning = "adj. 永恒的；不朽的"};

String_and_meaning String_and_meaning_ethics = {
    .string = "ethics",
    .meaning = "n. 伦理学；伦理观；道德标准"};

String_and_meaning String_and_meaning_ethnic = {
    .string = "ethnic",
    .meaning = "adj. 种族的；人种的"};

String_and_meaning String_and_meaning_Europe = {
    .string = "Europe",
    .meaning = "n. 欧洲"};

String_and_meaning String_and_meaning_European = {
    .string = "European",
    .meaning = "adj. 欧洲的；欧洲人的；与欧盟有关的n. 欧洲人；欧洲人的后裔；欧盟成员国国民"};

String_and_meaning String_and_meaning_evaluate = {
    .string = "evaluate",
    .meaning = "vt. 评价；估价；求…的值vi. 评价；估价"};

String_and_meaning String_and_meaning_evaporate = {
    .string = "evaporate",
    .meaning = "vt. 使……蒸发；使……脱水；使……消失vi. 蒸发，挥发；消失，失踪"};

String_and_meaning String_and_meaning_eve = {
    .string = "eve",
    .meaning = "n. 夏娃； 前夕；傍晚；重大事件关头"};

String_and_meaning String_and_meaning_Eve = {
    .string = "Eve",
    .meaning = "n. 夏娃； 前夕；傍晚；重大事件关头"};

String_and_meaning String_and_meaning_even = {
    .string = "even",
    .meaning = "adj.平的,平滑的,偶数的,一致的,平静的,恰好的,平均的,连贯的adv.[加强语气]甚至(...也),连...都,即使,恰好,正当vt.使平坦,使相等vi.变平,相等n.偶数,偶校验"};

String_and_meaning String_and_meaning_evening = {
    .string = "evening",
    .meaning = "n. 晚上；傍晚；（联欢性的）晚会；后期adj. 在晚上的；为晚上的；晚上用的int. 晚上好（等于good evening）"};

String_and_meaning String_and_meaning_event = {
    .string = "event",
    .meaning = "n. 事件，大事；赛事；项目；结果"};

String_and_meaning String_and_meaning_eventually = {
    .string = "eventually",
    .meaning = "adv. 最后，终于"};

String_and_meaning String_and_meaning_ever = {
    .string = "ever",
    .meaning = "adv. 永远；曾经；究竟n. (Ever)人名；(英)埃弗；(俄)叶韦尔；(西、法)埃韦尔"};

String_and_meaning String_and_meaning_every = {
    .string = "every",
    .meaning = "adj. 每一的，每个的；每隔……的；（用于强调）所有可能的，完全可能的n. (Every) （美、荷、瑞典）埃夫里（人名）"};

String_and_meaning String_and_meaning_everybody = {
    .string = "everybody",
    .meaning = "pron. 每个人，人人"};

String_and_meaning String_and_meaning_everyday = {
    .string = "everyday",
    .meaning = "adj. 每天的，日常的n. 平时；寻常日子"};

String_and_meaning String_and_meaning_everyone = {
    .string = "everyone",
    .meaning = "pron. 每个人；人人"};

String_and_meaning String_and_meaning_everything = {
    .string = "everything",
    .meaning = "pron. 每件事物，（有关的）一切，万事；形势，情况；最重要的东西n. (Everything) （印、美、澳）艾维辛（人名）"};

String_and_meaning String_and_meaning_everywhere = {
    .string = "everywhere",
    .meaning = "adv. 到处n. 每个地方"};

String_and_meaning String_and_meaning_evidence = {
    .string = "evidence",
    .meaning = "n. 证据，证明；迹象；明显vt. 证明"};

String_and_meaning String_and_meaning_evident = {
    .string = "evident",
    .meaning = "adj. 明显的；明白的"};

String_and_meaning String_and_meaning_evil = {
    .string = "evil",
    .meaning = "adj. 邪恶的；不幸的；有害的；讨厌的n. 罪恶，邪恶；不幸"};

String_and_meaning String_and_meaning_evoke = {
    .string = "evoke",
    .meaning = "vt. 引起，唤起；博得"};

String_and_meaning String_and_meaning_evolution = {
    .string = "evolution",
    .meaning = "n. 演变；进化论；进展"};

String_and_meaning String_and_meaning_evolve = {
    .string = "evolve",
    .meaning = "vt. 发展；进化；使逐步形成；推断出vi. 发展，进展；进化；逐步形成"};

String_and_meaning String_and_meaning_exact = {
    .string = "exact",
    .meaning = "adj. 准确的，精密的；精确的vt. 要求；强求；急需vi. 勒索钱财"};

String_and_meaning String_and_meaning_exactly = {
    .string = "exactly",
    .meaning = "adv. 恰好地；正是；精确地；正确地"};

String_and_meaning String_and_meaning_exaggerate = {
    .string = "exaggerate",
    .meaning = "vt. 使扩大；使增大vi. 夸大；夸张"};

String_and_meaning String_and_meaning_exam = {
    .string = "exam",
    .meaning = "n. 考试；测验"};

String_and_meaning String_and_meaning_examination = {
    .string = "examination",
    .meaning = "n. 考试；检查；查问"};

String_and_meaning String_and_meaning_examine = {
    .string = "examine",
    .meaning = "vt. 检查；调查； 检测；考试vi. 检查；调查"};

String_and_meaning String_and_meaning_example = {
    .string = "example",
    .meaning = "n. 例子；榜样vt. 作为…的例子；为…做出榜样vi. 举例"};

String_and_meaning String_and_meaning_exceed = {
    .string = "exceed",
    .meaning = "vt. 超过；胜过vi. 超过其他"};

String_and_meaning String_and_meaning_exceedingly = {
    .string = "exceedingly",
    .meaning = "adv. 非常；极其；极度地；极端"};

String_and_meaning String_and_meaning_excellent = {
    .string = "excellent",
    .meaning = "adj. 卓越的；极好的；杰出的"};

String_and_meaning String_and_meaning_except = {
    .string = "except",
    .meaning = "prep. 除……之外conj. 只是；除非；除……之外；要不是由于v. 不计，把……除外；反对"};

String_and_meaning String_and_meaning_exception = {
    .string = "exception",
    .meaning = "n. 例外；异议"};

String_and_meaning String_and_meaning_exceptional = {
    .string = "exceptional",
    .meaning = "adj. 异常的，例外的n. 超常的学生"};

String_and_meaning String_and_meaning_excess = {
    .string = "excess",
    .meaning = "n. 超过，超额；过度，过量；无节制adj. 额外的，过量的；附加的"};

String_and_meaning String_and_meaning_excessive = {
    .string = "excessive",
    .meaning = "adj. 过多的，极度的；过分的"};

String_and_meaning String_and_meaning_exchange = {
    .string = "exchange",
    .meaning = "n. 交换；交流；交易所；兑换vt. 交换；交易；兑换vi. 交换；交易；兑换"};

String_and_meaning String_and_meaning_excite = {
    .string = "excite",
    .meaning = "v. 使兴奋；刺激，使紧张不安；激起，引发；激发，激励；激发（性欲）；使……活动"};

String_and_meaning String_and_meaning_exciting = {
    .string = "exciting",
    .meaning = "adj. 令人兴奋的；使人激动的v. 激动；刺激（excite的ing形式）；唤起"};

String_and_meaning String_and_meaning_exclaim = {
    .string = "exclaim",
    .meaning = "vi. 呼喊，惊叫；大声叫嚷vt. 大声说出"};

String_and_meaning String_and_meaning_exclude = {
    .string = "exclude",
    .meaning = "vt. 排除；排斥；拒绝接纳；逐出"};

String_and_meaning String_and_meaning_exclusive = {
    .string = "exclusive",
    .meaning = "adj. 独有的；排外的；专一的n. 独家新闻；独家经营的项目；排外者"};

String_and_meaning String_and_meaning_exclusively = {
    .string = "exclusively",
    .meaning = "adv. 唯一地，专有地，排外地；作为唯一的（消息）来源"};

String_and_meaning String_and_meaning_excursion = {
    .string = "excursion",
    .meaning = "n. 偏移；远足；短程旅行；离题；游览，游览团"};

String_and_meaning String_and_meaning_excuse = {
    .string = "excuse",
    .meaning = "n. 借口；理由；拙劣样品；假条v. 原谅；为……申辩；准许……离开；给……免去；作为借口；请求宽恕"};

String_and_meaning String_and_meaning_execute = {
    .string = "execute",
    .meaning = "vt. 实行；执行；处死"};

String_and_meaning String_and_meaning_execution = {
    .string = "execution",
    .meaning = "n. 执行，实行；完成；死刑"};

String_and_meaning String_and_meaning_executive = {
    .string = "executive",
    .meaning = "adj. 经营管理的；有执行权的；高级的；供重要人物使用的n. 主管；行政领导；（政府的）行政部门；执行委员会"};

String_and_meaning String_and_meaning_exemplify = {
    .string = "exemplify",
    .meaning = "vt. 例证；例示"};

String_and_meaning String_and_meaning_exempt = {
    .string = "exempt",
    .meaning = "adj. 被免除（责任或义务）的，获豁免的v. 免除，豁免n. 被免除义务者（尤指被免税者）"};

String_and_meaning String_and_meaning_exercise = {
    .string = "exercise",
    .meaning = "n. 运动；练习；运用；操练；礼拜；典礼vt. 锻炼；练习；使用；使忙碌；使惊恐vi. 运动；练习"};

String_and_meaning String_and_meaning_exert = {
    .string = "exert",
    .meaning = "vt. 运用，发挥；施以影响"};

String_and_meaning String_and_meaning_exhaust = {
    .string = "exhaust",
    .meaning = "v. 使精疲力尽；耗尽；彻底探讨；排出（气体）n. 废气；排气管"};

String_and_meaning String_and_meaning_exhibit = {
    .string = "exhibit",
    .meaning = "vt. 展览；显示；提出（证据等）n. 展览品；证据；展示会vi. 展出；开展览会"};

String_and_meaning String_and_meaning_exhibition = {
    .string = "exhibition",
    .meaning = "n. 展览，显示；展览会；展览品"};

String_and_meaning String_and_meaning_exile = {
    .string = "exile",
    .meaning = "n. 流放，充军；放逐，被放逐者；流犯vt. 放逐，流放；使背井离乡"};

String_and_meaning String_and_meaning_exist = {
    .string = "exist",
    .meaning = "vi. 存在；生存；生活；继续存在"};

String_and_meaning String_and_meaning_existence = {
    .string = "existence",
    .meaning = "n. 存在，实在；生存，生活；存在物，实在物"};

String_and_meaning String_and_meaning_exit = {
    .string = "exit",
    .meaning = "n. 出口，通道；退场vi. 退出；离去"};

String_and_meaning String_and_meaning_exotic = {
    .string = "exotic",
    .meaning = "adj. 异国的；外来的；异国情调的"};

String_and_meaning String_and_meaning_expand = {
    .string = "expand",
    .meaning = "vt. 扩张；使膨胀；详述vi. 发展；张开，展开"};

String_and_meaning String_and_meaning_expansion = {
    .string = "expansion",
    .meaning = "n. 膨胀；阐述；扩张物"};

String_and_meaning String_and_meaning_expect = {
    .string = "expect",
    .meaning = "vt. 期望；指望；认为；预料vi. 期待；预期"};

String_and_meaning String_and_meaning_expectation = {
    .string = "expectation",
    .meaning = "n. 期待；预期；指望"};

String_and_meaning String_and_meaning_expedition = {
    .string = "expedition",
    .meaning = "n. 远征；探险队；迅速"};

String_and_meaning String_and_meaning_expel = {
    .string = "expel",
    .meaning = "vt. 驱逐；开除"};

String_and_meaning String_and_meaning_expend = {
    .string = "expend",
    .meaning = "vt. 花费；消耗；用光；耗尽"};

String_and_meaning String_and_meaning_expenditure = {
    .string = "expenditure",
    .meaning = "n. 支出，花费；经费，消费额"};

String_and_meaning String_and_meaning_expense = {
    .string = "expense",
    .meaning = "n. 损失，代价；消费；开支vt. 向…收取费用vi. 被花掉"};

String_and_meaning String_and_meaning_expensive = {
    .string = "expensive",
    .meaning = "adj. 昂贵的；花钱的"};

String_and_meaning String_and_meaning_experience = {
    .string = "experience",
    .meaning = "n. 经验；经历；体验vt. 经验；经历；体验"};

String_and_meaning String_and_meaning_experiment = {
    .string = "experiment",
    .meaning = "n. 实验，试验；尝试v. 尝试；试验；进行实验"};

String_and_meaning String_and_meaning_experimental = {
    .string = "experimental",
    .meaning = "adj. 实验的；根据实验的；试验性的"};

String_and_meaning String_and_meaning_expert = {
    .string = "expert",
    .meaning = "n. 专家；行家；能手adj. 熟练的；内行的；老练的v. 当专家n. （Expert）（法、印、俄、罗、巴、荷）埃克斯佩（人名）"};

String_and_meaning String_and_meaning_expertise = {
    .string = "expertise",
    .meaning = "n. 专门知识；专门技术；专家的意见"};

String_and_meaning String_and_meaning_expire = {
    .string = "expire",
    .meaning = "vi. 期满；终止；死亡；呼气vt. 呼出（空气）"};

String_and_meaning String_and_meaning_explain = {
    .string = "explain",
    .meaning = "v. 说明；解释"};

String_and_meaning String_and_meaning_explanation = {
    .string = "explanation",
    .meaning = "n. 说明，解释；辩解"};

String_and_meaning String_and_meaning_explicit = {
    .string = "explicit",
    .meaning = "adj. 明确的；清楚的；直率的；详述的"};

String_and_meaning String_and_meaning_explode = {
    .string = "explode",
    .meaning = "vi. 爆炸，爆发；激增vt. 使爆炸；爆炸；推翻"};

String_and_meaning String_and_meaning_exploit = {
    .string = "exploit",
    .meaning = "vt. 开发，开拓；剥削；开采n. 英雄事迹；英勇行为；奇遇"};

String_and_meaning String_and_meaning_explore = {
    .string = "explore",
    .meaning = "vt. 探索；探测；探险vi. 探索；探测；探险"};

String_and_meaning String_and_meaning_explosion = {
    .string = "explosion",
    .meaning = "n. 爆炸；爆发；激增n. （Explosion）《引爆者》（一部中国动作、犯罪电影）。"};

String_and_meaning String_and_meaning_explosive = {
    .string = "explosive",
    .meaning = "adj. 爆炸的；爆炸性的；爆发性的n. 炸药；爆炸物"};

String_and_meaning String_and_meaning_export = {
    .string = "export",
    .meaning = "n. 输出，出口；出口商品vi. 输出物资vt. 输出，出口"};

String_and_meaning String_and_meaning_expose = {
    .string = "expose",
    .meaning = "vt. 揭露，揭发；使曝光；显示"};

String_and_meaning String_and_meaning_exposition = {
    .string = "exposition",
    .meaning = "n. 博览会；阐述；展览会"};

String_and_meaning String_and_meaning_exposure = {
    .string = "exposure",
    .meaning = "n. 暴露；曝光；揭露；陈列"};

String_and_meaning String_and_meaning_express = {
    .string = "express",
    .meaning = "vt. 表达；快递adj. 明确的；迅速的；专门的n. 快车，快递，专使；捷运公司"};

String_and_meaning String_and_meaning_expression = {
    .string = "expression",
    .meaning = "n. 表现，表示，表达；表情，脸色，态度，腔调，声调；式，符号；词句，语句，措辞，说法"};

String_and_meaning String_and_meaning_exquisite = {
    .string = "exquisite",
    .meaning = "adj. 精致的；细腻的；优美的，高雅的；异常的；剧烈的n. 服饰过于讲究的男子"};

String_and_meaning String_and_meaning_extend = {
    .string = "extend",
    .meaning = "vt. 延伸；扩大；推广；伸出；给予；使竭尽全力；对…估价vi. 延伸；扩大；伸展；使疏开"};

String_and_meaning String_and_meaning_extension = {
    .string = "extension",
    .meaning = "n. 拓展；延伸；接发；（医学）牵引；（计算机）拓展名；（逻辑）外延"};

String_and_meaning String_and_meaning_extensive = {
    .string = "extensive",
    .meaning = "adj. 广泛的；大量的；广阔的"};

String_and_meaning String_and_meaning_extent = {
    .string = "extent",
    .meaning = "n. 程度；范围；长度"};

String_and_meaning String_and_meaning_exterior = {
    .string = "exterior",
    .meaning = "adj. 外部的，外面的，外在的；（电影场景）室外的；外界的n. （建筑）外部，表面；（人的）外型，外貌；（摄影）外景"};

String_and_meaning String_and_meaning_external = {
    .string = "external",
    .meaning = "adj. 外部的；表面的；[药] 外用的；外国的；外面的n. 外部；外观；外面"};

String_and_meaning String_and_meaning_extinct = {
    .string = "extinct",
    .meaning = "adj. 灭绝的，绝种的；熄灭的vt. 使熄灭"};

String_and_meaning String_and_meaning_extinguish = {
    .string = "extinguish",
    .meaning = "vt. 熄灭；压制；偿清"};

String_and_meaning String_and_meaning_extra = {
    .string = "extra",
    .meaning = "adj.额外的,不包括在价目内的,特大的,特佳的adv.特别地,非常,另外n.额外的人(或物),(报纸)号外,上等产品,(电影)临时演员"};

String_and_meaning String_and_meaning_extract = {
    .string = "extract",
    .meaning = "v. 提取，提炼；索取，设法得到；选取，摘录；取出，拔出；推断出，引申出；开（方），求（根）n. 摘录，引文；榨出物，汁"};

String_and_meaning String_and_meaning_extraordinary = {
    .string = "extraordinary",
    .meaning = "adj. 非凡的；特别的；离奇的；特派的"};

String_and_meaning String_and_meaning_extravagant = {
    .string = "extravagant",
    .meaning = "adj. 奢侈的；浪费的；过度的；放纵的"};

String_and_meaning String_and_meaning_extreme = {
    .string = "extreme",
    .meaning = "adj. 极端的；极度的；偏激的；尽头的n. 极端；末端；最大程度；极端的事物"};

String_and_meaning String_and_meaning_extremely = {
    .string = "extremely",
    .meaning = "adv. 非常，极其；极端地"};

String_and_meaning String_and_meaning_eye = {
    .string = "eye",
    .meaning = "n. 眼睛；视力；眼光；见解，观点vt. 注视，看n. (Eye)人名；(德)艾厄；(英)艾"};

String_and_meaning String_and_meaning_eyesight = {
    .string = "eyesight",
    .meaning = "n. 视力；目力"};

String_and_meaning String_and_meaning_fabricate = {
    .string = "fabricate",
    .meaning = "vt. 制造；伪造；装配"};

String_and_meaning String_and_meaning_facet = {
    .string = "facet",
    .meaning = "n. 面；方面；小平面vt. 在…上琢面"};

String_and_meaning String_and_meaning_facilitate = {
    .string = "facilitate",
    .meaning = "vt. 促进；帮助；使容易"};

String_and_meaning String_and_meaning_facility = {
    .string = "facility",
    .meaning = "n. 设施，设备；（机器等的）特别装置，特殊功能；（特定用途的）场所；才能，天赋"};

String_and_meaning String_and_meaning_fact = {
    .string = "fact",
    .meaning = "n. 事实；实际；真相"};

String_and_meaning String_and_meaning_factor = {
    .string = "factor",
    .meaning = "n. 因素；要素；[物] 因数；代理人vi. 做代理商vt. 把…作为因素计入；代理经营；把…分解成n. (Factor)人名；(英)法克特"};

String_and_meaning String_and_meaning_factory = {
    .string = "factory",
    .meaning = "n. 工厂；制造厂；代理店"};

String_and_meaning String_and_meaning_faculty = {
    .string = "faculty",
    .meaning = "n. 科，系；能力，官能；全体教员"};

String_and_meaning String_and_meaning_fade = {
    .string = "fade",
    .meaning = "vi. 褪色；凋谢；逐渐消失vt. 使褪色adj. 平淡的；乏味的n. [电影][电视] 淡出；[电影][电视] 淡入n. (Fade)人名；(法)法德"};

String_and_meaning String_and_meaning_Fahrenheit = {
    .string = "Fahrenheit",
    .meaning = "adj. 华氏温度计的；华氏的n. 华氏温度计；华氏温标"};

String_and_meaning String_and_meaning_fail = {
    .string = "fail",
    .meaning = "vi. 失败，不及格；破产；缺乏；衰退vt. 不及格；使失望；忘记；舍弃n. 不及格n. (Fail)人名；(葡、捷)法伊尔；(法)法伊"};

String_and_meaning String_and_meaning_failure = {
    .string = "failure",
    .meaning = "n. 失败；故障；失败者；破产"};

String_and_meaning String_and_meaning_faint = {
    .string = "faint",
    .meaning = "adj. 模糊的；头晕的；虚弱的；[医] 衰弱的vi. 昏倒；变得微弱；变得没气力n. [中医] 昏厥，昏倒"};

String_and_meaning String_and_meaning_fair = {
    .string = "fair",
    .meaning = "adj. 公平的；美丽的，白皙的；[气象] 晴朗的adv. 公平地；直接地；清楚地vi. 转晴n. 展览会；市集；美人n. (Fair)人名；(英、芬)费尔"};

String_and_meaning String_and_meaning_fairly = {
    .string = "fairly",
    .meaning = "adv. 相当地；公平地；简直n. (Fairly)人名；(英)费尔利"};

String_and_meaning String_and_meaning_faith = {
    .string = "faith",
    .meaning = "n. 信仰；信念；信任；忠实n. (Faith)人名；(匈)福伊特；(英)费思，费丝(女名)；(瑞典)法伊特"};

String_and_meaning String_and_meaning_faithful = {
    .string = "faithful",
    .meaning = "adj. 忠实的，忠诚的；如实的；准确可靠的n. (Faithful)人名；(英)费思富尔"};

String_and_meaning String_and_meaning_fake = {
    .string = "fake",
    .meaning = "n.假货,欺骗adj.假的vt.伪造,赝造,捏造,假造,仿造vi.伪装"};

String_and_meaning String_and_meaning_fall = {
    .string = "fall",
    .meaning = "n.秋天,落下,瀑布,降低,落差,采伐量,堕落,下降vi.倒下,落下,来临,失守,变成,垮台,下跌,阵亡vt.美英方击倒,砍倒(树木)adj.秋天的"};

String_and_meaning String_and_meaning_FALSE = {
    .string = "FALSE",
    .meaning = "adj. 错误的；虚伪的；伪造的adv. 欺诈地"};

String_and_meaning String_and_meaning_fame = {
    .string = "fame",
    .meaning = "n. 名声，名望；传闻，传说vt. 使闻名，使有名望"};

String_and_meaning String_and_meaning_familiar = {
    .string = "familiar",
    .meaning = "adj. 熟悉的；常见的；亲近的n. 常客；密友n. （Familiar）（西）法米利亚尔（人名）"};

String_and_meaning String_and_meaning_family = {
    .string = "family",
    .meaning = "n. 家庭；亲属；家族；子女；[生]科；语族；[化]族adj. 家庭的；家族的；适合于全家的"};

String_and_meaning String_and_meaning_famine = {
    .string = "famine",
    .meaning = "n. 饥荒；饥饿，奇缺"};

String_and_meaning String_and_meaning_famous = {
    .string = "famous",
    .meaning = "adj. 著名的；极好的，非常令人满意的"};

String_and_meaning String_and_meaning_fan = {
    .string = "fan",
    .meaning = "n.扇子,鼓风机,风扇,迷,狂热者,爱好者vt.煽动,刺激,扇,吹拂vi.飘动,成扇形散开"};

String_and_meaning String_and_meaning_fancy = {
    .string = "fancy",
    .meaning = "adj.奇特的,异样的vt.想象,设想,认为,爱好,自负n.爱好,迷恋,想象力"};

String_and_meaning String_and_meaning_fantastic = {
    .string = "fantastic",
    .meaning = "adj. 奇异的；空想的；异想天开的；古怪的；极好的，极出色的；不可思议的；不切实际的；（数量）极大的n. 古怪的人adv. 极其，非常"};

String_and_meaning String_and_meaning_fantasy = {
    .string = "fantasy",
    .meaning = "n. 幻想；白日梦；幻觉adj. 虚幻的vt. 空想；想像vi. 耽于幻想；奏幻想曲（等于phantasy）"};

String_and_meaning String_and_meaning_far = {
    .string = "far",
    .meaning = "adv. 很；遥远地；久远地；到很远的距离；到很深的程度adj. 远的；久远的n. 远方n. (Far)人名；(德、西、塞)法尔"};

String_and_meaning String_and_meaning_fare = {
    .string = "fare",
    .meaning = "n.费用,旅客,食物vi.遭遇,进展,进步,经营,过活"};

String_and_meaning String_and_meaning_farewell = {
    .string = "farewell",
    .meaning = "n. 告别，辞别；再见；再会int. 别了！（常含有永别或不容易再见面的意思）；再会！adj. 告别的"};

String_and_meaning String_and_meaning_farm = {
    .string = "farm",
    .meaning = "n.农场,农庄,农田vt.耕种vi.种田,务农,经营农场,从事畜牧"};

String_and_meaning String_and_meaning_farmer = {
    .string = "farmer",
    .meaning = "n. 农夫，农民n. （Farmer）（英）法默；（法）法尔梅；（西）法梅尔（人名）"};

String_and_meaning String_and_meaning_farther = {
    .string = "farther",
    .meaning = "adv. 更远地；此外；更进一步地adj. 进一步的；更远的（far的比较级）"};

String_and_meaning String_and_meaning_fascinate = {
    .string = "fascinate",
    .meaning = "v. 使着迷，使神魂颠倒；（尤指蛇）以眼神震慑（人或动物），使无法动弹"};

String_and_meaning String_and_meaning_fashion = {
    .string = "fashion",
    .meaning = "n. 时尚；时装；样式；方式；时髦人物vt. 使用；改变；做成…的形状"};

String_and_meaning String_and_meaning_fashionable = {
    .string = "fashionable",
    .meaning = "adj. 流行的；时髦的；上流社会的"};

String_and_meaning String_and_meaning_fast = {
    .string = "fast",
    .meaning = "adj. 快速的，迅速的；紧的，稳固的adv. 迅速地；紧紧地；彻底地vi. 禁食，斋戒n. 斋戒；绝食n. (Fast)人名；(德、英、俄、芬、捷、瑞典)法斯特"};

String_and_meaning String_and_meaning_fasten = {
    .string = "fasten",
    .meaning = "vt. 使固定；集中于；扎牢；强加于vi. 扣紧；抓住；集中注意力n. (Fasten)人名；(英)法森"};

String_and_meaning String_and_meaning_fatal = {
    .string = "fatal",
    .meaning = "adj. 致命的；重大的；毁灭性的；命中注定的n. (Fatal)人名；(葡、芬)法塔尔"};

String_and_meaning String_and_meaning_fate = {
    .string = "fate",
    .meaning = "n. 命运vt. 注定n. (Fate)人名；(英)费特"};

String_and_meaning String_and_meaning_father = {
    .string = "father",
    .meaning = "n. 父亲，爸爸；神父；祖先；前辈vt. 发明，创立；当…的父亲"};

String_and_meaning String_and_meaning_fatigue = {
    .string = "fatigue",
    .meaning = "n. 疲劳，疲乏；杂役vt. 使疲劳；使心智衰弱vi. 疲劳adj. 疲劳的"};

String_and_meaning String_and_meaning_fault = {
    .string = "fault",
    .meaning = "n. 故障；[地质] 断层；错误；缺点；毛病；（网球等）发球失误vi. 弄错；产生断层vt. （通常用于疑问句或否定句）挑剔"};

String_and_meaning String_and_meaning_faulty = {
    .string = "faulty",
    .meaning = "adj. 有错误的；有缺点的"};

String_and_meaning String_and_meaning_favour = {
    .string = "favour",
    .meaning = "n. 偏爱；赞同；善行vt. 赞成；喜爱；有助于"};

String_and_meaning String_and_meaning_favourable = {
    .string = "favourable",
    .meaning = "adj. 有利的，顺利的；赞成的"};

String_and_meaning String_and_meaning_favourite = {
    .string = "favourite",
    .meaning = "adj. 特别受喜爱的n. 特别喜爱的人（或物）"};

String_and_meaning String_and_meaning_fax = {
    .string = "fax",
    .meaning = "n. 传真机；传真信件；传真v. 传真（信件或文档）；用传真与（某人）联系n. (Fax) （瑞、美、巴、德）法克斯（人名）"};

String_and_meaning String_and_meaning_fear = {
    .string = "fear",
    .meaning = "n. 害怕；恐惧；敬畏；担心vt. 害怕；敬畏；为…担心vi. 害怕；敬畏；为…担心"};

String_and_meaning String_and_meaning_fearful = {
    .string = "fearful",
    .meaning = "adj. 可怕的；担心的；严重的"};

String_and_meaning String_and_meaning_feasible = {
    .string = "feasible",
    .meaning = "adj. 可行的；可能的；可实行的"};

String_and_meaning String_and_meaning_feast = {
    .string = "feast",
    .meaning = "n. 筵席，宴会；（感官）享受；节日v. 尽情享用，饱餐；宴请；赴宴"};

String_and_meaning String_and_meaning_feather = {
    .string = "feather",
    .meaning = "n. 羽毛vt. 用羽毛装饰vi. 长羽毛n. (Feather)人名；(英)费瑟"};

String_and_meaning String_and_meaning_feature = {
    .string = "feature",
    .meaning = "n. 特色，特征；容貌；特写或专题节目vi. 起重要作用vt. 特写；以…为特色；由…主演"};

String_and_meaning String_and_meaning_February = {
    .string = "February",
    .meaning = "n. 二月"};

String_and_meaning String_and_meaning_federal = {
    .string = "federal",
    .meaning = "adj. 联邦的；同盟的；联邦政府的； 联邦制的adv. 联邦政府地n. (Federal)人名；(英)费德勒尔"};

String_and_meaning String_and_meaning_federation = {
    .string = "federation",
    .meaning = "n. 联合；联邦；联盟；联邦政府"};

String_and_meaning String_and_meaning_fee = {
    .string = "fee",
    .meaning = "n. 费用；酬金；小费vt. 付费给……n. (Fee)人名；(英、柬)菲"};

String_and_meaning String_and_meaning_feeble = {
    .string = "feeble",
    .meaning = "adj. 微弱的，无力的；虚弱的；薄弱的"};

String_and_meaning String_and_meaning_feed = {
    .string = "feed",
    .meaning = "n.饲养,饲料,(动物或婴儿的)一餐vt.喂养,饲养,放牧,靠...为生vi.吃东西,流入"};

String_and_meaning String_and_meaning_feedback = {
    .string = "feedback",
    .meaning = "n. 反馈；成果，资料；回复"};

String_and_meaning String_and_meaning_feel = {
    .string = "feel",
    .meaning = "vt. 感觉；认为；触摸；试探vi. 觉得；摸索n. 感觉；触摸"};

String_and_meaning String_and_meaning_feeling = {
    .string = "feeling",
    .meaning = "n. 感觉，触觉；感情，情绪；同情adj. 有感觉的；有同情心的；富于感情的v. 感觉；认为（feel的现在分词）；触摸"};

String_and_meaning String_and_meaning_fellow = {
    .string = "fellow",
    .meaning = "n.人,家伙,伙伴,学会特别会员,朋友,同事adj.同伴的,同事的,同道的"};

String_and_meaning String_and_meaning_fellowship = {
    .string = "fellowship",
    .meaning = "n. 团体；友谊；奖学金；研究员职位"};

String_and_meaning String_and_meaning_female = {
    .string = "female",
    .meaning = "adj. 女性的；雌性的n. 女人；[动] 雌性动物"};

String_and_meaning String_and_meaning_feminine = {
    .string = "feminine",
    .meaning = "adj. 女性的；妇女（似）的；阴性的；娇柔的"};

String_and_meaning String_and_meaning_fence = {
    .string = "fence",
    .meaning = "n. 栅栏；围墙；剑术vt. 防护；用篱笆围住；练习剑术vi. 击剑；搪塞；围以栅栏；跳过栅栏"};

String_and_meaning String_and_meaning_ferry = {
    .string = "ferry",
    .meaning = "n. 渡船；摆渡；渡口vt. （乘渡船）渡过；用渡船运送；空运vi. 摆渡；来往行驶n. (Ferry)人名；(法、德、英、印尼)费里"};

String_and_meaning String_and_meaning_fertile = {
    .string = "fertile",
    .meaning = "adj. 富饶的，肥沃的；能生育的"};

String_and_meaning String_and_meaning_fertilize = {
    .string = "fertilize",
    .meaning = "vt. 使受精；使肥沃"};

String_and_meaning String_and_meaning_fertilizer = {
    .string = "fertilizer",
    .meaning = "n. [肥料] 肥料；受精媒介物；促进发展者"};

String_and_meaning String_and_meaning_festival = {
    .string = "festival",
    .meaning = "n. 节日；庆祝，纪念活动；欢乐adj. 节日的，喜庆的；快乐的"};

String_and_meaning String_and_meaning_fetch = {
    .string = "fetch",
    .meaning = "vt. 取来；接来；到达；吸引vi. 拿；取物；卖得n. 取得；诡计"};

String_and_meaning String_and_meaning_fever = {
    .string = "fever",
    .meaning = "n. 发烧，发热；狂热vt. 使发烧；使狂热；使患热病vi. 发烧；狂热；患热病"};

String_and_meaning String_and_meaning_few = {
    .string = "few",
    .meaning = "adj. 很少的；几乎没有的pron. 很少n. 很少数n. (Few)人名；(英)菲尤"};

String_and_meaning String_and_meaning_fibre = {
    .string = "fibre",
    .meaning = "n. 纤维；纤维制品"};

String_and_meaning String_and_meaning_fiction = {
    .string = "fiction",
    .meaning = "n. 小说；虚构，编造；谎言"};

String_and_meaning String_and_meaning_field = {
    .string = "field",
    .meaning = "n.原野,旷野,领域,(一块)田地,牧场,域,战场,运动场vt.把(谷物等)暴晒于场上,使上场vi.担任场外队员adj.田间的,野生的,野外的,田赛的 扫描场"};

String_and_meaning String_and_meaning_fierce = {
    .string = "fierce",
    .meaning = "adj. 凶猛的；猛烈的；暴躁的n. （Fierce）（英）菲尔斯（人名）"};

String_and_meaning String_and_meaning_fifteen = {
    .string = "fifteen",
    .meaning = "n. 十五；十五个；十五人组成的橄榄球队adj. 十五的num. 十五"};

String_and_meaning String_and_meaning_fifth = {
    .string = "fifth",
    .meaning = "adj. 第五的；五分之一的n. 第五；五分之一num. 第五"};

String_and_meaning String_and_meaning_fifty = {
    .string = "fifty",
    .meaning = "n. 五十；五十个；编号为50的东西adj. 五十的；五十个的；众多的"};

String_and_meaning String_and_meaning_fight = {
    .string = "fight",
    .meaning = "n.打架,战斗,斗志vi.打仗,搏斗,对抗,打架vt.与...打仗,指挥战斗,反对...提案"};

String_and_meaning String_and_meaning_figure = {
    .string = "figure",
    .meaning = "n. 数字；人物；图形；价格；（人的）体形；画像vi. 计算；出现；扮演角色vt. 计算；认为；描绘；象征"};

String_and_meaning String_and_meaning_file = {
    .string = "file",
    .meaning = "n. 文件；档案；文件夹；锉刀vt. 提出；锉；琢磨；把…归档vi. 列队行进；用锉刀锉n. (File)人名；(匈、塞)菲莱"};

String_and_meaning String_and_meaning_fill = {
    .string = "fill",
    .meaning = "vt. 装满，使充满；满足；堵塞；任职vi. 被充满，膨胀n. 满足；填满的量；装填物n. (Fill)人名；(德、俄、匈)菲尔"};

String_and_meaning String_and_meaning_film = {
    .string = "film",
    .meaning = "n. 电影；薄膜；胶卷；轻烟vt. 在…上覆以薄膜；把…拍成电影vi. 摄制电影；生薄膜；变得朦胧"};

String_and_meaning String_and_meaning_filter = {
    .string = "filter",
    .meaning = "n. 过滤器；滤波器；筛选程序；分流指示灯v. 过滤；渗透；用过滤法除去；慢慢传开；缓行；仅可左转行驶n. （Filter）（德）菲尔特（人名）"};

String_and_meaning String_and_meaning_final = {
    .string = "final",
    .meaning = "adj. 最终的；决定性的；不可更改的n. 决赛；期末考试；当日报纸的末版"};

String_and_meaning String_and_meaning_finally = {
    .string = "finally",
    .meaning = "adv. 最后；终于；决定性地"};

String_and_meaning String_and_meaning_finance = {
    .string = "finance",
    .meaning = "n. 财政，财政学；金融vt. 负担经费，供给…经费vi. 筹措资金n. (Finance)人名；(法)菲南斯"};

String_and_meaning String_and_meaning_financial = {
    .string = "financial",
    .meaning = "adj. 金融的；财政的，财务的"};

String_and_meaning String_and_meaning_find = {
    .string = "find",
    .meaning = "vt. 查找，找到；发现；认为；感到；获得vi. 裁决n. 发现n. (Find)人名；(丹)芬"};

String_and_meaning String_and_meaning_finding = {
    .string = "finding",
    .meaning = "n. 发现；裁决；发现物v. 找到；感到（find的ing形式）；遇到"};

String_and_meaning String_and_meaning_fine = {
    .string = "fine",
    .meaning = "adj. 好的；优良的；细小的，精美的；健康的；晴朗的n. 罚款vt. 罚款；澄清adv. 很好地；精巧地n. (Fine)人名；(意)菲内；(英)法恩"};

String_and_meaning String_and_meaning_finger = {
    .string = "finger",
    .meaning = "n. 手指；指针，指状物vt. 伸出；用手指拨弄vi. 用指触摸；拨弄n. (Finger)人名；(英、德、捷)芬格；(俄)芬格尔"};

String_and_meaning String_and_meaning_finish = {
    .string = "finish",
    .meaning = "n.完成,结束,磨光,末道漆,完美vt.完成,结束,用完,毁掉,使完美vi.结束,终结,停止,终止"};

String_and_meaning String_and_meaning_finite = {
    .string = "finite",
    .meaning = "adj. 有限的；限定的n. 有限之物"};

String_and_meaning String_and_meaning_fire = {
    .string = "fire",
    .meaning = "n. 火；火灾；炮火；炉火；热情；激情；磨难vt. 点燃；解雇；开除；使发光；烧制；激动；放枪vi. 着火；射击；开枪；激动；烧火"};

String_and_meaning String_and_meaning_fireman = {
    .string = "fireman",
    .meaning = "n. 消防队员；救火队员；锅炉工n. (Fireman)人名；(英)法尔曼"};

String_and_meaning String_and_meaning_firm = {
    .string = "firm",
    .meaning = "n. 商行；商号；公司adj. 坚定的；牢固的；严格的；结实的；坚决的；牢牢控制的；坚挺的adv. 坚信；坚持；稳固地v. 使坚定；使牢固"};

String_and_meaning String_and_meaning_first = {
    .string = "first",
    .meaning = "adv.首先,最初,第一(列举条目等用),优先adj.第一的 num.第一(个)n.开始,第一,(比赛)冠军"};

String_and_meaning String_and_meaning_fish = {
    .string = "fish",
    .meaning = "n.鱼,鱼肉,鱼类,接合板vt.钓,钓鱼,查出,用接合板连接vi.捕鱼,钓鱼,用钩捞取,间接探听,拉摸索寻找"};

String_and_meaning String_and_meaning_fisherman = {
    .string = "fisherman",
    .meaning = "n. 渔夫；渔人"};

String_and_meaning String_and_meaning_fist = {
    .string = "fist",
    .meaning = "n. 拳，拳头；〈口〉笔迹；掌握；[印]指标参见号vt. 紧握；握成拳；用拳打"};

String_and_meaning String_and_meaning_fit = {
    .string = "fit",
    .meaning = "n.突然发作,适合,痉挛,一阵adj.合适的,恰当的,健康的,,准备好的vt.适合,安装,使合身,使适应,使合格vi.适合,符合"};

String_and_meaning String_and_meaning_fitting = {
    .string = "fitting",
    .meaning = "adj.适合的,相称的,适宜的n.试穿,试衣,装配,装置"};

String_and_meaning String_and_meaning_five = {
    .string = "five",
    .meaning = "n. 五，五个；五美元钞票num. 五，五个adj. 五的；五个的n. (Five)人名；(挪)菲弗"};

String_and_meaning String_and_meaning_fix = {
    .string = "fix",
    .meaning = "vt.使固定,装置,修理,准备,安装,凝视,整理,牢记vi.固定,注视,决定,选定,确定n.困境,方位,贿赂"};

String_and_meaning String_and_meaning_fixture = {
    .string = "fixture",
    .meaning = "n. 设备；固定装置；固定于某处不大可能移动之物"};

String_and_meaning String_and_meaning_flag = {
    .string = "flag",
    .meaning = "n.旗,标记v.标记"};

String_and_meaning String_and_meaning_flame = {
    .string = "flame",
    .meaning = "n. 火焰；热情；光辉v. 焚烧；泛红n. (Flame)人名；(法)弗拉姆；(西)弗拉梅"};

String_and_meaning String_and_meaning_flank = {
    .string = "flank",
    .meaning = "n. 侧面；侧翼；侧腹vt. 守侧面；位于…的侧面；攻击侧面vi. 侧面与…相接adv. 在左右两边n. (Flank)人名；(瑞典、匈)弗兰克；(法)弗朗克"};

String_and_meaning String_and_meaning_flap = {
    .string = "flap",
    .meaning = "n. 拍打，拍打声；神经紧张；（飞机的）襟翼；风门，挡板；[医]皮瓣vi. 拍动；神经紧张；鼓翼而飞；（帽边等）垂下vt. 拍打；扔；拉下帽边；飘动"};

String_and_meaning String_and_meaning_flare = {
    .string = "flare",
    .meaning = "n.闪光,闪耀vi.闪光,突然烧起来,闪耀vt.使闪耀,使张开"};

String_and_meaning String_and_meaning_flash = {
    .string = "flash",
    .meaning = "n.闪光,闪现,一瞬间;vi.闪光,闪现,反射,使迅速传便;vt.使闪光,反射;adj.闪光的,火速的"};

String_and_meaning String_and_meaning_flat = {
    .string = "flat",
    .meaning = "adj.平坦的,扁平的,单调的,倒下的,浅的,干脆的,无聊的,无力的adv.平直地,仰卧地,恰恰,正好,断然地n.平面,平地,一层,公寓v.(使)变平,(使)降半音"};

String_and_meaning String_and_meaning_flatter = {
    .string = "flatter",
    .meaning = "vt. 奉承；谄媚；使高兴"};

String_and_meaning String_and_meaning_flavour = {
    .string = "flavour",
    .meaning = "n. 香味；滋味vt. 给……调味；给……增添风趣"};

String_and_meaning String_and_meaning_flaw = {
    .string = "flaw",
    .meaning = "n. 瑕疵，缺点；一阵狂风；短暂的风暴；裂缝，裂纹v. 使生裂缝，使有裂纹；使无效；使有缺陷vi. 生裂缝；变得有缺陷"};

String_and_meaning String_and_meaning_flee = {
    .string = "flee",
    .meaning = "vi. 逃走；消失，消散vt. 逃跑，逃走；逃避"};

String_and_meaning String_and_meaning_fleet = {
    .string = "fleet",
    .meaning = "n.舰队(尤指有固定活动地区的舰队),港湾,小河adj.快速的,敏捷的,浅的adv.浅vt.消磨vi.疾驰,飞逝,掠过"};

String_and_meaning String_and_meaning_flesh = {
    .string = "flesh",
    .meaning = "n. 肉；肉体vt. 喂肉给…；使发胖vi. 长胖n. (Flesh)人名；(英)弗莱什"};

String_and_meaning String_and_meaning_flexible = {
    .string = "flexible",
    .meaning = "adj. 灵活的；柔韧的；易弯曲的"};

String_and_meaning String_and_meaning_flight = {
    .string = "flight",
    .meaning = "n. 飞行；班机；逃走vt. 射击；使惊飞vi. 迁徙n. (Flight)人名；(英)弗莱特"};

String_and_meaning String_and_meaning_fling = {
    .string = "fling",
    .meaning = "vt. 掷，抛；嘲笑；使陷入；轻蔑地投射；猛动n. 掷，抛；嘲弄；急冲vi. 猛冲，急行"};

String_and_meaning String_and_meaning_float = {
    .string = "float",
    .meaning = "n.漂流物,浮舟,漂浮,浮萍,彩车vi.浮动,飘浮,散播,摇摆,漂浮,动摇(计划等)付诸实行vt.使漂浮,容纳,淹没,发行,实行,用水注满"};

String_and_meaning String_and_meaning_flock = {
    .string = "flock",
    .meaning = "n. 群；棉束（等于floc）vt. 用棉束填满vi. 聚集；成群而行n. (Flock)人名；(德、瑞典)弗洛克"};

String_and_meaning String_and_meaning_flood = {
    .string = "flood",
    .meaning = "n.洪水,水灾,(因雨)涨潮,[诗]水vt.淹没,使泛滥,注满,充满vi.被水淹,溢出,涌进,喷出,涌出"};

String_and_meaning String_and_meaning_floor = {
    .string = "floor",
    .meaning = "n. 地板，地面；楼层；基底；议员席vt. 铺地板；打倒，击倒；（被困难）难倒"};

String_and_meaning String_and_meaning_flour = {
    .string = "flour",
    .meaning = "n. 面粉；粉状物质vt. 撒粉于；把…磨成粉n. (Flour)人名；(法)弗卢尔"};

String_and_meaning String_and_meaning_flourish = {
    .string = "flourish",
    .meaning = "v. 繁荣，茂盛；茁壮成长，处于旺盛时期；挥舞；炫耀n. 夸张动作；出色部分；华丽辞藻；花彩字；（管弦乐）花彩号声"};

String_and_meaning String_and_meaning_flow = {
    .string = "flow",
    .meaning = "n.流程,流动,(河水)泛滥,洋溢vi.流动,涌流,川流不息,飘扬vt.溢过,淹没"};

String_and_meaning String_and_meaning_flower = {
    .string = "flower",
    .meaning = "n. 花；精华；开花植物vi. 成熟，发育；开花；繁荣；旺盛vt. 使开花；用花装饰n. (Flower)人名；(英)弗劳尔"};

String_and_meaning String_and_meaning_flu = {
    .string = "flu",
    .meaning = "n. 流感n. (Flu)人名；(法)弗吕"};

String_and_meaning String_and_meaning_fluctuate = {
    .string = "fluctuate",
    .meaning = "vi. 波动；涨落；动摇vt. 使波动；使动摇"};

String_and_meaning String_and_meaning_fluent = {
    .string = "fluent",
    .meaning = "adj. 流畅的，流利的；液态的；畅流的"};

String_and_meaning String_and_meaning_fluid = {
    .string = "fluid",
    .meaning = "n. 流体，液体adj. 流动的；不固定的，易变的；流畅的，优美的；液压传动的"};

String_and_meaning String_and_meaning_flush = {
    .string = "flush",
    .meaning = "n.奔流,晕红,激动,萌芽,活力旺盛,发烧,一手同花的五张牌,惊鸟;adj.挥霍的,直接的,泛滥的;adv.齐平地,直接地;vi.(脸)发红,奔涌,充沛,惊飞;vt.淹没,冲洗,使脸红,使齐平,使惊飞,使激动"};

String_and_meaning String_and_meaning_flutter = {
    .string = "flutter",
    .meaning = "n.摆动,鼓翼,烦扰vi.鼓翼,飘动,悸动,乱跳,烦扰vt.拍(翅),使焦急"};

String_and_meaning String_and_meaning_fly = {
    .string = "fly",
    .meaning = "vi. 飞；驾驶飞机；飘扬vt. 飞行；飞越；使飘扬n. 飞行；苍蝇；两翼昆虫adj. 敏捷的n. (Fly)人名；(法)弗利；(英)弗莱"};

String_and_meaning String_and_meaning_foam = {
    .string = "foam",
    .meaning = "n. 泡沫；水沫；灭火泡沫vi. 起泡沫；吐白沫；起着泡沫流动vt. 使起泡沫；使成泡沫状物"};

String_and_meaning String_and_meaning_focus = {
    .string = "focus",
    .meaning = "n. 焦点；中心；清晰；焦距vt. 使集中；使聚焦vi. 集中；聚焦；调节焦距n. (Focus)人名；(瑞典)福库斯"};

String_and_meaning String_and_meaning_fog = {
    .string = "fog",
    .meaning = "n. 雾；烟雾，尘雾；迷惑vt. 使模糊；使困惑；以雾笼罩vi. 被雾笼罩；变模糊n. (Fog)人名；(丹)福"};

String_and_meaning String_and_meaning_foil = {
    .string = "foil",
    .meaning = "n.箔,金属薄片,[建]叶形片,烘托,衬托vt.衬托,阻止,挡开,挫败,贴箔于"};

String_and_meaning String_and_meaning_fold = {
    .string = "fold",
    .meaning = "n.折,羊栏,折痕,信徒vt.折叠,包,合拢,抱住,笼罩,调入,交迭vi.折叠起来,彻底失败"};

String_and_meaning String_and_meaning_folk = {
    .string = "folk",
    .meaning = "n. 民族；人们；亲属（复数）；民间音乐，民谣adj. 传统民间的，民俗的；流传民间的n. （Folk）（英、匈、捷）福克（人名）"};

String_and_meaning String_and_meaning_follow = {
    .string = "follow",
    .meaning = "vt. 跟随；遵循；追求；密切注意，注视；注意；倾听vi. 跟随；接着n. 跟随；追随"};

String_and_meaning String_and_meaning_following = {
    .string = "following",
    .meaning = "n.下列各项,部下,党羽adj.下列的,其次的 prep.在...之后"};

String_and_meaning String_and_meaning_fond = {
    .string = "fond",
    .meaning = "adj. 喜欢的；温柔的；宠爱的n. (Fond)人名；(法)丰；(瑞典)丰德"};

String_and_meaning String_and_meaning_food = {
    .string = "food",
    .meaning = "n. 食物；养料"};

String_and_meaning String_and_meaning_fool = {
    .string = "fool",
    .meaning = "n. 傻瓜，愚人，笨蛋；（旧时宫廷的）小丑，弄臣；受骗者；奶油果泥vt. 欺骗，愚弄，戏弄vi. 开玩笑，犯傻adj. 愚蠢的；傻的"};

String_and_meaning String_and_meaning_foolish = {
    .string = "foolish",
    .meaning = "adj. 愚蠢的；傻的"};

String_and_meaning String_and_meaning_foot = {
    .string = "foot",
    .meaning = "n. 脚；英尺；步调；末尾vi. 步行；跳舞；总计vt. 支付；给……换底n. (Foot)人名；(英)富特"};

String_and_meaning String_and_meaning_football = {
    .string = "football",
    .meaning = "n. 足球，橄榄球vi. 踢足球；打橄榄球"};

String_and_meaning String_and_meaning_footstep = {
    .string = "footstep",
    .meaning = "n. 脚步；脚步声；足迹"};

String_and_meaning String_and_meaning_for = {
    .string = "for",
    .meaning = "prep.(表示目的)为了,因为,至于,对于,适合于 conj.因为"};

String_and_meaning String_and_meaning_forbid = {
    .string = "forbid",
    .meaning = "vt. 禁止；不准；不允许；〈正式〉严禁"};

String_and_meaning String_and_meaning_forbidden = {
    .string = "forbidden",
    .meaning = "adj.禁止的,严禁的 vbl.forbid的过去分词"};

String_and_meaning String_and_meaning_force = {
    .string = "force",
    .meaning = "n. 力量；武力；军队；魄力vt. 促使，推动；强迫；强加n. (Force)人名；(意)福尔切；(英、法)福斯"};

String_and_meaning String_and_meaning_forecast = {
    .string = "forecast",
    .meaning = "n. （天气、财经等的）预测，预报；预想v. 预报，预测；预示；预言；进行预报，作预测"};

String_and_meaning String_and_meaning_forehead = {
    .string = "forehead",
    .meaning = "n. 额，前额"};

String_and_meaning String_and_meaning_foreign = {
    .string = "foreign",
    .meaning = "adj. 外国的；外交的；异质的；不相关的"};

String_and_meaning String_and_meaning_foreigner = {
    .string = "foreigner",
    .meaning = "n. 外地人，外国人"};

String_and_meaning String_and_meaning_foremost = {
    .string = "foremost",
    .meaning = "adj. 最重要的；最先的adv. 首先；居于首位地"};

String_and_meaning String_and_meaning_foresee = {
    .string = "foresee",
    .meaning = "vt. 预见；预知"};

String_and_meaning String_and_meaning_forest = {
    .string = "forest",
    .meaning = "n. 森林，林区；（森林似的）一丛；皇家林地，御猎场v. 植林于；被森林覆盖n. (Forest) 福雷斯特（人名）"};

String_and_meaning String_and_meaning_forever = {
    .string = "forever",
    .meaning = "adv. 永远；不断地；常常"};

String_and_meaning String_and_meaning_forget = {
    .string = "forget",
    .meaning = "vt. 忘记；忽略vi. 忘记n. (Forget)人名；(法)福尔热"};

String_and_meaning String_and_meaning_forgive = {
    .string = "forgive",
    .meaning = "vt. 原谅；免除（债务、义务等）vi. 表示原谅"};

String_and_meaning String_and_meaning_fork = {
    .string = "fork",
    .meaning = "n. 叉；餐叉；耙vt. 叉起；使成叉状vi. 分叉；分歧n. (Fork)人名；(英、德)福克"};

String_and_meaning String_and_meaning_form = {
    .string = "form",
    .meaning = "n. 形式，形状；形态，外形；方式；表格vt. 构成，组成；排列，组织；产生，塑造vi. 形成，构成；排列n. (Form)人名；(英)福姆；(法、德)福尔姆"};

String_and_meaning String_and_meaning_formal = {
    .string = "formal",
    .meaning = "adj. 正式的；拘谨的；有条理的n. 正式的社交活动；夜礼服n. (Formal)人名；(法)福马尔"};

String_and_meaning String_and_meaning_format = {
    .string = "format",
    .meaning = "n. 格式；版式；开本vt. 使格式化；规定…的格式vi. 设计版式"};

String_and_meaning String_and_meaning_formation = {
    .string = "formation",
    .meaning = "n. 形成；构造；编队"};

String_and_meaning String_and_meaning_former = {
    .string = "former",
    .meaning = "adj. 从前的，前者的；前任的n. 模型，样板；起形成作用的人n. (Former)人名；(法)福尔梅；(德、捷)福尔默"};

String_and_meaning String_and_meaning_formidable = {
    .string = "formidable",
    .meaning = "adj. 强大的；可怕的；令人敬畏的；艰难的"};

String_and_meaning String_and_meaning_formula = {
    .string = "formula",
    .meaning = "n. [数] 公式，准则；配方；婴儿食品"};

String_and_meaning String_and_meaning_formulate = {
    .string = "formulate",
    .meaning = "vt. 规划；用公式表示；明确地表达"};

String_and_meaning String_and_meaning_fort = {
    .string = "fort",
    .meaning = "n. 堡垒；要塞；（美）边界贸易站vt. 设要塞保卫vi. 构筑要塞n. (Fort)人名；(法)福尔；(德、英、西、葡、匈)福特"};

String_and_meaning String_and_meaning_forth = {
    .string = "forth",
    .meaning = "adv. 向前，向外；自…以后n. (Forth)人名；(德)福特；(英)福思"};

String_and_meaning String_and_meaning_forthcoming = {
    .string = "forthcoming",
    .meaning = "adj. 即将来临的n. 来临"};

String_and_meaning String_and_meaning_fortnight = {
    .string = "fortnight",
    .meaning = "n. 两星期"};

String_and_meaning String_and_meaning_fortunate = {
    .string = "fortunate",
    .meaning = "adj. 幸运的；侥幸的；吉祥的；带来幸运的"};

String_and_meaning String_and_meaning_fortunately = {
    .string = "fortunately",
    .meaning = "adv. 幸运地"};

String_and_meaning String_and_meaning_fortune = {
    .string = "fortune",
    .meaning = "n. 财富；命运；运气vt. 给予财富vi. 偶然发生n. (Fortune)人名；(英)福琼；(法)福蒂纳"};

String_and_meaning String_and_meaning_forty = {
    .string = "forty",
    .meaning = "n. 四十adj. 四十的；四十个的"};

String_and_meaning String_and_meaning_forum = {
    .string = "forum",
    .meaning = "n. 论坛，讨论会；法庭；公开讨论的广场"};

String_and_meaning String_and_meaning_forward = {
    .string = "forward",
    .meaning = "adj.早的,迅速的,前进的vt.转寄,促进,运送adv.向前地,向将来n.[体](足球等)前锋"};

String_and_meaning String_and_meaning_fossil = {
    .string = "fossil",
    .meaning = "n. 化石；僵化的事物；顽固不化的人adj. 化石的；陈腐的，守旧的"};

String_and_meaning String_and_meaning_foster = {
    .string = "foster",
    .meaning = "v. 促进；抚育（他人子女一段时间）；收养；把（孩子）交托给养父母adj. 代养的，寄养的n. (Foster) 福斯特（人名）"};

String_and_meaning String_and_meaning_foul = {
    .string = "foul",
    .meaning = "adj. 犯规的；邪恶的；污秽的；淤塞的vt. 犯规；弄脏；淤塞；缠住，妨害vi. 犯规；腐烂；缠结n. 犯规；缠绕adv. 违反规则地，不正当地"};

String_and_meaning String_and_meaning_found = {
    .string = "found",
    .meaning = "vt. 创立，建立；创办v. 找到（find的过去分词）"};

String_and_meaning String_and_meaning_foundation = {
    .string = "foundation",
    .meaning = "n. 基础；地基；基金会；根据；创立"};

String_and_meaning String_and_meaning_fountain = {
    .string = "fountain",
    .meaning = "n. 喷泉，泉水；源泉n. (Fountain)人名；(英)方丹"};

String_and_meaning String_and_meaning_four = {
    .string = "four",
    .meaning = "num.四,四个,第四(卷,章,叶等)"};

String_and_meaning String_and_meaning_fourteen = {
    .string = "fourteen",
    .meaning = "num. 十四；十四个；十四岁n. 十四的记号；十四岁；十四点钟adj. 十四的；十四个的；十四岁的"};

String_and_meaning String_and_meaning_fourth = {
    .string = "fourth",
    .meaning = "adj. 第四的，第四个的；四分之一的n. 第四，月的第四日；四分之一num. 第四"};

String_and_meaning String_and_meaning_fox = {
    .string = "fox",
    .meaning = "n. 狐狸；狡猾的人；狐皮；狐狸精，性感的女子v. 使猜不透；欺骗，使迷惑；耍狡猾手段n. (Fox)（英、美、德、丹、爱）福克斯（人名）"};

String_and_meaning String_and_meaning_fraction = {
    .string = "fraction",
    .meaning = "n. 分数；部分；小部分；稍微"};

String_and_meaning String_and_meaning_fracture = {
    .string = "fracture",
    .meaning = "n. 破裂，断裂；[外科] 骨折vi. 破裂；折断vt. 使破裂"};

String_and_meaning String_and_meaning_fragile = {
    .string = "fragile",
    .meaning = "adj. 脆的；易碎的"};

String_and_meaning String_and_meaning_fragment = {
    .string = "fragment",
    .meaning = "n. 碎片；片段或不完整部分vt. 使成碎片vi. 破碎或裂开"};

String_and_meaning String_and_meaning_frame = {
    .string = "frame",
    .meaning = "n.结构,体格vt.构成,设计,制定,使适合,陷害vi.英方有成功希望n.帧,画面,框架"};

String_and_meaning String_and_meaning_framework = {
    .string = "framework",
    .meaning = "n. 框架，骨架；结构，构架"};

String_and_meaning String_and_meaning_France = {
    .string = "France",
    .meaning = "n. 法国；法郎士（姓氏）"};

String_and_meaning String_and_meaning_frank = {
    .string = "frank",
    .meaning = "adj. 坦白的，直率的；老实的n. 免费邮寄特权vt. 免费邮寄n. （Frank）弗兰克（人名）"};

String_and_meaning String_and_meaning_fraud = {
    .string = "fraud",
    .meaning = "n. 欺骗；骗子；诡计n. (Fraud)人名；(法)弗罗"};

String_and_meaning String_and_meaning_free = {
    .string = "free",
    .meaning = "adj. 免费的；自由的，不受约束的；[化学] 游离的vt. 使自由，解放；释放adv. 自由地；免费n. (Free)人名；(英)弗里"};

String_and_meaning String_and_meaning_freedom = {
    .string = "freedom",
    .meaning = "n. 自由，自主；直率n. (Freedom)人名；(英)弗里德姆"};

String_and_meaning String_and_meaning_freely = {
    .string = "freely",
    .meaning = "adv. 自由地；免费地；大量地；慷慨地；直率地"};

String_and_meaning String_and_meaning_freeze = {
    .string = "freeze",
    .meaning = "v.(使)结冰,(使)冷冻,冻结"};

String_and_meaning String_and_meaning_freight = {
    .string = "freight",
    .meaning = "n. 货运；运费；船货v. 运送；装货；使充满"};

String_and_meaning String_and_meaning_French = {
    .string = "French",
    .meaning = "adj. 法国的；法语的；法国人的n. 法国人；法语n. （美、英、加、澳）弗伦奇（人名）"};

String_and_meaning String_and_meaning_frequency = {
    .string = "frequency",
    .meaning = "n. 频率；频繁"};

String_and_meaning String_and_meaning_frequent = {
    .string = "frequent",
    .meaning = "adj. 频繁的；时常发生的；惯常的vt. 常到，常去；时常出入于"};

String_and_meaning String_and_meaning_frequently = {
    .string = "frequently",
    .meaning = "adv. 频繁地，经常地；时常，屡次"};

String_and_meaning String_and_meaning_fresh = {
    .string = "fresh",
    .meaning = "adj. 新鲜的；清新的；淡水的；无经验的n. 开始；新生；泛滥adv. 刚刚，才；最新地"};

String_and_meaning String_and_meaning_friction = {
    .string = "friction",
    .meaning = "n. 摩擦，[力] 摩擦力"};

String_and_meaning String_and_meaning_Friday = {
    .string = "Friday",
    .meaning = "n. 星期五"};

String_and_meaning String_and_meaning_fridge = {
    .string = "fridge",
    .meaning = "n. 电冰箱n. (Fridge)人名；(英)弗里奇"};

String_and_meaning String_and_meaning_friend = {
    .string = "friend",
    .meaning = "n. 朋友；助手；赞助者n. (Friend)人名；(英)弗兰德"};

String_and_meaning String_and_meaning_friendly = {
    .string = "friendly",
    .meaning = "adj. 友好的；亲切的；支持的；融洽的，和睦的n. 友谊赛n. （Friendly）（英）弗兰德利（人名）"};

String_and_meaning String_and_meaning_friendship = {
    .string = "friendship",
    .meaning = "n. 友谊；友爱；友善n. (Friendship)人名；(英)弗兰德希普"};

String_and_meaning String_and_meaning_frighten = {
    .string = "frighten",
    .meaning = "vt. 使惊吓；吓唬…vi. 害怕，惊恐"};

String_and_meaning String_and_meaning_fringe = {
    .string = "fringe",
    .meaning = "n. 边缘；穗；刘海adj. 边缘的；附加的vt. 加穗于"};

String_and_meaning String_and_meaning_frog = {
    .string = "frog",
    .meaning = "n. 青蛙；[铁路] 辙叉；饰扣vi. 捕蛙n. (Frog)人名；(俄)弗罗格"};

String_and_meaning String_and_meaning_from = {
    .string = "from",
    .meaning = "prep.从,今后,来自,由于"};

String_and_meaning String_and_meaning_front = {
    .string = "front",
    .meaning = "n. 前面；正面；前线vt. 面对；朝向；对付vi. 朝向adj. 前面的；正面的adv. 在前面；向前n. (Front)人名；(法)弗龙"};

String_and_meaning String_and_meaning_frontier = {
    .string = "frontier",
    .meaning = "n. 前沿；边界；国境adj. 边界的；开拓的n. (Frontier)人名；(法)弗龙捷"};

String_and_meaning String_and_meaning_frost = {
    .string = "frost",
    .meaning = "n. 严寒天气，冰冻；霜；冷淡；（非正式）失败v. 结霜于；结霜；受冻，冻坏；在……上撒糖霜n. (Frost) （英、美、德）弗罗斯特（人名）"};

String_and_meaning String_and_meaning_frown = {
    .string = "frown",
    .meaning = "vi. 皱眉；不同意vt. 皱眉，蹙额n. 皱眉，蹙额"};

String_and_meaning String_and_meaning_fruit = {
    .string = "fruit",
    .meaning = "n. 水果；产物vi. 结果实vt. 使……结果实n. (Fruit)人名；(法)弗吕；(英)弗鲁特"};

String_and_meaning String_and_meaning_fruitful = {
    .string = "fruitful",
    .meaning = "adj. 富有成效的；多产的；果实结得多的"};

String_and_meaning String_and_meaning_frustrate = {
    .string = "frustrate",
    .meaning = "vt. 挫败；阻挠；使感到灰心vi. 失败；受挫adj. 挫败的；无益的"};

String_and_meaning String_and_meaning_fry = {
    .string = "fry",
    .meaning = "v. 油炸，油煎；（被阳光）灼伤；（非正式）用电刑处死n. 鱼苗；油炸食品；炒杂烩菜；油炸食品聚餐会；炸薯条n. (Fry) （美）弗赖伊（人名）"};

String_and_meaning String_and_meaning_fuel = {
    .string = "fuel",
    .meaning = "n. 燃料；刺激因素；（为身体提供能量的）食物vt. 给……提供燃料；刺激，煽动；推动vi. 得到燃料n. (Fuel) （美）傅爱乐（人名）"};

String_and_meaning String_and_meaning_fulfil = {
    .string = "fulfil",
    .meaning = "vt. 履行；完成；实践；满足"};

String_and_meaning String_and_meaning_full = {
    .string = "full",
    .meaning = "adj. 完全的，完整的；满的，充满的；丰富的；完美的；丰满的；详尽的adv. 十分，非常；完全地；整整vt. 把衣服缝得宽大n. 全部；完整"};

String_and_meaning String_and_meaning_fun = {
    .string = "fun",
    .meaning = "vi. 非正式开玩笑n. 乐趣；玩笑"};

String_and_meaning String_and_meaning_function = {
    .string = "function",
    .meaning = "n. 功能；[数] 函数；职责；盛大的集会vi. 运行；活动；行使职责"};

String_and_meaning String_and_meaning_fund = {
    .string = "fund",
    .meaning = "n. 基金；资金；存款vt. 投资；资助n. (Fund)人名；(德)丰德"};

String_and_meaning String_and_meaning_fundamental = {
    .string = "fundamental",
    .meaning = "adj. 基本的，根本的n. 基本原理；基本原则"};

String_and_meaning String_and_meaning_funeral = {
    .string = "funeral",
    .meaning = "n. 葬礼；麻烦事adj. 丧葬的，出殡的"};

String_and_meaning String_and_meaning_funny = {
    .string = "funny",
    .meaning = "adj.有趣的,好笑的,滑稽的,奇异的,古怪的n.滑稽人物"};

String_and_meaning String_and_meaning_fur = {
    .string = "fur",
    .meaning = "n. 皮，皮子；毛皮；软毛n. 水垢vt. 用毛皮覆盖；使穿毛皮服装n. (Fur)人名；(法)菲尔；(瑞典)富尔"};

String_and_meaning String_and_meaning_furious = {
    .string = "furious",
    .meaning = "adj. 激烈的；狂怒的；热烈兴奋的；喧闹的"};

String_and_meaning String_and_meaning_furnace = {
    .string = "furnace",
    .meaning = "n. 火炉，熔炉"};

String_and_meaning String_and_meaning_furnish = {
    .string = "furnish",
    .meaning = "vt. 提供；供应；装备"};

String_and_meaning String_and_meaning_furniture = {
    .string = "furniture",
    .meaning = "n. 家具；设备；储藏物"};

String_and_meaning String_and_meaning_further = {
    .string = "further",
    .meaning = "adv. 更远地；远非（如此）；进一步地；而且；处于更高阶段adj. 更多的，附加的；更远的；进一步的，深一层的v. 促进，增进，助长"};

String_and_meaning String_and_meaning_furthermore = {
    .string = "furthermore",
    .meaning = "adv. 此外；而且"};

String_and_meaning String_and_meaning_fuse = {
    .string = "fuse",
    .meaning = "n.保险丝,熔丝v.熔合"};

String_and_meaning String_and_meaning_fusion = {
    .string = "fusion",
    .meaning = "n. 融合；熔化；熔接；融合物；[物] 核聚变"};

String_and_meaning String_and_meaning_fuss = {
    .string = "fuss",
    .meaning = "n. 大惊小怪；反对，抗议；繁琐的手续；（为小事）大发牢骚v. 瞎操心；忙乱；打扰；过分关怀；过于讲究细节；吵闹n. （Fuss）（美）菲斯（人名）"};

String_and_meaning String_and_meaning_future = {
    .string = "future",
    .meaning = "n. 未来；前途；期货；将来时adj. 将来的，未来的"};

String_and_meaning String_and_meaning_gain = {
    .string = "gain",
    .meaning = "n. 增加；利润；收获vt. 获得；增加；赚到vi. 增加；获利n. (Gain)人名；(英、匈、法)盖恩"};

String_and_meaning String_and_meaning_galaxy = {
    .string = "galaxy",
    .meaning = "n. [天] 星系；银河系（the Galaxy）；一群显赫的人n. 三星智能手机品牌 2015年三星中国公布Galaxy的中文名称为“盖乐世”（Galaxy）[ 复数galaxies ]"};

String_and_meaning String_and_meaning_gallery = {
    .string = "gallery",
    .meaning = "n. 画廊；走廊；旁听席；地道vt. 在…修建走廊；在…挖地道vi. 挖地道n. (Gallery)人名；(英)加勒里"};

String_and_meaning String_and_meaning_gallon = {
    .string = "gallon",
    .meaning = "n. 加仑（容量单位）n. (Gallon)人名；(法、意、瑞典)加隆"};

String_and_meaning String_and_meaning_gamble = {
    .string = "gamble",
    .meaning = "v. 赌博；打赌；冒险，投机；孤注一掷；冒险假设n. 冒险；赌博；打赌n. (Gamble) （美）甘布勒（人名）"};

String_and_meaning String_and_meaning_game = {
    .string = "game",
    .meaning = "n. 游戏；比赛；猎物，野味adj. 勇敢的vi. 赌博n. (Game)人名；(英)盖姆；(法)加姆；(西)加梅"};

String_and_meaning String_and_meaning_gang = {
    .string = "gang",
    .meaning = "n. 群；一伙；一组vt. 使成群结队；结伙伤害或恐吓某人vi. 成群结队n. (Gang)人名；(法)冈；(罗)甘格；(英)甘"};

String_and_meaning String_and_meaning_gaol = {
    .string = "gaol",
    .meaning = "n. 监狱，监禁（同 jail）v. 把……投入监狱，监禁（同 jail）n. (Gaol) （美、印）高娅乐（人名）"};

String_and_meaning String_and_meaning_gap = {
    .string = "gap",
    .meaning = "n. 间隙；缺口；差距；分歧vi. 裂开vt. 使形成缺口"};

String_and_meaning String_and_meaning_garage = {
    .string = "garage",
    .meaning = "n. 车库；汽车修理厂；飞机库vt. 把……送入车库；把（汽车）开进车库n. （阿拉伯）贾拉杰（人名）"};

String_and_meaning String_and_meaning_garbage = {
    .string = "garbage",
    .meaning = "n. 垃圾；废物n. (Garbage)人名；(法)加尔巴热"};

String_and_meaning String_and_meaning_garden = {
    .string = "garden",
    .meaning = "n. 花园；菜园vt. 栽培花木vi. 从事园艺；在园中种植n. (Garden)人名；(英、意、巴基)加登"};

String_and_meaning String_and_meaning_gardener = {
    .string = "gardener",
    .meaning = "n. 园丁；花匠；园艺家n. (Gardener)人名；(英)加德纳"};

String_and_meaning String_and_meaning_garment = {
    .string = "garment",
    .meaning = "n. 衣服，服装；外表，外观vt. 给…穿衣服n. (Garment)人名；(英)加门特"};

String_and_meaning String_and_meaning_gas = {
    .string = "gas",
    .meaning = "n. 气体；[矿业] 瓦斯；汽油；毒气vt. 加油；毒（死）vi. 加油；放出气体；空谈n. (Gas)人名；(法、德、西)加斯"};

String_and_meaning String_and_meaning_gaseous = {
    .string = "gaseous",
    .meaning = "adj. 气态的，气体的；无实质的"};

String_and_meaning String_and_meaning_gasoline = {
    .string = "gasoline",
    .meaning = "n. 汽油"};

String_and_meaning String_and_meaning_gasp = {
    .string = "gasp",
    .meaning = "vi. 喘气；喘息；渴望vt. 气喘吁吁地说；喘着气说话n. 喘气"};

String_and_meaning String_and_meaning_gate = {
    .string = "gate",
    .meaning = "n. 大门；出入口；门道vt. 给…装大门n. (Gate)人名；(英)盖特；(法、瑞典)加特"};

String_and_meaning String_and_meaning_gather = {
    .string = "gather",
    .meaning = "vt. 收集；收割；使…聚集；使…皱起vi. 聚集；化脓；皱起n. 聚集；衣褶；收获量n. (Gather)人名；(德)加特"};

String_and_meaning String_and_meaning_gauge = {
    .string = "gauge",
    .meaning = "n. 计量器；标准尺寸；容量规格；针织物的细度vt. 测量；估计；给……定规格"};

String_and_meaning String_and_meaning_gay = {
    .string = "gay",
    .meaning = "adj. 同性恋的；与同性恋相关的；快乐的；放荡的；艳丽的n. 同性恋者n. （Gay）（西）加伊；（英、法、瑞典、毛里塔）盖伊（人名）"};

String_and_meaning String_and_meaning_gaze = {
    .string = "gaze",
    .meaning = "vi. 凝视；注视n. 凝视；注视n. （Gaze）（俄、意）加泽；（德）加策（人名）"};

String_and_meaning String_and_meaning_gear = {
    .string = "gear",
    .meaning = "n.齿轮,传动装置v.调整,(使)适合,换档"};

String_and_meaning String_and_meaning_gene = {
    .string = "gene",
    .meaning = "n. [遗] 基因，遗传因子"};

String_and_meaning String_and_meaning_general = {
    .string = "general",
    .meaning = "adj. 一般的，普通的；综合的；大体的n. 一般；将军，上将；常规n. (General)人名；(英)杰纳勒尔"};

String_and_meaning String_and_meaning_generalize = {
    .string = "generalize",
    .meaning = "vt. 概括；推广；使...一般化vi. 形成概念"};

String_and_meaning String_and_meaning_generally = {
    .string = "generally",
    .meaning = "adv. 通常；普遍地，一般地"};

String_and_meaning String_and_meaning_generate = {
    .string = "generate",
    .meaning = "vt. 使形成；发生；生殖；产生物理反应"};

String_and_meaning String_and_meaning_generation = {
    .string = "generation",
    .meaning = "n. 一代；产生；一代人；生殖"};

String_and_meaning String_and_meaning_generator = {
    .string = "generator",
    .meaning = "n. 发电机；发生器；生产者"};

String_and_meaning String_and_meaning_generous = {
    .string = "generous",
    .meaning = "adj. 慷慨的，大方的；宽宏大量的；有雅量的"};

String_and_meaning String_and_meaning_genetic = {
    .string = "genetic",
    .meaning = "adj. 遗传的；基因的；起源的"};

String_and_meaning String_and_meaning_genius = {
    .string = "genius",
    .meaning = "n. 天才，天赋；精神n. （Genius）妙选"};

String_and_meaning String_and_meaning_gentle = {
    .string = "gentle",
    .meaning = "adj. 温和的；文雅的vt. 使温和，使驯服n. 蛆，饵n. (Gentle)人名；(英)金特尔"};

String_and_meaning String_and_meaning_gentleman = {
    .string = "gentleman",
    .meaning = "n. 先生；绅士；有身份的人"};

String_and_meaning String_and_meaning_gently = {
    .string = "gently",
    .meaning = "adv. 轻轻地；温柔地，温和地"};

String_and_meaning String_and_meaning_genuine = {
    .string = "genuine",
    .meaning = "adj. 真实的，真正的；诚恳的"};

String_and_meaning String_and_meaning_geography = {
    .string = "geography",
    .meaning = "n. 地理；地形"};

String_and_meaning String_and_meaning_geology = {
    .string = "geology",
    .meaning = "n. 地质学；地质情况"};

String_and_meaning String_and_meaning_geometry = {
    .string = "geometry",
    .meaning = "n. 几何学几何结构"};

String_and_meaning String_and_meaning_germ = {
    .string = "germ",
    .meaning = "n. [植] 胚芽，萌芽；细菌vi. 萌芽"};

String_and_meaning String_and_meaning_German = {
    .string = "German",
    .meaning = "adj. 德国的；德语的，德国人的n. 德语；德国人；德裔，有德国血统的人"};

String_and_meaning String_and_meaning_Germany = {
    .string = "Germany",
    .meaning = "n. 德国"};

String_and_meaning String_and_meaning_gesture = {
    .string = "gesture",
    .meaning = "n. 姿态；手势vi. 作手势；用动作示意vt. 用动作表示"};

String_and_meaning String_and_meaning_get = {
    .string = "get",
    .meaning = "vt. 使得；获得；受到；变成n. 生殖；幼兽vi. 成为；变得；到达"};

String_and_meaning String_and_meaning_ghost = {
    .string = "ghost",
    .meaning = "n. 鬼，幽灵vt. 作祟于；替…捉刀；为人代笔vi. 替人代笔"};

String_and_meaning String_and_meaning_giant = {
    .string = "giant",
    .meaning = "n. 巨人；伟人；巨大的动物；巨型植物；大公司；（天文）巨星adj. 巨大的；巨人般的；伟大的"};

String_and_meaning String_and_meaning_gift = {
    .string = "gift",
    .meaning = "n. 礼物；天赋；赠品vt. 赋予；向…赠送n. (Gift)人名；(英)吉夫特"};

String_and_meaning String_and_meaning_gigantic = {
    .string = "gigantic",
    .meaning = "adj. 巨大的，庞大的"};

String_and_meaning String_and_meaning_girl = {
    .string = "girl",
    .meaning = "n. 女孩；姑娘，未婚女子；女职员，女演员；（男人的）女朋友n. (Girl)（捷）吉尔（人名）"};

String_and_meaning String_and_meaning_give = {
    .string = "give",
    .meaning = "vt. 给；产生；让步；举办；授予n. 弹性；弯曲；伸展性vi. 捐赠；面向；有弹性；气候转暖n. (Give)人名；(意)吉韦"};

String_and_meaning String_and_meaning_given = {
    .string = "given",
    .meaning = "adj. 赠予的；沉溺的；规定的prep. 考虑到v. 给予（give的过去分词）n. (Given)人名；(英、土)吉文"};

String_and_meaning String_and_meaning_glad = {
    .string = "glad",
    .meaning = "adj. 高兴的；乐意的vt. 使......高兴n. (Glad)人名；(塞、瑞典)格拉德；(英)格莱德；(法、挪)格拉"};

String_and_meaning String_and_meaning_glance = {
    .string = "glance",
    .meaning = "vi.扫视,匆匆一看n.一瞥,眼光,匆匆一看"};

String_and_meaning String_and_meaning_glare = {
    .string = "glare",
    .meaning = "v. 怒目而视，瞪眼看；发出刺眼的光n. 怒视，瞪眼；刺眼；耀眼的光；受公众注目；张扬；俗艳adj. 光滑的"};

String_and_meaning String_and_meaning_glass = {
    .string = "glass",
    .meaning = "n. 玻璃；玻璃制品；镜子vt. 反映；给某物加玻璃vi. 成玻璃状n. (Glass)人名；(英、法、德、意)格拉斯"};

String_and_meaning String_and_meaning_gleam = {
    .string = "gleam",
    .meaning = "n. 微光；闪光；瞬息的一现vi. 闪烁；隐约地闪现vt. 使闪烁；使发微光"};

String_and_meaning String_and_meaning_glide = {
    .string = "glide",
    .meaning = "vi. 滑翔；滑行；悄悄地走；消逝vt. 使滑行；使滑动n. 滑翔；滑行；滑移；滑音"};

String_and_meaning String_and_meaning_glimpse = {
    .string = "glimpse",
    .meaning = "n. 一瞥，一看vi. 瞥见vt. 瞥见"};

String_and_meaning String_and_meaning_glitter = {
    .string = "glitter",
    .meaning = "v. 闪光；闪烁n. 闪光；灿烂；华而不实；（眼中的）光亮"};

String_and_meaning String_and_meaning_global = {
    .string = "global",
    .meaning = "adj. 全球的；总体的；球形的"};

String_and_meaning String_and_meaning_globe = {
    .string = "globe",
    .meaning = "n. 地球；地球仪；球体vt. 使…成球形vi. 成球状"};

String_and_meaning String_and_meaning_gloomy = {
    .string = "gloomy",
    .meaning = "adj. 黑暗的；沮丧的；阴郁的"};

String_and_meaning String_and_meaning_glorious = {
    .string = "glorious",
    .meaning = "adj. 光荣的；辉煌的；极好的"};

String_and_meaning String_and_meaning_glory = {
    .string = "glory",
    .meaning = "n. 光荣，荣誉；赞颂vi. 自豪，骄傲；狂喜n. (Glory)人名；(法)格洛里"};

String_and_meaning String_and_meaning_glove = {
    .string = "glove",
    .meaning = "n. 手套vt. 给…戴手套"};

String_and_meaning String_and_meaning_glow = {
    .string = "glow",
    .meaning = "vi.发光,发热"};

String_and_meaning String_and_meaning_glue = {
    .string = "glue",
    .meaning = "n. 胶，胶水v. （用胶水）粘合；（非正式）专注于"};

String_and_meaning String_and_meaning_go = {
    .string = "go",
    .meaning = "vi. 走；达到；运转；趋于n. 去；进行；尝试vt. 忍受；出产；以……打赌"};

String_and_meaning String_and_meaning_goal = {
    .string = "goal",
    .meaning = "n. 目标；球门，得分数；终点vi. 攻门，射门得分"};

String_and_meaning String_and_meaning_goat = {
    .string = "goat",
    .meaning = "n. 山羊；替罪羊（美俚）；色鬼（美俚）"};

String_and_meaning String_and_meaning_God = {
    .string = "God",
    .meaning = "n. 神；（大写首字母时）上帝vt. 膜拜，崇拜n. (God)人名；(索、阿拉伯)古德"};

String_and_meaning String_and_meaning_gold = {
    .string = "gold",
    .meaning = "n. 金，黄金；金色；金币adj. 金的，金制的；金色的n. (Gold)人名；(英、法、德、西、罗、捷、瑞典)戈尔德"};

String_and_meaning String_and_meaning_golden = {
    .string = "golden",
    .meaning = "adj. 金色的，黄金般的；珍贵的；金制的n. (Golden)人名；(英、法、罗、德、瑞典)戈尔登"};

String_and_meaning String_and_meaning_golf = {
    .string = "golf",
    .meaning = "n. 高尔夫球；高尔夫球运动vi. 打高尔夫球n. (Golf)人名；(西、挪)戈尔夫"};

String_and_meaning String_and_meaning_good = {
    .string = "good",
    .meaning = "adj. 好的；优良的；愉快的；虔诚的n. 好处；善行；慷慨的行为adv. 好n. (Good)人名；(英)古德；(瑞典)戈德"};

String_and_meaning String_and_meaning_goodbye = {
    .string = "goodbye",
    .meaning = "int. 再见；告别"};

String_and_meaning String_and_meaning_goodness = {
    .string = "goodness",
    .meaning = "n. 善良，美德；仁慈，慷慨；精华，养分int. （表示吃惊或愤怒）天哪；上帝的替代语"};

String_and_meaning String_and_meaning_goods = {
    .string = "goods",
    .meaning = "n. 商品；动产；合意的人；真本领"};

String_and_meaning String_and_meaning_goose = {
    .string = "goose",
    .meaning = "n. 鹅；鹅肉；傻瓜；雌鹅vt. 突然加大油门；嘘骂n. (Goose)人名；(德)戈泽；(英)古斯"};

String_and_meaning String_and_meaning_gorgeous = {
    .string = "gorgeous",
    .meaning = "adj. 华丽的，灿烂的；极好的"};

String_and_meaning String_and_meaning_gossip = {
    .string = "gossip",
    .meaning = "n. 小道传闻；随笔；爱说长道短的人vi. 闲聊；传播流言蜚语"};

String_and_meaning String_and_meaning_govern = {
    .string = "govern",
    .meaning = "vt. 管理；支配；统治；控制vi. 居支配地位；进行统治n. (Govern)人名；(英)戈文"};

String_and_meaning String_and_meaning_government = {
    .string = "government",
    .meaning = "n. 政府；政体；管辖"};

String_and_meaning String_and_meaning_governor = {
    .string = "governor",
    .meaning = "n. 主管人员；统治者，管理者；[自] 调节器；地方长官"};

String_and_meaning String_and_meaning_gown = {
    .string = "gown",
    .meaning = "n. 长袍，长外衣；礼服；睡袍；法衣vt. 使穿睡衣"};

String_and_meaning String_and_meaning_grab = {
    .string = "grab",
    .meaning = "vt. 攫取；霸占；将…深深吸引vi. 攫取；夺取n. 攫取；霸占；夺取之物"};

String_and_meaning String_and_meaning_grace = {
    .string = "grace",
    .meaning = "n. 优雅；恩惠；魅力；慈悲vt. 使优美n. (Grace)人名；(英)格雷斯，格雷丝 (女名)；(法)格拉斯"};

String_and_meaning String_and_meaning_graceful = {
    .string = "graceful",
    .meaning = "adj. 优雅的；优美的"};

String_and_meaning String_and_meaning_gracious = {
    .string = "gracious",
    .meaning = "adj. 亲切的；高尚的；和蔼的；雅致的int. 天哪；哎呀"};

String_and_meaning String_and_meaning_grade = {
    .string = "grade",
    .meaning = "n. 年级；等级；成绩；级别；阶段vt. 评分；把…分等级vi. 分等级；逐渐变化n. (Grade)人名；(英)格雷德；(法、德、西、葡、塞、瑞典)格拉德"};

String_and_meaning String_and_meaning_gradual = {
    .string = "gradual",
    .meaning = "adj. 逐渐的；平缓的n. 弥撒升阶圣歌集"};

String_and_meaning String_and_meaning_gradually = {
    .string = "gradually",
    .meaning = "adv. 逐步地；渐渐地"};

String_and_meaning String_and_meaning_graduate = {
    .string = "graduate",
    .meaning = "n.(大学)毕业生,研究生v.(使)(大学)毕业"};

String_and_meaning String_and_meaning_grain = {
    .string = "grain",
    .meaning = "n. 粮食；颗粒；谷物；纹理；晶粒；旧格令（质量单位，等于0.0648克）vi. 成谷粒vt. 使成谷粒n. （Grain）（法）格兰（人名）"};

String_and_meaning String_and_meaning_grammar = {
    .string = "grammar",
    .meaning = "n. 语法；语法书"};

String_and_meaning String_and_meaning_grammatical = {
    .string = "grammatical",
    .meaning = "adj. 文法的；符合语法规则的"};

String_and_meaning String_and_meaning_gramme = {
    .string = "gramme",
    .meaning = "n. 克n. (Gramme)人名；(法)格拉姆"};

String_and_meaning String_and_meaning_grand = {
    .string = "grand",
    .meaning = "adj. 宏伟的；豪华的；极重要的n. 大钢琴；一千美元n. (Grand)人名；(法)格朗；(英、瑞典)格兰德"};

String_and_meaning String_and_meaning_granddaughter = {
    .string = "granddaughter",
    .meaning = "n. 孙女；外孙女"};

String_and_meaning String_and_meaning_grandfather = {
    .string = "grandfather",
    .meaning = "n. 祖父；始祖vt. 不受新规定限制"};

String_and_meaning String_and_meaning_grandmother = {
    .string = "grandmother",
    .meaning = "n. 祖母；女祖先vt. 当…的祖母vi. 当祖母"};

String_and_meaning String_and_meaning_grandson = {
    .string = "grandson",
    .meaning = "n. 孙子；外孙"};

String_and_meaning String_and_meaning_grant = {
    .string = "grant",
    .meaning = "v. （合法地）授予，允许；（勉强）承认，同意n. （政府）拨款，补助金；授予，给予；合法转让，正式授予n. （Grant）（美）格朗（人名）"};

String_and_meaning String_and_meaning_Grant = {
    .string = "Grant",
    .meaning = "n. （美）格朗（人名）v. (grant) （正式）准许，授予；（勉强）承认，同意n. (grant) 拨款；正式授予；合法转让"};

String_and_meaning String_and_meaning_grape = {
    .string = "grape",
    .meaning = "n. 葡萄；葡萄酒；葡萄树；葡萄色n. (Grape)人名；(法)格拉普；(德、瑞典)格拉佩"};

String_and_meaning String_and_meaning_graph = {
    .string = "graph",
    .meaning = "n. 图表；曲线图vt. 用曲线图表示n. (Graph)人名；(英)格拉夫"};

String_and_meaning String_and_meaning_grasp = {
    .string = "grasp",
    .meaning = "v. 抓牢，握紧；试图抓住；理解，领悟；毫不犹豫地抓住（机会）n. 抓，握；理解，领会；力所能及，把握；权力，控制"};

String_and_meaning String_and_meaning_grass = {
    .string = "grass",
    .meaning = "n. 草；草地，草坪vt. 放牧；使……长满草；使……吃草vi. 长草n. (Grass)人名；(法、德、俄、瑞典、英)格拉斯"};

String_and_meaning String_and_meaning_grateful = {
    .string = "grateful",
    .meaning = "adj. 感谢的；令人愉快的，宜人的"};

String_and_meaning String_and_meaning_gratitude = {
    .string = "gratitude",
    .meaning = "n. 感谢（的心情）；感激"};

String_and_meaning String_and_meaning_grave = {
    .string = "grave",
    .meaning = "n.墓穴,坟墓adj.严重的,(颜色)黯淡的,(声音)低沉的v.雕刻,铭记"};

String_and_meaning String_and_meaning_gravity = {
    .string = "gravity",
    .meaning = "n. 重力，地心引力；严重性；庄严"};

String_and_meaning String_and_meaning_gray = {
    .string = "gray",
    .meaning = "adj. 灰色的；苍白的；灰白头发的；阴郁的n. 灰色；暗淡的光线vi. 成为灰色或灰白vt. 使成灰色或灰白n. (Gray)人名；(意)格拉伊；(英、法、葡、瑞典)格雷"};

String_and_meaning String_and_meaning_graze = {
    .string = "graze",
    .meaning = "vt. 放牧；擦伤vi. 吃草；擦伤n. 放牧；轻擦"};

String_and_meaning String_and_meaning_grease = {
    .string = "grease",
    .meaning = "n. 油脂；润滑油；（非正式）贿赂v. 涂脂于；给……加润滑油；（非正式）向某人行贿"};

String_and_meaning String_and_meaning_great = {
    .string = "great",
    .meaning = "adj. 伟大的，重大的；极好的，好的；主要的n. 大师；大人物；伟人们"};

String_and_meaning String_and_meaning_greatly = {
    .string = "greatly",
    .meaning = "adv. 很，大大地；非常"};

String_and_meaning String_and_meaning_greedy = {
    .string = "greedy",
    .meaning = "adj. 贪婪的；贪吃的；渴望的"};

String_and_meaning String_and_meaning_Greek = {
    .string = "Greek",
    .meaning = "n. 希腊语；希腊人；（有希腊字母名称的）大学生联谊会会员adj. 希腊的；希腊人的，希腊语的n. （美）格雷克（人名）"};

String_and_meaning String_and_meaning_green = {
    .string = "green",
    .meaning = "adj. 绿色的；青春的n. 绿色；青春vt. 使…变绿色vi. 变绿色n. (Green)人名；(英、意)格林；(瑞典、芬)格伦"};

String_and_meaning String_and_meaning_greenhouse = {
    .string = "greenhouse",
    .meaning = "n. 温室造成温室效应的"};

String_and_meaning String_and_meaning_greet = {
    .string = "greet",
    .meaning = "vt. 欢迎，迎接；致敬，致意；映入眼帘n. (Greet)人名；(英)格里特"};

String_and_meaning String_and_meaning_greeting = {
    .string = "greeting",
    .meaning = "n. 问候，招呼；祝贺v. 致敬，欢迎（greet 的现在分词）"};

String_and_meaning String_and_meaning_grey = {
    .string = "grey",
    .meaning = "adj. 灰色的；灰白的vt. 使变成灰色；使变老vi. 变成灰色；老化n. 灰色n. (Grey)人名；(英、法)格雷"};

String_and_meaning String_and_meaning_grief = {
    .string = "grief",
    .meaning = "n. 悲痛；忧伤；不幸"};

String_and_meaning String_and_meaning_grieve = {
    .string = "grieve",
    .meaning = "vt. 使悲伤，使苦恼vi. 悲痛，哀悼n. (Grieve)人名；(英)格里夫"};

String_and_meaning String_and_meaning_grim = {
    .string = "grim",
    .meaning = "adj. 严肃的；令人沮丧的；阴沉的；糟糕的n. （Grim）（英、德、俄、捷、匈）格里姆（人名）"};

String_and_meaning String_and_meaning_grin = {
    .string = "grin",
    .meaning = "v. 露齿而笑，咧着嘴笑；龇牙咧嘴n. 露齿笑，咧着嘴笑n. (Grin)（俄、美）格林（人名）"};

String_and_meaning String_and_meaning_grind = {
    .string = "grind",
    .meaning = "vt. 磨碎；磨快vi. 磨碎；折磨n. 磨；苦工作n. (Grind)人名；(法、德)格林德"};

String_and_meaning String_and_meaning_grip = {
    .string = "grip",
    .meaning = "n. 紧握；柄；支配；握拍方式；拍柄绷带vt. 紧握；夹紧vi. 抓住n. (Grip)人名；(英、瑞典)格里普"};

String_and_meaning String_and_meaning_groan = {
    .string = "groan",
    .meaning = "vi. 呻吟；抱怨；发吱嘎声vt. 呻吟；抱怨n. 呻吟；叹息；吱嘎声"};

String_and_meaning String_and_meaning_grocer = {
    .string = "grocer",
    .meaning = "n. 杂货店；食品商"};

String_and_meaning String_and_meaning_grocery = {
    .string = "grocery",
    .meaning = "n. 食品杂货店；（groceries）食品杂货"};

String_and_meaning String_and_meaning_grope = {
    .string = "grope",
    .meaning = "vi. 摸索；探索vt. 摸索n. 摸索；触摸n. (Grope)人名；(德)格罗佩"};

String_and_meaning String_and_meaning_gross = {
    .string = "gross",
    .meaning = "adj. 总共的；粗野的；恶劣的；显而易见的；恶心的vt. 总共收入n. 总额，总数n. (Gross)人名；(英、法、德、意、葡、西、俄、芬、罗、捷、匈)格罗斯"};

String_and_meaning String_and_meaning_ground = {
    .string = "ground",
    .meaning = "n.地面,土地,战场,场所,范围adj.土地的,地面上的vt.把...放在地上,使搁浅,打基础vi.具有基础,着陆,搁浅 vbl.grind的过去式"};

String_and_meaning String_and_meaning_group = {
    .string = "group",
    .meaning = "n. 组；团体adj. 群的；团体的vi. 聚合vt. 把…聚集；把…分组"};

String_and_meaning String_and_meaning_grow = {
    .string = "grow",
    .meaning = "vi. 发展；生长；渐渐变得…vt. 使生长；种植；扩展n. （Grow）（英）格罗（人名）"};

String_and_meaning String_and_meaning_growth = {
    .string = "growth",
    .meaning = "n. 增长；发展；生长；种植"};

String_and_meaning String_and_meaning_guarantee = {
    .string = "guarantee",
    .meaning = "n. 保证；担保；保证人；保证书；抵押品vt. 保证；担保"};

String_and_meaning String_and_meaning_guard = {
    .string = "guard",
    .meaning = "n. 守卫；警戒；护卫队；防护装置vi. 警惕vt. 保卫；监视n. (Guard)人名；(英)格尔德"};

String_and_meaning String_and_meaning_guardian = {
    .string = "guardian",
    .meaning = "n. [法] 监护人，保护人；守护者adj. 守护的n. (Guardian)人名；(西)瓜尔迪安"};

String_and_meaning String_and_meaning_guess = {
    .string = "guess",
    .meaning = "vt. 猜测；认为；推测；猜中vi. 猜；推测；猜中n. 猜测；推测n. (Guess)人名；(英)格斯；(德)居斯"};

String_and_meaning String_and_meaning_guest = {
    .string = "guest",
    .meaning = "n. 客人，宾客；顾客vt. 款待，招待vi. 作客，寄宿adj. 客人的；特邀的，客座的n. (Guest)人名；(英)格斯特"};

String_and_meaning String_and_meaning_guidance = {
    .string = "guidance",
    .meaning = "n. 指导，引导；领导"};

String_and_meaning String_and_meaning_guide = {
    .string = "guide",
    .meaning = "n. 指南；向导；入门书vt. 引导；带领；操纵vi. 担任向导n. (Guide)人名；(法、葡)吉德"};

String_and_meaning String_and_meaning_guideline = {
    .string = "guideline",
    .meaning = "n. 指导方针参考"};

String_and_meaning String_and_meaning_guilty = {
    .string = "guilty",
    .meaning = "adj. 有罪的；内疚的"};

String_and_meaning String_and_meaning_gulf = {
    .string = "gulf",
    .meaning = "n. 海湾；深渊；分歧；漩涡vt. 吞没"};

String_and_meaning String_and_meaning_gum = {
    .string = "gum",
    .meaning = "n. 口香糖；树胶；橡皮；牙龈；牙床vt. 用胶粘，涂以树胶；使……有粘性n. （Gum）古姆（人名）"};

String_and_meaning String_and_meaning_gun = {
    .string = "gun",
    .meaning = "n. 枪支；枪状物；持枪歹徒vi. 用枪射击；加大油门快速前进vt. 向…开枪；开大油门n. (Gun)人名；(瑞典)贡；(英)冈；(俄、意)古恩"};

String_and_meaning String_and_meaning_gunpowder = {
    .string = "gunpowder",
    .meaning = "n. 火药；有烟火药"};

String_and_meaning String_and_meaning_guy = {
    .string = "guy",
    .meaning = "n. 男人，家伙vt. 嘲弄，取笑vi. 逃跑n. (Guy)人名；(西)吉；(法)居伊；(英)盖伊"};

String_and_meaning String_and_meaning_gymnasium = {
    .string = "gymnasium",
    .meaning = "n. 体育馆；健身房"};

String_and_meaning String_and_meaning_habit = {
    .string = "habit",
    .meaning = "n. 习惯，习性；嗜好vt. 使穿衣"};

String_and_meaning String_and_meaning_habitual = {
    .string = "habitual",
    .meaning = "adj. 习惯的；惯常的；习以为常的"};

String_and_meaning String_and_meaning_hair = {
    .string = "hair",
    .meaning = "n. 头发；毛发；些微"};

String_and_meaning String_and_meaning_haircut = {
    .string = "haircut",
    .meaning = "n. 理发；发型"};

String_and_meaning String_and_meaning_half = {
    .string = "half",
    .meaning = "n. 一半；半场；半学年adv. 一半地；部分地adj. 一半的；不完全的；半途的n. (Half)人名；(阿拉伯)哈勒夫；(德)哈尔夫；(英)哈夫"};

String_and_meaning String_and_meaning_hall = {
    .string = "hall",
    .meaning = "n. 过道，走廊；门厅；会堂，大厅；学生宿舍n. （Hall）（土）哈勒；（德、波、丹、芬、瑞典）哈尔；（英）霍尔；（法）阿尔（人名）"};

String_and_meaning String_and_meaning_halt = {
    .string = "halt",
    .meaning = "n.停止,暂停,中断vt.使停止,使立定vi.立定,停止,踌躇,有缺点"};

String_and_meaning String_and_meaning_hamburger = {
    .string = "hamburger",
    .meaning = "n. 汉堡包，火腿汉堡；牛肉饼，肉饼；碎牛肉n. (Hamburger)人名；(英)汉堡；(瑞典)汉布里耶；(德)汉布格尔"};

String_and_meaning String_and_meaning_hammer = {
    .string = "hammer",
    .meaning = "n.铁锤,槌,锤子v.锤击,锤打"};

String_and_meaning String_and_meaning_hamper = {
    .string = "hamper",
    .meaning = "vt. 妨碍；束缚；使困累n. 食盒，食篮；阻碍物"};

String_and_meaning String_and_meaning_hand = {
    .string = "hand",
    .meaning = "n. 手，手艺；帮助；指针；插手vt. 传递，交给；支持；搀扶n. (Hand)人名；(英、瑞典)汉德"};

String_and_meaning String_and_meaning_handbook = {
    .string = "handbook",
    .meaning = "n. 手册；指南"};

String_and_meaning String_and_meaning_handful = {
    .string = "handful",
    .meaning = "n. 少数；一把；棘手事"};

String_and_meaning String_and_meaning_handicap = {
    .string = "handicap",
    .meaning = "n. 障碍；不利条件，不利的因素vt. 妨碍，阻碍；使不利"};

String_and_meaning String_and_meaning_handkerchief = {
    .string = "handkerchief",
    .meaning = "n. 手帕；头巾，围巾"};

String_and_meaning String_and_meaning_handle = {
    .string = "handle",
    .meaning = "n.柄,把手,把柄,口实,手感vt.触摸,运用,买卖,处理,操作vi.搬运,易于操纵n.[计]句柄"};

String_and_meaning String_and_meaning_handsome = {
    .string = "handsome",
    .meaning = "adj. （男子）英俊的；可观的；大方的，慷慨的；健美而端庄的"};

String_and_meaning String_and_meaning_handwriting = {
    .string = "handwriting",
    .meaning = "n. 笔迹；书法；书写；手稿v. 亲手写（handwrite的ing形式）"};

String_and_meaning String_and_meaning_handy = {
    .string = "handy",
    .meaning = "adj. 有用的；便利的；手边的；手巧的，灵活的n. (Handy) （美、印、加）汉迪（人名）"};

String_and_meaning String_and_meaning_hang = {
    .string = "hang",
    .meaning = "n.悬挂的方式,(动作的)暂停,中止vt.悬挂,附着,装饰,绞死,踌躇,使悬而未决,垂下vi.悬着,垂下,被绞死,悬而不决"};

String_and_meaning String_and_meaning_happen = {
    .string = "happen",
    .meaning = "vi. 发生；碰巧；偶然遇到"};

String_and_meaning String_and_meaning_happiness = {
    .string = "happiness",
    .meaning = "n. 幸福"};

String_and_meaning String_and_meaning_happy = {
    .string = "happy",
    .meaning = "adj. 幸福的；高兴的；巧妙的n. (Happy)人名；(英、瑞典、喀)哈皮"};

String_and_meaning String_and_meaning_harbour = {
    .string = "harbour",
    .meaning = "n.(=harbor) 海港"};

String_and_meaning String_and_meaning_hard = {
    .string = "hard",
    .meaning = "adj.硬的,坚固的,(问题,工作等)困难的,艰苦的,猛烈的,确实的adv.努力地,辛苦地,坚硬地,牢固地,接近地,猛烈地"};

String_and_meaning String_and_meaning_harden = {
    .string = "harden",
    .meaning = "v. （使）变硬，变坚固；更严肃；（使）变坚强；（使）变冷酷；变明确；（股票等）升水n. (Harden) （美、英、加、瑞典）哈登（人名）"};

String_and_meaning String_and_meaning_hardly = {
    .string = "hardly",
    .meaning = "adv. 几乎不，简直不；刚刚"};

String_and_meaning String_and_meaning_hardship = {
    .string = "hardship",
    .meaning = "n. 困苦；苦难；艰难险阻"};

String_and_meaning String_and_meaning_hardware = {
    .string = "hardware",
    .meaning = "n. 计算机硬件；五金器具"};

String_and_meaning String_and_meaning_hare = {
    .string = "hare",
    .meaning = "n. 野兔n. (Hare)人名；(印)哈雷；(英)黑尔；(法)阿尔"};

String_and_meaning String_and_meaning_harm = {
    .string = "harm",
    .meaning = "n. 伤害；损害vt. 伤害；危害；损害n. (Harm)人名；(德)哈尔姆"};

String_and_meaning String_and_meaning_harmful = {
    .string = "harmful",
    .meaning = "adj. 有害的；能造成损害的"};

String_and_meaning String_and_meaning_harmony = {
    .string = "harmony",
    .meaning = "n. 协调；和睦；融洽；调和n. (Harmony)人名；(英)哈莫尼"};

String_and_meaning String_and_meaning_harness = {
    .string = "harness",
    .meaning = "n. 马具；背带，吊带；甲胄；挽具状带子；降落伞背带；日常工作v. 治理，利用；套；驾驭；披上甲胄；将（两只动物）拴在一起"};

String_and_meaning String_and_meaning_harsh = {
    .string = "harsh",
    .meaning = "adj. 严厉的；严酷的；刺耳的；粗糙的；刺目的；丑陋的n. (Harsh) 哈什（人名）"};

String_and_meaning String_and_meaning_harvest = {
    .string = "harvest",
    .meaning = "n. 收获；产量；结果vt. 收割；得到vi. 收割庄稼"};

String_and_meaning String_and_meaning_haste = {
    .string = "haste",
    .meaning = "n. 匆忙；急忙；轻率vi. 匆忙；赶紧vt. 赶快n. (Haste)人名；(英)黑斯特；(法)阿斯特"};

String_and_meaning String_and_meaning_hasten = {
    .string = "hasten",
    .meaning = "vt. 加速；使赶紧；催促vi. 赶快；急忙"};

String_and_meaning String_and_meaning_hasty = {
    .string = "hasty",
    .meaning = "adj. 轻率的；匆忙的；草率的；懈怠的n. (Hasty)人名；(英)黑斯蒂[ 比较级 hastier 最高级 hastiest ]"};

String_and_meaning String_and_meaning_hat = {
    .string = "hat",
    .meaning = "n. 帽子vt. 给……戴上帽子vi. 供应帽子；制造帽子n. （Hat）（中）（广东话·威妥玛）核（人名）"};

String_and_meaning String_and_meaning_hatch = {
    .string = "hatch",
    .meaning = "n. 孵化；舱口vt. 孵；策划vi. 孵化n. （Hatch）（西）阿奇；（英）哈奇（人名）"};

String_and_meaning String_and_meaning_hate = {
    .string = "hate",
    .meaning = "vt. 憎恨；厌恶；遗憾vi. 仇恨n. 憎恨；反感n. (Hate)人名；(法)阿特"};

String_and_meaning String_and_meaning_hateful = {
    .string = "hateful",
    .meaning = "adj. 可憎的；可恨的；可恶的"};

String_and_meaning String_and_meaning_hatred = {
    .string = "hatred",
    .meaning = "n. 憎恨；怨恨；敌意"};

String_and_meaning String_and_meaning_haul = {
    .string = "haul",
    .meaning = "n.用力拖拉,拖,拉,捕获物,努力得到的结果,(尤指)一网捕获的鱼量,拖运距离vi.拖,拉,改变方向,改变主意vt.拖拉,拖运"};

String_and_meaning String_and_meaning_haunt = {
    .string = "haunt",
    .meaning = "vt. 常出没于…；萦绕于…；经常去…vi. 出没；作祟n. 栖息地；常去的地方"};

String_and_meaning String_and_meaning_have = {
    .string = "have",
    .meaning = "vt. 有；让；拿；从事；允许aux. 已经n. (Have)人名；(芬)哈韦；(德)哈弗"};

String_and_meaning String_and_meaning_hawk = {
    .string = "hawk",
    .meaning = "n. 鹰；鹰派人物；掠夺的人；灰泥托板v. 叫卖；清嗓子；严密监视；放鹰袭击；飞行觅食n. (Hawk) 奥克（人名）"};

String_and_meaning String_and_meaning_hay = {
    .string = "hay",
    .meaning = "n. 干草vt. 把晒干vi. 割草晒干"};

String_and_meaning String_and_meaning_hazard = {
    .string = "hazard",
    .meaning = "n.冒险,危险,冒险的事vt.冒...的危险,赌运气,使遭危险"};

String_and_meaning String_and_meaning_he = {
    .string = "he",
    .meaning = "pron. 他；（泛指的）人；上帝n. 男性，男子；雄性动物n. (He) （中、美、丹）赫（人名）"};

String_and_meaning String_and_meaning_head = {
    .string = "head",
    .meaning = "n.头,头脑,领袖,(队伍,名单等)最前的部分,人,顶点vt.作为...的首领,朝向,前进,用头顶vi.成头状物,出发adj.头的,主要的"};

String_and_meaning String_and_meaning_headache = {
    .string = "headache",
    .meaning = "n. 头痛；麻烦；令人头痛之事"};

String_and_meaning String_and_meaning_heading = {
    .string = "heading",
    .meaning = "n.标题"};

String_and_meaning String_and_meaning_headline = {
    .string = "headline",
    .meaning = "n. 大标题；内容提要；栏外标题；头版头条新闻vt. 给…加标题；使成为注意中心；大力宣传"};

String_and_meaning String_and_meaning_headmaster = {
    .string = "headmaster",
    .meaning = "n. 校长"};

String_and_meaning String_and_meaning_headquarters = {
    .string = "headquarters",
    .meaning = "n. 总部；指挥部；司令部"};

String_and_meaning String_and_meaning_heal = {
    .string = "heal",
    .meaning = "vt. 治愈，痊愈；和解vi. 痊愈n. (Heal)人名；(英)希尔"};

String_and_meaning String_and_meaning_health = {
    .string = "health",
    .meaning = "n. 健康；卫生；保健；兴旺"};

String_and_meaning String_and_meaning_healthy = {
    .string = "healthy",
    .meaning = "adj. 健康的，健全的；有益于健康的"};

String_and_meaning String_and_meaning_heap = {
    .string = "heap",
    .meaning = "n. 堆；许多；累积vt. 堆；堆积vi. 堆起来n. (Heap)人名；(芬)海亚普；(东南亚国家华语)协；(英)希普"};

String_and_meaning String_and_meaning_hear = {
    .string = "hear",
    .meaning = "vt. 听到，听；听说；审理vi. 听；听见"};

String_and_meaning String_and_meaning_hearing = {
    .string = "hearing",
    .meaning = "n. 听力；审讯，听讯v. 听见（hear的ing形式）n. (Hearing)人名；(英)希尔林"};

String_and_meaning String_and_meaning_heart = {
    .string = "heart",
    .meaning = "n. 心脏；感情；勇气；心形；要点vt. 鼓励；铭记vi. 结心n. (Heart)人名；(英)哈特"};

String_and_meaning String_and_meaning_heat = {
    .string = "heat",
    .meaning = "n. 高温；压力；热度；热烈vt. 使激动；把…加热"};

String_and_meaning String_and_meaning_heating = {
    .string = "heating",
    .meaning = "n. [热] 加热；[建] 供暖；暖气设备adj. 加热的；供热的v. [热] 加热（heat的现在分词）"};

String_and_meaning String_and_meaning_heave = {
    .string = "heave",
    .meaning = "vt. 举起；使起伏；投掷；恶心；发出（叹息等）vi. 起伏；举起；喘息；呕吐n. 举起；起伏；投掷；一阵呕吐"};

String_and_meaning String_and_meaning_heaven = {
    .string = "heaven",
    .meaning = "n. 天堂；天空；极乐n. （Heaven）（英）希文（人名）"};

String_and_meaning String_and_meaning_heavily = {
    .string = "heavily",
    .meaning = "adv. 在很大程度上；严重地；大量地； 以猛力，沉重地；缓慢又高声地；缓慢而忧郁地，悲伤地； 令人心情沉重"};

String_and_meaning String_and_meaning_heavy = {
    .string = "heavy",
    .meaning = "adj. 沉重的；繁重的，巨大的；拥挤的；阴沉的n. 重物；严肃角色adv. 大量地；笨重地"};

String_and_meaning String_and_meaning_hedge = {
    .string = "hedge",
    .meaning = "n. 树篱；防止损失的手段；模糊措辞；障碍v. 用树篱笆围住；避免作正面答复；避免损失；限制n. (Hedge) （美、英、加、澳、印、法）赫奇（人名）"};

String_and_meaning String_and_meaning_heel = {
    .string = "heel",
    .meaning = "n. 脚后跟；踵vt. 倾侧vi. 倾侧n. (Heel)人名；(德)黑尔"};

String_and_meaning String_and_meaning_height = {
    .string = "height",
    .meaning = "n. 高地；高度；身高；顶点"};

String_and_meaning String_and_meaning_heighten = {
    .string = "heighten",
    .meaning = "vt. 提高；增高；加强；使更显著vi. 升高；变强"};

String_and_meaning String_and_meaning_heir = {
    .string = "heir",
    .meaning = "n. [法] 继承人；后嗣；嗣子"};

String_and_meaning String_and_meaning_helicopter = {
    .string = "helicopter",
    .meaning = "n. [航] 直升飞机vi. [航] 乘直升飞机vt. 由直升机运送"};

String_and_meaning String_and_meaning_hell = {
    .string = "hell",
    .meaning = "n.地狱,苦境,阴间,地狱中的人,训斥vi.狂饮,飞驰int.该死!"};

String_and_meaning String_and_meaning_hello = {
    .string = "hello",
    .meaning = "int. 喂；哈罗，你好，您好（表示问候， 惊奇或唤起注意时的用语）n. （Hello）（法）埃洛（人名）"};

String_and_meaning String_and_meaning_helmet = {
    .string = "helmet",
    .meaning = "n. 钢盔，头盔n. (Helmet)人名；(德)黑尔梅特"};

String_and_meaning String_and_meaning_help = {
    .string = "help",
    .meaning = "vt. 帮助；促进；治疗；补救n. 帮助；补救办法；帮忙者；有益的东西vi. 帮助；有用；招待n. (Help)人名；(芬)海尔普"};

String_and_meaning String_and_meaning_helpful = {
    .string = "helpful",
    .meaning = "adj. 有帮助的；有益的"};

String_and_meaning String_and_meaning_helpless = {
    .string = "helpless",
    .meaning = "adj. 无助的；无能的；没用的"};

String_and_meaning String_and_meaning_hemisphere = {
    .string = "hemisphere",
    .meaning = "n. 半球"};

String_and_meaning String_and_meaning_hen = {
    .string = "hen",
    .meaning = "n. 母鸡；女人；雌禽n. (Hen)人名；(日)边(姓)；(法)昂；(波、柬)亨"};

String_and_meaning String_and_meaning_hence = {
    .string = "hence",
    .meaning = "adv. 因此；今后"};

String_and_meaning String_and_meaning_henceforth = {
    .string = "henceforth",
    .meaning = "adv. 从此以后"};

String_and_meaning String_and_meaning_her = {
    .string = "her",
    .meaning = "pron. 她（she的宾格）；她的（she的所有格）；她（指某个国家；一艘船）n. （法）埃尔（人名）"};

String_and_meaning String_and_meaning_herd = {
    .string = "herd",
    .meaning = "n. 兽群，畜群；放牧人vi. 成群，聚在一起vt. 放牧；使成群n. (Herd)人名；(英、芬)赫德"};

String_and_meaning String_and_meaning_here = {
    .string = "here",
    .meaning = "adv. 在这里；此时int. 嘿！；喂！n. 这里n. (Here)人名；(罗)赫尔施"};

String_and_meaning String_and_meaning_heritage = {
    .string = "heritage",
    .meaning = "n. 遗产；传统；继承物；继承权n. (Heritage)人名；(英)赫里蒂奇"};

String_and_meaning String_and_meaning_hero = {
    .string = "hero",
    .meaning = "n. 英雄；男主角，男主人公"};

String_and_meaning String_and_meaning_heroic = {
    .string = "heroic",
    .meaning = "adj. 英雄的；英勇的；记叙英雄及其事迹的；夸张的n. 史诗；英勇行为"};

String_and_meaning String_and_meaning_heroine = {
    .string = "heroine",
    .meaning = "n. 女主角；女英雄；女杰出人物"};

String_and_meaning String_and_meaning_hers = {
    .string = "hers",
    .meaning = "pron. （上文提过的女性）她的，属于她的n. (Hers) （法、美、英）埃尔（人名）"};

String_and_meaning String_and_meaning_herself = {
    .string = "herself",
    .meaning = "pron. 她自己（she的反身代词）；她亲自"};

String_and_meaning String_and_meaning_hesitate = {
    .string = "hesitate",
    .meaning = "vi. 踌躇，犹豫；不愿vt. 踌躇，犹豫；有疑虑，不愿意"};

String_and_meaning String_and_meaning_hi = {
    .string = "hi",
    .meaning = "int. 嗨！（表示问候或用以唤起注意）n. (Hi)人名；(柬)希"};

String_and_meaning String_and_meaning_hide = {
    .string = "hide",
    .meaning = "vt. 隐藏；隐瞒；鞭打vi. 隐藏n. 躲藏；兽皮；躲藏处"};

String_and_meaning String_and_meaning_hierarchy = {
    .string = "hierarchy",
    .meaning = "n. 层级；等级制度"};

String_and_meaning String_and_meaning_high = {
    .string = "high",
    .meaning = "adj. 高的；高级的；崇高的；高音调的n. 高水平；天空；由麻醉品引起的快感；高压地带adv. 高；奢侈地n. (High)人名；(英)海伊"};

String_and_meaning String_and_meaning_highlight = {
    .string = "highlight",
    .meaning = "v. 突出；强调；使显著；加亮；着亮彩于（头发）n. 最精彩的部分；最重要的事情；强光部分"};

String_and_meaning String_and_meaning_highly = {
    .string = "highly",
    .meaning = "adv. 高度地；非常；非常赞许地"};

String_and_meaning String_and_meaning_highway = {
    .string = "highway",
    .meaning = "n. 公路，大路；捷径"};

String_and_meaning String_and_meaning_hill = {
    .string = "hill",
    .meaning = "n. 小山；丘陵；斜坡；山冈n. （Hill）（法、西）伊尔；（德、英、匈、捷、罗、芬、瑞典）希尔（人名）"};

String_and_meaning String_and_meaning_hillside = {
    .string = "hillside",
    .meaning = "n. 山坡，山腹；山腰"};

String_and_meaning String_and_meaning_him = {
    .string = "him",
    .meaning = "pron. 他（宾格）n. (Him)人名；(东南亚国家华语)欣；(柬)亨；(中)谦(广东话·威妥玛)"};

String_and_meaning String_and_meaning_himself = {
    .string = "himself",
    .meaning = "pron. 他自己；他亲自，他本人"};

String_and_meaning String_and_meaning_hinder = {
    .string = "hinder",
    .meaning = "vi. 成为阻碍vt. 阻碍；打扰adj. 后面的n. (Hinder)人名；(芬)欣德"};

String_and_meaning String_and_meaning_hinge = {
    .string = "hinge",
    .meaning = "n. 铰链，折叶；关键，转折点；枢要，中枢v. 用铰链连接；依…为转移；给…安装铰链；（门等）装有蝶铰"};

String_and_meaning String_and_meaning_hint = {
    .string = "hint",
    .meaning = "n. 暗示；线索vt. 暗示；示意vi. 示意n. (Hint)人名；(英)欣特；(法)安特"};

String_and_meaning String_and_meaning_hire = {
    .string = "hire",
    .meaning = "v. 租用；聘用；临时聘用n. 租借；新雇员；租金n. (Hire) （印、美）希尔（人名）"};

String_and_meaning String_and_meaning_his = {
    .string = "his",
    .meaning = "pron. 他的n. (His)人名；(法)伊斯"};

String_and_meaning String_and_meaning_historian = {
    .string = "historian",
    .meaning = "n. 历史学家"};

String_and_meaning String_and_meaning_historic = {
    .string = "historic",
    .meaning = "adj. 有历史意义的；历史上著名的"};

String_and_meaning String_and_meaning_historical = {
    .string = "historical",
    .meaning = "adj. 历史的；史学的；基于史实的"};

String_and_meaning String_and_meaning_history = {
    .string = "history",
    .meaning = "n. 历史，历史学；历史记录；来历"};

String_and_meaning String_and_meaning_hit = {
    .string = "hit",
    .meaning = "vt. 打击；袭击；碰撞；偶然发现；伤…的感情vi. 打；打击；碰撞；偶然碰上n. 打；打击；（演出等）成功；讽刺"};

String_and_meaning String_and_meaning_hitherto = {
    .string = "hitherto",
    .meaning = "adv. 迄今；至今"};

String_and_meaning String_and_meaning_hobby = {
    .string = "hobby",
    .meaning = "n. 嗜好；业余爱好n. (Hobby)人名；(英)霍比"};

String_and_meaning String_and_meaning_hoist = {
    .string = "hoist",
    .meaning = "v. 升起，吊起；抬高，举起n. 起重机；吊车；升降机；升起，增加；信号旗；旗宽n. (Hoist) （美、印、英、加）霍伊斯特（人名）"};

String_and_meaning String_and_meaning_hold = {
    .string = "hold",
    .meaning = "vt. 持有；拥有；保存；拘留；约束或控制；召开，举行vi. 支持；有效；持续n. 控制；保留n. (Hold)人名；(英、德、捷)霍尔德"};

String_and_meaning String_and_meaning_hole = {
    .string = "hole",
    .meaning = "n. 洞，孔；洞穴，穴；突破口vi. 凿洞，穿孔；（高尔夫球等）进洞vt. 凿洞n. (Hole)人名；(瑞典、挪)霍勒；(英)霍尔"};

String_and_meaning String_and_meaning_holiday = {
    .string = "holiday",
    .meaning = "n. 假日；节日；休息日vi. 外出度假n. (Holiday)人名；(英)霍利迪"};

String_and_meaning String_and_meaning_hollow = {
    .string = "hollow",
    .meaning = "adj. 空的；中空的，空腹的；凹的；虚伪的n. 洞；山谷；窟窿vt. 使成为空洞vi. 形成空洞adv. 彻底地；无用地n. (Hollow)人名；(英)霍洛"};

String_and_meaning String_and_meaning_holy = {
    .string = "holy",
    .meaning = "adj. 圣洁的，神圣的；至善的n. 神圣的东西（俚）太棒了n. (Holy)人名；(英、德、匈)霍利"};

String_and_meaning String_and_meaning_home = {
    .string = "home",
    .meaning = "n. 家，住宅；产地；家乡；避难所adv. 在家，回家；深入地adj. 国内的，家庭的；有效的vt. 归巢，回家n. (Home)人名；(德、芬)霍梅；(英、尼)霍姆"};

String_and_meaning String_and_meaning_homogeneous = {
    .string = "homogeneous",
    .meaning = "adj. 均匀的；[数] 齐次的；同种的；同类的，同质的"};

String_and_meaning String_and_meaning_honest = {
    .string = "honest",
    .meaning = "adj. 诚实的，实在的；可靠的；坦率的"};

String_and_meaning String_and_meaning_honesty = {
    .string = "honesty",
    .meaning = "n. 诚实，正直"};

String_and_meaning String_and_meaning_honey = {
    .string = "honey",
    .meaning = "n. 蜂蜜；宝贝；甜蜜adj. 甘美的；蜂蜜似的vt. 对…说甜言蜜语；加蜜使甜vi. 奉承；说甜言蜜语n. (Honey)人名；(英)霍尼"};

String_and_meaning String_and_meaning_honeymoon = {
    .string = "honeymoon",
    .meaning = "n. 蜜月；蜜月假期；（新生事物、新建关系等的）短暂的和谐时期vi. 度蜜月"};

String_and_meaning String_and_meaning_honour = {
    .string = "honour",
    .meaning = "n. 荣誉；尊敬；勋章vt. 尊敬；[金融] 承兑；承兑远期票据n. (Honour)人名；(英)昂纳"};

String_and_meaning String_and_meaning_honourable = {
    .string = "honourable",
    .meaning = "adj. 荣誉的；值得尊敬的；表示尊敬的；正直的（honorable的英式写法）"};

String_and_meaning String_and_meaning_hook = {
    .string = "hook",
    .meaning = "n. 挂钩，吊钩vt. 钩住；引上钩vi. 钩住；弯成钩状n. (Hook)人名；(德、荷)霍克；(英)胡克"};

String_and_meaning String_and_meaning_hope = {
    .string = "hope",
    .meaning = "v. 希望；希望能够n. 希望；希望的东西；被寄予希望的人（或物）；好的迹象；信赖感；可能性n. (Hope) （美）奥普（人名）"};

String_and_meaning String_and_meaning_hopeful = {
    .string = "hopeful",
    .meaning = "adj. 有希望的；有前途的n. 有希望成功的人"};

String_and_meaning String_and_meaning_hopeless = {
    .string = "hopeless",
    .meaning = "adj. 绝望的；不可救药的"};

String_and_meaning String_and_meaning_horizon = {
    .string = "horizon",
    .meaning = "n. [天] 地平线；视野；眼界；范围"};

String_and_meaning String_and_meaning_horizontal = {
    .string = "horizontal",
    .meaning = "adj. 水平的；地平线的；同一阶层的n. 水平线，水平面；水平位置"};

String_and_meaning String_and_meaning_horn = {
    .string = "horn",
    .meaning = "n. 喇叭，号角；角vt. 装角于n. (Horn)人名；(英、德、匈、捷、罗、波、芬、希、瑞典)霍恩；(法)奥尔恩；(柬)洪"};

String_and_meaning String_and_meaning_horrible = {
    .string = "horrible",
    .meaning = "adj. 可怕的；极讨厌的"};

String_and_meaning String_and_meaning_horror = {
    .string = "horror",
    .meaning = "n. 惊骇；惨状；极端厌恶；令人恐怖的事物"};

String_and_meaning String_and_meaning_horse = {
    .string = "horse",
    .meaning = "n. 马；骑兵；脚架；非正式海洛因；非正式马力vt. 使骑马；系马于；捉弄vi. 骑马；作弄人n. （Horse）（瑞典)霍尔瑟（人名）"};

String_and_meaning String_and_meaning_horsepower = {
    .string = "horsepower",
    .meaning = "n. 马力（功率单位）"};

String_and_meaning String_and_meaning_hose = {
    .string = "hose",
    .meaning = "n. 软管；长筒袜；男性穿的紧身裤vt. 用软管浇水；痛打"};

String_and_meaning String_and_meaning_hospital = {
    .string = "hospital",
    .meaning = "n. 医院n. (Hospital)人名；(英)霍斯皮特尔"};

String_and_meaning String_and_meaning_hospitality = {
    .string = "hospitality",
    .meaning = "n. 好客；殷勤"};

String_and_meaning String_and_meaning_host = {
    .string = "host",
    .meaning = "n. [计] 主机；主人；主持人；许多vt. 主持；当主人招待vi. 群集；做主人"};

String_and_meaning String_and_meaning_hostage = {
    .string = "hostage",
    .meaning = "n. 人质；抵押品"};

String_and_meaning String_and_meaning_hostess = {
    .string = "hostess",
    .meaning = "n. 女主人，女老板；女服务员；舞女；女房东"};

String_and_meaning String_and_meaning_hostile = {
    .string = "hostile",
    .meaning = "adj. 敌对的，敌方的；怀敌意的n. 敌对"};

String_and_meaning String_and_meaning_hot = {
    .string = "hot",
    .meaning = "adj. 热的；辣的；热情的；激动的；紧迫的adv. 热；紧迫地vi. 变热vt. 增加；给......加温n. （Hot）（塞）霍特（人名）；（法）奥特（人名）"};

String_and_meaning String_and_meaning_hotel = {
    .string = "hotel",
    .meaning = "n. 旅馆；酒吧；餐馆；（无线电通讯中）字母 H 的代码n. （Hotel ）（美）奥泰尔（人名）"};

String_and_meaning String_and_meaning_hour = {
    .string = "hour",
    .meaning = "n. 小时；钟头；课时；…点钟n. (Hour)人名；(法)乌尔；(柬)胡"};

String_and_meaning String_and_meaning_house = {
    .string = "house",
    .meaning = "n. 住宅；家庭；机构；议会；某种用途的建筑物vt. 覆盖；给…房子住；把…储藏在房内vi. 住n. (House)人名；(英)豪斯"};

String_and_meaning String_and_meaning_household = {
    .string = "household",
    .meaning = "n. 一家人，一户；同住一所房子的人；王室 (the Household)adj. 家庭的，家用的；家喻户晓的n. (Household)（美、瑞）豪斯霍尔德（人名）"};

String_and_meaning String_and_meaning_housewife = {
    .string = "housewife",
    .meaning = "n. 家庭主妇"};

String_and_meaning String_and_meaning_hover = {
    .string = "hover",
    .meaning = "vi. 盘旋，翱翔；徘徊n. 徘徊；盘旋；犹豫vt. 孵；徘徊在…近旁n. (Hover)人名；(英、德)霍弗"};

String_and_meaning String_and_meaning_how = {
    .string = "how",
    .meaning = "adv. 如何；多少；多么n. 方法；方式conj. 如何n. (How)人名；(英)豪"};

String_and_meaning String_and_meaning_however = {
    .string = "however",
    .meaning = "adv. 无论如何；不管怎样（接副词或形容词）；然而；可是conj. 无论以何种方式; 不管怎样"};

String_and_meaning String_and_meaning_hug = {
    .string = "hug",
    .meaning = "vt.搂 n.紧紧拥抱"};

String_and_meaning String_and_meaning_huge = {
    .string = "huge",
    .meaning = "adj. 巨大的；庞大的；无限的n. (Huge)人名；(英)休奇"};

String_and_meaning String_and_meaning_human = {
    .string = "human",
    .meaning = "adj. 人的；人类的n. 人；人类n. (Human)人名；(英)休曼"};

String_and_meaning String_and_meaning_humanity = {
    .string = "humanity",
    .meaning = "n. 人类；人道；仁慈；人文学科"};

String_and_meaning String_and_meaning_humble = {
    .string = "humble",
    .meaning = "adj. 谦逊的；简陋的；（级别或地位）低下的；不大的vt. 使谦恭；轻松打败（尤指强大的对手）；低声下气"};

String_and_meaning String_and_meaning_humid = {
    .string = "humid",
    .meaning = "adj. 潮湿的；湿润的；多湿气的"};

String_and_meaning String_and_meaning_humidity = {
    .string = "humidity",
    .meaning = "n. [气象] 湿度；湿气"};

String_and_meaning String_and_meaning_humorous = {
    .string = "humorous",
    .meaning = "adj. 诙谐的，幽默的；滑稽的，可笑的"};

String_and_meaning String_and_meaning_humour = {
    .string = "humour",
    .meaning = "n. 幽默（等于humor）；诙谐vt. 迁就；使满足"};

String_and_meaning String_and_meaning_hundred = {
    .string = "hundred",
    .meaning = "n. 一百；许多adj. 一百的；许多的num. 百；百个"};

String_and_meaning String_and_meaning_hunger = {
    .string = "hunger",
    .meaning = "n. 饿，饥饿；渴望vi. 渴望；挨饿vt. 使……挨饿n. （Hunger）（德、波）洪格尔；（英）亨格（人名）"};

String_and_meaning String_and_meaning_hungry = {
    .string = "hungry",
    .meaning = "adj. 饥饿的；渴望的；荒年的；不毛的"};

String_and_meaning String_and_meaning_hunt = {
    .string = "hunt",
    .meaning = "v.打猎,猎取,搜索,搜寻,猎获n.打猎,猎取,搜索,搜寻,狩猎"};

String_and_meaning String_and_meaning_hurl = {
    .string = "hurl",
    .meaning = "vt. 丢下；用力投掷；愤慨地说出vi. 猛投；猛掷n. 用力的投掷"};

String_and_meaning String_and_meaning_hurricane = {
    .string = "hurricane",
    .meaning = "n. 飓风，暴风"};

String_and_meaning String_and_meaning_hurry = {
    .string = "hurry",
    .meaning = "v.(使)赶紧,(使)匆忙,加速n.匆忙,仓促"};

String_and_meaning String_and_meaning_hurt = {
    .string = "hurt",
    .meaning = "v.刺痛,伤害,(使)痛心,(使)伤感情,危害,损害,受伤n.伤痛,伤害"};

String_and_meaning String_and_meaning_husband = {
    .string = "husband",
    .meaning = "n. 丈夫v. 节约使用（资源）n. (Husband) （美、爱、英）赫斯本德（人名）"};

String_and_meaning String_and_meaning_hut = {
    .string = "hut",
    .meaning = "n. 小屋；临时营房vt. 使住在小屋中；驻扎vi. 住在小屋中；驻扎n. (Hut)人名；(阿拉伯、罗、塞)胡特"};

String_and_meaning String_and_meaning_hydrogen = {
    .string = "hydrogen",
    .meaning = "n. [化学] 氢"};

String_and_meaning String_and_meaning_hypothesis = {
    .string = "hypothesis",
    .meaning = "n. 假设"};

String_and_meaning String_and_meaning_hysterical = {
    .string = "hysterical",
    .meaning = "adj. 歇斯底里的；异常兴奋的"};

String_and_meaning String_and_meaning_I = {
    .string = "I",
    .meaning = "pron. 我n. 碘元素；字母Iabbr. 不及物动词 (intransitive verb)"};

String_and_meaning String_and_meaning_ice = {
    .string = "ice",
    .meaning = "n. 冰；冰淇淋；矜持；（俚）钻石vt. 冰镇；结冰vi. 结冰adj. 冰的n. (Ice)人名；(英)艾斯；(法)伊斯"};

String_and_meaning String_and_meaning_idea = {
    .string = "idea",
    .meaning = "n. 想法；主意；概念"};

String_and_meaning String_and_meaning_ideal = {
    .string = "ideal",
    .meaning = "adj. 理想的；完美的；想象的；不切实际的n. 理想；典范"};

String_and_meaning String_and_meaning_identical = {
    .string = "identical",
    .meaning = "adj. 同一的；完全相同的n. 完全相同的事物"};

String_and_meaning String_and_meaning_identification = {
    .string = "identification",
    .meaning = "n. 鉴定，识别；认同；身份证明"};

String_and_meaning String_and_meaning_identify = {
    .string = "identify",
    .meaning = "vt. 确定；鉴定；识别，辨认出；使参与；把……看成一样vi. 确定；认同；一致"};

String_and_meaning String_and_meaning_identity = {
    .string = "identity",
    .meaning = "n. 身份；同一性，一致；特性；恒等式"};

String_and_meaning String_and_meaning_ideology = {
    .string = "ideology",
    .meaning = "n. 意识形态；思想意识；观念学"};

String_and_meaning String_and_meaning_idiom = {
    .string = "idiom",
    .meaning = "n. 成语，习语；土话"};

String_and_meaning String_and_meaning_idle = {
    .string = "idle",
    .meaning = "adj. 闲置的；懒惰的；停顿的vi. 无所事事；虚度；空转vt. 虚度；使空转"};

String_and_meaning String_and_meaning_if = {
    .string = "if",
    .meaning = "conj.(表条件)如果,(表假设)要是,是否,即使n.条件,设想"};

String_and_meaning String_and_meaning_ignite = {
    .string = "ignite",
    .meaning = "vt. 点燃；使燃烧；使激动vi. 点火；燃烧"};

String_and_meaning String_and_meaning_ignorance = {
    .string = "ignorance",
    .meaning = "n. 无知，愚昧；不知，不懂"};

String_and_meaning String_and_meaning_ignorant = {
    .string = "ignorant",
    .meaning = "adj. 无知的；愚昧的"};

String_and_meaning String_and_meaning_ignore = {
    .string = "ignore",
    .meaning = "vt. 驳回诉讼；忽视；不理睬"};

String_and_meaning String_and_meaning_ill = {
    .string = "ill",
    .meaning = "adj. 生病的；坏的；邪恶的；不吉利的adv. 不利地；恶劣地；几乎不n. 疾病；不幸n. (Ill)人名；(捷、匈)伊尔"};

String_and_meaning String_and_meaning_illegal = {
    .string = "illegal",
    .meaning = "adj. 非法的；违法的；违反规则的n. 非法移民，非法劳工"};

String_and_meaning String_and_meaning_illness = {
    .string = "illness",
    .meaning = "n. 病；疾病"};

String_and_meaning String_and_meaning_illuminate = {
    .string = "illuminate",
    .meaning = "vt. 阐明，说明；照亮；使灿烂；用灯装饰vi. 照亮"};

String_and_meaning String_and_meaning_illusion = {
    .string = "illusion",
    .meaning = "n. 幻觉，错觉；错误的观念或信仰"};

String_and_meaning String_and_meaning_illustrate = {
    .string = "illustrate",
    .meaning = "vt. 阐明，举例说明；图解vi. 举例"};

String_and_meaning String_and_meaning_illustration = {
    .string = "illustration",
    .meaning = "n. 说明；插图；例证；图解"};

String_and_meaning String_and_meaning_image = {
    .string = "image",
    .meaning = "n. 影像；想象；肖像；偶像vt. 想象；反映；象征；作…的像n. (Image)人名；(法)伊马热"};

String_and_meaning String_and_meaning_imaginary = {
    .string = "imaginary",
    .meaning = "adj. 虚构的，假想的；想象的；虚数的"};

String_and_meaning String_and_meaning_imagination = {
    .string = "imagination",
    .meaning = "n. [心理] 想象力；空想；幻想物"};

String_and_meaning String_and_meaning_imaginative = {
    .string = "imaginative",
    .meaning = "adj. 富于想象的；有创造力的"};

String_and_meaning String_and_meaning_imagine = {
    .string = "imagine",
    .meaning = "vt. 想象；猜想；臆断vi. 想象；猜想；想象起来"};

String_and_meaning String_and_meaning_imitate = {
    .string = "imitate",
    .meaning = "vt. 模仿，仿效；仿造，仿制"};

String_and_meaning String_and_meaning_imitation = {
    .string = "imitation",
    .meaning = "n. 模仿，仿造；仿制品adj. 人造的，仿制的"};

String_and_meaning String_and_meaning_immediate = {
    .string = "immediate",
    .meaning = "adj. 立即的；直接的；最接近的"};

String_and_meaning String_and_meaning_immediately = {
    .string = "immediately",
    .meaning = "adv. 立即，立刻；直接地conj. 一…就"};

String_and_meaning String_and_meaning_immense = {
    .string = "immense",
    .meaning = "adj. 巨大的，广大的；无边无际的；非常好的"};

String_and_meaning String_and_meaning_immerse = {
    .string = "immerse",
    .meaning = "vt. 沉浸；使陷入"};

String_and_meaning String_and_meaning_immigrant = {
    .string = "immigrant",
    .meaning = "adj. 移民的；迁入的n. 移民，侨民"};

String_and_meaning String_and_meaning_immune = {
    .string = "immune",
    .meaning = "adj. 免疫的；免于……的，免除的n. 免疫者；免除者"};

String_and_meaning String_and_meaning_impact = {
    .string = "impact",
    .meaning = "n. 影响；效果；碰撞；冲击力vt. 挤入，压紧；撞击；对…产生影响vi. 影响；撞击；冲突；压紧（on，upon，with）"};

String_and_meaning String_and_meaning_impair = {
    .string = "impair",
    .meaning = "vt. 损害；削弱；减少"};

String_and_meaning String_and_meaning_impart = {
    .string = "impart",
    .meaning = "vt. 告知，传授；透露，透漏；赋予，给予（尤指抽象事物）"};

String_and_meaning String_and_meaning_impatient = {
    .string = "impatient",
    .meaning = "adj. 焦躁的；不耐心的"};

String_and_meaning String_and_meaning_imperative = {
    .string = "imperative",
    .meaning = "adj. 必要的，不可避免的；紧急的；命令的，专横的；势在必行的；[语]祈使的n. 必要的事；命令；需要；规则；[语]祈使语气"};

String_and_meaning String_and_meaning_imperial = {
    .string = "imperial",
    .meaning = "adj. 帝国的；皇帝的；至高无上的；威严的n. 纸张尺寸；特等品n. (Imperial)人名；(西)因佩里亚尔"};

String_and_meaning String_and_meaning_impetus = {
    .string = "impetus",
    .meaning = "n. 动力；促进；冲力；动量"};

String_and_meaning String_and_meaning_implement = {
    .string = "implement",
    .meaning = "vt. 实施，执行；实现，使生效n. 工具，器具；手段"};

String_and_meaning String_and_meaning_implication = {
    .string = "implication",
    .meaning = "n. 含义；暗示；牵连，卷入；可能的结果，影响"};

String_and_meaning String_and_meaning_implicit = {
    .string = "implicit",
    .meaning = "adj. 含蓄的；暗示的；盲从的"};

String_and_meaning String_and_meaning_imply = {
    .string = "imply",
    .meaning = "vt. 意味；暗示；隐含"};

String_and_meaning String_and_meaning_import = {
    .string = "import",
    .meaning = "n. 进口，进口货；输入；意思，含义；重要性vt. 输入，进口；含…的意思vi. 输入，进口"};

String_and_meaning String_and_meaning_importance = {
    .string = "importance",
    .meaning = "n. 价值；重要；重大；傲慢"};

String_and_meaning String_and_meaning_important = {
    .string = "important",
    .meaning = "adj. 重要的，重大的；有地位的；有权力的"};

String_and_meaning String_and_meaning_impose = {
    .string = "impose",
    .meaning = "vi. 利用；欺骗；施加影响vt. 强加；征税；以…欺骗"};

String_and_meaning String_and_meaning_impossible = {
    .string = "impossible",
    .meaning = "adj. 不可能的；不可能存在的；难以忍受的；不真实的n. 不可能；不可能的事"};

String_and_meaning String_and_meaning_impress = {
    .string = "impress",
    .meaning = "vt. 盖印；强征；传送；给予某人深刻印象vi. 给人印象n. 印象，印记；特征，痕迹"};

String_and_meaning String_and_meaning_impression = {
    .string = "impression",
    .meaning = "n. 印象；效果，影响；压痕，印记；感想；曝光（衡量广告被显示的次数。打开一个带有该广告的网页，则该广告的impression 次数增加一次）"};

String_and_meaning String_and_meaning_impressive = {
    .string = "impressive",
    .meaning = "adj. 感人的；令人钦佩的；给人以深刻印象的"};

String_and_meaning String_and_meaning_imprison = {
    .string = "imprison",
    .meaning = "vt. 监禁；关押；使…下狱"};

String_and_meaning String_and_meaning_improve = {
    .string = "improve",
    .meaning = "vt. 改善，增进；提高……的价值vi. 增加；变得更好"};

String_and_meaning String_and_meaning_improvement = {
    .string = "improvement",
    .meaning = "n. 改进，改善；提高"};

String_and_meaning String_and_meaning_impulse = {
    .string = "impulse",
    .meaning = "n. 冲动；[电子] 脉冲；刺激；神经冲动；推动力vt. 推动"};

String_and_meaning String_and_meaning_in = {
    .string = "in",
    .meaning = "prep.在...之内(上),在...期间,从事于,符合,穿着;adv.进入,朝里,在家,已到达(来临);adj.在里面的,执政的;n.执政者,入口;India,印度;In,元素铟(indium);Intelligent Network,智能网络"};

String_and_meaning String_and_meaning_inaugurate = {
    .string = "inaugurate",
    .meaning = "vt. 创新；开辟；开创；举行开幕典礼；举行就职典礼"};

String_and_meaning String_and_meaning_incentive = {
    .string = "incentive",
    .meaning = "n. 动机；刺激"};

String_and_meaning String_and_meaning_inch = {
    .string = "inch",
    .meaning = "n. 英寸；身高；少许vt. 使缓慢地移动vi. 慢慢前进n. (Inch)人名；(英)英奇"};

String_and_meaning String_and_meaning_incidence = {
    .string = "incidence",
    .meaning = "n. 发生率；影响；[光] 入射；影响范围"};

String_and_meaning String_and_meaning_incident = {
    .string = "incident",
    .meaning = "n. 事件，事变；插曲adj. [光] 入射的；附带的；易发生的，伴随而来的"};

String_and_meaning String_and_meaning_incidentally = {
    .string = "incidentally",
    .meaning = "adv. 顺便；偶然地；附带地"};

String_and_meaning String_and_meaning_incline = {
    .string = "incline",
    .meaning = "v. 倾向于；（使）倾向于；赞同（某人或某事）；有……倾向；（使）倾斜；低头n. 斜坡；斜面"};

String_and_meaning String_and_meaning_include = {
    .string = "include",
    .meaning = "vt. 包含，包括"};

String_and_meaning String_and_meaning_inclusive = {
    .string = "inclusive",
    .meaning = "adj. 包含的，包括的；包含全部费用的；"};

String_and_meaning String_and_meaning_income = {
    .string = "income",
    .meaning = "n. 收入，收益；所得"};

String_and_meaning String_and_meaning_incorporate = {
    .string = "incorporate",
    .meaning = "vt. 包含，吸收；体现；把……合并vi. 合并；混合；组成公司adj. 合并的；一体化的；组成公司的"};

String_and_meaning String_and_meaning_incorrect = {
    .string = "incorrect",
    .meaning = "adj. 错误的，不正确的；不适当的；不真实的"};

String_and_meaning String_and_meaning_increase = {
    .string = "increase",
    .meaning = "v. 增加；增大；提高；增强n. 增加；增多；增长n. (Increase) （英、美、印、尼日尼亚）英克里斯（人名）"};

String_and_meaning String_and_meaning_increasingly = {
    .string = "increasingly",
    .meaning = "adv. 越来越多地；渐增地"};

String_and_meaning String_and_meaning_incredible = {
    .string = "incredible",
    .meaning = "adj. 不能相信的，难以置信的；极好的，极大的"};

String_and_meaning String_and_meaning_incur = {
    .string = "incur",
    .meaning = "v. 招致，遭受；引致，带来……"};

String_and_meaning String_and_meaning_indeed = {
    .string = "indeed",
    .meaning = "adv. 的确；实在；真正地；甚至int. 真的（表示惊讶、怀疑、讽刺等）"};

String_and_meaning String_and_meaning_indefinite = {
    .string = "indefinite",
    .meaning = "adj. 不确定的；无限的；模糊的"};

String_and_meaning String_and_meaning_independence = {
    .string = "independence",
    .meaning = "n. 独立性，自立性；自主"};

String_and_meaning String_and_meaning_independent = {
    .string = "independent",
    .meaning = "adj. 独立的；单独的；无党派的；不受约束的n. 独立自主者；无党派者"};

String_and_meaning String_and_meaning_index = {
    .string = "index",
    .meaning = "n. 指标；指数；索引；指针vi. 做索引vt. 指出；编入索引中"};

String_and_meaning String_and_meaning_India = {
    .string = "India",
    .meaning = "n. 印度（南亚国家）"};

String_and_meaning String_and_meaning_Indian = {
    .string = "Indian",
    .meaning = "adj.印度的,印度人的,印第安人的n.印度人,印第安人,印第安语"};

String_and_meaning String_and_meaning_indicate = {
    .string = "indicate",
    .meaning = "vt. 表明；指出；预示；象征"};

String_and_meaning String_and_meaning_indication = {
    .string = "indication",
    .meaning = "n. 指示，指出；迹象；象征"};

String_and_meaning String_and_meaning_indicative = {
    .string = "indicative",
    .meaning = "adj. 象征的；指示的；表示…的n. 陈述语气；陈述语气的动词形式"};

String_and_meaning String_and_meaning_indifferent = {
    .string = "indifferent",
    .meaning = "adj. 冷淡的；不关心的；中等的；平庸的；一般的；相当差的；中立的；不分化的n. 冷漠的人"};

String_and_meaning String_and_meaning_indignant = {
    .string = "indignant",
    .meaning = "adj. 愤愤不平的；义愤的"};

String_and_meaning String_and_meaning_indignation = {
    .string = "indignation",
    .meaning = "n. 愤慨；愤怒；义愤"};

String_and_meaning String_and_meaning_indirect = {
    .string = "indirect",
    .meaning = "adj. 间接的；迂回的；非直截了当的"};

String_and_meaning String_and_meaning_indispensable = {
    .string = "indispensable",
    .meaning = "adj. 不可缺少的；绝对必要的；责无旁贷的n. 不可缺少之物；必不可少的人"};

String_and_meaning String_and_meaning_individual = {
    .string = "individual",
    .meaning = "adj. 个人的；个别的；独特的n. 个人，个体"};

String_and_meaning String_and_meaning_indoors = {
    .string = "indoors",
    .meaning = "adv. 在室内，在户内"};

String_and_meaning String_and_meaning_induce = {
    .string = "induce",
    .meaning = "vt. 诱导；引起；引诱；感应"};

String_and_meaning String_and_meaning_indulge = {
    .string = "indulge",
    .meaning = "vt. 满足；纵容；使高兴；使沉迷于…vi. 沉溺；满足；放任"};

String_and_meaning String_and_meaning_industrial = {
    .string = "industrial",
    .meaning = "adj. 工业的，产业的；从事工业的；供工业用的；来自勤劳的n. 工业股票；工业工人"};

String_and_meaning String_and_meaning_industrialize = {
    .string = "industrialize",
    .meaning = "vt. 使工业化vi. 实现工业化"};

String_and_meaning String_and_meaning_industry = {
    .string = "industry",
    .meaning = "n. 产业；工业；勤勉"};

String_and_meaning String_and_meaning_inefficient = {
    .string = "inefficient",
    .meaning = "adj. 无效率的，效率低的；无能的"};

String_and_meaning String_and_meaning_inertia = {
    .string = "inertia",
    .meaning = "n. [力] 惯性；惰性，迟钝；不活动"};

String_and_meaning String_and_meaning_inevitable = {
    .string = "inevitable",
    .meaning = "adj. 必然的，不可避免的"};

String_and_meaning String_and_meaning_inexpensive = {
    .string = "inexpensive",
    .meaning = "adj. 便宜的"};

String_and_meaning String_and_meaning_infant = {
    .string = "infant",
    .meaning = "n. 婴儿；幼儿；未成年人adj. 婴儿的；幼稚的；初期的；未成年的n. (Infant)人名；(英)因方特"};

String_and_meaning String_and_meaning_infect = {
    .string = "infect",
    .meaning = "vt. 感染，传染"};

String_and_meaning String_and_meaning_infectious = {
    .string = "infectious",
    .meaning = "adj. 传染的；传染性的；易传染的"};

String_and_meaning String_and_meaning_infer = {
    .string = "infer",
    .meaning = "vt. 推断；推论vi. 推断；作出推论"};

String_and_meaning String_and_meaning_inference = {
    .string = "inference",
    .meaning = "n. 推理；推论；推断"};

String_and_meaning String_and_meaning_inferior = {
    .string = "inferior",
    .meaning = "adj. 差的；自卑的；下级的，下等的n. 下级；次品"};

String_and_meaning String_and_meaning_infinite = {
    .string = "infinite",
    .meaning = "adj. 无限的，无穷的；无数的；极大的n. 无限；[数] 无穷大；无限的东西（如空间，时间）"};

String_and_meaning String_and_meaning_inflation = {
    .string = "inflation",
    .meaning = "n. 膨胀；通货膨胀；夸张；自命不凡"};

String_and_meaning String_and_meaning_inflict = {
    .string = "inflict",
    .meaning = "vt. 造成；使遭受（损伤、痛苦等）；给予（打击等）"};

String_and_meaning String_and_meaning_influence = {
    .string = "influence",
    .meaning = "n. 影响；势力；感化；有影响的人或事vt. 影响；改变"};

String_and_meaning String_and_meaning_influential = {
    .string = "influential",
    .meaning = "adj. 有影响的；有势力的n. 有影响力的人物"};

String_and_meaning String_and_meaning_inform = {
    .string = "inform",
    .meaning = "vt. 通知；告诉；报告vi. 告发；告密"};

String_and_meaning String_and_meaning_information = {
    .string = "information",
    .meaning = "n. 信息，资料；知识；情报"};

String_and_meaning String_and_meaning_ingenious = {
    .string = "ingenious",
    .meaning = "adj. 有独创性的；机灵的，精制的；心灵手巧的"};

String_and_meaning String_and_meaning_ingredient = {
    .string = "ingredient",
    .meaning = "n. 原料；要素；组成部分adj. 构成组成部分的"};

String_and_meaning String_and_meaning_inhabit = {
    .string = "inhabit",
    .meaning = "vt. 栖息；居住于；占据vi. （古）居住；栖息"};

String_and_meaning String_and_meaning_inhabitant = {
    .string = "inhabitant",
    .meaning = "n. 居民；居住者"};

String_and_meaning String_and_meaning_inherit = {
    .string = "inherit",
    .meaning = "vt. 继承；遗传而得vi. 成为继承人"};

String_and_meaning String_and_meaning_inhibit = {
    .string = "inhibit",
    .meaning = "vt. 抑制；禁止"};

String_and_meaning String_and_meaning_initial = {
    .string = "initial",
    .meaning = "adj. 最初的；字首的vt. 用姓名的首字母签名n. 词首大写字母；原始细胞"};

String_and_meaning String_and_meaning_initiate = {
    .string = "initiate",
    .meaning = "vt. 开始，创始；发起；使初步了解n. 开始；新加入者，接受初步知识者adj. 新加入的；接受初步知识的"};

String_and_meaning String_and_meaning_initiative = {
    .string = "initiative",
    .meaning = "n. 主动权；积极性；首创精神；新方案；倡议adj. 初步的，基础的"};

String_and_meaning String_and_meaning_inject = {
    .string = "inject",
    .meaning = "vt. 注入；注射"};

String_and_meaning String_and_meaning_injection = {
    .string = "injection",
    .meaning = "n. 注射；注射剂；充血；射入轨道"};

String_and_meaning String_and_meaning_injure = {
    .string = "injure",
    .meaning = "vt. 伤害，损害"};

String_and_meaning String_and_meaning_injury = {
    .string = "injury",
    .meaning = "n. 伤害，损害；受伤处"};

String_and_meaning String_and_meaning_ink = {
    .string = "ink",
    .meaning = "n. 墨水，油墨; （乌贼分泌的）墨液 vt. 给…上油墨（以供印刷、签订合同等）; 签名（在…上）; 涂油墨"};

String_and_meaning String_and_meaning_inland = {
    .string = "inland",
    .meaning = "adj. 内陆的，内地的；国内的adv. 在内地，向内地；向内陆，在内陆n. 内地；内陆"};

String_and_meaning String_and_meaning_inlet = {
    .string = "inlet",
    .meaning = "n. 入口，进口；插入物；水湾v. 引进; 嵌入; 插入;"};

String_and_meaning String_and_meaning_inn = {
    .string = "inn",
    .meaning = "n. 客栈；旅馆vi. 住旅馆n. (Inn)人名；(柬)因"};

String_and_meaning String_and_meaning_inner = {
    .string = "inner",
    .meaning = "adj. 内部的；内心的；精神的n. 内部"};

String_and_meaning String_and_meaning_innocent = {
    .string = "innocent",
    .meaning = "adj. 无辜的；无罪的；无知的n. 天真的人；笨蛋n. (Innocent)人名；(英、西)因诺森特；(法)伊诺桑"};

String_and_meaning String_and_meaning_innovation = {
    .string = "innovation",
    .meaning = "n. 创新，革新；新方法"};

String_and_meaning String_and_meaning_innumerable = {
    .string = "innumerable",
    .meaning = "adj. 无数的，数不清的"};

String_and_meaning String_and_meaning_input = {
    .string = "input",
    .meaning = "n. 投入；输入电路vt. [自][电子] 输入；将…输入电脑"};

String_and_meaning String_and_meaning_inquire = {
    .string = "inquire",
    .meaning = "vt. 询问；查究；问明vi. 询问；查究；询价"};

String_and_meaning String_and_meaning_inquiry = {
    .string = "inquiry",
    .meaning = "n. 探究；调查；质询；询盘，询价"};

String_and_meaning String_and_meaning_insane = {
    .string = "insane",
    .meaning = "adj. 疯狂的；精神病的；极愚蠢的"};

String_and_meaning String_and_meaning_insect = {
    .string = "insect",
    .meaning = "n. 昆虫；卑鄙的人"};

String_and_meaning String_and_meaning_inside = {
    .string = "inside",
    .meaning = "n.里面,内部,内脏,内情adj.内部的,秘密的,于室内工作的adv.在里面 prep.在...之内"};

String_and_meaning String_and_meaning_insight = {
    .string = "insight",
    .meaning = "n. 洞察力；洞悉n. (Insight)人名；(英)因赛特"};

String_and_meaning String_and_meaning_insist = {
    .string = "insist",
    .meaning = "vt. 坚持，强调vi. 坚持，强调"};

String_and_meaning String_and_meaning_inspect = {
    .string = "inspect",
    .meaning = "vt. 检查；视察；检阅vi. 进行检查；进行视察"};

String_and_meaning String_and_meaning_inspection = {
    .string = "inspection",
    .meaning = "n. 视察，检查"};

String_and_meaning String_and_meaning_inspiration = {
    .string = "inspiration",
    .meaning = "n. 灵感；鼓舞；吸气；妙计"};

String_and_meaning String_and_meaning_inspire = {
    .string = "inspire",
    .meaning = "vt. 激发；鼓舞；启示；产生；使生灵感"};

String_and_meaning String_and_meaning_install = {
    .string = "install",
    .meaning = "vt. 安装；任命；安顿"};

String_and_meaning String_and_meaning_installation = {
    .string = "installation",
    .meaning = "n. 安装，装置；就职"};

String_and_meaning String_and_meaning_installment = {
    .string = "installment",
    .meaning = "n. 安装；分期付款；部分；就职"};

String_and_meaning String_and_meaning_instance = {
    .string = "instance",
    .meaning = "n. 实例；情况；建议vt. 举...为例"};

String_and_meaning String_and_meaning_instant = {
    .string = "instant",
    .meaning = "adj. 立即的；紧急的；紧迫的n. 瞬间；立即；片刻"};

String_and_meaning String_and_meaning_instantaneous = {
    .string = "instantaneous",
    .meaning = "adj. 瞬间的；即时的；猝发的"};

String_and_meaning String_and_meaning_instantly = {
    .string = "instantly",
    .meaning = "adv. 立即地；马上地；即刻地conj. 一…就…"};

String_and_meaning String_and_meaning_instead = {
    .string = "instead",
    .meaning = "adv. 代替；反而；相反"};

String_and_meaning String_and_meaning_instinct = {
    .string = "instinct",
    .meaning = "n. 本能，直觉；天性adj. 充满着的"};

String_and_meaning String_and_meaning_institute = {
    .string = "institute",
    .meaning = "n. （尤指科学、教育的）机构，研究所，学会；机构建筑；（与法律相关的）注释，概要v. 实行，建立；授予……职位；提出（诉讼）"};

String_and_meaning String_and_meaning_institution = {
    .string = "institution",
    .meaning = "n. 制度；建立；（社会或宗教等）公共机构；习俗"};

String_and_meaning String_and_meaning_instruct = {
    .string = "instruct",
    .meaning = "vt. 指导；通知；命令；教授"};

String_and_meaning String_and_meaning_instruction = {
    .string = "instruction",
    .meaning = "n. 指令，命令；指示；教导；用法说明"};

String_and_meaning String_and_meaning_instrument = {
    .string = "instrument",
    .meaning = "n. 仪器；工具；乐器；手段；器械vt. 给……装测量仪器"};

String_and_meaning String_and_meaning_instrumental = {
    .string = "instrumental",
    .meaning = "adj. 乐器的；有帮助的；仪器的，器械的n. 器乐曲；工具字，工具格"};

String_and_meaning String_and_meaning_insufficient = {
    .string = "insufficient",
    .meaning = "adj. 不足的；不能胜任的，缺乏能力的"};

String_and_meaning String_and_meaning_insulate = {
    .string = "insulate",
    .meaning = "vt. 隔离，使孤立；使绝缘，使隔热"};

String_and_meaning String_and_meaning_insult = {
    .string = "insult",
    .meaning = "v. 侮辱；辱骂；损害n. 侮辱；凌辱；无礼"};

String_and_meaning String_and_meaning_insurance = {
    .string = "insurance",
    .meaning = "n. 保险；保险费；保险契约；赔偿金"};

String_and_meaning String_and_meaning_insure = {
    .string = "insure",
    .meaning = "vt. 给……保险；北美确保，保证vi. 投保；北美确保"};

String_and_meaning String_and_meaning_intact = {
    .string = "intact",
    .meaning = "adj. 完整的；原封不动的；未受损伤的"};

String_and_meaning String_and_meaning_integral = {
    .string = "integral",
    .meaning = "adj. 积分的；完整的，整体的；构成整体所必须的n. 积分；部分；完整"};

String_and_meaning String_and_meaning_integrate = {
    .string = "integrate",
    .meaning = "vt. 使…完整；使…成整体；求…的积分；表示…的总和vi. 求积分；取消隔离；成为一体adj. 整合的；完全的n. 一体化；集成体"};

String_and_meaning String_and_meaning_integrity = {
    .string = "integrity",
    .meaning = "n. 完整；正直；诚实；廉正"};

String_and_meaning String_and_meaning_intellect = {
    .string = "intellect",
    .meaning = "n. 智力，理解力；思维逻辑领悟力；智力高的人"};

String_and_meaning String_and_meaning_intellectual = {
    .string = "intellectual",
    .meaning = "adj. 智力的；聪明的；理智的n. 知识分子；凭理智做事者"};

String_and_meaning String_and_meaning_intelligence = {
    .string = "intelligence",
    .meaning = "n. 智力；情报工作；情报机关；理解力；才智，智慧；天分"};

String_and_meaning String_and_meaning_intelligent = {
    .string = "intelligent",
    .meaning = "adj. 智能的；聪明的；理解力强的"};

String_and_meaning String_and_meaning_intelligible = {
    .string = "intelligible",
    .meaning = "adj. 可理解的；明了的；仅能用智力了解的"};

String_and_meaning String_and_meaning_intend = {
    .string = "intend",
    .meaning = "vt. 打算；想要；意指vi. 有打算"};

String_and_meaning String_and_meaning_intense = {
    .string = "intense",
    .meaning = "adj. 强烈的；紧张的；非常的；热情的"};

String_and_meaning String_and_meaning_intensify = {
    .string = "intensify",
    .meaning = "vi. 增强，强化；变激烈vt. 使加强，使强化；使变激烈"};

String_and_meaning String_and_meaning_intensity = {
    .string = "intensity",
    .meaning = "n. 强度；强烈；[电子] 亮度；紧张"};

String_and_meaning String_and_meaning_intensive = {
    .string = "intensive",
    .meaning = "adj. 加强的；集中的；透彻的；加强语气的n. 加强器"};

String_and_meaning String_and_meaning_intent = {
    .string = "intent",
    .meaning = "n. 意图；目的；含义adj. 专心的；急切的；坚决的"};

String_and_meaning String_and_meaning_intention = {
    .string = "intention",
    .meaning = "n. 意图；目的；意向；愈合"};

String_and_meaning String_and_meaning_intentional = {
    .string = "intentional",
    .meaning = "adj. 故意的；蓄意的；策划的"};

String_and_meaning String_and_meaning_interact = {
    .string = "interact",
    .meaning = "vt. 互相影响；互相作用vi. 互相影响；互相作用n. 幕间剧；幕间休息"};

String_and_meaning String_and_meaning_interaction = {
    .string = "interaction",
    .meaning = "n. 相互作用，相互影响；交流；[数] 交互作用；互动"};

String_and_meaning String_and_meaning_interest = {
    .string = "interest",
    .meaning = "n. 兴趣，爱好；利息；利益；趣味；同行vt. 使……感兴趣；引起……的关心；使……参与"};

String_and_meaning String_and_meaning_interesting = {
    .string = "interesting",
    .meaning = "adj. 有趣的；引起兴趣的，令人关注的"};

String_and_meaning String_and_meaning_interfere = {
    .string = "interfere",
    .meaning = "vi. 干涉；妨碍；打扰vt. 冲突；介入"};

String_and_meaning String_and_meaning_interference = {
    .string = "interference",
    .meaning = "n. 干扰，冲突；干涉"};

String_and_meaning String_and_meaning_interim = {
    .string = "interim",
    .meaning = "adj. 临时的，暂时的；中间的；间歇的n. 过渡时期，中间时期；暂定"};

String_and_meaning String_and_meaning_interior = {
    .string = "interior",
    .meaning = "n. 内部，里面；内景；内陆，腹地；内政，内务；本质adj. 内部的，里面的；内位的；内陆的，腹地的；内务的，内政的；心灵的，精神的；本质的"};

String_and_meaning String_and_meaning_intermediate = {
    .string = "intermediate",
    .meaning = "adj. 中间的，过渡的；中级的，中等的n. 中级生；（化合物）中间体，中间物；中介，媒介v. 充当调解人，起媒介作用"};

String_and_meaning String_and_meaning_intermittent = {
    .string = "intermittent",
    .meaning = "adj. 间歇的；断断续续的；间歇性"};

String_and_meaning String_and_meaning_internal = {
    .string = "internal",
    .meaning = "adj. 内部的；体内的；（机构）内部的；国内的；本身的；内心的；（大学生）本校生的n. 内脏；内部特征"};

String_and_meaning String_and_meaning_international = {
    .string = "international",
    .meaning = "adj. 国际的；国际通用的n. 国际体育比赛（选手）；外国人n. (International) 共产国际（组织）"};

String_and_meaning String_and_meaning_interpret = {
    .string = "interpret",
    .meaning = "vt. 说明；口译vi. 解释；翻译"};

String_and_meaning String_and_meaning_interpretation = {
    .string = "interpretation",
    .meaning = "n. 解释；翻译；演出"};

String_and_meaning String_and_meaning_interpreter = {
    .string = "interpreter",
    .meaning = "n. 解释者；口译者；注释器"};

String_and_meaning String_and_meaning_interrupt = {
    .string = "interrupt",
    .meaning = "vt. 中断；打断；插嘴；妨碍vi. 打断；打扰n. 中断"};

String_and_meaning String_and_meaning_interruption = {
    .string = "interruption",
    .meaning = "n. 中断；干扰；中断之事"};

String_and_meaning String_and_meaning_intersection = {
    .string = "intersection",
    .meaning = "n. 交叉；十字路口；交集；交叉点"};

String_and_meaning String_and_meaning_interval = {
    .string = "interval",
    .meaning = "n. 间隔；间距；幕间休息"};

String_and_meaning String_and_meaning_intervene = {
    .string = "intervene",
    .meaning = "vi. 干涉；调停；插入"};

String_and_meaning String_and_meaning_interview = {
    .string = "interview",
    .meaning = "n. 接见，采访；面试，面谈vt. 采访；接见；对…进行面谈；对某人进行面试"};

String_and_meaning String_and_meaning_intimate = {
    .string = "intimate",
    .meaning = "adj. 亲密的；私人的；精通的；有性关系的n. 知己；至交vt. 暗示；通知；宣布"};

String_and_meaning String_and_meaning_intimidate = {
    .string = "intimidate",
    .meaning = "vt. 恐吓，威胁；胁迫"};

String_and_meaning String_and_meaning_into = {
    .string = "into",
    .meaning = "prep. 到……里面；触及，碰撞；朝，向；转向；关于；转变成；造成（某种结果）；除；对……很有兴趣n. (Into) （美）因托（人名）"};

String_and_meaning String_and_meaning_intricate = {
    .string = "intricate",
    .meaning = "adj. 复杂的；错综的，缠结的"};

String_and_meaning String_and_meaning_intrigue = {
    .string = "intrigue",
    .meaning = "n. 阴谋；诡计；复杂的事；私通vt. 用诡计取得；激起...的兴趣vi. 私通；密谋"};

String_and_meaning String_and_meaning_intrinsic = {
    .string = "intrinsic",
    .meaning = "adj. 本质的，固有的"};

String_and_meaning String_and_meaning_introduce = {
    .string = "introduce",
    .meaning = "vt. 介绍；引进；提出；采用"};

String_and_meaning String_and_meaning_introduction = {
    .string = "introduction",
    .meaning = "n. 介绍；引进；采用；入门；传入"};

String_and_meaning String_and_meaning_intuition = {
    .string = "intuition",
    .meaning = "n. 直觉；直觉力；直觉的知识"};

String_and_meaning String_and_meaning_invade = {
    .string = "invade",
    .meaning = "vt. 侵略；侵袭；侵扰；涌入vi. 侵略；侵入；侵袭；侵犯"};

String_and_meaning String_and_meaning_invalid = {
    .string = "invalid",
    .meaning = "adj. 无效的；有病的；残疾的n. 病人；残疾者vt. 使伤残；使退役vi. 变得病弱；因病而奉命退役"};

String_and_meaning String_and_meaning_invaluable = {
    .string = "invaluable",
    .meaning = "adj. 无价的；非常贵重的"};

String_and_meaning String_and_meaning_invariably = {
    .string = "invariably",
    .meaning = "adv. 总是；不变地；一定地"};

String_and_meaning String_and_meaning_invasion = {
    .string = "invasion",
    .meaning = "n. 入侵，侵略；侵袭；侵犯"};

String_and_meaning String_and_meaning_invent = {
    .string = "invent",
    .meaning = "vt. 发明；创造；虚构"};

String_and_meaning String_and_meaning_invention = {
    .string = "invention",
    .meaning = "n. 发明；发明物；虚构；发明才能"};

String_and_meaning String_and_meaning_inventor = {
    .string = "inventor",
    .meaning = "n. 发明家；[专利] 发明人；创造者"};

String_and_meaning String_and_meaning_inventory = {
    .string = "inventory",
    .meaning = "n. 存货，存货清单；详细目录；财产清册vt. 给……开列清单"};

String_and_meaning String_and_meaning_invert = {
    .string = "invert",
    .meaning = "vt. 使…转化；使…颠倒；使…反转；使…前后倒置n. 颠倒的事物；倒置物；倒悬者adj. 转化的"};

String_and_meaning String_and_meaning_invest = {
    .string = "invest",
    .meaning = "vt. 投资；覆盖；耗费；授予；包围vi. 投资，入股；花钱买"};

String_and_meaning String_and_meaning_investigate = {
    .string = "investigate",
    .meaning = "v. 调查；研究"};

String_and_meaning String_and_meaning_investigation = {
    .string = "investigation",
    .meaning = "n. 调查；调查研究"};

String_and_meaning String_and_meaning_investment = {
    .string = "investment",
    .meaning = "n. 投资；投入；封锁"};

String_and_meaning String_and_meaning_invisible = {
    .string = "invisible",
    .meaning = "adj. 无形的，看不见的；无形的；不显眼的，暗藏的"};

String_and_meaning String_and_meaning_invitation = {
    .string = "invitation",
    .meaning = "n. 邀请；引诱；请帖；邀请函"};

String_and_meaning String_and_meaning_invite = {
    .string = "invite",
    .meaning = "vt. 邀请，招待；招致n. 邀请"};

String_and_meaning String_and_meaning_involve = {
    .string = "involve",
    .meaning = "vt. 包含；牵涉；使陷于；潜心于"};

String_and_meaning String_and_meaning_inward = {
    .string = "inward",
    .meaning = "adj. 向内的；内部的；精神的；本质上的；熟悉的adv. 向内；内心里n. 内部；内脏；密友n. (Inward)人名；(英)英沃德"};

String_and_meaning String_and_meaning_iron = {
    .string = "iron",
    .meaning = "n. 熨斗；烙铁；坚强vt. 熨；用铁铸成adj. 铁的；残酷的；刚强的vi. 熨衣；烫平n. (Iron)人名；(英)艾恩"};

String_and_meaning String_and_meaning_irony = {
    .string = "irony",
    .meaning = "n. 讽刺；反语；具有讽刺意味的事adj. 铁的；似铁的"};

String_and_meaning String_and_meaning_irregular = {
    .string = "irregular",
    .meaning = "adj. 不整齐的；不规则的；不正常的；非正规的；不按时的；便秘的（委婉语）n. 不规则物；不合规格的产品；非正规军人员"};

String_and_meaning String_and_meaning_irrespective = {
    .string = "irrespective",
    .meaning = "adj. 不考虑的，不顾的adv. 不考虑地，不顾地"};

String_and_meaning String_and_meaning_irrigation = {
    .string = "irrigation",
    .meaning = "n. 灌溉；[临床] 冲洗；冲洗法"};

String_and_meaning String_and_meaning_irritate = {
    .string = "irritate",
    .meaning = "vt. 刺激，使兴奋；激怒vi. 引起恼怒，引起不愉快"};

String_and_meaning String_and_meaning_island = {
    .string = "island",
    .meaning = "n. 岛；岛屿；安全岛；岛状物adj. 岛的vt. 孤立；使成岛状n. (Island)人名；(英)艾兰"};

String_and_meaning String_and_meaning_isolate = {
    .string = "isolate",
    .meaning = "vt.使隔离,使孤立,使绝缘,离析n.隔离种群"};

String_and_meaning String_and_meaning_issue = {
    .string = "issue",
    .meaning = "n. 问题；流出；期号；发行物vt. 发行，发布；发给；放出，排出vi. 发行；流出；造成……结果；传下"};

String_and_meaning String_and_meaning_it = {
    .string = "it",
    .meaning = "pron.它;Italy,意大利;Information Technology,信息技术"};

String_and_meaning String_and_meaning_Italian = {
    .string = "Italian",
    .meaning = "adj. 意大利的；意大利语的；意大利文化的n. 意大利人；意大利语"};

String_and_meaning String_and_meaning_Italy = {
    .string = "Italy",
    .meaning = "n. 意大利（欧洲南部国家）"};

String_and_meaning String_and_meaning_item = {
    .string = "item",
    .meaning = "n. 条款，项目；一则；一件商品（或物品）adv. 又，同上v. 记下；逐条列出"};

String_and_meaning String_and_meaning_its = {
    .string = "its",
    .meaning = "pron. 它的n. (Its)人名；(俄)伊茨"};

String_and_meaning String_and_meaning_itself = {
    .string = "itself",
    .meaning = "pron. 它自己；它本身"};

String_and_meaning String_and_meaning_ivory = {
    .string = "ivory",
    .meaning = "n. 象牙；乳白色；长牙adj. 乳白色的；象牙制的n. (Ivory)人名；(英)艾沃里"};

String_and_meaning String_and_meaning_jacket = {
    .string = "jacket",
    .meaning = "n. 羽绒滑雪衫；西装短外套；短上衣，夹克；土豆皮；书籍的护封；文件套，公文夹vt. 给…穿夹克；给…装护套；给…包上护封；〈口〉打"};

String_and_meaning String_and_meaning_jail = {
    .string = "jail",
    .meaning = "n. 监狱；监牢；拘留所vt. 监禁；下狱n. (Jail)人名；(英)杰尔"};

String_and_meaning String_and_meaning_jam = {
    .string = "jam",
    .meaning = "n. 果酱；拥挤；困境；扣篮vt. 使堵塞；挤进，使塞满；混杂；压碎vi. 堵塞；轧住n. (Jam)人名；(伊朗、巴基)贾姆"};

String_and_meaning String_and_meaning_January = {
    .string = "January",
    .meaning = "n. 一月"};

String_and_meaning String_and_meaning_Japan = {
    .string = "Japan",
    .meaning = "n. 日本（东亚国家名）"};

String_and_meaning String_and_meaning_Japanese = {
    .string = "Japanese",
    .meaning = "adj. 日本（人）的；日语的n. 日本人；日语"};

String_and_meaning String_and_meaning_jar = {
    .string = "jar",
    .meaning = "n. 罐；广口瓶；震动；刺耳声vi. 冲突；不一致；震惊；发刺耳声vt. 震动；刺激；使震动n. (Jar)人名；(罗)扎尔"};

String_and_meaning String_and_meaning_jaw = {
    .string = "jaw",
    .meaning = "n. 颌；下巴；狭窄入口；唠叨vi. 教训；唠叨vt. 教训；对…唠叨n. (Jaw)人名；(冈)乔"};

String_and_meaning String_and_meaning_jazz = {
    .string = "jazz",
    .meaning = "n. 爵士乐，爵士舞；喧闹vi. 奏爵士乐，跳爵士舞；游荡vt. 奏爵士乐；使活泼adj. 爵士乐的；喧吵的n. (Jazz)人名；(德)雅茨"};

String_and_meaning String_and_meaning_jealous = {
    .string = "jealous",
    .meaning = "adj. 妒忌的；猜疑的；唯恐失去的；戒备的"};

String_and_meaning String_and_meaning_jeopardize = {
    .string = "jeopardize",
    .meaning = "vt. 危害；使陷危地；使受危困"};

String_and_meaning String_and_meaning_jerk = {
    .string = "jerk",
    .meaning = "n. 急拉；猛的一动；肌肉抽搐；蠢人；没品的人vi. 痉挛；急拉；颠簸地行进vt. 猛拉adj. 香料腌制的n. (Jerk) 耶尔克（人名）"};

String_and_meaning String_and_meaning_jet = {
    .string = "jet",
    .meaning = "n. 喷射，喷嘴；喷气式飞机；黑玉adj. 墨黑的vt. 射出vi. 射出；[航] 乘喷气式飞机"};

String_and_meaning String_and_meaning_jew = {
    .string = "jew",
    .meaning = "n. 犹太人；犹太教徒；守财奴vt. 杀价；欺骗"};

String_and_meaning String_and_meaning_jewel = {
    .string = "jewel",
    .meaning = "n. 宝石；珠宝vt. 镶以宝石；饰以珠宝"};

String_and_meaning String_and_meaning_jewish = {
    .string = "jewish",
    .meaning = "adj. 犹太人的；犹太族的"};

String_and_meaning String_and_meaning_job = {
    .string = "job",
    .meaning = "n.工作,零活,口职位,事情,圣经约伯,极有耐心的人vi.做零工,打杂,做股票经纪,假公济私vt.代客买卖(股票,货物等),批发,承包,欺骗"};

String_and_meaning String_and_meaning_join = {
    .string = "join",
    .meaning = "vt. 参加；结合；连接vi. 加入；参加；结合n. 结合；连接；接合点n. (Join)人名；(法)茹安"};

String_and_meaning String_and_meaning_joint = {
    .string = "joint",
    .meaning = "n.接缝,接合处,接合点,关节,(牛、羊等的腿)大块肉adj.共同的,联合的,连接的,合办的vt.连接,接合,使有接头vi.贴合,生节"};

String_and_meaning String_and_meaning_joke = {
    .string = "joke",
    .meaning = "n. 玩笑，笑话；笑柄vt. 开…的玩笑vi. 开玩笑n. (Joke)人名；(英)乔克；(塞)约凯"};

String_and_meaning String_and_meaning_jolly = {
    .string = "jolly",
    .meaning = "adj.欢乐的,高兴的,快活的"};

String_and_meaning String_and_meaning_journal = {
    .string = "journal",
    .meaning = "n. 日报，杂志；日记；分类账"};

String_and_meaning String_and_meaning_journalist = {
    .string = "journalist",
    .meaning = "n. 新闻工作者；报人；记日志者"};

String_and_meaning String_and_meaning_journey = {
    .string = "journey",
    .meaning = "n. 旅行；行程vi. 旅行n. (Journey)人名；(英)朱尼，朱妮(女名)"};

String_and_meaning String_and_meaning_joy = {
    .string = "joy",
    .meaning = "n. 欢乐，快乐；乐趣；高兴vi. 欣喜，欢喜vt. 高兴，使快乐"};

String_and_meaning String_and_meaning_joyful = {
    .string = "joyful",
    .meaning = "adj. 欢喜的；令人高兴的"};

String_and_meaning String_and_meaning_judge = {
    .string = "judge",
    .meaning = "n. 法官；裁判员；鉴定人v. 判断；猜测（大小、数量等）；裁判；评价；审判，判决n. (Judge) （美、爱、英）贾奇（人名）"};

String_and_meaning String_and_meaning_judgement = {
    .string = "judgement",
    .meaning = "n. 意见；判断力；[法] 审判；评价"};

String_and_meaning String_and_meaning_juice = {
    .string = "juice",
    .meaning = "n. （水果）汁，液；果汁"};

String_and_meaning String_and_meaning_July = {
    .string = "July",
    .meaning = "n. 七月"};

String_and_meaning String_and_meaning_jump = {
    .string = "jump",
    .meaning = "n.跳跃,上涨,惊跳vt.跳跃,跃过,突升,使跳跃vi.跳跃,暴涨"};

String_and_meaning String_and_meaning_junction = {
    .string = "junction",
    .meaning = "n. 连接，接合；交叉点；接合点"};

String_and_meaning String_and_meaning_June = {
    .string = "June",
    .meaning = "n. 六月；琼（人名，来源于拉丁语，含义是“年轻气盛的六月”）"};

String_and_meaning String_and_meaning_jungle = {
    .string = "jungle",
    .meaning = "n. 丛林，密林；危险地带adj. 丛林的；蛮荒的"};

String_and_meaning String_and_meaning_junior = {
    .string = "junior",
    .meaning = "n.年少者,晚辈,下级,(年龄、职位等)较低者,大学三年级学生adj.年少的,下级的,后进的"};

String_and_meaning String_and_meaning_jury = {
    .string = "jury",
    .meaning = "n. [法] 陪审团；评判委员会adj. 应急的n. (Jury)人名；(西)胡里；(英、法)朱里；(德)尤里"};

String_and_meaning String_and_meaning_just = {
    .string = "just",
    .meaning = "adj.正义的,公正的,正确的,应得的,有充分根据的adv.正好,仅仅,刚才,只是,不过"};

String_and_meaning String_and_meaning_justice = {
    .string = "justice",
    .meaning = "n. 司法，法律制裁；正义；法官，审判员n. (Justice)人名；(英)贾斯蒂斯，贾斯蒂丝(女名)"};

String_and_meaning String_and_meaning_justification = {
    .string = "justification",
    .meaning = "n. 理由；辩护；认为有理，认为正当；释罪"};

String_and_meaning String_and_meaning_justify = {
    .string = "justify",
    .meaning = "vi. 证明合法；整理版面vt. 证明……是正当的；替……辩护"};

String_and_meaning String_and_meaning_keen = {
    .string = "keen",
    .meaning = "adj. 敏锐的，敏捷的；渴望的；强烈的；热心的；锐利的n. 痛哭，挽歌n. (Keen)人名；(英)基恩；(德)肯；(肯)金"};

String_and_meaning String_and_meaning_keep = {
    .string = "keep",
    .meaning = "vt. 保持；经营；遵守；饲养vi. 保持；继续不断n. 保持；生计；生活费n. (Keep)人名；(英)基普"};

String_and_meaning String_and_meaning_keeper = {
    .string = "keeper",
    .meaning = "n. 监护人；饲养员；看守人；管理人"};

String_and_meaning String_and_meaning_kettle = {
    .string = "kettle",
    .meaning = "n. 壶；[化工] 釜；罐；鼓n. (Kettle)人名；(英)凯特尔"};

String_and_meaning String_and_meaning_key = {
    .string = "key",
    .meaning = "n.钥匙,关键,解答,(打字机等的)键,调子,对译本,(开钟表、发条的)栓,要害vt.调节...的音调,锁上,插上栓,提供线索vi.使用钥匙n.[乐]键,调,基调"};

String_and_meaning String_and_meaning_keyboard = {
    .string = "keyboard",
    .meaning = "n. 键盘vt. 键入；用键盘式排字机排字vi. 用键盘进行操作；作键盘式排字机排字"};

String_and_meaning String_and_meaning_kick = {
    .string = "kick",
    .meaning = "v.踢n.踢"};

String_and_meaning String_and_meaning_kid = {
    .string = "kid",
    .meaning = "n. 小孩；小山羊vt. 欺骗；取笑；戏弄vi. 欺骗；取笑；戏弄adj. 小山羊皮制的；较年幼的n. (Kid)人名；(英)基德"};

String_and_meaning String_and_meaning_kidney = {
    .string = "kidney",
    .meaning = "n. [解剖] 肾脏；腰子；个性n. (Kidney)人名；(英)基德尼"};

String_and_meaning String_and_meaning_kill = {
    .string = "kill",
    .meaning = "vt. 杀死；扼杀；使终止；抵消vi. 杀死n. 杀戮；屠杀adj. 致命的；致死的n. (Kill)人名；(德)基尔"};

String_and_meaning String_and_meaning_kilogram = {
    .string = "kilogram",
    .meaning = "n. 公斤；千克"};

String_and_meaning String_and_meaning_kilometer = {
    .string = "kilometer",
    .meaning = "n. [计量] 公里；[计量] 千米（等于kilometre）"};

String_and_meaning String_and_meaning_kind = {
    .string = "kind",
    .meaning = "n. 种类；性质adj. 和蔼的；宽容的；令人感激的n. (Kind)人名；(德、俄、法、捷)金德；(瑞典)欣德"};

String_and_meaning String_and_meaning_kindness = {
    .string = "kindness",
    .meaning = "n. 仁慈；好意；友好的行为n. (Kindness)人名；(英)坎德尼斯"};

String_and_meaning String_and_meaning_king = {
    .string = "king",
    .meaning = "n.国王,君主,(部落的)首领,纸牌中的Kvt.立...为王vi.做国王,统治"};

String_and_meaning String_and_meaning_kingdom = {
    .string = "kingdom",
    .meaning = "n. 王国；界；领域n. (Kingdom)人名；(英)金德姆"};

String_and_meaning String_and_meaning_kiss = {
    .string = "kiss",
    .meaning = "n.吻,(风,浪等)拂vt.吻,轻拂vi.接吻"};

String_and_meaning String_and_meaning_kit = {
    .string = "kit",
    .meaning = "n. 工具箱；成套工具vt. 装备vi. 装备n. (Kit)人名；(俄)基特；(东南亚国家华语)吉；(英)基特，姬特(女名)(教名 Christopher、Katherine 的昵称)"};

String_and_meaning String_and_meaning_kitchen = {
    .string = "kitchen",
    .meaning = "n. 厨房；炊具；炊事人员n. (Kitchen)人名；(英)基钦"};

String_and_meaning String_and_meaning_kite = {
    .string = "kite",
    .meaning = "n. 风筝vi. 使用空头支票；像风筝一样飞；轻快地移动vt. 骗钱；涂改（支票）n. （Kite）（塞）基特；（英）凯特（人名）"};

String_and_meaning String_and_meaning_knee = {
    .string = "knee",
    .meaning = "n. 膝盖，膝vt. 用膝盖碰n. (Knee)人名；(英)尼"};

String_and_meaning String_and_meaning_kneel = {
    .string = "kneel",
    .meaning = "vi. 跪下，跪"};

String_and_meaning String_and_meaning_knife = {
    .string = "knife",
    .meaning = "n. 刀；匕首vt. 用刀切；（口）伤害vi. 劈开；划过"};

String_and_meaning String_and_meaning_knit = {
    .string = "knit",
    .meaning = "vi. 编织；结合；皱眉vt. 编织；结合n. 编织衣物；编织法"};

String_and_meaning String_and_meaning_knob = {
    .string = "knob",
    .meaning = "n. 把手；瘤；球形突出物vi. 鼓起vt. 使有球形突出物n. (Knob)人名；(匈、捷)克诺布"};

String_and_meaning String_and_meaning_knock = {
    .string = "knock",
    .meaning = "vi. 敲；打；敲击vt. 敲；打；敲击；批评n. 敲；敲打；爆震声"};

String_and_meaning String_and_meaning_knot = {
    .string = "knot",
    .meaning = "n. （绳等的）结；节瘤，疙瘩；海里/小时（航速单位）vt. 打结vi. 打结n. (Knot)人名；(英)诺特"};

String_and_meaning String_and_meaning_know = {
    .string = "know",
    .meaning = "vt. 知道；认识；懂得vi. 了解；熟悉；确信"};

String_and_meaning String_and_meaning_knowledge = {
    .string = "knowledge",
    .meaning = "n. 知识，学问；知道，认识；学科n. (Knowledge)人名；(南非)诺利奇"};

String_and_meaning String_and_meaning_lab = {
    .string = "lab",
    .meaning = "n. 实验室，研究室"};

String_and_meaning String_and_meaning_label = {
    .string = "label",
    .meaning = "n.标签,签条,商标,标志vt.贴标签于,指...为,分类,标注 [计] 加上或修改磁盘的标签"};

String_and_meaning String_and_meaning_labor = {
    .string = "labor",
    .meaning = "n. 劳动；工作；劳工；分娩vi. 劳动；努力；苦干vt. 详细分析；使厌烦n. (Labor)人名；(德、塞、法)拉博尔；(英)拉博"};

String_and_meaning String_and_meaning_laboratory = {
    .string = "laboratory",
    .meaning = "n. 实验室，研究室"};

String_and_meaning String_and_meaning_labour = {
    .string = "labour",
    .meaning = "n. 劳动力，人工；分娩vi. 劳动；分娩；费力地前进"};

String_and_meaning String_and_meaning_lace = {
    .string = "lace",
    .meaning = "n. 花边；鞋带；饰带；少量烈酒vt. 饰以花边；结带子vi. 系带子n. (Lace)人名；(意)拉切"};

String_and_meaning String_and_meaning_lack = {
    .string = "lack",
    .meaning = "n. 缺乏，不足v. 缺乏，不足，没有；需要n. (Lack) （美、德）拉克（人名）"};

String_and_meaning String_and_meaning_ladder = {
    .string = "ladder",
    .meaning = "n. 阶梯；途径；梯状物vi. 成名；发迹vt. 在……上装设梯子"};

String_and_meaning String_and_meaning_lady = {
    .string = "lady",
    .meaning = "n. 女士，夫人；小姐；妻子"};

String_and_meaning String_and_meaning_lag = {
    .string = "lag",
    .meaning = "n. 落后；迟延；防护套；囚犯；桶板vt. 给......保温vi. 滞后；缓缓而行；蹒跚adj. 最后的n. （Lag）（俄）拉格（人名）"};

String_and_meaning String_and_meaning_lake = {
    .string = "lake",
    .meaning = "n. 湖；深红色颜料；胭脂红vt. （使）血球溶解vi. （使）血球溶解n. (Lake)人名；(德、塞、瑞典)拉克；(英)莱克"};

String_and_meaning String_and_meaning_lamb = {
    .string = "lamb",
    .meaning = "n. 羔羊，小羊；羔羊肉vt. 生小羊，产羔羊vi. 生小羊，产羔羊n. (Lamb)人名；(英)兰姆；(德)兰布"};

String_and_meaning String_and_meaning_lame = {
    .string = "lame",
    .meaning = "adj. 跛足的；僵痛的；不完全的；无说服力的；差劲的，蹩脚的vi. 变跛vt. 使跛；使成残废"};

String_and_meaning String_and_meaning_lamp = {
    .string = "lamp",
    .meaning = "n. 灯；照射器vt. 照亮vi. 发亮n. (Lamp)人名；(英、德、匈、瑞典)兰普"};

String_and_meaning String_and_meaning_land = {
    .string = "land",
    .meaning = "n. 国土；陆地；地面vt. 使…登陆；使…陷于；将…卸下vi. 登陆；到达n. (Land)人名；(英、德、葡、瑞典)兰德"};

String_and_meaning String_and_meaning_landing = {
    .string = "landing",
    .meaning = "n. 登陆；码头；楼梯平台v. 登陆（land的ing形式）n. (Landing)人名；(冈、瑞典、塞内)兰丁"};

String_and_meaning String_and_meaning_landlady = {
    .string = "landlady",
    .meaning = "n. 女房东；女地主；女店主"};

String_and_meaning String_and_meaning_landlord = {
    .string = "landlord",
    .meaning = "n. 房东，老板；地主"};

String_and_meaning String_and_meaning_landscape = {
    .string = "landscape",
    .meaning = "n.风景,山水画,地形,前景v.美化"};

String_and_meaning String_and_meaning_lane = {
    .string = "lane",
    .meaning = "n. 小巷；[航][水运] 航线；车道；罚球区n. (Lane)人名；(英、俄)莱恩；(老)兰；(德、法、意、葡、塞、瑞典)拉内n. 兵线（游戏术语）"};

String_and_meaning String_and_meaning_language = {
    .string = "language",
    .meaning = "n. 语言；语言文字；表达能力"};

String_and_meaning String_and_meaning_lantern = {
    .string = "lantern",
    .meaning = "n. 灯笼；提灯；灯笼式天窗"};

String_and_meaning String_and_meaning_lap = {
    .string = "lap",
    .meaning = "n. 一圈；大腿；下摆；山坳vt. 使重叠；拍打；包围；缠绕；舔舐；领先一圈vi. 重叠；轻拍；围住n. （Lap）（越）拉普（人名）"};

String_and_meaning String_and_meaning_large = {
    .string = "large",
    .meaning = "adj. 大的；多数的；广博的adv. 大大地；夸大地n. 大n. (Large)人名；(英)拉奇；(法)拉尔热"};

String_and_meaning String_and_meaning_largely = {
    .string = "largely",
    .meaning = "adv. 主要地；大部分；大量地"};

String_and_meaning String_and_meaning_laser = {
    .string = "laser",
    .meaning = "n. 激光n. (Laser)人名；(德)拉泽"};

String_and_meaning String_and_meaning_last = {
    .string = "last",
    .meaning = "adj.最后的,临终的,末尾的,最近的,结论性的vi.持续,支持,维持vt.使维持,楦adv.最后,后来n.最后,末尾,临终,鞋楦头"};

String_and_meaning String_and_meaning_late = {
    .string = "late",
    .meaning = "adj. 晚的；迟的；已故的；最近的adv. 晚；迟；最近；在晚期"};

String_and_meaning String_and_meaning_lately = {
    .string = "lately",
    .meaning = "adv. 近来，不久前"};

String_and_meaning String_and_meaning_latent = {
    .string = "latent",
    .meaning = "adj. 潜在的；潜伏的；隐藏的"};

String_and_meaning String_and_meaning_later = {
    .string = "later",
    .meaning = "adv. 后来；稍后；随后adj. 更迟的；更后的n. (Later)人名；(德)拉特"};

String_and_meaning String_and_meaning_Latin = {
    .string = "Latin",
    .meaning = "n. 拉丁语；拉丁人；拉丁音乐adj. 拉丁语的，用拉丁语写成的； 拉丁语系国家（或民族）的；拉丁人的n. (Latin) （美）拉京（人名）"};

String_and_meaning String_and_meaning_latitude = {
    .string = "latitude",
    .meaning = "n. 纬度；界限；活动范围"};

String_and_meaning String_and_meaning_latter = {
    .string = "latter",
    .meaning = "adj. 后者的；近来的；后面的；较后的n. （Latter）（英、德、捷）拉特（人名）"};

String_and_meaning String_and_meaning_laugh = {
    .string = "laugh",
    .meaning = "v. 笑，发出笑声；笑着说n. 笑（声）；引人发笑的事或人"};

String_and_meaning String_and_meaning_laughter = {
    .string = "laughter",
    .meaning = "n. 笑；笑声"};

String_and_meaning String_and_meaning_launch = {
    .string = "launch",
    .meaning = "v. 发射（导弹、火箭等）；发起，发动；使……下水；开始；起飞n. 发射；发行，投放市场；下水；汽艇"};

String_and_meaning String_and_meaning_laundry = {
    .string = "laundry",
    .meaning = "n. 洗衣店，洗衣房；要洗的衣服；洗熨；洗好的衣服"};

String_and_meaning String_and_meaning_lavatory = {
    .string = "lavatory",
    .meaning = "n. 厕所，盥洗室"};

String_and_meaning String_and_meaning_law = {
    .string = "law",
    .meaning = "n. 法; 法学; 规律; 法制"};

String_and_meaning String_and_meaning_lawn = {
    .string = "lawn",
    .meaning = "n. 草地；草坪n. (Lawn)人名；(缅)朗"};

String_and_meaning String_and_meaning_lawyer = {
    .string = "lawyer",
    .meaning = "n. 律师；法学家n. (Lawyer)人名；(英)劳耶"};

String_and_meaning String_and_meaning_lay = {
    .string = "lay",
    .meaning = "vt.放置,铺设,产(卵)提出,平息,布置vi.下蛋,打赌n.位置,层面,形势,短叙事诗adj.世俗的,外行的 vbl.lie的过去式"};

String_and_meaning String_and_meaning_layer = {
    .string = "layer",
    .meaning = "n.层,阶层"};

String_and_meaning String_and_meaning_layman = {
    .string = "layman",
    .meaning = "n. 外行；门外汉；俗人；一般信徒n. (Layman)人名；(英)莱曼"};

String_and_meaning String_and_meaning_layout = {
    .string = "layout",
    .meaning = "n. 布局；设计；安排；陈列"};

String_and_meaning String_and_meaning_lazy = {
    .string = "lazy",
    .meaning = "adj. 懒惰的；懒洋洋的；怠惰的；慢吞吞的n. (Lazy)人名；(德)拉齐"};

String_and_meaning String_and_meaning_lead = {
    .string = "lead",
    .meaning = "vt. 领导；致使；引导；指挥vi. 导致；用水砣测深n. 领导；铅；导线；榜样n. (Lead) （英）利德（人名）"};

String_and_meaning String_and_meaning_leader = {
    .string = "leader",
    .meaning = "n. 领导者；首领；指挥者n. （Leader）（英）利德（人名）"};

String_and_meaning String_and_meaning_leadership = {
    .string = "leadership",
    .meaning = "n. 领导能力；领导阶层"};

String_and_meaning String_and_meaning_leading = {
    .string = "leading",
    .meaning = "adj. 领导的；主要的n. 领导；铅板；行距v. 领导（lead的ing形式）"};

String_and_meaning String_and_meaning_leaf = {
    .string = "leaf",
    .meaning = "n. 叶子；（书籍等的）一张；扇页vi. 生叶；翻书页vt. 翻…的页，匆匆翻阅n. (Leaf)人名；(英)利夫"};

String_and_meaning String_and_meaning_leaflet = {
    .string = "leaflet",
    .meaning = "n. 小叶；传单"};

String_and_meaning String_and_meaning_league = {
    .string = "league",
    .meaning = "n. 联盟；社团；范畴vt. 使…结盟；与…联合vi. 团结；结盟n. (League)人名；(英)利格"};

String_and_meaning String_and_meaning_leak = {
    .string = "leak",
    .meaning = "n.漏洞,漏出,漏出物,泄漏,俚撒尿vi.漏,泄漏vt.使渗漏"};

String_and_meaning String_and_meaning_lean = {
    .string = "lean",
    .meaning = "n.倾斜,倾斜度,倚靠,倾向adj.瘦的,贫乏的,歉收的vi.倚靠,倾斜,依赖,倾向,偏向vt.使倾斜"};

String_and_meaning String_and_meaning_leap = {
    .string = "leap",
    .meaning = "v.跳,跳越,跳跃n.跳跃,飞跃"};

String_and_meaning String_and_meaning_learn = {
    .string = "learn",
    .meaning = "vt. 学习；得知；认识到vi. 学习；获悉"};

String_and_meaning String_and_meaning_learned = {
    .string = "learned",
    .meaning = "adj.有学问的,学术上的"};

String_and_meaning String_and_meaning_learning = {
    .string = "learning",
    .meaning = "n. 学习；学问v. 学习（learn的现在分词）"};

String_and_meaning String_and_meaning_lease = {
    .string = "lease",
    .meaning = "n. 租约；租期；租赁物；租赁权vt. 出租；租得vi. 出租"};

String_and_meaning String_and_meaning_least = {
    .string = "least",
    .meaning = "adj. 最小的；最少的（little的最高级）adv. 最小；最少n. 最小；最少"};

String_and_meaning String_and_meaning_leather = {
    .string = "leather",
    .meaning = "n. 皮革；皮革制品vt. 用皮革包盖；抽打adj. 皮的；皮革制的n. (Leather)人名；(英)莱瑟"};

String_and_meaning String_and_meaning_leave = {
    .string = "leave",
    .meaning = "vt. 离开；留下；遗忘；委托vi. 离开，出发；留下n. 许可，同意；休假"};

String_and_meaning String_and_meaning_lecture = {
    .string = "lecture",
    .meaning = "n. 演讲；讲稿；教训vt. 演讲；训诫vi. 讲课；讲演"};

String_and_meaning String_and_meaning_left = {
    .string = "left",
    .meaning = "adj. 左边的；左派的；剩下的adv. 在左面n. 左边；左派；激进分子v. 离开（leave的过去式）"};

String_and_meaning String_and_meaning_leg = {
    .string = "leg",
    .meaning = "n. 腿；支柱"};

String_and_meaning String_and_meaning_legal = {
    .string = "legal",
    .meaning = "adj. 法律的；合法的；法定的；依照法律的n. （Legal）（法）勒加尔（人名）"};

String_and_meaning String_and_meaning_legend = {
    .string = "legend",
    .meaning = "n. 传奇；说明；图例；刻印文字n. (Legend)人名；(西)莱亨德；(英)莱金德"};

String_and_meaning String_and_meaning_legislation = {
    .string = "legislation",
    .meaning = "n. 立法；法律"};

String_and_meaning String_and_meaning_legitimate = {
    .string = "legitimate",
    .meaning = "adj. 合法的；正当的；合理的；正统的vt. 使合法；认为正当（等于legitimize）"};

String_and_meaning String_and_meaning_leisure = {
    .string = "leisure",
    .meaning = "n. 闲暇；空闲；安逸adj. 空闲的；有闲的；业余的n. (Leisure)人名；(英)莱热"};

String_and_meaning String_and_meaning_lemon = {
    .string = "lemon",
    .meaning = "n. 柠檬；柠檬汁；柠檬树；柠檬色；废物；蠢人adj. 浅黄色的，柠檬色的n. (Lemon) （美）莱蒙 （人名）"};

String_and_meaning String_and_meaning_lend = {
    .string = "lend",
    .meaning = "vt. 贷；增添，提供；把……借给vi. 贷款n. (Lend)人名；(德)伦德"};

String_and_meaning String_and_meaning_length = {
    .string = "length",
    .meaning = "n. 长度，长；时间的长短；语音长"};

String_and_meaning String_and_meaning_lens = {
    .string = "lens",
    .meaning = "n. 透镜，镜头；眼睛中的水晶体；晶状体；隐形眼镜；汽车的灯玻璃vt. 给……摄影"};

String_and_meaning String_and_meaning_less = {
    .string = "less",
    .meaning = "n.较少,较小adj.少的,小的adv.较少地,更小地,不及 prep.减去"};

String_and_meaning String_and_meaning_lessen = {
    .string = "lessen",
    .meaning = "vt. 使…变小；使…减轻；使…变少vi. 减少；减轻；变小n. (Lessen)人名；(德、罗)莱森"};

String_and_meaning String_and_meaning_lesson = {
    .string = "lesson",
    .meaning = "n. 教训；课vt. 教训；上课"};

String_and_meaning String_and_meaning_lest = {
    .string = "lest",
    .meaning = "conj. 唯恐，以免；（引出产生某种情感的原因）唯恐，担心"};

String_and_meaning String_and_meaning_let = {
    .string = "let",
    .meaning = "vt. 允许，让；出租；假设；妨碍vi. 出租；被承包n. 障碍；出租屋n. (Let)人名；(缅)莱；(俄)莱特"};

String_and_meaning String_and_meaning_letter = {
    .string = "letter",
    .meaning = "n. 信；字母，文字；证书；文学，学问；字面意义vt. 写字母于vi. 写印刷体字母n. （Letter）（美、英、巴西）莱特（人名）"};

String_and_meaning String_and_meaning_level = {
    .string = "level",
    .meaning = "n. 水平；标准；水平面adj. 水平的；平坦的；同高的vi. 瞄准；拉平；变得平坦vt. 使同等；对准；弄平n. (Level)人名；(法)勒韦尔"};

String_and_meaning String_and_meaning_lever = {
    .string = "lever",
    .meaning = "n. 杠杆；控制杆vt. 用杠杆撬动；把…作为杠杆vi. 用杠杆撬n. (Lever)人名；(法)勒韦；(英)利弗；(德)莱韦尔"};

String_and_meaning String_and_meaning_liability = {
    .string = "liability",
    .meaning = "n. 责任；债务；倾向；可能性；不利因素"};

String_and_meaning String_and_meaning_liable = {
    .string = "liable",
    .meaning = "adj. 有责任的，有义务的；应受罚的；有…倾向的；易…的"};

String_and_meaning String_and_meaning_liar = {
    .string = "liar",
    .meaning = "n. 说谎的人n. (Liar) （俄、美、德）莉娅尔（人名）"};

String_and_meaning String_and_meaning_liberal = {
    .string = "liberal",
    .meaning = "adj. 自由主义的；慷慨的；不拘泥的；宽大的n. 自由主义者n. (Liberal)人名；(葡)利贝拉尔"};

String_and_meaning String_and_meaning_liberate = {
    .string = "liberate",
    .meaning = "vt. 解放；放出；释放"};

String_and_meaning String_and_meaning_liberation = {
    .string = "liberation",
    .meaning = "n. 释放，解放"};

String_and_meaning String_and_meaning_liberty = {
    .string = "liberty",
    .meaning = "n. 自由；许可；冒失n. (Liberty)人名；(英)利伯蒂"};

String_and_meaning String_and_meaning_librarian = {
    .string = "librarian",
    .meaning = "n. 图书馆员；图书管理员"};

String_and_meaning String_and_meaning_library = {
    .string = "library",
    .meaning = "n. 图书馆，藏书室；文库"};

String_and_meaning String_and_meaning_license = {
    .string = "license",
    .meaning = "n. 执照，许可证；特许（同 licence）vt. 许可；特许；发许可证给"};

String_and_meaning String_and_meaning_lick = {
    .string = "lick",
    .meaning = "vt. 舔；卷过；鞭打vt. （非正式）战胜vi. 舔；轻轻拍打n. 舔；打；少许n. (Lick)人名；(英、匈)利克"};

String_and_meaning String_and_meaning_lid = {
    .string = "lid",
    .meaning = "n. 盖子；眼睑；限制vt. 给…盖盖子n. (Lid)人名；(捷、挪)利德"};

String_and_meaning String_and_meaning_lie = {
    .string = "lie",
    .meaning = "vi. 躺；说谎；位于；展现vt. 谎骗n. 谎言；位置n. (Lie)人名；(罗、挪、瑞典)利；(中)李(普通话·威妥玛)"};

String_and_meaning String_and_meaning_lieutenant = {
    .string = "lieutenant",
    .meaning = "n. 中尉；副官；助理人员"};

String_and_meaning String_and_meaning_life = {
    .string = "life",
    .meaning = "n. 生活，生存；寿命"};

String_and_meaning String_and_meaning_lifetime = {
    .string = "lifetime",
    .meaning = "n. 一生；寿命；终生；使用期adj. 一生的；终身的"};

String_and_meaning String_and_meaning_lift = {
    .string = "lift",
    .meaning = "n.举起,电梯,起重机,搭车vt.升高,提高,举起,空运vi.升起,(指雾等)消散,耸立"};

String_and_meaning String_and_meaning_light = {
    .string = "light",
    .meaning = "n.光,日光,发光体,灯adj.轻的,发光的,明亮的,浅的vt.点燃,照亮adv.轻地vi.点着,变亮"};

String_and_meaning String_and_meaning_lighten = {
    .string = "lighten",
    .meaning = "vi. 减轻；发亮vt. 使照亮；使轻松"};

String_and_meaning String_and_meaning_lightly = {
    .string = "lightly",
    .meaning = "adv. 轻轻地；轻松地；容易地；不费力地"};

String_and_meaning String_and_meaning_lightning = {
    .string = "lightning",
    .meaning = "n. 闪电；突然；（非正式）突如其来的好运adj. 闪电般快的，飞快的；突然的v. 闪电"};

String_and_meaning String_and_meaning_like = {
    .string = "like",
    .meaning = "n.爱好,同样的人(或物)adj.相似的,同样的vt.喜欢,希望,愿意vi.喜欢,希望 prep.象,如同adv.可能"};

String_and_meaning String_and_meaning_likelihood = {
    .string = "likelihood",
    .meaning = "n. 可能性，可能"};

String_and_meaning String_and_meaning_likely = {
    .string = "likely",
    .meaning = "adj. 很可能的；合适的；有希望的adv. 很可能；或许"};

String_and_meaning String_and_meaning_likewise = {
    .string = "likewise",
    .meaning = "adv. 同样地；也"};

String_and_meaning String_and_meaning_limb = {
    .string = "limb",
    .meaning = "n. 肢，臂；分支；枝干vt. 切断…的手足；从…上截下树枝n. (Limb)人名；(朝)林；(英)利姆"};

String_and_meaning String_and_meaning_lime = {
    .string = "lime",
    .meaning = "n. 石灰；酸橙；绿黄色vt. 撒石灰于；涂粘鸟胶于adj. 绿黄色的n. (Lime)人名；(法)利姆"};

String_and_meaning String_and_meaning_limit = {
    .string = "limit",
    .meaning = "n. 限制；限度；界线vt. 限制；限定"};

String_and_meaning String_and_meaning_limitation = {
    .string = "limitation",
    .meaning = "n. 限制；限度；极限；追诉时效；有效期限；缺陷"};

String_and_meaning String_and_meaning_limited = {
    .string = "limited",
    .meaning = "adj. 有限的n. 高级快车"};

String_and_meaning String_and_meaning_limp = {
    .string = "limp",
    .meaning = "adj. 柔软的，无力的；软弱的vi. 跛行，一拐一拐地走；缓慢费力地前进n. 跛行n. (Limp)人名；(英)林普"};

String_and_meaning String_and_meaning_line = {
    .string = "line",
    .meaning = "n. 路线，航线；排；绳vt. 排成一行；划线于；以线条标示；使…起皱纹vi. 排队；站成一排n. (Line)人名；(英)莱恩；(俄)利涅"};

String_and_meaning String_and_meaning_linear = {
    .string = "linear",
    .meaning = "adj. 线的，线型的；直线的，线状的；长度的"};

String_and_meaning String_and_meaning_linen = {
    .string = "linen",
    .meaning = "n. 亚麻布，亚麻线；亚麻制品adj. 亚麻的；亚麻布制的n. (Linen) 利嫩（人名）"};

String_and_meaning String_and_meaning_liner = {
    .string = "liner",
    .meaning = "n. 班轮，班机；衬垫；画线者"};

String_and_meaning String_and_meaning_linger = {
    .string = "linger",
    .meaning = "vi. 徘徊；苟延残喘；磨蹭vt. 消磨；缓慢度过n. (Linger)人名；(德、捷、瑞典)林格；(法)兰热"};

String_and_meaning String_and_meaning_link = {
    .string = "link",
    .meaning = "n.链环,连结物,火把,链接vt.连结,联合,挽vi.连接起来"};

String_and_meaning String_and_meaning_lion = {
    .string = "lion",
    .meaning = "n. 狮子；名人；勇猛的人；社交场合的名流n. (Lion)人名；(西、葡)利昂；(德、法、意、捷、瑞典)利翁；(英)莱昂"};

String_and_meaning String_and_meaning_lip = {
    .string = "lip",
    .meaning = "n. 嘴唇；边缘vt. 以嘴唇碰adj. 口头上的vi. 用嘴唇n. (Lip)人名；(法)利普；(中)猎(广东话·威妥玛)；(柬)利；(东南亚国家华语)立"};

String_and_meaning String_and_meaning_liquid = {
    .string = "liquid",
    .meaning = "adj. 液体的；清澈的；明亮的；易变的n. 液体，流体；流音"};

String_and_meaning String_and_meaning_liquor = {
    .string = "liquor",
    .meaning = "n. 酒，含酒精饮料；溶液；液体；烈酒vi. 喝酒，灌酒vt. 使喝醉"};

String_and_meaning String_and_meaning_list = {
    .string = "list",
    .meaning = "n.目录,名单,列表,序列,数据清单,明细表,条纹,[总称]各种上市证券vt.列出,列于表上,记入名单内,装布条vi.列于表上"};

String_and_meaning String_and_meaning_listen = {
    .string = "listen",
    .meaning = "vi. 听，倾听；听从，听信n. 听，倾听"};

String_and_meaning String_and_meaning_listener = {
    .string = "listener",
    .meaning = "n. 听者，认真倾听的人；收听广播节目的人"};

String_and_meaning String_and_meaning_liter = {
    .string = "liter",
    .meaning = "n. [计量] 公升（容量单位）n. (Liter)人名；(英)利特"};

String_and_meaning String_and_meaning_literacy = {
    .string = "literacy",
    .meaning = "n. 读写能力；精通文学"};

String_and_meaning String_and_meaning_literal = {
    .string = "literal",
    .meaning = "adj. 文字的；逐字的；无夸张的"};

String_and_meaning String_and_meaning_literary = {
    .string = "literary",
    .meaning = "adj. 文学的；书面的；精通文学的"};

String_and_meaning String_and_meaning_literature = {
    .string = "literature",
    .meaning = "n. 文学；文献；文艺；著作"};

String_and_meaning String_and_meaning_litter = {
    .string = "litter",
    .meaning = "n. 垃圾；轿，担架；一窝（动物的幼崽）；凌乱vt. 乱丢；给…垫褥草；把…弄得乱七八糟vi. 产仔；乱扔废弃物n. (Litter)人名；(匈、德)利特"};

String_and_meaning String_and_meaning_little = {
    .string = "little",
    .meaning = "adj. 小的；很少的；短暂的；小巧可爱的adv. 完全不n. 少许；没有多少；短时间n. (Little)人名；(英)利特尔"};

String_and_meaning String_and_meaning_live = {
    .string = "live",
    .meaning = "adj.活的,生动的,精力充沛的,实况转播的,点燃的vi.活着,生活,居住,流在人们记忆中vt.过着,度过,经历adv.以实况地"};

String_and_meaning String_and_meaning_lively = {
    .string = "lively",
    .meaning = "adj. 活泼的；生动的；真实的；生气勃勃的n. (Lively)人名；(英)莱夫利"};

String_and_meaning String_and_meaning_liver = {
    .string = "liver",
    .meaning = "n. 肝脏；生活者，居民"};

String_and_meaning String_and_meaning_living = {
    .string = "living",
    .meaning = "n.生活,生计,生存空间,居住面积adj.活的,起作用的,逼真的,现存的"};

String_and_meaning String_and_meaning_load = {
    .string = "load",
    .meaning = "n. 负载，负荷；工作量；装载量vi. [力] 加载；装载；装货vt. 使担负；装填"};

String_and_meaning String_and_meaning_loaf = {
    .string = "loaf",
    .meaning = "n. 条，一条面包；块；游荡vt. 游荡；游手好闲；虚度光阴vi. 游荡；游手好闲；虚度光阴"};

String_and_meaning String_and_meaning_loan = {
    .string = "loan",
    .meaning = "n. 贷款；借款vi. 借出vt. 借；借给"};

String_and_meaning String_and_meaning_lobby = {
    .string = "lobby",
    .meaning = "n. 大厅；休息室；会客室；游说议员的团体vt. 对……进行游说vi. 游说议员"};

String_and_meaning String_and_meaning_local = {
    .string = "local",
    .meaning = "adj. 当地的，地方性的；局部的；局域的；本地通话的；（火车）慢车的n. 当地人；附近的小酒馆；慢车；当地的分支机构；炒股散户；本地新闻；局部"};

String_and_meaning String_and_meaning_locality = {
    .string = "locality",
    .meaning = "n. 所在；位置；地点"};

String_and_meaning String_and_meaning_locate = {
    .string = "locate",
    .meaning = "vt. 位于；查找…的地点vi. 定位；定居"};

String_and_meaning String_and_meaning_location = {
    .string = "location",
    .meaning = "n. 位置；地点；外景拍摄场地"};

String_and_meaning String_and_meaning_lock = {
    .string = "lock",
    .meaning = "n.锁v.锁,锁上,锁住 /n.锁定/解锁"};

String_and_meaning String_and_meaning_locomotive = {
    .string = "locomotive",
    .meaning = "n. 机车；火车头；（学校啦啦队）节奏由慢到快的欢呼adj. 产生动力的，与动力有关的；运动的，移动的"};

String_and_meaning String_and_meaning_lodge = {
    .string = "lodge",
    .meaning = "n.门房,(猎人住的)山林小屋,(游览区的)旅馆,(地方社团的)集会处vi.临时住宿,寄宿(某人家)vt.容纳,寄存,把...射入,存放,(向有关当局)提出(声明)"};

String_and_meaning String_and_meaning_loft = {
    .string = "loft",
    .meaning = "n. 阁楼；顶楼；鸽房vt. 把…储放在阁楼内vi. 将球高击n. (Loft)人名；(丹)洛夫特"};

String_and_meaning String_and_meaning_lofty = {
    .string = "lofty",
    .meaning = "adj. 高的；崇高的；高级的；高傲的n. (Lofty)人名；(英)洛夫蒂"};

String_and_meaning String_and_meaning_log = {
    .string = "log",
    .meaning = "n.航行日志,原木,园形木材,园木v.把...记入航行日志,伐木,把...锯成段"};

String_and_meaning String_and_meaning_logic = {
    .string = "logic",
    .meaning = "n. 逻辑；逻辑学；逻辑性"};

String_and_meaning String_and_meaning_logical = {
    .string = "logical",
    .meaning = "adj. 合逻辑的，合理的；逻辑学的"};

String_and_meaning String_and_meaning_lonely = {
    .string = "lonely",
    .meaning = "adj. 寂寞的；偏僻的n. 孤独者"};

String_and_meaning String_and_meaning_long = {
    .string = "long",
    .meaning = "adj.长的,长期的,做多头的,高的vi.渴望,热望adv.长期地,始终n.长时间,(市场上)做多头的人,[语音]长音节"};

String_and_meaning String_and_meaning_longitude = {
    .string = "longitude",
    .meaning = "n. [地理] 经度；经线"};

String_and_meaning String_and_meaning_look = {
    .string = "look",
    .meaning = "vt. 看；期待；注意；面向；看上去像vi. 看；看起来；注意；面向n. 看；样子；面容n. (Look)人名；(瑞典)洛克；(英)卢克"};

String_and_meaning String_and_meaning_loop = {
    .string = "loop",
    .meaning = "n.环,线(绳)圈,弯曲部分,回路,回线,(铁路)让车道,(飞机)翻圈飞行vt.使成环,以圈结,以环连结vi.打环,翻筋斗n.循环"};

String_and_meaning String_and_meaning_loose = {
    .string = "loose",
    .meaning = "n.解放,放任,放纵adj.宽松的,不精确的,不牢固的,散漫的,自由的vt.释放,放枪,开船vi.变松,开火adv.松散地"};

String_and_meaning String_and_meaning_loosen = {
    .string = "loosen",
    .meaning = "vt. 放松；松开vi. 放松；松开n. (Loosen)人名；(德)洛森"};

String_and_meaning String_and_meaning_lord = {
    .string = "lord",
    .meaning = "n. 主；上帝int. 主，天啊vt. 使成贵族vi. 作威作福，称王称霸n. (Lord)人名；(瑞典)洛德；(法)洛尔"};

String_and_meaning String_and_meaning_lorry = {
    .string = "lorry",
    .meaning = "n. （英）卡车；[车辆] 货车；运料车n. (Lorry)人名；(法、德)洛里"};

String_and_meaning String_and_meaning_lose = {
    .string = "lose",
    .meaning = "vt. 浪费；使沉溺于；使迷路；遗失；错过vi. 失败；受损失n. (Lose)人名；(英)洛斯；(德)洛泽"};

String_and_meaning String_and_meaning_loss = {
    .string = "loss",
    .meaning = "n. 减少；亏损；失败；遗失n. (Loss)人名；(匈)洛什；(法、德、意)洛斯"};

String_and_meaning String_and_meaning_lot = {
    .string = "lot",
    .meaning = "n. 所有；（一）群，（一）批；待售物品；场地；份额；许多；命运；阄adv. 很，非常pron. 大量，许多；所有vt. 分组，把……划分"};

String_and_meaning String_and_meaning_loud = {
    .string = "loud",
    .meaning = "adj. 大声的，高声的；不断的；喧吵的adv. 大声地，高声地，响亮地n. (Loud)人名；(英)劳德"};

String_and_meaning String_and_meaning_loudly = {
    .string = "loudly",
    .meaning = "adv. 大声地，响亮地"};

String_and_meaning String_and_meaning_loudspeaker = {
    .string = "loudspeaker",
    .meaning = "n. 喇叭，扬声器；扩音器"};

String_and_meaning String_and_meaning_lounge = {
    .string = "lounge",
    .meaning = "n. 休息室；闲逛；躺椅；（英）酒吧间vi. 闲逛；懒洋洋地躺卧；闲混vt. 虚度光阴"};

String_and_meaning String_and_meaning_love = {
    .string = "love",
    .meaning = "n.爱,热爱,爱情,爱好,性爱,情人,零vt.爱,热爱,爱好,爱慕vi.爱"};

String_and_meaning String_and_meaning_lovely = {
    .string = "lovely",
    .meaning = "adj. 可爱的；令人愉快的；爱恋的；秀丽的，优美的n. 美女；可爱的东西"};

String_and_meaning String_and_meaning_lover = {
    .string = "lover",
    .meaning = "n. 爱人，恋人；爱好者；情人n. (Lover)（英）洛弗（人名）"};

String_and_meaning String_and_meaning_low = {
    .string = "low",
    .meaning = "adj. 低的，浅的；卑贱的；粗俗的；消沉的adv. 低声地；谦卑地，低下地n. 低；低价；低点；牛叫声vi. 牛叫n. （Low）（英、德）洛（人名）"};

String_and_meaning String_and_meaning_lower = {
    .string = "lower",
    .meaning = "adj.较低的,下级的,下等的,下游的vi.降低,跌落,减弱vt.放下,降下,减弱,贬低"};

String_and_meaning String_and_meaning_loyal = {
    .string = "loyal",
    .meaning = "adj. 忠诚的，忠心的；忠贞的n. 效忠的臣民；忠实信徒n. (Loyal)人名；(英、德、西、匈、法)洛亚尔"};

String_and_meaning String_and_meaning_loyalty = {
    .string = "loyalty",
    .meaning = "n. 忠诚；忠心；忠实；忠于…感情"};

String_and_meaning String_and_meaning_lubricate = {
    .string = "lubricate",
    .meaning = "vi. 润滑；涂油；起润滑剂作用vt. 使…润滑；给…加润滑油"};

String_and_meaning String_and_meaning_luck = {
    .string = "luck",
    .meaning = "n. 运气；幸运；带来好运的东西vi. 靠运气，走运；凑巧碰上n. (Luck)人名；(德、瑞典)卢克；(英)勒克；(法)吕克"};

String_and_meaning String_and_meaning_lucky = {
    .string = "lucky",
    .meaning = "adj. 幸运的；侥幸的"};

String_and_meaning String_and_meaning_luggage = {
    .string = "luggage",
    .meaning = "n. 行李；皮箱"};

String_and_meaning String_and_meaning_lumber = {
    .string = "lumber",
    .meaning = "n.美木材,无用的杂物(如破旧家俱),废物,隆隆声vt.砍伐木材,乱堆vi.伐木,喧闹地向前走,笨重地行动"};

String_and_meaning String_and_meaning_luminous = {
    .string = "luminous",
    .meaning = "adj. 发光的；明亮的；清楚的"};

String_and_meaning String_and_meaning_lump = {
    .string = "lump",
    .meaning = "n. 块，块状；肿块；瘤；很多；笨人vt. 混在一起；使成块状；忍耐；笨重地移动vi. 结块adj. 成团的；总共的adv. 很；非常"};

String_and_meaning String_and_meaning_lunar = {
    .string = "lunar",
    .meaning = "adj. 月亮的，月球的；阴历的；银的；微亮的n. (Lunar)人名；(西)卢纳尔"};

String_and_meaning String_and_meaning_lunch = {
    .string = "lunch",
    .meaning = "n. 午餐vt. 吃午餐；供给午餐vi. 吃午餐；供给午餐"};

String_and_meaning String_and_meaning_lung = {
    .string = "lung",
    .meaning = "n. 肺；呼吸器n. (Lung)人名；(越)珑；(罗、塞、匈、瑞典、德)伦格"};

String_and_meaning String_and_meaning_luxury = {
    .string = "luxury",
    .meaning = "n. 奢侈，奢华；奢侈品；享受adj. 奢侈的"};

String_and_meaning String_and_meaning_machine = {
    .string = "machine",
    .meaning = "n. 机械，机器；机构；机械般工作的人vt. 用机器制造n. （Machine）（意）马基内（人名）"};

String_and_meaning String_and_meaning_mad = {
    .string = "mad",
    .meaning = "adj.疯狂的,愚蠢的,狂欢的,非常激动的,狂热的,着迷的n.狂怒"};

String_and_meaning String_and_meaning_madam = {
    .string = "madam",
    .meaning = "n. 夫人；女士；鸨母"};

String_and_meaning String_and_meaning_magazine = {
    .string = "magazine",
    .meaning = "n. 杂志；弹药库；胶卷盒"};

String_and_meaning String_and_meaning_magic = {
    .string = "magic",
    .meaning = "n.魔法,巫术,戏法adj.魔术的,有魔力的,不可思议的"};

String_and_meaning String_and_meaning_magnet = {
    .string = "magnet",
    .meaning = "n. 磁铁；[电磁] 磁体；磁石n. (Magnet)人名；(塞)马格内特；(西)马涅特；(法)马涅"};

String_and_meaning String_and_meaning_magnetic = {
    .string = "magnetic",
    .meaning = "adj. 地磁的；有磁性的；有吸引力的"};

String_and_meaning String_and_meaning_magnificent = {
    .string = "magnificent",
    .meaning = "adj. 高尚的；壮丽的；华丽的；宏伟的"};

String_and_meaning String_and_meaning_magnify = {
    .string = "magnify",
    .meaning = "vt. 放大；赞美；夸大vi. 放大；有放大能力"};

String_and_meaning String_and_meaning_magnitude = {
    .string = "magnitude",
    .meaning = "n. 大小；量级；[地震] 震级；重要；光度"};

String_and_meaning String_and_meaning_maid = {
    .string = "maid",
    .meaning = "n. 女仆；少女vt. 侍候；做新娘的女傧相vi. 当女仆"};

String_and_meaning String_and_meaning_mail = {
    .string = "mail",
    .meaning = "n. 邮件；邮政，邮递；盔甲vt. 邮寄；给…穿盔甲vi. 邮寄；寄出n. (Mail)人名；(法)马伊"};

String_and_meaning String_and_meaning_main = {
    .string = "main",
    .meaning = "n.主要部分,体力,力量,大陆,要点,干线adj.主要的,重要的,全力的n.[计] 主群组"};

String_and_meaning String_and_meaning_mainland = {
    .string = "mainland",
    .meaning = "n. 大陆；本土adj. 大陆的；本土的n. (Mainland)人名；(英)梅因兰"};

String_and_meaning String_and_meaning_mainly = {
    .string = "mainly",
    .meaning = "adv. 主要地，大体上"};

String_and_meaning String_and_meaning_maintain = {
    .string = "maintain",
    .meaning = "vt. 维持；继续；维修；主张；供养"};

String_and_meaning String_and_meaning_maintenance = {
    .string = "maintenance",
    .meaning = "n. 维护，维修；保持；生活费用"};

String_and_meaning String_and_meaning_majesty = {
    .string = "majesty",
    .meaning = "n. 威严；最高权威，王权；雄伟；权威"};

String_and_meaning String_and_meaning_major = {
    .string = "major",
    .meaning = "n.美[教]主修课,[律]成年人,[乐]大调adj.主修的,成年的,大调的vi.主修"};

String_and_meaning String_and_meaning_majority = {
    .string = "majority",
    .meaning = "n. 多数；成年"};

String_and_meaning String_and_meaning_make = {
    .string = "make",
    .meaning = "vt.制造,安排,使成为,认为,产生,获得,进行,构成vi.开始,前进,增大,被制造,被处理n.制造,构造,性情"};

String_and_meaning String_and_meaning_male = {
    .string = "male",
    .meaning = "adj. 男性的；雄性的n. 男人；雄性动物n. （Male）（柬）马尔；（意、西、塞）马莱；（英）梅尔（人名）"};

String_and_meaning String_and_meaning_mall = {
    .string = "mall",
    .meaning = "n. 商场，购物广场；步行商业区；步行道；铁圈球球场n. (Mall) （美、瑞）迈勒（人名）"};

String_and_meaning String_and_meaning_man = {
    .string = "man",
    .meaning = "n.男人,人类,人,丈夫,雇工;vt.为...配备人手,操纵,在...就位,使振奋;Metropolitan Area Network 城域网"};

String_and_meaning String_and_meaning_manage = {
    .string = "manage",
    .meaning = "vt. 管理；经营；控制；设法vi. 处理；应付过去"};

String_and_meaning String_and_meaning_management = {
    .string = "management",
    .meaning = "n. 管理；管理人员；管理部门；操纵；经营手段"};

String_and_meaning String_and_meaning_manager = {
    .string = "manager",
    .meaning = "n. 经理；管理人员"};

String_and_meaning String_and_meaning_manifest = {
    .string = "manifest",
    .meaning = "n.载货单,旅客名单adj.显然的,明白的vi.出现vt.表明,证明"};

String_and_meaning String_and_meaning_manipulate = {
    .string = "manipulate",
    .meaning = "vt. 操纵；操作；巧妙地处理；篡改"};

String_and_meaning String_and_meaning_mankind = {
    .string = "mankind",
    .meaning = "n. 人类；男性"};

String_and_meaning String_and_meaning_manly = {
    .string = "manly",
    .meaning = "adj. 男子气概的；强壮的；适于男人的adv. 雄赳赳地n. （Manly）（英）曼利（人名）"};

String_and_meaning String_and_meaning_manner = {
    .string = "manner",
    .meaning = "n. 方式；习惯；种类；规矩；风俗n. (Manner)人名；(德、芬、瑞典)曼纳"};

String_and_meaning String_and_meaning_manoeuvre = {
    .string = "manoeuvre",
    .meaning = "n.[亦作maneuvre] 策略,调动v.用策略,调动,演习,(敏捷地)操纵"};

String_and_meaning String_and_meaning_manual = {
    .string = "manual",
    .meaning = "adj. 体力的；手控的；用手的n. 说明书；小册子；（牧师主持圣礼时用）礼仪书；用手操作的器具"};

String_and_meaning String_and_meaning_manufacture = {
    .string = "manufacture",
    .meaning = "n. 制造；产品；制造业vt. 制造；加工；捏造vi. 制造"};

String_and_meaning String_and_meaning_manufacturer = {
    .string = "manufacturer",
    .meaning = "n. 制造商；[经] 厂商"};

String_and_meaning String_and_meaning_manuscript = {
    .string = "manuscript",
    .meaning = "n. [图情] 手稿；原稿adj. 手写的"};

String_and_meaning String_and_meaning_many = {
    .string = "many",
    .meaning = "det. 许多pron. 许多；许多人adj. 许多的n. 大多数人n. (Many) （美、法、加、印）马尼（人名）"};

String_and_meaning String_and_meaning_map = {
    .string = "map",
    .meaning = "n.地图,图v.绘制地图 [计]由LINK工具生成的一种文本文件,其中包含有被连接的程序的某些信息,例如程序中的组信息和公共符号信息等"};

String_and_meaning String_and_meaning_marble = {
    .string = "marble",
    .meaning = "n. 大理石；大理石制品；弹珠adj. 大理石的；冷酷无情的n. (Marble)人名；(英)马布尔"};

String_and_meaning String_and_meaning_march = {
    .string = "march",
    .meaning = "vi. （坚定地向某地）前进；行军，进军；游行示威；进展，进行vt. 使前进；使行军n. 行进，前进；行军；游行示威；进行曲"};

String_and_meaning String_and_meaning_margin = {
    .string = "margin",
    .meaning = "n. 边缘；利润，余裕；页边的空白vt. 加边于；加旁注于n. (Margin)人名；(俄、意)马尔金"};

String_and_meaning String_and_meaning_marginal = {
    .string = "marginal",
    .meaning = "adj. 微不足道的，不重要的；边缘的；临界的；末端的n. 边缘席位"};

String_and_meaning String_and_meaning_marine = {
    .string = "marine",
    .meaning = "adj. 船舶的；海生的；海产的；航海的，海运的n. 海运业；舰队；水兵；（海军）士兵或军官n. (Marine)人名；(西)马里内；(英)马林"};

String_and_meaning String_and_meaning_mark = {
    .string = "mark",
    .meaning = "n. 标志；符号；痕迹；分数vi. 作记号vt. 标志；做标记于；打分数n. （Mark）马克（人名）"};

String_and_meaning String_and_meaning_market = {
    .string = "market",
    .meaning = "n. 市场；行情；股票市场；市面；集市；销路；商店vt. 在市场上出售vi. 做买卖n. (Market)人名；(塞)马尔凯特"};

String_and_meaning String_and_meaning_marriage = {
    .string = "marriage",
    .meaning = "n. 结婚；婚姻生活；密切结合，合并n. (Marriage)人名；(英)马里奇"};

String_and_meaning String_and_meaning_married = {
    .string = "married",
    .meaning = "adj. 已婚的，有配偶的；婚姻的，夫妇的；密切结合的n. 已婚者v. 结婚，与…结婚（marry的过去式）"};

String_and_meaning String_and_meaning_marry = {
    .string = "marry",
    .meaning = "vt. 嫁；娶；与……结婚vi. 结婚n. (Marry)人名；(阿拉伯)马雷；(法)马里"};

String_and_meaning String_and_meaning_marsh = {
    .string = "marsh",
    .meaning = "n. 沼泽；湿地adj. 沼泽的；生长在沼泽地的n. (Marsh)人名；(俄)马尔什；(英、瑞典)马什"};

String_and_meaning String_and_meaning_marshal = {
    .string = "marshal",
    .meaning = "n. 元帅；司仪vt. 整理；引领；编列vi. 排列n. (Marshal)人名；(英)马歇尔"};

String_and_meaning String_and_meaning_marvelous = {
    .string = "marvelous",
    .meaning = "adj. 了不起的；非凡的；令人惊异的；不平常的"};

String_and_meaning String_and_meaning_Marxism = {
    .string = "Marxism",
    .meaning = "马克思主义"};

String_and_meaning String_and_meaning_Marxist = {
    .string = "Marxist",
    .meaning = "n. 马克思主义者adj. 马克思主义的"};

String_and_meaning String_and_meaning_masculine = {
    .string = "masculine",
    .meaning = "adj. 男性的；阳性的；男子气概的n. 男性；阳性，阳性词"};

String_and_meaning String_and_meaning_mask = {
    .string = "mask",
    .meaning = "n. 面具；口罩；掩饰；[计] 掩膜vi. 掩饰；戴面具；化装vt. 掩饰；戴面具；使模糊"};

String_and_meaning String_and_meaning_mass = {
    .string = "mass",
    .meaning = "n. 块，团；群众，民众；大量，众多；质量adj. 群众的，民众的；大规模的，集中的vi. 聚集起来，聚集vt. 使集合"};

String_and_meaning String_and_meaning_massive = {
    .string = "massive",
    .meaning = "adj. 大量的；巨大的，厚重的；魁伟的"};

String_and_meaning String_and_meaning_master = {
    .string = "master",
    .meaning = "n.主人,雇主,(男)教师,熟练技工,师傅,大师,硕士,称呼少爷adj.主人的,熟练的,高明的,主要的vt.征服,控制,精通"};

String_and_meaning String_and_meaning_masterpiece = {
    .string = "masterpiece",
    .meaning = "n. 杰作；绝无仅有的人"};

String_and_meaning String_and_meaning_mat = {
    .string = "mat",
    .meaning = "n.席子,垫子v.铺席子"};

String_and_meaning String_and_meaning_match = {
    .string = "match",
    .meaning = "n.火柴,比赛,竞赛,匹配,(足球,捧球,蓝球)比赛v.相配,相称,比赛,相比,匹配"};

String_and_meaning String_and_meaning_mate = {
    .string = "mate",
    .meaning = "n.配偶,对手,助手vt.使配对,使一致,结伴vi.成配偶,紧密配合"};

String_and_meaning String_and_meaning_material = {
    .string = "material",
    .meaning = "n.材料,原料,物资,素材,布料adj.物质的,肉体的,具体的,重要的,实质性的"};

String_and_meaning String_and_meaning_materialism = {
    .string = "materialism",
    .meaning = "n. 唯物主义；唯物论；物质主义"};

String_and_meaning String_and_meaning_mathematical = {
    .string = "mathematical",
    .meaning = "adj. 数学的，数学上的；精确的"};

String_and_meaning String_and_meaning_mathematics = {
    .string = "mathematics",
    .meaning = "n. 数学；数学运算"};

String_and_meaning String_and_meaning_maths = {
    .string = "maths",
    .meaning = "n. 数学（等于mathematics）n. (Maths)人名；(瑞典)马茨"};

String_and_meaning String_and_meaning_matter = {
    .string = "matter",
    .meaning = "n. 物质；事件vi. 有关系；要紧n. (Matter)人名；(英、法)马特；(西)马特尔"};

String_and_meaning String_and_meaning_mature = {
    .string = "mature",
    .meaning = "adj. 成熟的；充分考虑的；到期的；成年人的vi. 成熟；到期vt. 使…成熟；使…长成；慎重作出"};

String_and_meaning String_and_meaning_maximum = {
    .string = "maximum",
    .meaning = "n. [数] 极大，最大限度；最大量adj. 最高的；最多的；最大极限的"};

String_and_meaning String_and_meaning_may = {
    .string = "may",
    .meaning = "aux. 可以，能够；可能，也许；祝，愿；会，能"};

String_and_meaning String_and_meaning_maybe = {
    .string = "maybe",
    .meaning = "adv. 也许；可能；大概n. 可能性；不确定性"};

String_and_meaning String_and_meaning_mayor = {
    .string = "mayor",
    .meaning = "n. 市长n. (Mayor)人名；(英)梅厄；(法、西、俄)马约尔"};

String_and_meaning String_and_meaning_me = {
    .string = "me",
    .meaning = "pron. 我（宾格）n. 自我；极端自私的人；自我的一部分n. (Me)人名；(日)马(姓)；(朝)袂；(阿拉伯、柬、老)梅"};

String_and_meaning String_and_meaning_meadow = {
    .string = "meadow",
    .meaning = "n. 草地；牧场n. (Meadow)人名；(英)梅多"};

String_and_meaning String_and_meaning_meal = {
    .string = "meal",
    .meaning = "n. 一餐，一顿饭；膳食vi. 进餐"};

String_and_meaning String_and_meaning_mean = {
    .string = "mean",
    .meaning = "adj.低劣的,卑鄙的,普通的,吝啬的,简陋的,平均的,惭愧的,不舒服的vt.意谓,想要,预定vi.用意,有意义n.平均数,中间,中庸"};

String_and_meaning String_and_meaning_meaning = {
    .string = "meaning",
    .meaning = "n. 意义；含义；意图adj. 意味深长的v. 意味；意思是（mean的ing形式）"};

String_and_meaning String_and_meaning_means = {
    .string = "means",
    .meaning = "n. 手段；方法；财产vt. 用意；意味着；预示；意义重大（mean 的第三人称单数）vi. 意欲（mean 的第三人称单数）"};

String_and_meaning String_and_meaning_meantime = {
    .string = "meantime",
    .meaning = "n. 其时，其间adv. 同时；其间"};

String_and_meaning String_and_meaning_meanwhile = {
    .string = "meanwhile",
    .meaning = "adv. 同时，其间n. 其间，其时"};

String_and_meaning String_and_meaning_measurable = {
    .string = "measurable",
    .meaning = "adj. 可测量的；重要的；重大的"};

String_and_meaning String_and_meaning_measure = {
    .string = "measure",
    .meaning = "n. 测量；措施；程度；尺寸vt. 测量；估量；权衡vi. 测量；估量"};

String_and_meaning String_and_meaning_measurement = {
    .string = "measurement",
    .meaning = "n. 测量；[计量] 度量；尺寸；量度制"};

String_and_meaning String_and_meaning_meat = {
    .string = "meat",
    .meaning = "n. 肉，肉类（食用）"};

String_and_meaning String_and_meaning_mechanic = {
    .string = "mechanic",
    .meaning = "n. 技工，机修工adj. 手工的n. (Mechanic)人名；(英)梅凯尼克"};

String_and_meaning String_and_meaning_mechanical = {
    .string = "mechanical",
    .meaning = "adj. 机械的；力学的；呆板的；无意识的；手工操作的"};

String_and_meaning String_and_meaning_mechanically = {
    .string = "mechanically",
    .meaning = "adv. 机械地；呆板地；物理上地"};

String_and_meaning String_and_meaning_mechanics = {
    .string = "mechanics",
    .meaning = "n. 力学（用作单数）；结构；技术；机械学（用作单数）"};

String_and_meaning String_and_meaning_mechanism = {
    .string = "mechanism",
    .meaning = "n. 机制；原理，途径；进程；机械装置；技巧"};

String_and_meaning String_and_meaning_medal = {
    .string = "medal",
    .meaning = "n. 勋章，奖章；纪念章n. (Medal)人名；(西、捷)梅达尔"};

String_and_meaning String_and_meaning_media = {
    .string = "media",
    .meaning = "n. 媒体；媒质（medium的复数）；血管中层；浊塞音；中脉"};

String_and_meaning String_and_meaning_mediate = {
    .string = "mediate",
    .meaning = "vi. 调解；斡旋；居中vt. 调停；传达adj. 间接的；居间的"};

String_and_meaning String_and_meaning_medical = {
    .string = "medical",
    .meaning = "adj. 医学的；药的；内科的n. 医生；体格检查"};

String_and_meaning String_and_meaning_medicine = {
    .string = "medicine",
    .meaning = "n. 药；医学；内科；巫术vt. 用药物治疗；给…用药"};

String_and_meaning String_and_meaning_medieval = {
    .string = "medieval",
    .meaning = "adj. 中世纪的；原始的；仿中世纪的；老式的"};

String_and_meaning String_and_meaning_Mediterranean = {
    .string = "Mediterranean",
    .meaning = "n. 地中海adj. 地中海的"};

String_and_meaning String_and_meaning_medium = {
    .string = "medium",
    .meaning = "adj. 中间的，中等的；半生熟的；（投球）中速的n. 方法；媒体；媒介；中间物；溶剂；灵媒；中庸"};

String_and_meaning String_and_meaning_meet = {
    .string = "meet",
    .meaning = "vt. 满足；遇见；对付vi. 相遇；接触n. 集会adj. 合适的；适宜的n. (Meet)人名；(英)米特"};

String_and_meaning String_and_meaning_meeting = {
    .string = "meeting",
    .meaning = "n. 会议；会见；集会；汇合点v. 会面；会合（meet 的现在分词）"};

String_and_meaning String_and_meaning_melody = {
    .string = "melody",
    .meaning = "n. 旋律；歌曲；美妙的音乐n. (Melody)人名；(英)梅洛迪"};

String_and_meaning String_and_meaning_melon = {
    .string = "melon",
    .meaning = "n. 瓜；甜瓜；大肚子；圆鼓鼓像瓜似的东西n. (Melon)人名；(意、西、葡)梅隆"};

String_and_meaning String_and_meaning_melt = {
    .string = "melt",
    .meaning = "vi. 熔化，溶解；渐混vt. 使融化；使熔化；使软化；使感动n. 熔化；熔化物"};

String_and_meaning String_and_meaning_member = {
    .string = "member",
    .meaning = "n. 成员；会员；议员"};

String_and_meaning String_and_meaning_membership = {
    .string = "membership",
    .meaning = "n. 资格；成员资格；会员身份"};

String_and_meaning String_and_meaning_memorial = {
    .string = "memorial",
    .meaning = "n. 纪念碑，纪念馆；纪念仪式；纪念物adj. 记忆的；纪念的，追悼的"};

String_and_meaning String_and_meaning_memory = {
    .string = "memory",
    .meaning = "n. 记忆，记忆力；内存，[计] 存储器；回忆n. (Memory)人名；(英)梅默里"};

String_and_meaning String_and_meaning_menace = {
    .string = "menace",
    .meaning = "n. 威胁；恐吓vi. 恐吓；进行威胁vt. 威胁；恐吓"};

String_and_meaning String_and_meaning_mend = {
    .string = "mend",
    .meaning = "vt. 修理，修补；改善；修改vi. 改善，好转n. 好转，改进；修补处"};

String_and_meaning String_and_meaning_mental = {
    .string = "mental",
    .meaning = "adj. 精神的；脑力的；疯的n. 精神病患者"};

String_and_meaning String_and_meaning_mention = {
    .string = "mention",
    .meaning = "vt. 提到，谈到；提及，论及；说起n. 提及，说起n. (Mention)人名；(法)芒雄"};

String_and_meaning String_and_meaning_menu = {
    .string = "menu",
    .meaning = "n. 菜单饭菜"};

String_and_meaning String_and_meaning_merchant = {
    .string = "merchant",
    .meaning = "n. 商人，批发商；店主adj. 商业的，商人的n. (Merchant)人名；(英)麦钱特"};

String_and_meaning String_and_meaning_mercury = {
    .string = "mercury",
    .meaning = "n. [化]汞，水银[天]水星温度表精神，元气"};

String_and_meaning String_and_meaning_mercy = {
    .string = "mercy",
    .meaning = "n. 仁慈，宽容；怜悯；幸运；善行n. (Mercy)人名；(英)默西，默茜(女名)；(法)梅西"};

String_and_meaning String_and_meaning_mere = {
    .string = "mere",
    .meaning = "adj. 仅仅的；只不过的n. 小湖；池塘n. (Mere)人名；(日)目连(姓)；(西)梅雷"};

String_and_meaning String_and_meaning_merely = {
    .string = "merely",
    .meaning = "adv. 仅仅，只不过；只是"};

String_and_meaning String_and_meaning_merge = {
    .string = "merge",
    .meaning = "vt. 合并；使合并；吞没vi. 合并；融合n. (Merge)人名；(意)梅尔杰"};

String_and_meaning String_and_meaning_meridiem = {
    .string = "meridiem",
    .meaning = "n. 正午"};

String_and_meaning String_and_meaning_merit = {
    .string = "merit",
    .meaning = "n. 优点，价值；功绩；功过vt. 值得vi. 应受报答"};

String_and_meaning String_and_meaning_merry = {
    .string = "merry",
    .meaning = "adj. 愉快的；微醉的；嬉戏作乐的n. 甜樱桃n. (Merry)人名；(英、法、西)梅里"};

String_and_meaning String_and_meaning_mess = {
    .string = "mess",
    .meaning = "n. 混乱；食堂，伙食团；困境；脏乱的东西vt. 弄乱，弄脏；毁坏；使就餐vi. 把事情弄糟；制造脏乱；玩弄n. (Mess)人名；(德、罗)梅斯"};

String_and_meaning String_and_meaning_message = {
    .string = "message",
    .meaning = "n. 消息；差使；启示；预言；广告词vi. 报信，报告；[通信] 报文vt. 通知"};

String_and_meaning String_and_meaning_messenger = {
    .string = "messenger",
    .meaning = "n. 报信者，送信者；先驱n. (Messenger)人名；(德)梅森格；(英)梅辛杰"};

String_and_meaning String_and_meaning_metal = {
    .string = "metal",
    .meaning = "n. 金属；合金vt. 以金属覆盖adj. 金属制的n. （Metal）（捷、瑞典）梅塔尔（人名）"};

String_and_meaning String_and_meaning_metallic = {
    .string = "metallic",
    .meaning = "adj. 金属的，含金属的"};

String_and_meaning String_and_meaning_meter = {
    .string = "meter",
    .meaning = "n. 米；仪表；[计量] 公尺；韵律vt. 用仪表测量vi. 用表计量n. (Meter)人名；(英)米特；(塞)梅特"};

String_and_meaning String_and_meaning_method = {
    .string = "method",
    .meaning = "n. 方法；条理；类函数"};

String_and_meaning String_and_meaning_metre = {
    .string = "metre",
    .meaning = "n. 米；公尺；韵律n. (Metre)人名；(英)米特"};

String_and_meaning String_and_meaning_metric = {
    .string = "metric",
    .meaning = "adj. 公制的；米制的；公尺的n. 度量标准"};

String_and_meaning String_and_meaning_metropolitan = {
    .string = "metropolitan",
    .meaning = "adj. 大都市的；大主教辖区的；宗主国的n. 大城市人；大主教；宗主国的公民"};

String_and_meaning String_and_meaning_microcomputer = {
    .string = "microcomputer",
    .meaning = "n. 微电脑；[计] 微型计算机"};

String_and_meaning String_and_meaning_microphone = {
    .string = "microphone",
    .meaning = "n. 扩音器，麦克风"};

String_and_meaning String_and_meaning_microscope = {
    .string = "microscope",
    .meaning = "n. 显微镜"};

String_and_meaning String_and_meaning_midday = {
    .string = "midday",
    .meaning = "n. 中午；正午adj. 正午的"};

String_and_meaning String_and_meaning_middle = {
    .string = "middle",
    .meaning = "adj. 中间的，中部的；中级的，中等的n. 中间，中央；腰部"};

String_and_meaning String_and_meaning_midnight = {
    .string = "midnight",
    .meaning = "n. 午夜，半夜12点钟adj. 半夜的；漆黑的"};

String_and_meaning String_and_meaning_midst = {
    .string = "midst",
    .meaning = "n. 当中，中间prep. 在…中间（等于amidst）"};

String_and_meaning String_and_meaning_might = {
    .string = "might",
    .meaning = "aux. 可能，也许，可以（may 的过去式）n. 强大力量，威力，势力n. (Might) （美）迈特（人名）"};

String_and_meaning String_and_meaning_migrate = {
    .string = "migrate",
    .meaning = "vi. 移动；随季节而移居；移往vt. 使移居；使移植"};

String_and_meaning String_and_meaning_mild = {
    .string = "mild",
    .meaning = "adj. 温和的；轻微的；淡味的；文雅的；不含有害物质的n. （英国的一种）淡味麦芽啤酒n. （Mild）（瑞典、德、捷、芬）米尔德（人名）"};

String_and_meaning String_and_meaning_mile = {
    .string = "mile",
    .meaning = "n. 英里；一英里赛跑；较大的距离n. (Mile)人名；(塞、匈、法)米莱"};

String_and_meaning String_and_meaning_militant = {
    .string = "militant",
    .meaning = "adj. 好战的n. 富有战斗性的人；好斗者；激进分子"};

String_and_meaning String_and_meaning_military = {
    .string = "military",
    .meaning = "adj. 军事的；军人的；适于战争的n. 军队；军人"};

String_and_meaning String_and_meaning_milk = {
    .string = "milk",
    .meaning = "n. 牛奶；乳状物vt. 榨取；挤…的奶vi. 挤奶n. (Milk)人名；(英)米尔克"};

String_and_meaning String_and_meaning_mill = {
    .string = "mill",
    .meaning = "n.压榨机,磨坊,磨粉机,工厂,制造厂vt.碾磨,磨细,搅拌,使乱转,打vi.乱转,被碾磨"};

String_and_meaning String_and_meaning_millimetre = {
    .string = "millimetre",
    .meaning = "n. 毫米；千分之一米"};

String_and_meaning String_and_meaning_million = {
    .string = "million",
    .meaning = "n. 百万；无数adj. 百万的；无数的num. 百万n. (Million) （美、法）米利翁（人名）"};

String_and_meaning String_and_meaning_mind = {
    .string = "mind",
    .meaning = "n. 理智，精神；意见；智力；记忆力vt. 介意；专心于；照料vi. 介意；注意"};

String_and_meaning String_and_meaning_mine = {
    .string = "mine",
    .meaning = "n. 矿，矿藏；矿山，矿井；地雷，水雷vt. 开采，采掘；在…布雷vi. 开矿，采矿；埋设地雷pron. 我的n. (Mine)人名；(德、塞、土、毛里塔)米内"};

String_and_meaning String_and_meaning_miner = {
    .string = "miner",
    .meaning = "n. 矿工；开矿机n. (Miner)人名；(英)迈纳；(西)米内尔"};

String_and_meaning String_and_meaning_mineral = {
    .string = "mineral",
    .meaning = "n. 矿物；（英）矿泉水；无机物；苏打水（常用复数表示）adj. 矿物的；矿质的"};

String_and_meaning String_and_meaning_mingle = {
    .string = "mingle",
    .meaning = "vi. 混合；交往vt. 使混合；使相混n. (Mingle)人名；(加纳、英)明格尔"};

String_and_meaning String_and_meaning_miniature = {
    .string = "miniature",
    .meaning = "adj. 微型的，小规模的n. 缩图；微型画；微型图画绘画术vt. 是…的缩影"};

String_and_meaning String_and_meaning_minimal = {
    .string = "minimal",
    .meaning = "adj. 最低的；最小限度的"};

String_and_meaning String_and_meaning_minimize = {
    .string = "minimize",
    .meaning = "vt. 使减到最少；小看，极度轻视vi. 最小化"};

String_and_meaning String_and_meaning_minimum = {
    .string = "minimum",
    .meaning = "n. 最小值；最低限度；最小化；最小量adj. 最小的；最低的"};

String_and_meaning String_and_meaning_minister = {
    .string = "minister",
    .meaning = "n. 部长；大臣；牧师vi. 执行牧师职务；辅助或伺候某人"};

String_and_meaning String_and_meaning_ministry = {
    .string = "ministry",
    .meaning = "n. （政府的）部门；宗教团体的领袖；（尤其是新教）牧师"};

String_and_meaning String_and_meaning_minor = {
    .string = "minor",
    .meaning = "adj. 未成年的；次要的；较小的；小调的；二流的n. 未成年人；小调；辅修科目vi. 辅修n. (Minor)人名；(英)迈纳；(德、法、波、俄)米诺尔"};

String_and_meaning String_and_meaning_minority = {
    .string = "minority",
    .meaning = "n. 少数民族；少数派；未成年"};

String_and_meaning String_and_meaning_minus = {
    .string = "minus",
    .meaning = "adj.负的,减的 prep.减去n.负数"};

String_and_meaning String_and_meaning_minute = {
    .string = "minute",
    .meaning = "n. 分，分钟；片刻，一会儿；备忘录，笔记；会议记录vt. 将……记录下来adj. 微小的，详细的"};

String_and_meaning String_and_meaning_miracle = {
    .string = "miracle",
    .meaning = "n. 奇迹，奇迹般的人或物；惊人的事例n. (Miracle)人名；(英)米勒克尔；(意、西)米拉克莱"};

String_and_meaning String_and_meaning_mirror = {
    .string = "mirror",
    .meaning = "n. 镜子；真实的写照；榜样vt. 反射；反映"};

String_and_meaning String_and_meaning_miserable = {
    .string = "miserable",
    .meaning = "adj. 悲惨的；痛苦的；卑鄙的"};

String_and_meaning String_and_meaning_misery = {
    .string = "misery",
    .meaning = "n. 痛苦，悲惨；不幸；苦恼；穷困n. (Misery)人名；(法)米斯里"};

String_and_meaning String_and_meaning_misfortune = {
    .string = "misfortune",
    .meaning = "n. 不幸；灾祸，灾难"};

String_and_meaning String_and_meaning_mislead = {
    .string = "mislead",
    .meaning = "vt. 误导；带错"};

String_and_meaning String_and_meaning_miss = {
    .string = "miss",
    .meaning = "n.过错,避免,失败,小姐,姑娘vt.未得到,未达到,未听到,思念,未觉察,错过,遗漏,逃脱vi.失败,击不中"};

String_and_meaning String_and_meaning_missile = {
    .string = "missile",
    .meaning = "n. 导弹；投射物adj. 导弹的；可投掷的；用以发射导弹的"};

String_and_meaning String_and_meaning_missing = {
    .string = "missing",
    .meaning = "adj. 失踪的；缺少的v. 错过（miss的ing形式）；想念；漏掉n. (Missing)人名；(德)米辛"};

String_and_meaning String_and_meaning_mission = {
    .string = "mission",
    .meaning = "n. 使命，任务；代表团；布道vt. 派遣；向……传教"};

String_and_meaning String_and_meaning_missionary = {
    .string = "missionary",
    .meaning = "n. 传教士adj. 传教的；传教士的；传教士般的"};

String_and_meaning String_and_meaning_mist = {
    .string = "mist",
    .meaning = "n. 薄雾；视线模糊不清；模糊不清之物vi. 下雾；变模糊vt. 使模糊；使蒙上薄雾"};

String_and_meaning String_and_meaning_mistake = {
    .string = "mistake",
    .meaning = "n. 错误；误会；过失vt. 弄错；误解vi. 弄错；误解"};

String_and_meaning String_and_meaning_Mister = {
    .string = "Mister",
    .meaning = "n. 先生（用于姓名或职称前，常缩写为Mr.）"};

String_and_meaning String_and_meaning_mistress = {
    .string = "mistress",
    .meaning = "n. 情妇；女主人；主妇；女教师；女能人"};

String_and_meaning String_and_meaning_misunderstand = {
    .string = "misunderstand",
    .meaning = "vt. 误解；误会"};

String_and_meaning String_and_meaning_mix = {
    .string = "mix",
    .meaning = "v.使混和,混淆,混合n.混合"};

String_and_meaning String_and_meaning_mixture = {
    .string = "mixture",
    .meaning = "n. 混合；混合物；混合剂"};

String_and_meaning String_and_meaning_moan = {
    .string = "moan",
    .meaning = "vi. 抱怨，悲叹；呻吟n. 呻吟声；悲叹vt. 抱怨；呻吟着说n. (Moan)人名；(法)莫昂"};

String_and_meaning String_and_meaning_mobile = {
    .string = "mobile",
    .meaning = "adj. 可移动的；机动的；易变的；非固定的n. 移动电话"};

String_and_meaning String_and_meaning_mobilize = {
    .string = "mobilize",
    .meaning = "vt. 动员，调动；集合，组织；使…流通；使…松动vi. 组织；动员起来"};

String_and_meaning String_and_meaning_mock = {
    .string = "mock",
    .meaning = "v.嘲笑,骗,挫败,嘲弄adj.假的n.嘲弄,模仿,仿制品"};

String_and_meaning String_and_meaning_mode = {
    .string = "mode",
    .meaning = "n. 模式；方式；风格；时尚n. (Mode)人名；(德、英、法、乍、瑞典)莫德"};

String_and_meaning String_and_meaning_model = {
    .string = "model",
    .meaning = "n. 模型；典型；模范；模特儿；样式vt. 模拟；塑造；模仿vi. 做模型；做模特儿adj. 模范的；作模型用的n. (Model)人名；(德、俄、英)莫德尔"};

String_and_meaning String_and_meaning_moderate = {
    .string = "moderate",
    .meaning = "adj. 稳健的，温和的；适度的，中等的；有节制的vi. 变缓和，变弱vt. 节制；减轻"};

String_and_meaning String_and_meaning_modern = {
    .string = "modern",
    .meaning = "adj. 现代的，近代的；时髦的n. 现代人；有思想的人"};

String_and_meaning String_and_meaning_modest = {
    .string = "modest",
    .meaning = "adj. 谦虚的，谦逊的；适度的；端庄的；羞怯的n. (Modest)人名；(罗)莫代斯特；(德)莫德斯特；(俄)莫杰斯特"};

String_and_meaning String_and_meaning_modify = {
    .string = "modify",
    .meaning = "vt. 修改，修饰；更改vi. 修改"};

String_and_meaning String_and_meaning_moist = {
    .string = "moist",
    .meaning = "adj. 潮湿的；湿润的；多雨的；含泪的n. 潮湿"};

String_and_meaning String_and_meaning_moisture = {
    .string = "moisture",
    .meaning = "n. 水分；湿度；潮湿；降雨量"};

String_and_meaning String_and_meaning_molecule = {
    .string = "molecule",
    .meaning = "n. [化学] 分子；微小颗粒，微粒"};

String_and_meaning String_and_meaning_moment = {
    .string = "moment",
    .meaning = "n. 片刻，瞬间，时刻；重要，契机n. (Moment)人名；(英)莫门特"};

String_and_meaning String_and_meaning_momentum = {
    .string = "momentum",
    .meaning = "n. 势头；[物] 动量；动力；冲力"};

String_and_meaning String_and_meaning_Monday = {
    .string = "Monday",
    .meaning = "n. 星期一"};

String_and_meaning String_and_meaning_money = {
    .string = "money",
    .meaning = "n. 钱；货币；财富n. (Money)人名；(英)莫尼；(西、法)莫内"};

String_and_meaning String_and_meaning_monitor = {
    .string = "monitor",
    .meaning = "n. 监视器；监听器；监控器；显示屏；班长vt. 监控"};

String_and_meaning String_and_meaning_monkey = {
    .string = "monkey",
    .meaning = "n. 猴子；顽童vi. 胡闹；捣蛋vt. 嘲弄"};

String_and_meaning String_and_meaning_monopoly = {
    .string = "monopoly",
    .meaning = "n. 垄断；垄断者；专卖权"};

String_and_meaning String_and_meaning_monster = {
    .string = "monster",
    .meaning = "n. 怪物；巨人，巨兽；残忍的人adj. 巨大的，庞大的"};

String_and_meaning String_and_meaning_month = {
    .string = "month",
    .meaning = "n. 月，一个月的时间"};

String_and_meaning String_and_meaning_monthly = {
    .string = "monthly",
    .meaning = "adj. 每月的，每月一次的；有效期为一个月的n. 月刊adv. 每月，每月一次"};

String_and_meaning String_and_meaning_monument = {
    .string = "monument",
    .meaning = "n. 纪念碑；历史遗迹；不朽的作品vt. 为…树碑"};

String_and_meaning String_and_meaning_mood = {
    .string = "mood",
    .meaning = "n. 情绪，语气；心境；气氛n. (Mood)人名；(英)穆德；(瑞典)莫德"};

String_and_meaning String_and_meaning_moon = {
    .string = "moon",
    .meaning = "n. 月亮；月球；月光；卫星vi. 闲荡；出神vt. 虚度n. （Moon）（瑞典）莫恩；（柬）蒙；（英）穆恩；（缅）孟（人名）"};

String_and_meaning String_and_meaning_moral = {
    .string = "moral",
    .meaning = "adj. 道德的；精神上的；品性端正的n. 道德；寓意n. (Moral)人名；(德、法、西、葡、土)莫拉尔"};

String_and_meaning String_and_meaning_morality = {
    .string = "morality",
    .meaning = "n. 道德；品行，美德"};

String_and_meaning String_and_meaning_more = {
    .string = "more",
    .meaning = "adv. 更多；此外；更大程度地adj. 更多的；附加的pron. 更多的数量n. 更多n. (More)人名；(英、法)莫尔；(意、西、以)莫雷"};

String_and_meaning String_and_meaning_moreover = {
    .string = "moreover",
    .meaning = "adv. 而且；此外"};

String_and_meaning String_and_meaning_morning = {
    .string = "morning",
    .meaning = "n. 早晨；黎明；初期"};

String_and_meaning String_and_meaning_mortal = {
    .string = "mortal",
    .meaning = "adj. 凡人的；致死的；终有一死的；不共戴天的n. 人类，凡人n. (Mortal)人名；(法、葡)莫塔尔"};

String_and_meaning String_and_meaning_mortgage = {
    .string = "mortgage",
    .meaning = "n. 抵押；抵押贷款额v. 抵押；以某人的前途作代价"};

String_and_meaning String_and_meaning_mosquito = {
    .string = "mosquito",
    .meaning = "n. 蚊子"};

String_and_meaning String_and_meaning_most = {
    .string = "most",
    .meaning = "adv. 最；非常，极其；最多；几乎adj. 大部分的，多数的；最多的n. 大部分，大多数n. (Most)人名；(德、俄、法、芬、捷、英)莫斯特"};

String_and_meaning String_and_meaning_mostly = {
    .string = "mostly",
    .meaning = "adv. 主要地；通常；多半地"};

String_and_meaning String_and_meaning_motel = {
    .string = "motel",
    .meaning = "n. 汽车旅馆n. (Motel)人名；(德)莫特尔"};

String_and_meaning String_and_meaning_mother = {
    .string = "mother",
    .meaning = "n. 母亲；大娘；女修道院院长vt. 生下；养育；像母亲般关怀或照管adj. 母亲的；出生地的"};

String_and_meaning String_and_meaning_motion = {
    .string = "motion",
    .meaning = "n. 动作；移动；手势；请求；意向；议案vi. 运动；打手势vt. 运动；向…打手势"};

String_and_meaning String_and_meaning_motivate = {
    .string = "motivate",
    .meaning = "v. 刺激，使有动机，激发…的积极性；成为……的动机；给出理由；申请"};

String_and_meaning String_and_meaning_motive = {
    .string = "motive",
    .meaning = "n. 动机，目的；主题adj. 发动的；成为动机的vt. 使产生动机，激起"};

String_and_meaning String_and_meaning_motor = {
    .string = "motor",
    .meaning = "n. 发动机，马达；汽车adj. 汽车的；机动的vi. 乘汽车vt. 以汽车载运"};

String_and_meaning String_and_meaning_mould = {
    .string = "mould",
    .meaning = "n.[亦作mold] 肥土,壤土,[亦作mold] 霉,模具v.用土覆盖,发霉,铸造"};

String_and_meaning String_and_meaning_mount = {
    .string = "mount",
    .meaning = "n.乘用马,衬纸,山,装配vi.乘马,爬上,增长vt.爬上,使上马,装上,设置,安放,制作...的标本,上演"};

String_and_meaning String_and_meaning_mountain = {
    .string = "mountain",
    .meaning = "n. 山；山脉n. (Mountain)人名；(英)芒廷"};

String_and_meaning String_and_meaning_mourn = {
    .string = "mourn",
    .meaning = "v. 哀悼；忧伤；服丧"};

String_and_meaning String_and_meaning_mouse = {
    .string = "mouse",
    .meaning = "n. 鼠标；老鼠；胆小羞怯的人vt. 探出vi. 捕鼠；窥探"};

String_and_meaning String_and_meaning_mouth = {
    .string = "mouth",
    .meaning = "n. 口，嘴；河口vt. 做作地说，装腔作势地说；喃喃地说出vi. 装腔作势说话"};

String_and_meaning String_and_meaning_mouthful = {
    .string = "mouthful",
    .meaning = "n. 一口，满口"};

String_and_meaning String_and_meaning_move = {
    .string = "move",
    .meaning = "v. 移动；改变；进展；采取行动；搬家；调动；离开；感动；激起；促使；提议；走棋；快点；出售n. 行动，举措；移动；改变；迁居；步骤；走棋"};

String_and_meaning String_and_meaning_movement = {
    .string = "movement",
    .meaning = "n. 运动；活动；运转；乐章"};

String_and_meaning String_and_meaning_movie = {
    .string = "movie",
    .meaning = "n. 电影；电影院；电影业adj. 电影的"};

String_and_meaning String_and_meaning_much = {
    .string = "much",
    .meaning = "adv. 非常，很adj. 大量的n. 许多，大量pron. 许多，大量n. (Much)人名；(德)穆赫；(英)马奇"};

String_and_meaning String_and_meaning_mud = {
    .string = "mud",
    .meaning = "n. 泥；污蔑；（非正式）干杯v. 弄脏，用泥涂"};

String_and_meaning String_and_meaning_muddy = {
    .string = "muddy",
    .meaning = "adj. 泥泞的；模糊的；混乱的vt. 使污浊；使沾上泥；把…弄糊涂vi. 变得泥泞；沾满烂泥"};

String_and_meaning String_and_meaning_mug = {
    .string = "mug",
    .meaning = "n. 杯子；脸；苦读者vi. 扮鬼脸，做怪相vt. 行凶抢劫"};

String_and_meaning String_and_meaning_multiple = {
    .string = "multiple",
    .meaning = "adj. 多重的；多样的；许多的n. 倍数；[电] 并联"};

String_and_meaning String_and_meaning_multiply = {
    .string = "multiply",
    .meaning = "vt. 乘；使增加；使繁殖；使相乘vi. 乘；繁殖；增加adv. 多样地；复合地adj. 多层的；多样的"};

String_and_meaning String_and_meaning_multitude = {
    .string = "multitude",
    .meaning = "n. 大量，多数；群众，人群"};

String_and_meaning String_and_meaning_municipal = {
    .string = "municipal",
    .meaning = "adj. 市政的，市的；地方自治的"};

String_and_meaning String_and_meaning_murder = {
    .string = "murder",
    .meaning = "n.谋杀,凶杀vt.谋杀,凶杀v.谋杀"};

String_and_meaning String_and_meaning_murderer = {
    .string = "murderer",
    .meaning = "n. 凶手；谋杀犯"};

String_and_meaning String_and_meaning_murmur = {
    .string = "murmur",
    .meaning = "n. 低语；低语声；低声抱怨；潺潺声vi. 低声说；私下抱怨；发出轻柔持续的声音vt. 低声说"};

String_and_meaning String_and_meaning_muscle = {
    .string = "muscle",
    .meaning = "n. 肌肉；力量vt. 加强；使劲搬动；使劲挤出vi. 使劲行进"};

String_and_meaning String_and_meaning_muscular = {
    .string = "muscular",
    .meaning = "adj. 肌肉的；肌肉发达的；强健的"};

String_and_meaning String_and_meaning_museum = {
    .string = "museum",
    .meaning = "n. 博物馆"};

String_and_meaning String_and_meaning_mushroom = {
    .string = "mushroom",
    .meaning = "n. 蘑菇，伞菌；蘑菇形物体；暴发户adj. 蘑菇的；蘑菇形的；迅速生长的vi. 迅速增加；采蘑菇；迅速生长"};

String_and_meaning String_and_meaning_music = {
    .string = "music",
    .meaning = "n. 音乐，乐曲"};

String_and_meaning String_and_meaning_musical = {
    .string = "musical",
    .meaning = "adj. 音乐的；悦耳的n. 音乐片"};

String_and_meaning String_and_meaning_musician = {
    .string = "musician",
    .meaning = "n. 音乐家"};

String_and_meaning String_and_meaning_must = {
    .string = "must",
    .meaning = "aux. 必须；一定；应该，得n. 绝对必要的事物；待发酵的葡萄汁；发霉，潮气n. (Must) （美）穆斯特（人名）"};

String_and_meaning String_and_meaning_mute = {
    .string = "mute",
    .meaning = "adj. 哑的；沉默的；无声的vt. 减弱……的声音；使……柔和n. 哑巴；弱音器；闭锁音n. (Mute)人名；(塞)穆特"};

String_and_meaning String_and_meaning_mutter = {
    .string = "mutter",
    .meaning = "vi. 咕哝；喃喃自语vt. 咕哝；抱怨地说；低声含糊地说n. 咕哝；喃喃低语n. （Mutter）（法）米泰；（德、匈、西）穆特；（英）马特（人名）"};

String_and_meaning String_and_meaning_mutton = {
    .string = "mutton",
    .meaning = "n. 羊肉"};

String_and_meaning String_and_meaning_mutual = {
    .string = "mutual",
    .meaning = "adj. 共同的；相互的，彼此的"};

String_and_meaning String_and_meaning_my = {
    .string = "my",
    .meaning = "pron. 我的int. 哎呀（表示惊奇等）；喔唷n. (My)人名；(越)美；(老、柬)米"};

String_and_meaning String_and_meaning_myself = {
    .string = "myself",
    .meaning = "pron. 我自己；我亲自；我的正常的健康状况和正常情绪"};

String_and_meaning String_and_meaning_mysterious = {
    .string = "mysterious",
    .meaning = "adj. 神秘的；不可思议的；难解的"};

String_and_meaning String_and_meaning_mystery = {
    .string = "mystery",
    .meaning = "n. 秘密，谜；神秘，神秘的事物；推理小说，推理剧；常作 mysteries 秘技，秘诀"};

String_and_meaning String_and_meaning_myth = {
    .string = "myth",
    .meaning = "n. 神话；虚构的人，虚构的事"};

String_and_meaning String_and_meaning_nail = {
    .string = "nail",
    .meaning = "n.指甲,钉,钉子vt.钉,将...钉牢"};

String_and_meaning String_and_meaning_naive = {
    .string = "naive",
    .meaning = "adj. 天真的,幼稚的"};

String_and_meaning String_and_meaning_naked = {
    .string = "naked",
    .meaning = "adj. 裸体的；无装饰的；无证据的；直率的"};

String_and_meaning String_and_meaning_name = {
    .string = "name",
    .meaning = "n.名字,名称,姓名,名誉vt.命名,提名,叫出,指定adj.姓名的,据以取名的"};

String_and_meaning String_and_meaning_namely = {
    .string = "namely",
    .meaning = "adv. 也就是；即是；换句话说"};

String_and_meaning String_and_meaning_nap = {
    .string = "nap",
    .meaning = "n. 小睡，打盹儿；细毛；孤注一掷vt. 使拉毛vi. 小睡；疏忽n. (Nap)人名；(朝、越)纳"};

String_and_meaning String_and_meaning_narrative = {
    .string = "narrative",
    .meaning = "n. 叙述；故事；讲述adj. 叙事的，叙述的；叙事体的"};

String_and_meaning String_and_meaning_narrow = {
    .string = "narrow",
    .meaning = "adj. 狭窄的，有限的；勉强的；精密的；度量小的n. 海峡；狭窄部分，隘路vt. 使变狭窄vi. 变窄"};

String_and_meaning String_and_meaning_nasty = {
    .string = "nasty",
    .meaning = "adj.污秽的,肮脏的,令人厌恶的,淫秽的,下流的,凶相的,威胁的"};

String_and_meaning String_and_meaning_nation = {
    .string = "nation",
    .meaning = "n. 国家；民族；国民n. (Nation)人名；(英)内申"};

String_and_meaning String_and_meaning_national = {
    .string = "national",
    .meaning = "adj. 国家的；国民的；民族的；国立的n. 国民"};

String_and_meaning String_and_meaning_nationality = {
    .string = "nationality",
    .meaning = "n. 国籍，国家；民族；部落"};

String_and_meaning String_and_meaning_native = {
    .string = "native",
    .meaning = "adj. 本国的；土著的；天然的；与生俱来的；天赋的n. 本地人；土产；当地居民"};

String_and_meaning String_and_meaning_natural = {
    .string = "natural",
    .meaning = "adj. 自然的；物质的；天生的；不做作的n. 自然的事情；白痴；本位音n. (Natural)人名；(西)纳图拉尔"};

String_and_meaning String_and_meaning_naturally = {
    .string = "naturally",
    .meaning = "adv. 自然地自然而然地轻而易举天生地大方地"};

String_and_meaning String_and_meaning_nature = {
    .string = "nature",
    .meaning = "n. 自然；性质；本性；种类n. (Nature)人名；(法)纳蒂尔"};

String_and_meaning String_and_meaning_naughty = {
    .string = "naughty",
    .meaning = "adj. 顽皮的，淘气的；不听话的；没规矩的；不适当的；下流的"};

String_and_meaning String_and_meaning_naval = {
    .string = "naval",
    .meaning = "adj. 海军的；军舰的n. (Naval)人名；(西、德、印)纳瓦尔"};

String_and_meaning String_and_meaning_navigation = {
    .string = "navigation",
    .meaning = "n. 航行；航海"};

String_and_meaning String_and_meaning_navy = {
    .string = "navy",
    .meaning = "n. 海军深蓝色的"};

String_and_meaning String_and_meaning_near = {
    .string = "near",
    .meaning = "adj.亲近的,亲密的,近,(车,马等)左侧的,吝啬的adv.(时间,空间方面)近,不远 prep.在...近旁,近...v.接近,走近"};

String_and_meaning String_and_meaning_nearby = {
    .string = "nearby",
    .meaning = "adj. 附近的，邻近的adv. 在附近prep. 在…附近"};

String_and_meaning String_and_meaning_nearly = {
    .string = "nearly",
    .meaning = "adv. 差不多，几乎；密切地"};

String_and_meaning String_and_meaning_neat = {
    .string = "neat",
    .meaning = "adj. 灵巧的；整洁的；优雅的；齐整的；未搀水的；平滑的"};

String_and_meaning String_and_meaning_necessarily = {
    .string = "necessarily",
    .meaning = "adv. 必要地；必定地，必然地"};

String_and_meaning String_and_meaning_necessary = {
    .string = "necessary",
    .meaning = "adj. 必要的；必需的；必然的n. 必需品n. (Necessary)（英）内塞瑟里（人名）"};

String_and_meaning String_and_meaning_necessity = {
    .string = "necessity",
    .meaning = "n. 需要；必然性；必需品"};

String_and_meaning String_and_meaning_neck = {
    .string = "neck",
    .meaning = "n. 脖子；衣领；海峡vi. 搂著脖子亲吻；变狭窄vt. 使变细；与…搂著脖子亲吻n. (Neck)人名；(德、意、英)内克"};

String_and_meaning String_and_meaning_necklace = {
    .string = "necklace",
    .meaning = "n. 项链"};

String_and_meaning String_and_meaning_need = {
    .string = "need",
    .meaning = "n.需要,必需,必需品,要求,贫困vt.需要 modalv.必要,必须"};

String_and_meaning String_and_meaning_needle = {
    .string = "needle",
    .meaning = "n. 针；指针；刺激；针状物vi. 缝纫；做针线vt. 刺激；用针缝n. (Needle)人名；(英)尼德尔"};

String_and_meaning String_and_meaning_needless = {
    .string = "needless",
    .meaning = "adj. 不必要的，不需要的"};

String_and_meaning String_and_meaning_negative = {
    .string = "negative",
    .meaning = "adj. [数] 负的；消极的；否定的；阴性的n. 否定；负数；[摄] 底片vt. 否定；拒绝"};

String_and_meaning String_and_meaning_neglect = {
    .string = "neglect",
    .meaning = "v. 忽视，忽略；疏忽；漏做n. 忽略，忽视；未被重视"};

String_and_meaning String_and_meaning_negligible = {
    .string = "negligible",
    .meaning = "adj. 微不足道的，可以忽略的"};

String_and_meaning String_and_meaning_negotiate = {
    .string = "negotiate",
    .meaning = "vt. 谈判，商议；转让；越过vi. 谈判，交涉"};

String_and_meaning String_and_meaning_Negro = {
    .string = "Negro",
    .meaning = "n. 冒犯旧黑人adj. 冒犯旧黑人的"};

String_and_meaning String_and_meaning_neighbour = {
    .string = "neighbour",
    .meaning = "n. 邻居；同胞；仁慈的人vt. 邻接vi. 住在邻近；毗邻；友善，和睦adj. 邻居的；邻近的"};

String_and_meaning String_and_meaning_neighbourhood = {
    .string = "neighbourhood",
    .meaning = "n. 邻近；周围；邻居关系；附近一带"};

String_and_meaning String_and_meaning_neither = {
    .string = "neither",
    .meaning = "conj. 也不；既不adv. 两个都不；既不……也不adj. 两者都不的pron. 两者都不"};

String_and_meaning String_and_meaning_nephew = {
    .string = "nephew",
    .meaning = "n. 侄子；外甥"};

String_and_meaning String_and_meaning_nerve = {
    .string = "nerve",
    .meaning = "n. 神经；勇气；[植] 叶脉vt. 鼓起勇气"};

String_and_meaning String_and_meaning_nervous = {
    .string = "nervous",
    .meaning = "adj. 神经的；紧张不安的；强健有力的"};

String_and_meaning String_and_meaning_nest = {
    .string = "nest",
    .meaning = "n. 巢，窝；安乐窝；温床vt. 筑巢；嵌套vi. 筑巢；找鸟巢n. (Nest)人名；(德)内丝特；(英)内丝特(女子教名 Agnes 威尔士语的昵称)"};

String_and_meaning String_and_meaning_net = {
    .string = "net",
    .meaning = "n.网,网络,网状物,净利,实价adj.净余的,纯粹的vt.用网捕,净赚,得到vi.编网 [域] Nerwork operations and service centers,网络服务商"};

String_and_meaning String_and_meaning_network = {
    .string = "network",
    .meaning = "n. 网络；广播网；网状物"};

String_and_meaning String_and_meaning_neutral = {
    .string = "neutral",
    .meaning = "adj. 中立的，中性的；中立国的；非彩色的n. 中立国；中立者；非彩色；齿轮的空档"};

String_and_meaning String_and_meaning_never = {
    .string = "never",
    .meaning = "adv. 从未；决不"};

String_and_meaning String_and_meaning_nevertheless = {
    .string = "nevertheless",
    .meaning = "adv. 然而，不过；虽然如此"};

String_and_meaning String_and_meaning_new = {
    .string = "new",
    .meaning = "adj. 新的，新鲜的；更新的；初见的adv. 新近n. (New)人名；(英)纽"};

String_and_meaning String_and_meaning_newly = {
    .string = "newly",
    .meaning = "adv. 最近；重新；以新的方式"};

String_and_meaning String_and_meaning_news = {
    .string = "news",
    .meaning = "n. 新闻，消息；新闻报导"};

String_and_meaning String_and_meaning_newspaper = {
    .string = "newspaper",
    .meaning = "n. 报纸报社旧报纸"};

String_and_meaning String_and_meaning_next = {
    .string = "next",
    .meaning = "adj. 紧接在后的；贴近的；其次的adv. 然后；下次；其次n. 下一个人或事件prep. 靠近；居于…之后det. 下次；紧接在后的；另一个"};

String_and_meaning String_and_meaning_nice = {
    .string = "nice",
    .meaning = "adj. 精密的；美好的；细微的；和蔼的n. (Nice)人名；(英)尼斯"};

String_and_meaning String_and_meaning_nickel = {
    .string = "nickel",
    .meaning = "n. 镍；镍币；五分镍币vt. 镀镍于n. (Nickel)人名；(德、英)尼克尔"};

String_and_meaning String_and_meaning_niece = {
    .string = "niece",
    .meaning = "n. 外甥女，侄女n. (Niece)人名；(英)尼斯"};

String_and_meaning String_and_meaning_night = {
    .string = "night",
    .meaning = "n. 夜晚，晚上；黑暗，黑夜adj. 夜晚的，夜间的"};

String_and_meaning String_and_meaning_nightmare = {
    .string = "nightmare",
    .meaning = "n. 恶梦，噩梦；梦魇般的经历adj. 可怕的；噩梦似的"};

String_and_meaning String_and_meaning_nine = {
    .string = "nine",
    .meaning = "n. 九，九个num. 九；九个adj. 九的，九个的n. (Nine)人名；(塞)尼内"};

String_and_meaning String_and_meaning_nineteen = {
    .string = "nineteen",
    .meaning = "num. 十九n. 十九个；十九岁；十九号"};

String_and_meaning String_and_meaning_ninety = {
    .string = "ninety",
    .meaning = "n. 九十adj. 九十的；九十岁的num. 九十"};

String_and_meaning String_and_meaning_ninth = {
    .string = "ninth",
    .meaning = "num. 第九；第九名；九度音n. 九分之一adj. 第九的；九分之一的"};

String_and_meaning String_and_meaning_nitrogen = {
    .string = "nitrogen",
    .meaning = "n. [化学] 氮"};

String_and_meaning String_and_meaning_no = {
    .string = "no",
    .meaning = "n.否定,投反对票者adj.没有,不许,反对adv.不,并不,毫不 [域] Norway ,挪威"};

String_and_meaning String_and_meaning_noble = {
    .string = "noble",
    .meaning = "adj. 高尚的；贵族的；惰性的；宏伟的n. 贵族vt. 抓住；逮捕n. (Noble)人名；(英、法、意)诺布尔；(西)诺夫莱；(阿拉伯)努布莱"};

String_and_meaning String_and_meaning_nobody = {
    .string = "nobody",
    .meaning = "pron. 无人，没有人；谁也不n. 无名小卒，小人物"};

String_and_meaning String_and_meaning_nod = {
    .string = "nod",
    .meaning = "v. 点头；点头表示；打盹；摆动；（英足）顶球n. 点头；点头表示；打盹；摆动；同意，让步"};

String_and_meaning String_and_meaning_noise = {
    .string = "noise",
    .meaning = "n. [环境] 噪音；响声；杂音vt. 谣传vi. 发出声音；大声议论n. (Noise)人名；(英)诺伊斯"};

String_and_meaning String_and_meaning_noisy = {
    .string = "noisy",
    .meaning = "adj. .嘈杂的；喧闹的；聒噪的"};

String_and_meaning String_and_meaning_Nominal = {
    .string = "Nominal",
    .meaning = "adj. 名义上的；有名无实的；[会计] 票面上的n. [语] 名词性词"};

String_and_meaning String_and_meaning_nominate = {
    .string = "nominate",
    .meaning = "vt. 推荐；提名；任命；指定"};

String_and_meaning String_and_meaning_none = {
    .string = "none",
    .meaning = "adv.决不,毫不 pron.一个也没有,毫无"};

String_and_meaning String_and_meaning_nonsense = {
    .string = "nonsense",
    .meaning = "n. 胡说；废话adj. 荒谬的int. 胡说！"};

String_and_meaning String_and_meaning_noon = {
    .string = "noon",
    .meaning = "n. 中午；正午；全盛期n. (Noon)人名；(朝)嫩；(英、巴基)努恩"};

String_and_meaning String_and_meaning_nor = {
    .string = "nor",
    .meaning = "conj. 也不；也不是adv. 也不；也没有n. (Nor)人名；(中)挪(广东话·威妥玛)；(马来、俄)诺尔；(柬)诺"};

String_and_meaning String_and_meaning_norm = {
    .string = "norm",
    .meaning = "n. 标准，规范"};

String_and_meaning String_and_meaning_normal = {
    .string = "normal",
    .meaning = "adj. 正常的；正规的；标准的n. 正常；标准；常态；法线（数学）n. (Normal)人名；(德)诺马尔"};

String_and_meaning String_and_meaning_normally = {
    .string = "normally",
    .meaning = "adv. 正常地；通常地，一般地"};

String_and_meaning String_and_meaning_north = {
    .string = "north",
    .meaning = "n. 北，北方adj. 北方的；朝北的adv. 在北方，向北方"};

String_and_meaning String_and_meaning_northeast = {
    .string = "northeast",
    .meaning = "n. 东北方，东北部adj. 东北的；向东北的；（风等）来自东北的adv. 在东北；向东北；（风等）来自东北"};

String_and_meaning String_and_meaning_northern = {
    .string = "northern",
    .meaning = "adj. 北部的；北方的n. 北部方言"};

String_and_meaning String_and_meaning_northwest = {
    .string = "northwest",
    .meaning = "n. 西北方；西北部adj. （风）来自西北的；在西北部的adv. 在西北，向西北，来自西北地"};

String_and_meaning String_and_meaning_nose = {
    .string = "nose",
    .meaning = "n. 鼻子；嗅觉；突出的部分；探问；（飞机、太空船等的）头部，头锥；特有的气味vt. 嗅；用鼻子触vi. 小心探索着前进；探问"};

String_and_meaning String_and_meaning_not = {
    .string = "not",
    .meaning = "adv. 表示否定，不n. “非”（计算机中逻辑运算的一种）"};

String_and_meaning String_and_meaning_notable = {
    .string = "notable",
    .meaning = "adj. 值得注意的，显著的；著名的n. 名人，显要人物"};

String_and_meaning String_and_meaning_note = {
    .string = "note",
    .meaning = "n. 笔记；音符；票据；注解；纸币；便笺；照会；调子vt. 注意；记录；注解n. (Note) （美、法）诺特（人名）"};

String_and_meaning String_and_meaning_notebook = {
    .string = "notebook",
    .meaning = "n. 笔记本，笔记簿；手册"};

String_and_meaning String_and_meaning_nothing = {
    .string = "nothing",
    .meaning = "pron. 没有什么；无关紧要的东西；（计算机数量上的）零；不值钱adv. 毫不；绝不n. 无；零；无关紧要的事adj. 没前途的；没价值的"};

String_and_meaning String_and_meaning_notice = {
    .string = "notice",
    .meaning = "n. 通知，布告；注意；公告vt. 通知；注意到；留心vi. 引起注意"};

String_and_meaning String_and_meaning_noticeable = {
    .string = "noticeable",
    .meaning = "adj. 显而易见的，显著的；值得注意的"};

String_and_meaning String_and_meaning_notify = {
    .string = "notify",
    .meaning = "vt. 通告，通知；公布"};

String_and_meaning String_and_meaning_notion = {
    .string = "notion",
    .meaning = "n. 概念；见解；打算"};

String_and_meaning String_and_meaning_notorious = {
    .string = "notorious",
    .meaning = "adj. 声名狼藉的，臭名昭著的"};

String_and_meaning String_and_meaning_notwithstanding = {
    .string = "notwithstanding",
    .meaning = "prep. 尽管，虽然adv. 尽管，仍然conj. 虽然，尽管"};

String_and_meaning String_and_meaning_noun = {
    .string = "noun",
    .meaning = "n. 名词n. (Noun)人名；(以)努恩"};

String_and_meaning String_and_meaning_nourish = {
    .string = "nourish",
    .meaning = "vt. 滋养；怀有；使健壮"};

String_and_meaning String_and_meaning_novel = {
    .string = "novel",
    .meaning = "adj. 新奇的；异常的n. 小说n. (Novel)人名；(法、西、英)诺韦尔"};

String_and_meaning String_and_meaning_novelty = {
    .string = "novelty",
    .meaning = "n. 新奇；新奇的事物；新颖小巧而廉价的物品"};

String_and_meaning String_and_meaning_November = {
    .string = "November",
    .meaning = "n. 十一月"};

String_and_meaning String_and_meaning_now = {
    .string = "now",
    .meaning = "adv. 现在；如今；立刻adj. 现在的n. 现在；目前conj. 由于；既然"};

String_and_meaning String_and_meaning_nowadays = {
    .string = "nowadays",
    .meaning = "adv. 现今；时下n. 当今"};

String_and_meaning String_and_meaning_nowhere = {
    .string = "nowhere",
    .meaning = "adv. 无处；任何地方都不；毫无结果n. 无处；任何地方；无名之地adj. 不存在的；毫无结果的；不知名的"};

String_and_meaning String_and_meaning_nuclear = {
    .string = "nuclear",
    .meaning = "adj. 原子能的；[细胞] 细胞核的；中心的；原子核的"};

String_and_meaning String_and_meaning_nucleus = {
    .string = "nucleus",
    .meaning = "n. 核，核心；原子核"};

String_and_meaning String_and_meaning_nuisance = {
    .string = "nuisance",
    .meaning = "n. 讨厌的人；损害；麻烦事；讨厌的东西"};

String_and_meaning String_and_meaning_number = {
    .string = "number",
    .meaning = "n. 数；（杂志等的）期；号码；数字；算术vi. 计入；总数达到vt. 编号；计入；数…的数目；使为数有限"};

String_and_meaning String_and_meaning_numerical = {
    .string = "numerical",
    .meaning = "adj. 数值的；数字的；用数字表示的（等于numeric）"};

String_and_meaning String_and_meaning_numerous = {
    .string = "numerous",
    .meaning = "adj. 许多的，很多的"};

String_and_meaning String_and_meaning_nurse = {
    .string = "nurse",
    .meaning = "n.护士,保姆vt.护理,看护v.照料"};

String_and_meaning String_and_meaning_nursery = {
    .string = "nursery",
    .meaning = "n. 苗圃；托儿所；温床"};

String_and_meaning String_and_meaning_nut = {
    .string = "nut",
    .meaning = "n. 螺母，螺帽；坚果；难对付的人，难解的问题vi. 采坚果n. (Nut)人名；(阿拉伯)努特；(柬)努"};

String_and_meaning String_and_meaning_nylon = {
    .string = "nylon",
    .meaning = "n. 尼龙，[纺] 聚酰胺纤维；尼龙袜"};

String_and_meaning String_and_meaning_oak = {
    .string = "oak",
    .meaning = "n. 橡树；橡木色；橡木家具adj. 栎树的；栎木制的n. (Oak)人名；(英)奥克"};

String_and_meaning String_and_meaning_oar = {
    .string = "oar",
    .meaning = "n. 桨；橹；桨手vt. 划（船）vi. 划行"};

String_and_meaning String_and_meaning_oath = {
    .string = "oath",
    .meaning = "n. 誓言，誓约；诅咒，咒骂"};

String_and_meaning String_and_meaning_obedient = {
    .string = "obedient",
    .meaning = "adj. 顺从的，服从的；孝顺的"};

String_and_meaning String_and_meaning_obey = {
    .string = "obey",
    .meaning = "vt. 服从，听从；按照……行动vi. 服从，顺从；听话n. (Obey)人名；(英、法)奥贝"};

String_and_meaning String_and_meaning_object = {
    .string = "object",
    .meaning = "n. 目标；物体；客体；宾语vt. 提出…作为反对的理由vi. 反对；拒绝"};

String_and_meaning String_and_meaning_objection = {
    .string = "objection",
    .meaning = "n. 异议，反对；缺陷，缺点；妨碍；拒绝的理由"};

String_and_meaning String_and_meaning_objective = {
    .string = "objective",
    .meaning = "n. 目的；目标；（军事行动的）攻击目标；物镜；宾格adj. 客观的；客观存在的；（疾病症状）客观的，他觉的；目标的；宾格的"};

String_and_meaning String_and_meaning_obligation = {
    .string = "obligation",
    .meaning = "n. 义务；职责；债务"};

String_and_meaning String_and_meaning_oblige = {
    .string = "oblige",
    .meaning = "vt. 迫使；强制；赐，施恩惠；责成；义务vi. 帮忙；施恩惠"};

String_and_meaning String_and_meaning_obscene = {
    .string = "obscene",
    .meaning = "adj. 淫秽的；猥亵的；可憎的"};

String_and_meaning String_and_meaning_obscure = {
    .string = "obscure",
    .meaning = "adj. 昏暗的，朦胧的；晦涩的，不清楚的；隐蔽的；不著名的，无名的vt. 使…模糊不清，掩盖；隐藏；使难理解n. 某种模糊的或不清楚的东西"};

String_and_meaning String_and_meaning_observation = {
    .string = "observation",
    .meaning = "n. 观察；监视；观察报告"};

String_and_meaning String_and_meaning_observe = {
    .string = "observe",
    .meaning = "vt. 庆祝vt. 观察；遵守；说；注意到；评论vi. 观察；说；注意到；评论"};

String_and_meaning String_and_meaning_observer = {
    .string = "observer",
    .meaning = "n. 观察者；[天] 观测者；遵守者"};

String_and_meaning String_and_meaning_obstacle = {
    .string = "obstacle",
    .meaning = "n. 障碍，干扰，妨碍；障碍物"};

String_and_meaning String_and_meaning_obtain = {
    .string = "obtain",
    .meaning = "vi. 获得；流行vt. 获得"};

String_and_meaning String_and_meaning_obvious = {
    .string = "obvious",
    .meaning = "adj. 明显的；显著的；平淡无奇的"};

String_and_meaning String_and_meaning_obviously = {
    .string = "obviously",
    .meaning = "adv. 明显地显然地"};

String_and_meaning String_and_meaning_occasion = {
    .string = "occasion",
    .meaning = "n. 时机，机会；场合；理由vt. 引起，惹起"};

String_and_meaning String_and_meaning_occasional = {
    .string = "occasional",
    .meaning = "adj. 偶然的，临时的；（家具）特定场合才使用的；（文章等）特殊场合所作的；不定期雇用的"};

String_and_meaning String_and_meaning_occasionally = {
    .string = "occasionally",
    .meaning = "adv. 偶尔；间或"};

String_and_meaning String_and_meaning_occupation = {
    .string = "occupation",
    .meaning = "n. 职业；占有；消遣；占有期"};

String_and_meaning String_and_meaning_occupy = {
    .string = "occupy",
    .meaning = "vt. 占据，占领；居住；使忙碌"};

String_and_meaning String_and_meaning_occur = {
    .string = "occur",
    .meaning = "vi. 发生；出现；存在"};

String_and_meaning String_and_meaning_occurrence = {
    .string = "occurrence",
    .meaning = "n. 发生；出现；事件；发现"};

String_and_meaning String_and_meaning_ocean = {
    .string = "ocean",
    .meaning = "n. 海洋；大量n. （Ocean）（罗）奥切安（人名）"};

String_and_meaning String_and_meaning_Oceania = {
    .string = "Oceania",
    .meaning = "n. 大洋洲"};

String_and_meaning String_and_meaning_October = {
    .string = "October",
    .meaning = "n. [天] 十月"};

String_and_meaning String_and_meaning_odd = {
    .string = "odd",
    .meaning = "adj. 奇数的；古怪的；剩余的；临时的；零散的n. 奇数；怪人；奇特的事物n. (Odd)人名；(英、西、挪、瑞典)奥德"};

String_and_meaning String_and_meaning_odor = {
    .string = "odor",
    .meaning = "n. 气味；名声n. (Odor)人名；(匈)欧多尔"};

String_and_meaning String_and_meaning_odour = {
    .string = "odour",
    .meaning = "n. 气味；声誉"};

String_and_meaning String_and_meaning_of = {
    .string = "of",
    .meaning = "prep. 属于；……的；……的一部分；住在（某地）；关于；由……组成的；因为；（表示人或事的时空位置）在，当"};

String_and_meaning String_and_meaning_off = {
    .string = "off",
    .meaning = "adj.远的,空闲的,不工作的adv.离开,在远方,离去,分离,中断,完成 prep.从...离开,脱离"};

String_and_meaning String_and_meaning_offence = {
    .string = "offence",
    .meaning = "n. 犯罪；违反；过错；攻击"};

String_and_meaning String_and_meaning_offend = {
    .string = "offend",
    .meaning = "vt. 冒犯；使…不愉快vi. 违反；进攻；引起不舒服"};

String_and_meaning String_and_meaning_offensive = {
    .string = "offensive",
    .meaning = "adj. 攻击的；冒犯的；无礼的；讨厌的n. 攻势；攻击"};

String_and_meaning String_and_meaning_offer = {
    .string = "offer",
    .meaning = "vt. 提供；出价；试图n. 提议；出价；意图；录取通知书vi. 提议；出现；献祭；求婚"};

String_and_meaning String_and_meaning_office = {
    .string = "office",
    .meaning = "n. 办公室；政府机关；官职；营业处"};

String_and_meaning String_and_meaning_officer = {
    .string = "officer",
    .meaning = "n. 军官，警官；公务员，政府官员；船长vt. 指挥n. (Officer)人名；(英)奥菲瑟"};

String_and_meaning String_and_meaning_official = {
    .string = "official",
    .meaning = "adj. 官方的；正式的；公务的n. 官员；公务员；高级职员"};

String_and_meaning String_and_meaning_offset = {
    .string = "offset",
    .meaning = "n.偏移量,抵销,弥补,分支,平版印刷,胶印vt.弥补,抵销,用平版印刷vi.偏移,形成分支"};

String_and_meaning String_and_meaning_offspring = {
    .string = "offspring",
    .meaning = "n. 后代，子孙；产物"};

String_and_meaning String_and_meaning_often = {
    .string = "often",
    .meaning = "adv. 常常，时常；往往，大多"};

String_and_meaning String_and_meaning_oh = {
    .string = "oh",
    .meaning = "int. 哦；哎呀（表示惊讶或恐惧等）"};

String_and_meaning String_and_meaning_oil = {
    .string = "oil",
    .meaning = "n. 油；石油；油画颜料vt. 加油；涂油；使融化vi. 融化；加燃油"};

String_and_meaning String_and_meaning_okay = {
    .string = "okay",
    .meaning = "int. 好，行adj. 可以；对；不错的；安全的adv. 可以；对；很好地n. 同意，批准v. 同意，批准"};

String_and_meaning String_and_meaning_old = {
    .string = "old",
    .meaning = "adj. 陈旧的，古老的；年老的n. 古时n. (Old)人名；(英)奥尔德"};

String_and_meaning String_and_meaning_omit = {
    .string = "omit",
    .meaning = "vt. 省略；遗漏；删除；疏忽"};

String_and_meaning String_and_meaning_on = {
    .string = "on",
    .meaning = "prep.在...之上,依附于,临近,靠近,向,在...时候,关于,涉及adv.在上,向前,行动中,作用中"};

String_and_meaning String_and_meaning_once = {
    .string = "once",
    .meaning = "adv. 一次；曾经conj. 一旦n. 一次，一回"};

String_and_meaning String_and_meaning_one = {
    .string = "one",
    .meaning = "pron.一个人,任何人,一方 num.一,一个adj.一方的,某一,同样的"};

String_and_meaning String_and_meaning_oneself = {
    .string = "oneself",
    .meaning = "pron. 自己；亲自；（不受他人影响的）自己"};

String_and_meaning String_and_meaning_onion = {
    .string = "onion",
    .meaning = "n. 洋葱；洋葱头"};

String_and_meaning String_and_meaning_only = {
    .string = "only",
    .meaning = "adv. 只，仅仅；不料adj. 唯一的，仅有的；最合适的conj. 但是；不过；可是"};

String_and_meaning String_and_meaning_onto = {
    .string = "onto",
    .meaning = "prep.在...之上"};

String_and_meaning String_and_meaning_opaque = {
    .string = "opaque",
    .meaning = "adj. 不透明的；不传热的；迟钝的n. 不透明物vt. 使不透明；使不反光"};

String_and_meaning String_and_meaning_open = {
    .string = "open",
    .meaning = "adj. 公开的；敞开的；空旷的；坦率的；营业着的vi. 开始；展现vt. 公开；打开n. 公开；空旷；户外"};

String_and_meaning String_and_meaning_opening = {
    .string = "opening",
    .meaning = "n. 开始；机会；通路；空缺的职位adj. 开始的v. 开放（open的ing形式）；打开；公开"};

String_and_meaning String_and_meaning_opera = {
    .string = "opera",
    .meaning = "n. 歌剧；歌剧院；歌剧团n. (Opera)人名；(意)奥佩拉"};

String_and_meaning String_and_meaning_operate = {
    .string = "operate",
    .meaning = "vi. 运转；动手术；起作用vt. 操作；经营；引起；对…开刀；行动"};

String_and_meaning String_and_meaning_operation = {
    .string = "operation",
    .meaning = "n. 操作；经营；[外科] 手术；[数][计] 运算"};

String_and_meaning String_and_meaning_operational = {
    .string = "operational",
    .meaning = "adj. 操作的；运作的"};

String_and_meaning String_and_meaning_operator = {
    .string = "operator",
    .meaning = "n. 经营者；操作员；运营商；话务员；行家；接线员"};

String_and_meaning String_and_meaning_opinion = {
    .string = "opinion",
    .meaning = "n. 意见；主张"};

String_and_meaning String_and_meaning_opponent = {
    .string = "opponent",
    .meaning = "n. 对手；反对者；敌手adj. 对立的；敌对的"};

String_and_meaning String_and_meaning_opportunity = {
    .string = "opportunity",
    .meaning = "n. 时机，机会"};

String_and_meaning String_and_meaning_oppose = {
    .string = "oppose",
    .meaning = "vt. 反对；对抗，抗争vi. 反对"};

String_and_meaning String_and_meaning_opposite = {
    .string = "opposite",
    .meaning = "adj. 相反的；对面的；对立的n. 对立面；反义词prep. 在…的对面adv. 在对面"};

String_and_meaning String_and_meaning_oppress = {
    .string = "oppress",
    .meaning = "vt. 压迫，压抑；使……烦恼；使……感到沉重"};

String_and_meaning String_and_meaning_optical = {
    .string = "optical",
    .meaning = "adj. 光学的；眼睛的，视觉的"};

String_and_meaning String_and_meaning_optimism = {
    .string = "optimism",
    .meaning = "n. 乐观；乐观主义"};

String_and_meaning String_and_meaning_optimistic = {
    .string = "optimistic",
    .meaning = "adj. 乐观的；乐观主义的"};

String_and_meaning String_and_meaning_optimum = {
    .string = "optimum",
    .meaning = "adj. 最适宜的n. 最佳效果；最适宜条件"};

String_and_meaning String_and_meaning_option = {
    .string = "option",
    .meaning = "n. [计] 选项；选择权；买卖的特权"};

String_and_meaning String_and_meaning_optional = {
    .string = "optional",
    .meaning = "adj. 可选择的，随意的"};

String_and_meaning String_and_meaning_or = {
    .string = "or",
    .meaning = "conj. 或，或者；还是；要不然n. (Or)人名；(中)柯(广东话·威妥玛)；(柬)奥；(土、匈、土库、阿塞、瑞典)奥尔"};

String_and_meaning String_and_meaning_oral = {
    .string = "oral",
    .meaning = "adj. 口头的，口述的n. 口试n. (Oral)人名；(土)奥拉尔"};

String_and_meaning String_and_meaning_orange = {
    .string = "orange",
    .meaning = "n.柑,桔,橙,橙色"};

String_and_meaning String_and_meaning_orbit = {
    .string = "orbit",
    .meaning = "n. 轨道；眼眶；势力范围；生活常规vi. 盘旋；绕轨道运行vt. 绕…轨道而行"};

String_and_meaning String_and_meaning_orchestra = {
    .string = "orchestra",
    .meaning = "n. 管弦乐队；乐队演奏处"};

String_and_meaning String_and_meaning_order = {
    .string = "order",
    .meaning = "n. 命令；顺序；规则；订单；（生物学）目vt. 命令；整理；订购vi. 命令；订货"};

String_and_meaning String_and_meaning_orderly = {
    .string = "orderly",
    .meaning = "adj. 有秩序的；整齐的；值班的n. 勤务兵；传令兵；护理员adv. 有秩序地"};

String_and_meaning String_and_meaning_ordinary = {
    .string = "ordinary",
    .meaning = "adj. 普通的；平凡的；平常的n. 普通；平常的人（或事）"};

String_and_meaning String_and_meaning_ore = {
    .string = "ore",
    .meaning = "n. 矿；矿石n. (Ore)人名；(意、瑞典)奥雷；(英)奥尔"};

String_and_meaning String_and_meaning_organ = {
    .string = "organ",
    .meaning = "n. 器官；机构；风琴；管风琴；嗓音；阴茎n. （Organ）人名；（英）奥根"};

String_and_meaning String_and_meaning_organic = {
    .string = "organic",
    .meaning = "adj. [有化] 有机的；组织的；器官的；根本的"};

String_and_meaning String_and_meaning_organism = {
    .string = "organism",
    .meaning = "n. 有机体；生物体；微生物"};

String_and_meaning String_and_meaning_organization = {
    .string = "organization",
    .meaning = "n. 组织；机构；体制；团体"};

String_and_meaning String_and_meaning_organize = {
    .string = "organize",
    .meaning = "vt. 组织；使有系统化；给予生机；组织成立工会等vi. 组织起来；成立组织"};

String_and_meaning String_and_meaning_orient = {
    .string = "orient",
    .meaning = "n.东方,东方诸国(指地中海以东各国)adj.东方的,上升的,灿烂的vi.适应形势,向东vt.使朝东,使适应,确定方向"};

String_and_meaning String_and_meaning_oriental = {
    .string = "oriental",
    .meaning = "adj. 东方的；东方人的n. 东方人"};

String_and_meaning String_and_meaning_orientation = {
    .string = "orientation",
    .meaning = "n. 方向；定向；适应；情况介绍"};

String_and_meaning String_and_meaning_origin = {
    .string = "origin",
    .meaning = "n. 起源；原点；出身；开端"};

String_and_meaning String_and_meaning_original = {
    .string = "original",
    .meaning = "adj.最初的,原始的,独创的,新颖的n.原物,原作"};

String_and_meaning String_and_meaning_originate = {
    .string = "originate",
    .meaning = "vt. 引起；创作vi. 发源；发生；起航"};

String_and_meaning String_and_meaning_ornament = {
    .string = "ornament",
    .meaning = "n. 装饰；[建][服装] 装饰物；教堂用品vt. 装饰，修饰"};

String_and_meaning String_and_meaning_orphan = {
    .string = "orphan",
    .meaning = "n. 孤儿；孤行v. 使成为孤儿adj. 孤儿的；无双亲的"};

String_and_meaning String_and_meaning_Orthodox = {
    .string = "Orthodox",
    .meaning = "adj. 东正教派的；正教的n. 东正教徒；正教徒adj. (orthodax) 正统的；传统的；惯常的；普通的n. (orthodax) 正统的人；正统的事物"};

String_and_meaning String_and_meaning_other = {
    .string = "other",
    .meaning = "adj. 其他的，另外的pron. 另外一个"};

String_and_meaning String_and_meaning_otherwise = {
    .string = "otherwise",
    .meaning = "adv. 否则；另外；在其他方面adj. 另外的；其他方面的；原本，本来conj. 其他；如果不；然后"};

String_and_meaning String_and_meaning_ought = {
    .string = "ought",
    .meaning = "v. （表示责任、愿望或忠告等）应该，应当；（表示可能）大概，应该n. 责任，义务pron. （古）任何事物（等于 aught）"};

String_and_meaning String_and_meaning_ounce = {
    .string = "ounce",
    .meaning = "n. 盎司；少量；雪豹"};

String_and_meaning String_and_meaning_our = {
    .string = "our",
    .meaning = "pron. 我们的"};

String_and_meaning String_and_meaning_ours = {
    .string = "ours",
    .meaning = "pron. 我们的，属于我们的n. (Ours) （美）乌尔斯（人名）"};

String_and_meaning String_and_meaning_ourselves = {
    .string = "ourselves",
    .meaning = "pron. 我们自己；我们亲自"};

String_and_meaning String_and_meaning_out = {
    .string = "out",
    .meaning = "adj.外面的,下台的,出局的adv.在外,出声地,显露出来地,明显地,从头至尾地n.外面,外出,外观vt.赶出,击倒,使退场vi.外出,暴露 prep.通过"};

String_and_meaning String_and_meaning_outcome = {
    .string = "outcome",
    .meaning = "n. 结果，结局；成果"};

String_and_meaning String_and_meaning_outdoor = {
    .string = "outdoor",
    .meaning = "adj. 户外的；露天的；野外的（等于out-of-door）"};

String_and_meaning String_and_meaning_outdoors = {
    .string = "outdoors",
    .meaning = "adv. 在户外n. 户外adj. 户外的（等于outdoor）"};

String_and_meaning String_and_meaning_outer = {
    .string = "outer",
    .meaning = "adj. 外面的，外部的；远离中心的n. 环外命中"};

String_and_meaning String_and_meaning_outlet = {
    .string = "outlet",
    .meaning = "n. 出口，排放孔；[电] 电源插座；销路；发泄的方法；批发商店"};

String_and_meaning String_and_meaning_outline = {
    .string = "outline",
    .meaning = "n. 轮廓；大纲；概要；略图vt. 概述；略述；描画…轮廓"};

String_and_meaning String_and_meaning_outlook = {
    .string = "outlook",
    .meaning = "n. 展望；态度，观点；景色vt. 比……好看；用目光压倒vi. 朝外看"};

String_and_meaning String_and_meaning_output = {
    .string = "output",
    .meaning = "n. 输出，输出量；产量；出产vt. 输出"};

String_and_meaning String_and_meaning_outset = {
    .string = "outset",
    .meaning = "n. 开始；开端"};

String_and_meaning String_and_meaning_outside = {
    .string = "outside",
    .meaning = "n.外面,外表,外界adj.外面的,外表的,外界的adv.在外面,外表,出界 prep.在...外"};

String_and_meaning String_and_meaning_outskirt = {
    .string = "outskirt",
    .meaning = "n. 郊区，市郊"};

String_and_meaning String_and_meaning_outstanding = {
    .string = "outstanding",
    .meaning = "adj. 杰出的；显著的；未解决的；未偿付的n. 未偿贷款"};

String_and_meaning String_and_meaning_outward = {
    .string = "outward",
    .meaning = "adj. 向外的；外面的；公开的；外服的；肉体的adv. 向外（等于outwards）；在外；显而易见地n. 外表；外面；物质世界"};

String_and_meaning String_and_meaning_outwards = {
    .string = "outwards",
    .meaning = "adv. 向外地"};

String_and_meaning String_and_meaning_oval = {
    .string = "oval",
    .meaning = "adj. 椭圆的；卵形的n. 椭圆形；卵形n. (Oval)人名；(法)奥瓦尔"};

String_and_meaning String_and_meaning_oven = {
    .string = "oven",
    .meaning = "n. 炉，灶；烤炉，烤箱n. (Oven)人名；(荷)奥芬"};

String_and_meaning String_and_meaning_over = {
    .string = "over",
    .meaning = "adv.结束,越过,从头到尾 prep.在...之上,越过adj.上面的vt.额外的东西,越过n.额外的东西"};

String_and_meaning String_and_meaning_overall = {
    .string = "overall",
    .meaning = "adj. 全部的；全体的；一切在内的adv. 全部地；总的说来n. 工装裤；罩衫"};

String_and_meaning String_and_meaning_overcoat = {
    .string = "overcoat",
    .meaning = "n. 大衣，外套"};

String_and_meaning String_and_meaning_overcome = {
    .string = "overcome",
    .meaning = "vt. 克服；胜过vi. 克服；得胜"};

String_and_meaning String_and_meaning_overflow = {
    .string = "overflow",
    .meaning = "v. （尤指液体）溢出；（容器）满得溢出；挤满人了；淹没（某一表面或地区）；过度延伸n. 泛滥；挤不下或多余的人（或物）；溢流管；数据过载"};

String_and_meaning String_and_meaning_overhead = {
    .string = "overhead",
    .meaning = "adj.在头上的,高架的n.企业一般管理费用,天花板adv.在头顶上,在空中,在高处"};

String_and_meaning String_and_meaning_overhear = {
    .string = "overhear",
    .meaning = "vt. 无意中听到；偷听vi. 无意中听到；偷听到"};

String_and_meaning String_and_meaning_overlap = {
    .string = "overlap",
    .meaning = "v.(与...)交迭"};

String_and_meaning String_and_meaning_overlook = {
    .string = "overlook",
    .meaning = "vt. 忽略；俯瞰；远眺；不计较，宽恕；施魔法于；监督；检查n. 忽视；眺望；从高处能看到的景色"};

String_and_meaning String_and_meaning_overnight = {
    .string = "overnight",
    .meaning = "adv. 在夜间；突然；一夜之间adj. 晚上的，只供一夜的；突然的v. 过夜；连夜快递（某物）n. 一夜的逗留"};

String_and_meaning String_and_meaning_overseas = {
    .string = "overseas",
    .meaning = "adv. 在海外，向国外adj. 海外的，国外的"};

String_and_meaning String_and_meaning_overtake = {
    .string = "overtake",
    .meaning = "vt. 赶上；压倒；突然来袭vi. 超车"};

String_and_meaning String_and_meaning_overthrow = {
    .string = "overthrow",
    .meaning = "v. 推翻，倾覆；瓦解；投（球）过远；背弃n. 推翻，打倒，倾覆；投球过猛；（拱门、门廊上方的）铁艺装饰板"};

String_and_meaning String_and_meaning_overtime = {
    .string = "overtime",
    .meaning = "n. [劳经] 加班时间；延长时间；加时赛adj. 超时的；加班的vt. 使超过时间adv. 加班地"};

String_and_meaning String_and_meaning_overwhelm = {
    .string = "overwhelm",
    .meaning = "vt. 淹没；压倒；受打击；覆盖；压垮"};

String_and_meaning String_and_meaning_owe = {
    .string = "owe",
    .meaning = "vt. 欠；感激；应给予；应该把……归功于vi. 欠钱n. (Owe)人名；(瑞典、挪)奥弗"};

String_and_meaning String_and_meaning_owl = {
    .string = "owl",
    .meaning = "n. 猫头鹰；枭；惯于晚上活动的人"};

String_and_meaning String_and_meaning_own = {
    .string = "own",
    .meaning = "vt. 拥有；承认vi. 承认adj. 自己的；特有的n. （Own）（阿拉伯）奥恩（人名）"};

String_and_meaning String_and_meaning_owner = {
    .string = "owner",
    .meaning = "n. [经] 所有者；物主"};

String_and_meaning String_and_meaning_ownership = {
    .string = "ownership",
    .meaning = "n. 所有权；物主身份"};

String_and_meaning String_and_meaning_ox = {
    .string = "ox",
    .meaning = "n. 牛；公牛"};

String_and_meaning String_and_meaning_oxide = {
    .string = "oxide",
    .meaning = "n. [化学] 氧化物"};

String_and_meaning String_and_meaning_pamphlet = {
    .string = "pamphlet",
    .meaning = "n. 小册子"};

String_and_meaning String_and_meaning_panic = {
    .string = "panic",
    .meaning = "n. 恐慌，惊慌；大恐慌adj. 恐慌的；没有理由的vt. 使恐慌vi. 十分惊慌n. (Panic)人名；(罗)帕尼克"};

String_and_meaning String_and_meaning_paradise = {
    .string = "paradise",
    .meaning = "n. 天堂至福境地"};

String_and_meaning String_and_meaning_paradox = {
    .string = "paradox",
    .meaning = "n. 悖论，反论；似是而非的论点；自相矛盾的人或事n. （Paradox）《杀破狼：贪狼》（一部剧情动作电影）"};

String_and_meaning String_and_meaning_paralyze = {
    .string = "paralyze",
    .meaning = "vt. 使麻痹；使瘫痪"};

String_and_meaning String_and_meaning_parameter = {
    .string = "parameter",
    .meaning = "n. 参数；系数；参量"};

String_and_meaning String_and_meaning_participant = {
    .string = "participant",
    .meaning = "n. 参与者，参加者adj. 参与的"};

String_and_meaning String_and_meaning_partition = {
    .string = "partition",
    .meaning = "n. 划分，分开；[数] 分割；隔墙；隔离物vt. [数] 分割；分隔；区分"};

String_and_meaning String_and_meaning_pastime = {
    .string = "pastime",
    .meaning = "n. 娱乐，消遣"};

String_and_meaning String_and_meaning_pasture = {
    .string = "pasture",
    .meaning = "n. 草地；牧场；牧草vt. 放牧；吃草n. (Pasture)人名；(英)帕斯彻；(法)帕斯蒂尔"};

String_and_meaning String_and_meaning_patent = {
    .string = "patent",
    .meaning = "n. 专利权；专利证；专利品adj. 专利的；特许生产或销售的；显著的；公开的；（脉管等）开放的v. 取得……的专利权；授予专利"};

String_and_meaning String_and_meaning_pathetic = {
    .string = "pathetic",
    .meaning = "adj. 可怜的，悲哀的；感伤的；乏味的"};

String_and_meaning String_and_meaning_patriotic = {
    .string = "patriotic",
    .meaning = "adj. 爱国的"};

String_and_meaning String_and_meaning_patrol = {
    .string = "patrol",
    .meaning = "n. 巡逻；巡逻队；侦察队vt. 巡逻；巡查vi. 巡逻；巡查"};

String_and_meaning String_and_meaning_pave = {
    .string = "pave",
    .meaning = "v. （用石板或砖）铺（路），铺砌，铺设；为某事物铺平道路，创造条件n. (Pave) （法、塞尔维亚、克罗地亚）帕韦（人名）"};

String_and_meaning String_and_meaning_pearl = {
    .string = "pearl",
    .meaning = "n. 珍珠；珍珠色；杰出者；珍品adj. 镶珍珠的；珍珠状的vi. 采珍珠；成珍珠状vt. 使成珠状；用珍珠装饰；使呈珍珠色"};

String_and_meaning String_and_meaning_pedal = {
    .string = "pedal",
    .meaning = "n. （车辆，乐器的）踏板v. 骑（自行车）；踩踏板adj. 脚的；脚踏的"};

String_and_meaning String_and_meaning_pedestrian = {
    .string = "pedestrian",
    .meaning = "adj. 徒步的；缺乏想像力的n. 行人；步行者"};

String_and_meaning String_and_meaning_peel = {
    .string = "peel",
    .meaning = "v. 剥，剥落；削；（槌球中）击（他人的球）穿过铁环门n. 皮n. (Peel)人名；(英)皮尔"};

String_and_meaning String_and_meaning_peer = {
    .string = "peer",
    .meaning = "n. 同等地位的人，同龄人；贵族v. 凝视，盯着看；隐现；看见；匹配n. (Peer) （美、爱、英）皮尔（人名）"};

String_and_meaning String_and_meaning_penalty = {
    .string = "penalty",
    .meaning = "n. 罚款，罚金；处罚"};

String_and_meaning String_and_meaning_pension = {
    .string = "pension",
    .meaning = "n. 退休金，抚恤金；津贴；膳宿费vt. 发给养老金或抚恤金"};

String_and_meaning String_and_meaning_perception = {
    .string = "perception",
    .meaning = "n. 认识能力；知觉，感觉；洞察力；看法；获取"};

String_and_meaning String_and_meaning_perfection = {
    .string = "perfection",
    .meaning = "n. 完善；完美"};

String_and_meaning String_and_meaning_perfume = {
    .string = "perfume",
    .meaning = "n. 香水；香味vt. 洒香水于…；使…带香味vi. 散发香气"};

String_and_meaning String_and_meaning_periodic = {
    .string = "periodic",
    .meaning = "adj. 周期的；定期的"};

String_and_meaning String_and_meaning_periodical = {
    .string = "periodical",
    .meaning = "adj. [数] 周期的；定期的n. 期刊；杂志"};

String_and_meaning String_and_meaning_perish = {
    .string = "perish",
    .meaning = "vt. 使麻木；毁坏vi. 死亡；毁灭；腐烂；枯萎"};

String_and_meaning String_and_meaning_perpetual = {
    .string = "perpetual",
    .meaning = "adj. 永久的；不断的；四季开花的；无期限的"};

String_and_meaning String_and_meaning_perplex = {
    .string = "perplex",
    .meaning = "vt. 使困惑，使为难；使复杂化"};

String_and_meaning String_and_meaning_pest = {
    .string = "pest",
    .meaning = "n. 害虫；有害之物；讨厌的人n. (Pest)人名；(德、捷)佩斯特"};

String_and_meaning String_and_meaning_petition = {
    .string = "petition",
    .meaning = "n. 请愿；请愿书；祈求；[法] 诉状vi. 请愿；请求vt. 请愿；请求；恳求"};

String_and_meaning String_and_meaning_petty = {
    .string = "petty",
    .meaning = "adj. 琐碎的；小气的；小规模的n. (Petty)人名；(英、法)佩蒂"};

String_and_meaning String_and_meaning_phase = {
    .string = "phase",
    .meaning = "n. 月相；时期，阶段vt. 分阶段进行；使定相"};

String_and_meaning String_and_meaning_phenomenon = {
    .string = "phenomenon",
    .meaning = "n. 现象；奇迹；杰出的人才"};

String_and_meaning String_and_meaning_philosopher = {
    .string = "philosopher",
    .meaning = "n. 哲学家；哲人"};

String_and_meaning String_and_meaning_philosophy = {
    .string = "philosophy",
    .meaning = "n. 哲学；哲理；人生观"};

String_and_meaning String_and_meaning_phone = {
    .string = "phone",
    .meaning = "n. 电话；耳机，听筒vt. 打电话vi. 打电话n. (Phone)人名；(老、缅)蓬"};

String_and_meaning String_and_meaning_photograph = {
    .string = "photograph",
    .meaning = "n. 照片，相片v. 摄影，为......照相；在照片上显得"};

String_and_meaning String_and_meaning_photographic = {
    .string = "photographic",
    .meaning = "adj. 摄影的；逼真的；（尤指记忆）详细准确的"};

String_and_meaning String_and_meaning_phrase = {
    .string = "phrase",
    .meaning = "n. 短语，习语，措辞，乐句v. 措词，将（乐曲）分成乐句"};

String_and_meaning String_and_meaning_physical = {
    .string = "physical",
    .meaning = "adj. 物理的；身体的；物质的；根据自然规律的，符合自然法则的n. 体格检查"};

String_and_meaning String_and_meaning_physician = {
    .string = "physician",
    .meaning = "n. 医师，内科医师；抚慰者"};

String_and_meaning String_and_meaning_physicist = {
    .string = "physicist",
    .meaning = "n. 物理学家；唯物论者"};

String_and_meaning String_and_meaning_physics = {
    .string = "physics",
    .meaning = "n. 物理学；物理现象"};

String_and_meaning String_and_meaning_piano = {
    .string = "piano",
    .meaning = "n. 钢琴n. (Piano)人名；(法、意、葡)皮亚诺"};

String_and_meaning String_and_meaning_pick = {
    .string = "pick",
    .meaning = "vi. 挑选；采摘；挖vt. 拾取；精选；采摘；掘n. 选择；鹤嘴锄；挖；掩护n. (Pick)人名；(英、法、德、捷、匈、瑞典)皮克"};

String_and_meaning String_and_meaning_picnic = {
    .string = "picnic",
    .meaning = "n. 野餐vi. 去野餐"};

String_and_meaning String_and_meaning_picture = {
    .string = "picture",
    .meaning = "n. 照片，图画；影片；景色；化身vt. 画；想像；描写"};

String_and_meaning String_and_meaning_pie = {
    .string = "pie",
    .meaning = "n. 馅饼；饼图；爱说话的人vt. 使杂乱"};

String_and_meaning String_and_meaning_piece = {
    .string = "piece",
    .meaning = "n. 块；件；篇；硬币vt. 修补；接合；凑合"};

String_and_meaning String_and_meaning_pierce = {
    .string = "pierce",
    .meaning = "v. （锋利尖锐物体）刺穿；穿孔于（耳朵、鼻子）；（光、声）穿透，刺破；突破n. 穿孔"};

String_and_meaning String_and_meaning_pig = {
    .string = "pig",
    .meaning = "n. 猪；猪肉vi. 生小猪；像猪一样过活n. 警察（俚语，带有攻击性）"};

String_and_meaning String_and_meaning_pigeon = {
    .string = "pigeon",
    .meaning = "n. 鸽子n. (Pigeon)人名；(法)皮容；(英)皮金"};

String_and_meaning String_and_meaning_pile = {
    .string = "pile",
    .meaning = "n. 堆；大量；建筑群vt. 累积；打桩于vi. 挤；堆积；积累n. (Pile)人名；(西)皮莱；(英)派尔"};

String_and_meaning String_and_meaning_pill = {
    .string = "pill",
    .meaning = "n. 药丸；弹丸，子弹；口服避孕药vt. 把…制成丸剂；使服用药丸；抢劫，掠夺（古语）vi. 做成药丸；服药丸n. (Pill)人名；(英)皮尔"};

String_and_meaning String_and_meaning_pillar = {
    .string = "pillar",
    .meaning = "n. 柱子，柱形物；栋梁；墩vt. 用柱支持n. (Pillar)人名；(英)皮勒"};

String_and_meaning String_and_meaning_pillow = {
    .string = "pillow",
    .meaning = "n. 枕头vt. 垫；枕于…；使…靠在vi. 枕着头；靠在枕上n. (Pillow)人名；(英)皮洛"};

String_and_meaning String_and_meaning_pilot = {
    .string = "pilot",
    .meaning = "n. 飞行员；领航员adj. 试点的v. 驾驶；领航；试用n. (Pilot)人名；(意、印)皮洛特；(法)皮洛"};

String_and_meaning String_and_meaning_pin = {
    .string = "pin",
    .meaning = "n. 大头针，别针，针；栓；琐碎物；引脚vt. 钉住；压住；将……用针别住"};

String_and_meaning String_and_meaning_pinch = {
    .string = "pinch",
    .meaning = "n.捏,撮,收缩,紧急关头,匮乏,压力vt.掐,夹痛,修剪,勒索,使感缺乏,使萎缩,偷vi.收缩,节省"};

String_and_meaning String_and_meaning_pine = {
    .string = "pine",
    .meaning = "n. 松树；松木；凤梨，菠萝v. 渴望；痛苦；憔悴；为……悲哀；哀悼n. (Pine) 派因（人名）"};

String_and_meaning String_and_meaning_pink = {
    .string = "pink",
    .meaning = "n.粉红色,石竹花,化身,极致,精华adj.粉红的vt.刺,扎,刺痛,使变粉红色vi.变粉红色"};

String_and_meaning String_and_meaning_pint = {
    .string = "pint",
    .meaning = "n. 品脱；一品脱的量；一品脱牛奶或啤酒n. (Pint)人名；(德、俄、匈)平特"};

String_and_meaning String_and_meaning_pioneer = {
    .string = "pioneer",
    .meaning = "n. 先锋；拓荒者vt. 开辟；倡导；提倡vi. 作先驱"};

String_and_meaning String_and_meaning_pipe = {
    .string = "pipe",
    .meaning = "n. 管；烟斗；笛vi. 吹笛；尖叫vt. 用管道输送；尖声唱；用管乐器演奏n. (Pipe)人名；(匈)皮佩；(英)派普"};

String_and_meaning String_and_meaning_pipeline = {
    .string = "pipeline",
    .meaning = "n. 管道；输油管；传递途径"};

String_and_meaning String_and_meaning_pistol = {
    .string = "pistol",
    .meaning = "n. 手枪；信号枪vt. 用手枪射击n. (Pistol)人名；(罗)皮斯托尔"};

String_and_meaning String_and_meaning_pit = {
    .string = "pit",
    .meaning = "n.深坑,深渊,陷阱,(物体或人体表面上的)凹陷,(英国剧场的)正厅后排、正厅后排的观众vt.窖藏,使凹下,去...之核,使留疤痕,使竞争vi.起凹点,凹陷"};

String_and_meaning String_and_meaning_pitch = {
    .string = "pitch",
    .meaning = "n.程度,斜度,树脂,投掷,定调,(船只)前后颠簸,倾斜,沥青vt.投,掷,向前倾跌,定位于,用沥青涂,扎营vi.搭帐篷,投掷,坠落,倾斜"};

String_and_meaning String_and_meaning_pity = {
    .string = "pity",
    .meaning = "n. 怜悯，同情；遗憾vt. 对……表示怜悯；对……感到同情"};

String_and_meaning String_and_meaning_place = {
    .string = "place",
    .meaning = "n. 地方；住所；座位vt. 放置；任命；寄予vi. 名列前茅；取得名次n. (Place)人名；(罗)普拉切；(法)普拉斯；(英)普莱斯"};

String_and_meaning String_and_meaning_plague = {
    .string = "plague",
    .meaning = "n. 瘟疫，鼠疫；灾祸，天灾；麻烦事，讨厌的人；愿上天降灾难于……（用于诅咒）v. 使折磨，使苦恼；纠缠，缠扰；使得灾祸"};

String_and_meaning String_and_meaning_plain = {
    .string = "plain",
    .meaning = "adj. 平的；简单的；朴素的；清晰的n. 平原；无格式；朴实无华的东西adv. 清楚地；平易地n. (Plain)人名；(英)普莱恩；(法)普兰"};

String_and_meaning String_and_meaning_plan = {
    .string = "plan",
    .meaning = "n. 计划；平面图vt. 计划；设计；打算vi. 计划；打算n. (Plan)人名；(瑞典)普兰；(法)普朗"};

String_and_meaning String_and_meaning_plane = {
    .string = "plane",
    .meaning = "n. 飞机；平面；程度，水平vi. 刨；乘飞机旅行；翱翔vt. 刨平；用刨子刨；掠过水面adj. 平的；平面的n. (Plane)人名；(塞、瑞典、法)普拉内"};

String_and_meaning String_and_meaning_planet = {
    .string = "planet",
    .meaning = "n. 行星n. (Planet)人名；(法)普拉内；(西、葡)普拉内特"};

String_and_meaning String_and_meaning_plant = {
    .string = "plant",
    .meaning = "n. 工厂，车间；植物；设备；庄稼vt. 种植；培养；栽培；安置vi. 种植n. （Plant）（英、西、意）普兰特（人名）；（法）普朗（人名）"};

String_and_meaning String_and_meaning_plantation = {
    .string = "plantation",
    .meaning = "n. 栽植；殖民；大农场adj. 适用于种植园或热带、亚热带国家的"};

String_and_meaning String_and_meaning_plaster = {
    .string = "plaster",
    .meaning = "n. 石膏；灰泥；膏药vt. 减轻；粘贴；涂以灰泥；敷以膏药；使平服n. (Plaster)人名；(英、德)普拉斯特"};

String_and_meaning String_and_meaning_plastic = {
    .string = "plastic",
    .meaning = "n. 塑料；塑料学；非正式信用卡adj. 塑料制的；人造的，不自然的；（物质、材料）可塑的；产生立体感的；塑性的；有创造力的；适应环境变化的"};

String_and_meaning String_and_meaning_plate = {
    .string = "plate",
    .meaning = "n. 碟；金属板；金属牌；感光底片vt. 电镀；给…装甲n. (Plate)人名；(英、德、俄、西、意、瑞典)普拉特"};

String_and_meaning String_and_meaning_plateau = {
    .string = "plateau",
    .meaning = "n. 高原；稳定水平；托盘；平顶女帽vi. 达到平衡；达到稳定时期"};

String_and_meaning String_and_meaning_platform = {
    .string = "platform",
    .meaning = "n. 平台；月台，站台；坛；讲台；厚底松糕鞋"};

String_and_meaning String_and_meaning_play = {
    .string = "play",
    .meaning = "vt. 游戏；扮演；演奏；播放；同…比赛vi. 演奏；玩耍；上演；参加比赛n. 游戏；比赛；剧本n. (Play)人名；(法、瑞典)普莱"};

String_and_meaning String_and_meaning_player = {
    .string = "player",
    .meaning = "n. 运动员，比赛者；游戏者，做游戏的人；演奏者，表演者；演员；播放器"};

String_and_meaning String_and_meaning_playground = {
    .string = "playground",
    .meaning = "n. 运动场，操场；游乐场"};

String_and_meaning String_and_meaning_plea = {
    .string = "plea",
    .meaning = "n. 恳求，请求；辩解，辩护；借口，托辞"};

String_and_meaning String_and_meaning_plead = {
    .string = "plead",
    .meaning = "vt. 借口；为...辩护；托称vi. 恳求；辩护"};

String_and_meaning String_and_meaning_pleasant = {
    .string = "pleasant",
    .meaning = "adj. 令人愉快的；舒适的；讨人喜欢的；和蔼可亲的n. （Pleasant）（英）普莱曾特（人名）"};

String_and_meaning String_and_meaning_please = {
    .string = "please",
    .meaning = "vt. 使喜欢；使高兴，使满意vi. 讨人喜欢；令人高兴int. 请（礼貌用语）"};

String_and_meaning String_and_meaning_pleasure = {
    .string = "pleasure",
    .meaning = "n. 快乐；希望；娱乐；令人高兴的事vt. 使高兴；使满意vi. 高兴；寻欢作乐"};

String_and_meaning String_and_meaning_pledge = {
    .string = "pledge",
    .meaning = "n. 保证，誓言；抵押；抵押品，典当物vt. 保证，许诺；用……抵押；举杯祝……健康n. (Pledge)人名；(英)普莱奇"};

String_and_meaning String_and_meaning_plentiful = {
    .string = "plentiful",
    .meaning = "adj. 丰富的；许多的；丰饶的；众多的"};

String_and_meaning String_and_meaning_plenty = {
    .string = "plenty",
    .meaning = "n. 丰富，大量；充足adj. 足够的，很多的adv. 足够pron. 大量；充足；富裕n. （Plenty）普伦蒂（人名）"};

String_and_meaning String_and_meaning_plot = {
    .string = "plot",
    .meaning = "n. 情节；图表；阴谋；（专用的）小块土地vt. 密谋；绘图；划分；标绘vi. 密谋；策划；绘制n. （Plot）（捷、法）普洛特；普洛（人名）"};

String_and_meaning String_and_meaning_plough = {
    .string = "plough",
    .meaning = "vt. 犁；耕vi. 用犁耕田；开路n. 犁；耕地（等于plow）n. (Plough)人名；(英)普劳"};

String_and_meaning String_and_meaning_pluck = {
    .string = "pluck",
    .meaning = "n.勇气v.拔去(鸡、鸭等)毛,采集"};

String_and_meaning String_and_meaning_plug = {
    .string = "plug",
    .meaning = "n. 插头；塞子；栓vi. 塞住；用插头将与电源接通vt. 插入；塞住；接插头"};

String_and_meaning String_and_meaning_plunge = {
    .string = "plunge",
    .meaning = "v. 使突然地下落；猛插；骤降；陡峭地向下倾斜；颠簸；跳进；（使）陷入；栽种n. 突然跌落；（价格、数量等）骤降；投入；跳进；跳水，快速游泳"};

String_and_meaning String_and_meaning_plural = {
    .string = "plural",
    .meaning = "adj. （语法）复数（形式）的；多样的n. （语法）复数（形式）；（讽）黑人"};

String_and_meaning String_and_meaning_plus = {
    .string = "plus",
    .meaning = "prep.加上adj.正的,加的"};

String_and_meaning String_and_meaning_pocket = {
    .string = "pocket",
    .meaning = "n. 口袋；钱；容器vt. 隐藏；忍受；将…放入衣袋vi. 形成袋或囊adj. 小型的，袖珍的；金钱上的"};

String_and_meaning String_and_meaning_poem = {
    .string = "poem",
    .meaning = "n. 诗"};

String_and_meaning String_and_meaning_poet = {
    .string = "poet",
    .meaning = "n. 诗人"};

String_and_meaning String_and_meaning_poetry = {
    .string = "poetry",
    .meaning = "n. 诗；诗意，诗情；诗歌艺术"};

String_and_meaning String_and_meaning_point = {
    .string = "point",
    .meaning = "n. 要点；得分；标点；[机] 尖端vt. 指向；弄尖；加标点于vi. 表明；指向n. (Point)人名；(法)普安"};

String_and_meaning String_and_meaning_poison = {
    .string = "poison",
    .meaning = "n.毒药,败坏道德之事,毒害vt.毒害,败坏,使中毒vi.放毒,下毒"};

String_and_meaning String_and_meaning_poisonous = {
    .string = "poisonous",
    .meaning = "adj. 有毒的；恶毒的；讨厌的"};

String_and_meaning String_and_meaning_poke = {
    .string = "poke",
    .meaning = "vi. 刺，捅；戳；伸出；刺探；闲荡vt. 刺，捅；戳；拨开n. 戳；刺；袋子；懒汉"};

String_and_meaning String_and_meaning_polar = {
    .string = "polar",
    .meaning = "adj. 极地的；两极的；正好相反的n. 极面；极线n. (Polar)人名；(德、西)波拉尔"};

String_and_meaning String_and_meaning_pole = {
    .string = "pole",
    .meaning = "n. 杆；极点；电极vt. 用竿支撑n. (Pole)人名；(英)波尔；(俄)波列；(塞)波莱"};

String_and_meaning String_and_meaning_police = {
    .string = "police",
    .meaning = "n. 警察，警方；治安vt. 监督；管辖；维持治安；为…配备警察adj. 警察的；有关警察的"};

String_and_meaning String_and_meaning_policeman = {
    .string = "policeman",
    .meaning = "n. 警察，警员；[分化] 淀帚（橡皮头玻璃搅棒）"};

String_and_meaning String_and_meaning_policy = {
    .string = "policy",
    .meaning = "n. 政策，方针；保险单"};

String_and_meaning String_and_meaning_polish = {
    .string = "polish",
    .meaning = "n.磨光,光泽,上光剂,优雅,精良vt.擦亮,发亮,磨光,推敲vi.发亮,变光滑adj.波兰的n.波兰人 Polish 波兰(Poland)的"};

String_and_meaning String_and_meaning_Polish = {
    .string = "Polish",
    .meaning = "adj. 波兰的n. 波兰人；波兰语"};

String_and_meaning String_and_meaning_polite = {
    .string = "polite",
    .meaning = "adj. 有礼貌的，客气的；文雅的；上流的；优雅的"};

String_and_meaning String_and_meaning_political = {
    .string = "political",
    .meaning = "adj. 政治的；党派的"};

String_and_meaning String_and_meaning_politician = {
    .string = "politician",
    .meaning = "n. 政治家，政客"};

String_and_meaning String_and_meaning_politics = {
    .string = "politics",
    .meaning = "n. 政治，政治学；政治活动；政纲"};

String_and_meaning String_and_meaning_poll = {
    .string = "poll",
    .meaning = "n.选举之投票,民意测验v.投票,获得选票,选举中获得"};

String_and_meaning String_and_meaning_pollute = {
    .string = "pollute",
    .meaning = "vt. 污染；玷污；败坏"};

String_and_meaning String_and_meaning_pollution = {
    .string = "pollution",
    .meaning = "n. 污染；污染物"};

String_and_meaning String_and_meaning_pond = {
    .string = "pond",
    .meaning = "n. 池塘；(the pond) （非正式）大西洋v. 拦截（流水等液体）形成小湖n. (Pond) （美、爱）庞德（人名）"};

String_and_meaning String_and_meaning_ponder = {
    .string = "ponder",
    .meaning = "vt. 仔细考虑；衡量vi. 考虑；沉思n. (Ponder)人名；(英)庞德"};

String_and_meaning String_and_meaning_pool = {
    .string = "pool",
    .meaning = "n. 联营；撞球；水塘；共同资金vi. 联营，合伙经营vt. 合伙经营n. (Pool)人名；(英、西)普尔；(芬、德)波尔"};

String_and_meaning String_and_meaning_poor = {
    .string = "poor",
    .meaning = "adj. 贫穷的；可怜的；贫乏的；卑鄙的n. (Poor) （美）普尔（人名）"};

String_and_meaning String_and_meaning_pop = {
    .string = "pop",
    .meaning = "n.取出,砰然声,枪击,流行乐曲;adj.流行的,热门的,通俗的;vt.开枪打,抛出,取出,突然伸出,突然行动;adv.突然,砰地;vi.发出爆裂声,爆开,射击,突然出现,瞪大;n.口汽水;Post Office Protocol,电子邮件协议"};

String_and_meaning String_and_meaning_Pope = {
    .string = "Pope",
    .meaning = "n. 蒲伯（英国诗人）；罗马教皇"};

String_and_meaning String_and_meaning_popular = {
    .string = "popular",
    .meaning = "adj. 流行的，通俗的；受欢迎的；大众的；普及的"};

String_and_meaning String_and_meaning_population = {
    .string = "population",
    .meaning = "n. 人口；[生物] 种群，[生物] 群体；全体居民；[统计学] 总体"};

String_and_meaning String_and_meaning_porch = {
    .string = "porch",
    .meaning = "n. 门廊；走廊"};

String_and_meaning String_and_meaning_pore = {
    .string = "pore",
    .meaning = "n. （皮肤上的）毛孔；（植物的）气孔，孔隙v.  仔细打量，审视；凝视；认真研读，审阅；深思熟虑n. (Pore) （美、印）波雷（人名）"};

String_and_meaning String_and_meaning_pork = {
    .string = "pork",
    .meaning = "n. 猪肉vt. 与女子性交n. (Pork)人名；(俄)波尔克"};

String_and_meaning String_and_meaning_porridge = {
    .string = "porridge",
    .meaning = "n. 粥，糊；麦片粥vt. 服刑"};

String_and_meaning String_and_meaning_port = {
    .string = "port",
    .meaning = "n. 港口，口岸；（计算机的）端口；左舷；舱门vi. 转向左舷vt. 持（枪）；左转舵n. (Port)人名；(英)波特；(法)波尔；(德、俄、匈、捷)波尔特"};

String_and_meaning String_and_meaning_portable = {
    .string = "portable",
    .meaning = "adj. 手提的，便携式的；轻便的n. 手提式打字机"};

String_and_meaning String_and_meaning_porter = {
    .string = "porter",
    .meaning = "n. 门房；服务员；行李搬运工；守门人n. (Porter)人名；(英、西、葡)波特；(德)波特"};

String_and_meaning String_and_meaning_portion = {
    .string = "portion",
    .meaning = "n. 部分；一份；命运vt. 分配；给…嫁妆"};

String_and_meaning String_and_meaning_portrait = {
    .string = "portrait",
    .meaning = "n. 肖像；描写；半身雕塑像n. (Portrait)人名；(法)波特雷"};

String_and_meaning String_and_meaning_portray = {
    .string = "portray",
    .meaning = "vt. 描绘；扮演"};

String_and_meaning String_and_meaning_Portugal = {
    .string = "Portugal",
    .meaning = "n. 葡萄牙（欧洲西南部国家）"};

String_and_meaning String_and_meaning_Portuguese = {
    .string = "Portuguese",
    .meaning = "adj. 葡萄牙的；葡萄牙人的；葡萄牙语的；葡萄牙文化的n. 葡萄牙语；葡萄牙人"};

String_and_meaning String_and_meaning_pose = {
    .string = "pose",
    .meaning = "vt. 造成，形成；摆姿势；装模作样；提出…讨论vi. 摆姿势；佯装；矫揉造作n. 姿势，姿态；装模作样"};

String_and_meaning String_and_meaning_position = {
    .string = "position",
    .meaning = "n. 位置；姿态；处境，地位；观点；职位，工作；站位v. 安置；把……放在适当位置"};

String_and_meaning String_and_meaning_positive = {
    .string = "positive",
    .meaning = "adj. 积极的；[数] 正的，[医][化学] 阳性的；确定的，肯定的；实际的，真实的；绝对的n. 正数；[摄] 正片"};

String_and_meaning String_and_meaning_possess = {
    .string = "possess",
    .meaning = "vt. 控制；使掌握；持有；迷住；拥有，具备"};

String_and_meaning String_and_meaning_possession = {
    .string = "possession",
    .meaning = "n. 拥有；财产；领地；自制；着迷"};

String_and_meaning String_and_meaning_possibility = {
    .string = "possibility",
    .meaning = "n. 可能性；可能发生的事物"};

String_and_meaning String_and_meaning_possible = {
    .string = "possible",
    .meaning = "adj. 可能的；合理的；合适的n. 可能性；合适的人；可能的事物"};

String_and_meaning String_and_meaning_possibly = {
    .string = "possibly",
    .meaning = "adv. 可能地；也许；大概"};

String_and_meaning String_and_meaning_post = {
    .string = "post",
    .meaning = "n. 岗位；邮件；标杆vt. 张贴；公布；邮递；布置vi. 快速行进n. (Post)人名；(英、西、捷、瑞典、荷)波斯特"};

String_and_meaning String_and_meaning_postage = {
    .string = "postage",
    .meaning = "n. 邮资，邮费"};

String_and_meaning String_and_meaning_poster = {
    .string = "poster",
    .meaning = "n. 海报，广告；招贴n. (Poster)人名；(英)波斯特"};

String_and_meaning String_and_meaning_postman = {
    .string = "postman",
    .meaning = "n. 邮递员；邮差"};

String_and_meaning String_and_meaning_postpone = {
    .string = "postpone",
    .meaning = "vt. 使……延期；把……放在次要地位；把……放在后面vi. 延缓，延迟；延缓发作"};

String_and_meaning String_and_meaning_postulate = {
    .string = "postulate",
    .meaning = "vt. 假定；要求；视…为理所当然n. 基本条件；假定"};

String_and_meaning String_and_meaning_pot = {
    .string = "pot",
    .meaning = "n. 壶；盆；罐vt. 把…装罐；射击；节略vi. 随手射击n. (Pot)人名；(柬)布特；(捷)波特；(法)波"};

String_and_meaning String_and_meaning_potato = {
    .string = "potato",
    .meaning = "n. [作物] 土豆，[作物] 马铃薯"};

String_and_meaning String_and_meaning_potential = {
    .string = "potential",
    .meaning = "adj. 潜在的，可能的；势的n. 潜能，可能性；电势"};

String_and_meaning String_and_meaning_pound = {
    .string = "pound",
    .meaning = "n. 英镑；重击，重击声；兽栏；拘留所vt. 捣烂；敲打；监禁，拘留vi. 连续重击，猛击n. (Pound)人名；(英)庞德"};

String_and_meaning String_and_meaning_pour = {
    .string = "pour",
    .meaning = "v. 灌，倒；倾泻；（雨）倾盆而下；涌进，涌出；斟（饮料）；纷至沓来n. 灌，注；倾泻；倾盆大雨n. (Pour)（美、捷）保尔（人名）"};

String_and_meaning String_and_meaning_poverty = {
    .string = "poverty",
    .meaning = "n. 贫困；困难；缺少；低劣"};

String_and_meaning String_and_meaning_powder = {
    .string = "powder",
    .meaning = "n. 粉；粉末；[化工][军] 火药；尘土vt. 使成粉末；撒粉；搽粉于vi. 搽粉；变成粉末"};

String_and_meaning String_and_meaning_power = {
    .string = "power",
    .meaning = "n.能力,力量,动力,权力,[数]幂,[物]功率vt.使...有力量,供以动力,激励"};

String_and_meaning String_and_meaning_powerful = {
    .string = "powerful",
    .meaning = "adj. 强大的；强有力的adv. 很；非常"};

String_and_meaning String_and_meaning_practicable = {
    .string = "practicable",
    .meaning = "adj. 可用的；行得通的；可实行的"};

String_and_meaning String_and_meaning_practical = {
    .string = "practical",
    .meaning = "adj. 实际的；实用性的"};

String_and_meaning String_and_meaning_practically = {
    .string = "practically",
    .meaning = "adv. 实际地；几乎；事实上"};

String_and_meaning String_and_meaning_practice = {
    .string = "practice",
    .meaning = "n. 实践；练习；惯例vi. 练习；实习；实行vt. 练习；实习；实行"};

String_and_meaning String_and_meaning_practise = {
    .string = "practise",
    .meaning = "v. 练习，实践；经常做；从事；实施，实行；信奉；阴谋策划"};

String_and_meaning String_and_meaning_praise = {
    .string = "praise",
    .meaning = "v. 赞扬；（尤指唱歌）歌颂（上帝）n. 赞扬，称赞；（对上帝的）颂扬；崇拜"};

String_and_meaning String_and_meaning_pray = {
    .string = "pray",
    .meaning = "vt. 祈祷；恳求；央求vi. 祈祷；请；恳求n. (Pray)人名；(匈)普劳伊；(英)普雷"};

String_and_meaning String_and_meaning_prayer = {
    .string = "prayer",
    .meaning = "n. 祈祷，祷告；恳求；祈祷文"};

String_and_meaning String_and_meaning_preach = {
    .string = "preach",
    .meaning = "vt. 说教；讲道；鼓吹；传道；反复灌输vi. 说教；讲道；鼓吹；宣扬n. 说教"};

String_and_meaning String_and_meaning_precaution = {
    .string = "precaution",
    .meaning = "n. 预防，警惕；预防措施vt. 警惕；预先警告"};

String_and_meaning String_and_meaning_precede = {
    .string = "precede",
    .meaning = "vt. 领先，在…之前；优于，高于vi. 领先，在前面"};

String_and_meaning String_and_meaning_preceding = {
    .string = "preceding",
    .meaning = "adj. 在前的；前述的v. 在...之前（precede的ing形式）"};

String_and_meaning String_and_meaning_precious = {
    .string = "precious",
    .meaning = "adj. 宝贵的；珍贵的；矫揉造作的n. (Precious)人名；(英)普雷舍斯，普雷舍丝(女名)"};

String_and_meaning String_and_meaning_precipitate = {
    .string = "precipitate",
    .meaning = "n.沉淀物vt.猛抛,使陷入,促成,使沉淀vi.猛地落下adj.突如其来的,陡然下降(或下落)的,贸然轻率的"};

String_and_meaning String_and_meaning_precise = {
    .string = "precise",
    .meaning = "adj. 精确的；明确的；严格的"};

String_and_meaning String_and_meaning_precision = {
    .string = "precision",
    .meaning = "n. 精度，[数] 精密度；精确adj. 精密的，精确的"};

String_and_meaning String_and_meaning_preclude = {
    .string = "preclude",
    .meaning = "vt. 排除；妨碍；阻止"};

String_and_meaning String_and_meaning_predecessor = {
    .string = "predecessor",
    .meaning = "n. 前任，前辈"};

String_and_meaning String_and_meaning_predict = {
    .string = "predict",
    .meaning = "v. 预言，预知，预卜；做预报；断言"};

String_and_meaning String_and_meaning_predominant = {
    .string = "predominant",
    .meaning = "adj. 主要的；卓越的；支配的；有力的；有影响的"};

String_and_meaning String_and_meaning_preface = {
    .string = "preface",
    .meaning = "n. 前言；引语vt. 为…加序言；以…开始vi. 作序"};

String_and_meaning String_and_meaning_prefer = {
    .string = "prefer",
    .meaning = "vt. 更喜欢；宁愿；提出；提升vi. 喜欢；愿意"};

String_and_meaning String_and_meaning_preferable = {
    .string = "preferable",
    .meaning = "adj. 更好的，更可取的；更合意的"};

String_and_meaning String_and_meaning_preference = {
    .string = "preference",
    .meaning = "n. 偏爱，倾向；优先权"};

String_and_meaning String_and_meaning_pregnant = {
    .string = "pregnant",
    .meaning = "adj. 怀孕的；富有意义的"};

String_and_meaning String_and_meaning_prejudice = {
    .string = "prejudice",
    .meaning = "n. 偏见；侵害vt. 损害；使有偏见"};

String_and_meaning String_and_meaning_preliminary = {
    .string = "preliminary",
    .meaning = "adj. 初步的；开始的；预备的n. 初步行动；准备工作；预赛，预试"};

String_and_meaning String_and_meaning_premature = {
    .string = "premature",
    .meaning = "adj. 早产的；不成熟的；比预期早的n. 早产儿；过早发生的事物"};

String_and_meaning String_and_meaning_premier = {
    .string = "premier",
    .meaning = "adj. 首要的；第一的；最初的n. 总理，首相；（加拿大的）地区总理"};

String_and_meaning String_and_meaning_premise = {
    .string = "premise",
    .meaning = "n. 前提，假定；（常复数）商店、餐馆、公司等使用的房屋及土地；（常复数）上诉各项v. 以……为前提；引出，预先提出；说明"};

String_and_meaning String_and_meaning_premium = {
    .string = "premium",
    .meaning = "n. 额外费用；奖金；保险费；溢价adj. 高价的；优质的"};

String_and_meaning String_and_meaning_preparation = {
    .string = "preparation",
    .meaning = "n. 预备；准备"};

String_and_meaning String_and_meaning_prepare = {
    .string = "prepare",
    .meaning = "vt. 准备；使适合；装备；起草vi. 预备；做好思想准备"};

String_and_meaning String_and_meaning_preposition = {
    .string = "preposition",
    .meaning = "n. 介词；前置词"};

String_and_meaning String_and_meaning_prescribe = {
    .string = "prescribe",
    .meaning = "vi. 规定；开药方vt. 规定；开处方"};

String_and_meaning String_and_meaning_prescription = {
    .string = "prescription",
    .meaning = "n. 药方；指示；惯例adj. 凭处方方可购买的"};

String_and_meaning String_and_meaning_presence = {
    .string = "presence",
    .meaning = "n. 存在；出席；参加；风度；仪态"};

String_and_meaning String_and_meaning_present = {
    .string = "present",
    .meaning = "n.赠品,礼物,现在,瞄准adj.现在的,出席的,当面的vt.介绍,引见,给,赠送,上演,提出,呈现vi.举枪瞄准"};

String_and_meaning String_and_meaning_presentation = {
    .string = "presentation",
    .meaning = "n. 展示；描述，陈述；介绍；赠送"};

String_and_meaning String_and_meaning_presently = {
    .string = "presently",
    .meaning = "adv. （美）目前；不久"};

String_and_meaning String_and_meaning_preserve = {
    .string = "preserve",
    .meaning = "vt. 保存；保护；维持；腌；禁猎n. 保护区；禁猎地；（某人或群体的）专门活动；果酱；蜜饯；腌菜"};

String_and_meaning String_and_meaning_preside = {
    .string = "preside",
    .meaning = "vi. 主持，担任会议主席vt. 管理"};

String_and_meaning String_and_meaning_president = {
    .string = "president",
    .meaning = "n. 总统；董事长；校长；主席；总裁"};

String_and_meaning String_and_meaning_press = {
    .string = "press",
    .meaning = "n.压,按,印刷,压力,拥挤,紧握,新闻vt.压,压榨,紧抱,逼迫vi.压,逼迫,拥挤,受压"};

String_and_meaning String_and_meaning_pressure = {
    .string = "pressure",
    .meaning = "n. 压力；压迫，[物] 压强vt. 迫使；密封；使……增压"};

String_and_meaning String_and_meaning_prestige = {
    .string = "prestige",
    .meaning = "n. 威望，声望；声誉adj. 令人敬仰的；受尊重的；贵重的n. （Prestige）（英）普雷斯蒂奇（人名）"};

String_and_meaning String_and_meaning_presumably = {
    .string = "presumably",
    .meaning = "adv. 大概；推测起来；可假定"};

String_and_meaning String_and_meaning_presume = {
    .string = "presume",
    .meaning = "vt. 假定；推测；擅自；意味着vi. 相信；擅自行为"};

String_and_meaning String_and_meaning_pretend = {
    .string = "pretend",
    .meaning = "vi. 假装，伪装，佯装adj. 假装的vt. 假装，伪装，模拟"};

String_and_meaning String_and_meaning_pretext = {
    .string = "pretext",
    .meaning = "n. 借口；托辞vt. 以…为借口"};

String_and_meaning String_and_meaning_pretty = {
    .string = "pretty",
    .meaning = "adj.漂亮的,可爱的,优美的,机灵的,恰当的"};

String_and_meaning String_and_meaning_prevail = {
    .string = "prevail",
    .meaning = "vi. 盛行，流行；战胜，获胜"};

String_and_meaning String_and_meaning_prevalent = {
    .string = "prevalent",
    .meaning = "adj. 流行的；普遍的，广传的"};

String_and_meaning String_and_meaning_prevent = {
    .string = "prevent",
    .meaning = "vt. 预防，防止；阻止vi. 妨碍，阻止"};

String_and_meaning String_and_meaning_previous = {
    .string = "previous",
    .meaning = "adj. 以前的；早先的；过早的adv. 在先；在…以前"};

String_and_meaning String_and_meaning_previously = {
    .string = "previously",
    .meaning = "adv. 以前；预先；仓促地"};

String_and_meaning String_and_meaning_prey = {
    .string = "prey",
    .meaning = "n. 猎物；受害者，牺牲品；（情绪易受伤的）脆弱的人；掠夺品v. 捕食；伤害；折磨，困扰n. (Prey) （美、德、爱）普赖（人名）"};

String_and_meaning String_and_meaning_price = {
    .string = "price",
    .meaning = "n. 价格；价值；代价vt. 给……定价；问……的价格n. (Price)人名；(英)普赖斯；(法)普里斯；(葡、瑞典)普里塞"};

String_and_meaning String_and_meaning_pride = {
    .string = "pride",
    .meaning = "n. 自豪；骄傲；自尊心；狮群vt. 使得意，以...自豪vi. 自豪n. （Pride）人名；（英）普赖德"};

String_and_meaning String_and_meaning_priest = {
    .string = "priest",
    .meaning = "n. 牧师；神父；教士vt. 使成为神职人员；任命…为祭司n. (Priest)人名；(英、德)普里斯特"};

String_and_meaning String_and_meaning_primarily = {
    .string = "primarily",
    .meaning = "adv. 首先；主要地，根本上"};

String_and_meaning String_and_meaning_primary = {
    .string = "primary",
    .meaning = "adj. 主要的；初级的；基本的n. 原色；最主要者"};

String_and_meaning String_and_meaning_prime = {
    .string = "prime",
    .meaning = "adj. 主要的；最好的；基本的adv. 极好地n. 初期；青年；精华；全盛时期vt. 使准备好；填装vi. 作准备n. (Prime)人名；(英)普赖姆；(德)普里梅"};

String_and_meaning String_and_meaning_primitive = {
    .string = "primitive",
    .meaning = "adj. 原始的，远古的；简单的，粗糙的n. 原始人"};

String_and_meaning String_and_meaning_prince = {
    .string = "prince",
    .meaning = "n. 王子，国君；亲王；贵族n. (Prince)人名；(英、葡)普林斯；(法)普兰斯；"};

String_and_meaning String_and_meaning_princess = {
    .string = "princess",
    .meaning = "n. 公主；王妃；女巨头n. (Princess)人名；(英)普琳西丝；"};

String_and_meaning String_and_meaning_principal = {
    .string = "principal",
    .meaning = "adj. 主要的；资本的n. 首长；校长；资本；当事人"};

String_and_meaning String_and_meaning_principle = {
    .string = "principle",
    .meaning = "n. 原理，原则；主义，道义；本质，本义；根源，源泉"};

String_and_meaning String_and_meaning_print = {
    .string = "print",
    .meaning = "n. 印刷业；印花布；印刷字体；印章；印记vt. 印刷；打印；刊载；用印刷体写；在…印花样vi. 印刷；出版；用印刷体写"};

String_and_meaning String_and_meaning_prior = {
    .string = "prior",
    .meaning = "adj.优先的,在前的n.预先adv.在"};

String_and_meaning String_and_meaning_priority = {
    .string = "priority",
    .meaning = "n. 优先；优先权；[数] 优先次序；优先考虑的事"};

String_and_meaning String_and_meaning_prison = {
    .string = "prison",
    .meaning = "n. 监狱；监禁；拘留所vt. 监禁，关押n. (Prison)人名；(德)普里松"};

String_and_meaning String_and_meaning_prisoner = {
    .string = "prisoner",
    .meaning = "n. 囚犯，犯人；俘虏；刑事被告"};

String_and_meaning String_and_meaning_privacy = {
    .string = "privacy",
    .meaning = "n. 隐私；秘密；隐居；隐居处"};

String_and_meaning String_and_meaning_private = {
    .string = "private",
    .meaning = "adj.私人的,私有的,私营的,秘密的n.士兵"};

String_and_meaning String_and_meaning_privilege = {
    .string = "privilege",
    .meaning = "n. 特权；优待vt. 给予…特权；特免"};

String_and_meaning String_and_meaning_prize = {
    .string = "prize",
    .meaning = "n. 奖品；奖赏；战利品vt. 珍视；捕获；估价adj. 获奖的"};

String_and_meaning String_and_meaning_probability = {
    .string = "probability",
    .meaning = "n. 可能性；机率；[数] 或然率"};

String_and_meaning String_and_meaning_probable = {
    .string = "probable",
    .meaning = "adj. 很可能的；可信的n. 很可能的事；大有希望的候选者"};

String_and_meaning String_and_meaning_probably = {
    .string = "probably",
    .meaning = "adv. 大概；或许；很可能"};

String_and_meaning String_and_meaning_probe = {
    .string = "probe",
    .meaning = "n. 探针；调查vi. 调查；探测vt. 探查；用探针探测n. (Probe)人名；(法)普罗布"};

String_and_meaning String_and_meaning_problem = {
    .string = "problem",
    .meaning = "n. 难题；引起麻烦的人adj. 成问题的；难处理的"};

String_and_meaning String_and_meaning_procedure = {
    .string = "procedure",
    .meaning = "n. 程序，手续；步骤"};

String_and_meaning String_and_meaning_proceed = {
    .string = "proceed",
    .meaning = "vi. 开始；继续进行；发生；行进n. 收入，获利"};

String_and_meaning String_and_meaning_proceeding = {
    .string = "proceeding",
    .meaning = "n. 进行；程序；诉讼；事项v. 开始；继续做；行进（proceed的ing形式）"};

String_and_meaning String_and_meaning_process = {
    .string = "process",
    .meaning = "n.过程,作用,方法,程序,步骤,进行,推移vt.加工,处理"};

String_and_meaning String_and_meaning_procession = {
    .string = "procession",
    .meaning = "n. 队伍，行列；一列，一排；列队行进vi. 列队行进vt. 沿著……行进"};

String_and_meaning String_and_meaning_proclaim = {
    .string = "proclaim",
    .meaning = "vt. 宣告，公布；声明；表明；赞扬"};

String_and_meaning String_and_meaning_produce = {
    .string = "produce",
    .meaning = "vt. 生产；引起；创作；生育，繁殖n. 农产品，产品vi. 生产，创作"};

String_and_meaning String_and_meaning_product = {
    .string = "product",
    .meaning = "n. 产品；结果；[数] 乘积；作品"};

String_and_meaning String_and_meaning_production = {
    .string = "production",
    .meaning = "n. 成果；产品；生产；作品"};

String_and_meaning String_and_meaning_productive = {
    .string = "productive",
    .meaning = "adj. 能生产的；生产的，生产性的；多产的；富有成效的"};

String_and_meaning String_and_meaning_productivity = {
    .string = "productivity",
    .meaning = "n. 生产力；生产率；生产能力"};

String_and_meaning String_and_meaning_profession = {
    .string = "profession",
    .meaning = "n. 职业，专业；声明，宣布，表白"};

String_and_meaning String_and_meaning_professional = {
    .string = "professional",
    .meaning = "adj. 专业的；职业的；职业性的n. 专业人员；职业运动员"};

String_and_meaning String_and_meaning_professor = {
    .string = "professor",
    .meaning = "n. 教授；教师；公开表示信仰的人"};

String_and_meaning String_and_meaning_proficiency = {
    .string = "proficiency",
    .meaning = "n. 精通，熟练"};

String_and_meaning String_and_meaning_profile = {
    .string = "profile",
    .meaning = "n. 侧面；轮廓；外形；剖面；简况vt. 描…的轮廓；扼要描述vi. 给出轮廓"};

String_and_meaning String_and_meaning_profit = {
    .string = "profit",
    .meaning = "n. 利润；利益vi. 获利；有益vt. 有益于n. （Profit）（法）普罗菲（人名）"};

String_and_meaning String_and_meaning_profitable = {
    .string = "profitable",
    .meaning = "adj. 有利可图的；赚钱的；有益的"};

String_and_meaning String_and_meaning_profound = {
    .string = "profound",
    .meaning = "adj. 深厚的；意义深远的；渊博的"};

String_and_meaning String_and_meaning_program = {
    .string = "program",
    .meaning = "n. 程序；计划；大纲vt. 用程序指令；为…制订计划；为…安排节目vi. 编程序；安排节目；设计电脑程式"};

String_and_meaning String_and_meaning_progress = {
    .string = "progress",
    .meaning = "n. 进步，发展；前进vi. 前进，进步；进行n. (Progress)人名；(赞)普罗格雷斯"};

String_and_meaning String_and_meaning_progressive = {
    .string = "progressive",
    .meaning = "adj. 进步的；先进的n. 改革论者；进步分子"};

String_and_meaning String_and_meaning_prohibit = {
    .string = "prohibit",
    .meaning = "vt. 阻止，禁止"};

String_and_meaning String_and_meaning_project = {
    .string = "project",
    .meaning = "n.计划,方案,事业,企业,工程v.设计,计划,投射,放映,射出,发射(导弹等),凸出"};

String_and_meaning String_and_meaning_prolong = {
    .string = "prolong",
    .meaning = "vt. 延长；拖延"};

String_and_meaning String_and_meaning_prominent = {
    .string = "prominent",
    .meaning = "adj. 突出的，显著的；杰出的；卓越的"};

String_and_meaning String_and_meaning_promise = {
    .string = "promise",
    .meaning = "n. 许诺，允诺；希望vt. 允诺，许诺；给人以……的指望或希望vi. 许诺；有指望，有前途"};

String_and_meaning String_and_meaning_promising = {
    .string = "promising",
    .meaning = "adj. 有希望的，有前途的v. 许诺，答应（promise的现在分词形式）"};

String_and_meaning String_and_meaning_promote = {
    .string = "promote",
    .meaning = "vt. 促进；提升；推销；发扬vi. 成为王后或其他大于卒的子"};

String_and_meaning String_and_meaning_prompt = {
    .string = "prompt",
    .meaning = "n.提示,付款期限vt.提示,鼓动,促使,(给演员)提白adj.敏捷的,迅速的,即时的adv.准时地"};

String_and_meaning String_and_meaning_prone = {
    .string = "prone",
    .meaning = "adj. 俯卧的；有…倾向的，易于…的n. (Prone)人名；(意、法)普罗内"};

String_and_meaning String_and_meaning_pronoun = {
    .string = "pronoun",
    .meaning = "n. 代词"};

String_and_meaning String_and_meaning_pronounce = {
    .string = "pronounce",
    .meaning = "vt. 发音；宣判；断言vi. 发音；作出判断"};

String_and_meaning String_and_meaning_pronunciation = {
    .string = "pronunciation",
    .meaning = "n. 发音；读法"};

String_and_meaning String_and_meaning_proof = {
    .string = "proof",
    .meaning = "n. 证明；证据；校样；考验；验证；试验adj. 防…的；不能透入的；证明用的；耐…的vt. 试验；校对；使不被穿透"};

String_and_meaning String_and_meaning_propaganda = {
    .string = "propaganda",
    .meaning = "n. 宣传；传道总会"};

String_and_meaning String_and_meaning_propagate = {
    .string = "propagate",
    .meaning = "vt. 传播；传送；繁殖；宣传vi. 繁殖；增殖"};

String_and_meaning String_and_meaning_propel = {
    .string = "propel",
    .meaning = "vt. 推进；驱使；激励；驱策"};

String_and_meaning String_and_meaning_proper = {
    .string = "proper",
    .meaning = "adj. 适当的；本身的；特有的；正派的adv. 完全地n. (Proper)人名；(英、德)普罗珀"};

String_and_meaning String_and_meaning_properly = {
    .string = "properly",
    .meaning = "adv. 适当地；正确地；恰当地"};

String_and_meaning String_and_meaning_property = {
    .string = "property",
    .meaning = "n. 性质，性能；财产；所有权"};

String_and_meaning String_and_meaning_prophet = {
    .string = "prophet",
    .meaning = "n. 先知；预言者；提倡者"};

String_and_meaning String_and_meaning_proportion = {
    .string = "proportion",
    .meaning = "n. 比例，占比；部分；面积；均衡vt. 使成比例；使均衡；分摊"};

String_and_meaning String_and_meaning_proportional = {
    .string = "proportional",
    .meaning = "adj. 比例的，成比例的；相称的，均衡的n. [数] 比例项"};

String_and_meaning String_and_meaning_proposal = {
    .string = "proposal",
    .meaning = "n. 提议，建议；求婚"};

String_and_meaning String_and_meaning_propose = {
    .string = "propose",
    .meaning = "vt. 建议；打算，计划；求婚vi. 建议；求婚；打算"};

String_and_meaning String_and_meaning_proposition = {
    .string = "proposition",
    .meaning = "n. 命题；提议；主题；议题vt. 向……提议；向……求欢"};

String_and_meaning String_and_meaning_prose = {
    .string = "prose",
    .meaning = "n. 散文；单调adj. 散文的；平凡的；乏味的vi. 写散文；乏味地讲话vt. 把…写成散文"};

String_and_meaning String_and_meaning_prospect = {
    .string = "prospect",
    .meaning = "n. 前途；预期；景色vi. 勘探，找矿vt. 勘探，勘察"};

String_and_meaning String_and_meaning_prospective = {
    .string = "prospective",
    .meaning = "adj. 未来的；预期的"};

String_and_meaning String_and_meaning_prosperity = {
    .string = "prosperity",
    .meaning = "n. 繁荣，成功"};

String_and_meaning String_and_meaning_prosperous = {
    .string = "prosperous",
    .meaning = "adj. 繁荣的；兴旺的"};

String_and_meaning String_and_meaning_protect = {
    .string = "protect",
    .meaning = "vt. 保护，防卫；警戒"};

String_and_meaning String_and_meaning_protection = {
    .string = "protection",
    .meaning = "n. 保护；防卫；护照"};

String_and_meaning String_and_meaning_protective = {
    .string = "protective",
    .meaning = "adj. 防护的；关切保护的；保护贸易的"};

String_and_meaning String_and_meaning_protein = {
    .string = "protein",
    .meaning = "n. 蛋白质；朊adj. 蛋白质的"};

String_and_meaning String_and_meaning_protest = {
    .string = "protest",
    .meaning = "n. 抗议，反对；（多来自公证人）拒付证书v. 抗议，反对；坚决表示，断言；拒付"};

String_and_meaning String_and_meaning_prototype = {
    .string = "prototype",
    .meaning = "n. 原型；样本；标准，模范；全真模型；[电]原型滤波网络vt. 制作原型"};

String_and_meaning String_and_meaning_proud = {
    .string = "proud",
    .meaning = "adj. 自豪的；得意的；自负的；突出的n. (Proud)人名；(英)普劳德"};

String_and_meaning String_and_meaning_prove = {
    .string = "prove",
    .meaning = "vt. 证明；检验；显示vi. 证明是"};

String_and_meaning String_and_meaning_provide = {
    .string = "provide",
    .meaning = "vt. 提供；规定；准备；装备vi. 规定；抚养；作准备"};

String_and_meaning String_and_meaning_provided = {
    .string = "provided",
    .meaning = "conj. 假如，倘若v. 提供，给予（provide 的过去式和过去分词）"};

String_and_meaning String_and_meaning_province = {
    .string = "province",
    .meaning = "n. 省；领域；职权"};

String_and_meaning String_and_meaning_provision = {
    .string = "provision",
    .meaning = "n. 规定；条款；准备；[经] 供应品vt. 供给…食物及必需品"};

String_and_meaning String_and_meaning_provocative = {
    .string = "provocative",
    .meaning = "adj. 刺激的，挑拨的；气人的n. 刺激物，挑拨物；兴奋剂"};

String_and_meaning String_and_meaning_provoke = {
    .string = "provoke",
    .meaning = "vt. 驱使；激怒；煽动；惹起"};

String_and_meaning String_and_meaning_proximity = {
    .string = "proximity",
    .meaning = "n. 接近，[数]邻近；接近；接近度，距离；亲近"};

String_and_meaning String_and_meaning_psychological = {
    .string = "psychological",
    .meaning = "adj. 心理的；心理学的；精神上的"};

String_and_meaning String_and_meaning_public = {
    .string = "public",
    .meaning = "adj. 公众的；政府的；公用的；公立的n. 公众；社会；公共场所n. (Public)人名；(英)帕布利克"};

String_and_meaning String_and_meaning_publication = {
    .string = "publication",
    .meaning = "n. 出版；出版物；发表"};

String_and_meaning String_and_meaning_publicity = {
    .string = "publicity",
    .meaning = "n. 宣传，宣扬；公开；广告；注意"};

String_and_meaning String_and_meaning_publish = {
    .string = "publish",
    .meaning = "vt. 出版；发表；公布vi. 出版；发行；刊印"};

String_and_meaning String_and_meaning_pudding = {
    .string = "pudding",
    .meaning = "n. 布丁"};

String_and_meaning String_and_meaning_puff = {
    .string = "puff",
    .meaning = "n.一阵喷烟,肿块,蓬松,吹嘘,宣传广告v.喷出,张开,夸张,(使)膨胀,(使)骄傲,喘息,鼓吹,吹捧"};

String_and_meaning String_and_meaning_pull = {
    .string = "pull",
    .meaning = "vt. 拉；拔；拖vi. 拉，拖；拔n. 拉，拉绳；拉力，牵引力；拖n. (Pull)人名；(法)皮尔；(德、瑞典)普尔"};

String_and_meaning String_and_meaning_pulse = {
    .string = "pulse",
    .meaning = "n. [电子] 脉冲；脉搏vt. 使跳动vi. 跳动，脉跳"};

String_and_meaning String_and_meaning_pump = {
    .string = "pump",
    .meaning = "n.泵,抽水机vt.(用泵)抽(水),抽吸"};

String_and_meaning String_and_meaning_punch = {
    .string = "punch",
    .meaning = "n. 冲压机；打洞器；钻孔机vt. 开洞；以拳重击vi. 用拳猛击n. (Punch)人名；(马来)蓬芝；(英)庞奇"};

String_and_meaning String_and_meaning_punctual = {
    .string = "punctual",
    .meaning = "adj. 准时的，守时的；精确的"};

String_and_meaning String_and_meaning_punish = {
    .string = "punish",
    .meaning = "vt. 惩罚；严厉对待；贪婪地吃喝vi. 惩罚"};

String_and_meaning String_and_meaning_punishment = {
    .string = "punishment",
    .meaning = "n. 惩罚；严厉对待，虐待"};

String_and_meaning String_and_meaning_pupil = {
    .string = "pupil",
    .meaning = "n. 学生；[解剖] 瞳孔；未成年人"};

String_and_meaning String_and_meaning_puppet = {
    .string = "puppet",
    .meaning = "n. 木偶；傀儡；受他人操纵的人"};

String_and_meaning String_and_meaning_purchase = {
    .string = "purchase",
    .meaning = "v. 购买；获得，赢得；升起，举起n. 购买；购买的东西；支点；财产置得；（地产的）年收益；紧握；起重装置"};

String_and_meaning String_and_meaning_pure = {
    .string = "pure",
    .meaning = "adj. 纯的；纯粹的；纯洁的；清白的；纯理论的n. (Pure)人名；(俄)普雷"};

String_and_meaning String_and_meaning_purely = {
    .string = "purely",
    .meaning = "adv. 纯粹地；仅仅，只不过；完全地；贞淑地；清洁地"};

String_and_meaning String_and_meaning_purify = {
    .string = "purify",
    .meaning = "vt. 净化；使纯净vi. 净化；变纯净"};

String_and_meaning String_and_meaning_purity = {
    .string = "purity",
    .meaning = "n. [化学] 纯度；纯洁；纯净；纯粹n. (Purity)人名；(肯)普丽蒂"};

String_and_meaning String_and_meaning_purple = {
    .string = "purple",
    .meaning = "adj. 紫色的；帝王的；华而不实的n. 紫色；紫袍vi. 变成紫色vt. 使成紫色"};

String_and_meaning String_and_meaning_purpose = {
    .string = "purpose",
    .meaning = "n. 目的；用途；意志vt. 决心；企图；打算"};

String_and_meaning String_and_meaning_purse = {
    .string = "purse",
    .meaning = "n. (女士)手提袋；(国家、家庭、团体等的) 财力vt. （嘴巴）皱起，使缩拢；撅嘴"};

String_and_meaning String_and_meaning_pursue = {
    .string = "pursue",
    .meaning = "vt. 继续；从事；追赶；纠缠vi. 追赶；继续进行"};

String_and_meaning String_and_meaning_pursuit = {
    .string = "pursuit",
    .meaning = "n. 追赶，追求；职业，工作"};

String_and_meaning String_and_meaning_push = {
    .string = "push",
    .meaning = "vt. 推动，增加；对…施加压力，逼迫；按；说服vi. 推进；增加；努力争取n. 推，决心；大规模攻势；矢志的追求"};

String_and_meaning String_and_meaning_put = {
    .string = "put",
    .meaning = "vt. 放；表达；移动；安置；赋予vi. 出发；击；航行；发芽n. 掷；笨蛋；投击；怪人adj. 固定不动的n. (Put)人名；(泰、缅)布"};

String_and_meaning String_and_meaning_puzzle = {
    .string = "puzzle",
    .meaning = "v. 迷惑，（使）困惑；（因迷惑）而苦思；使……为难n. 谜，智力游戏；拼版玩具；不解之谜；谜一样的人或事物"};

String_and_meaning String_and_meaning_qualification = {
    .string = "qualification",
    .meaning = "n. 资格；条件；限制；赋予资格"};

String_and_meaning String_and_meaning_qualify = {
    .string = "qualify",
    .meaning = "vt. 限定，修饰；使具有资格；证明…合格vi. 取得资格，有资格"};

String_and_meaning String_and_meaning_qualitative = {
    .string = "qualitative",
    .meaning = "adj. 定性的；质的，性质上的"};

String_and_meaning String_and_meaning_quality = {
    .string = "quality",
    .meaning = "n. 质量，[统计] 品质；特性；才能adj. 优质的；高品质的；英俚棒极了"};

String_and_meaning String_and_meaning_quantify = {
    .string = "quantify",
    .meaning = "vt. 量化；为…定量；确定数量vi. 量化；定量"};

String_and_meaning String_and_meaning_quantitative = {
    .string = "quantitative",
    .meaning = "adj. 定量的；量的，数量的"};

String_and_meaning String_and_meaning_quantity = {
    .string = "quantity",
    .meaning = "n. 量，数量；大量；总量"};

String_and_meaning String_and_meaning_quarrel = {
    .string = "quarrel",
    .meaning = "n. 吵架，口角；反目，失和；争吵（或抱怨）的原因；方头凿，方头投掷物；方镞箭v. 吵架，争论；反对；挑剔；抱怨"};

String_and_meaning String_and_meaning_quart = {
    .string = "quart",
    .meaning = "n. 夸脱（容量单位）；一夸脱的容器"};

String_and_meaning String_and_meaning_quarter = {
    .string = "quarter",
    .meaning = "n. 四分之一；地区；季度；一刻钟；两角五分；节vi. 住宿；驻扎vt. 将…四等分；供某人住宿num. 四分之一"};

String_and_meaning String_and_meaning_quarterly = {
    .string = "quarterly",
    .meaning = "adj. 季度的，按季度的；一年四次的adv. 按季度，[农] 一季一次地；纵横四分地n. 季刊n. (Quarterly)人名；(英)夸特利"};

String_and_meaning String_and_meaning_quartz = {
    .string = "quartz",
    .meaning = "n. 石英"};

String_and_meaning String_and_meaning_queen = {
    .string = "queen",
    .meaning = "n. 女王，王后；（纸牌中的）皇后；（蜜蜂等的）蜂王vt. 使…成为女王或王后vi. 做女王n. (Queen)人名；(英)奎因"};

String_and_meaning String_and_meaning_queer = {
    .string = "queer",
    .meaning = "n.同性恋者adj.奇怪的,可疑的,不舒服的vt.搞糟n.同性恋者"};

String_and_meaning String_and_meaning_quench = {
    .string = "quench",
    .meaning = "vt. 熄灭，[机] 淬火；解渴；结束；冷浸vi. 熄灭；平息"};

String_and_meaning String_and_meaning_quest = {
    .string = "quest",
    .meaning = "n. 追求；寻找；任务（游戏术语）vi. 追求；寻找vt. 探索n. (Quest)人名；(德)奎斯特"};

String_and_meaning String_and_meaning_question = {
    .string = "question",
    .meaning = "n. 问题，疑问；询问；疑问句vt. 询问；怀疑；审问vi. 询问；怀疑；审问"};

String_and_meaning String_and_meaning_questionnaire = {
    .string = "questionnaire",
    .meaning = "n. 问卷；调查表"};

String_and_meaning String_and_meaning_queue = {
    .string = "queue",
    .meaning = "n. 队列；长队；辫子vi. 排队；排队等候vt. 将…梳成辫子；使…排队"};

String_and_meaning String_and_meaning_quick = {
    .string = "quick",
    .meaning = "adj.快的,迅速的,敏捷的,急剧的,活泼的adv.快n.活人,生物,要点,本质,核心,感觉敏锐的部位"};

String_and_meaning String_and_meaning_quicken = {
    .string = "quicken",
    .meaning = "vi. 加快；变活跃；进入胎动期vt. 加快；鼓舞；使复活"};

String_and_meaning String_and_meaning_quickly = {
    .string = "quickly",
    .meaning = "adv. 迅速地；很快地"};

String_and_meaning String_and_meaning_quiet = {
    .string = "quiet",
    .meaning = "adj. 安静的；安定的；不动的；温顺的n. 安静；和平vt. 使平息；安慰vi. 平静下来"};

String_and_meaning String_and_meaning_quilt = {
    .string = "quilt",
    .meaning = "n. 被子；棉被vt. 东拼西凑地编；加软衬料后缝制vi. 缝被子"};

String_and_meaning String_and_meaning_quit = {
    .string = "quit",
    .meaning = "vt. 离开；放弃；停止；使…解除vi. 离开；辞职；停止n. 离开；[计] 退出adj. 摆脱了…的；已经了结的n. (Quit)人名；(英)奎特"};

String_and_meaning String_and_meaning_quite = {
    .string = "quite",
    .meaning = "adv. 很；相当；完全"};

String_and_meaning String_and_meaning_quiver = {
    .string = "quiver",
    .meaning = "n. 颤抖；箭袋；震动vi. 颤抖；振动vt. 使…颤动；抖动"};

String_and_meaning String_and_meaning_quiz = {
    .string = "quiz",
    .meaning = "n. 考查；恶作剧；课堂测验vt. 挖苦；张望；对…进行测验"};

String_and_meaning String_and_meaning_quotation = {
    .string = "quotation",
    .meaning = "n. [贸易] 报价单；引用语；引证"};

String_and_meaning String_and_meaning_quote = {
    .string = "quote",
    .meaning = "vt.引用,引证,提供,提出,报(价)"};

String_and_meaning String_and_meaning_rabbit = {
    .string = "rabbit",
    .meaning = "n. 兔子，野兔vt. 让…见鬼去吧vi. 猎兔"};

String_and_meaning String_and_meaning_race = {
    .string = "race",
    .meaning = "n.种族,种族气质,种族特征,赛跑,急流,姜根vi.赛跑,疾走vt.与...赛跑,使空转"};

String_and_meaning String_and_meaning_racial = {
    .string = "racial",
    .meaning = "adj. 种族的；人种的"};

String_and_meaning String_and_meaning_rack = {
    .string = "rack",
    .meaning = "n. [机] 齿条；架子；拷问台vi. 变形；随风飘；小步跑vt. 折磨；榨取n. (Rack)人名；(法、德、意、匈)拉克"};

String_and_meaning String_and_meaning_racket = {
    .string = "racket",
    .meaning = "n. 球拍；吵闹，喧闹vt. 过着花天酒地的生活vi. 过着花天酒地的生活"};

String_and_meaning String_and_meaning_radar = {
    .string = "radar",
    .meaning = "n. [雷达] 雷达，无线电探测器n. (Radar)人名；(塞)拉达尔"};

String_and_meaning String_and_meaning_radiant = {
    .string = "radiant",
    .meaning = "adj. 辐射的；容光焕发的；光芒四射的n. 光点；发光的物体"};

String_and_meaning String_and_meaning_radiate = {
    .string = "radiate",
    .meaning = "vt. 辐射；传播；流露；发射；广播vi. 辐射；流露；发光；从中心向各方伸展adj. 辐射状的，有射线的"};

String_and_meaning String_and_meaning_radiation = {
    .string = "radiation",
    .meaning = "n. 辐射；放射物"};

String_and_meaning String_and_meaning_radical = {
    .string = "radical",
    .meaning = "adj. 激进的；根本的；彻底的n. 基础；激进分子；[物化] 原子团；[数] 根数"};

String_and_meaning String_and_meaning_radio = {
    .string = "radio",
    .meaning = "n. 收音机；无线电广播设备vi. 用无线电进行通信vt. 用无线电发送n. (Radio)人名；(西)拉迪奥"};

String_and_meaning String_and_meaning_radioactive = {
    .string = "radioactive",
    .meaning = "adj. [核] 放射性的；有辐射的"};

String_and_meaning String_and_meaning_radioactivity = {
    .string = "radioactivity",
    .meaning = "n. 放射性；[核] 放射能力；[核] 放射现象"};

String_and_meaning String_and_meaning_radish = {
    .string = "radish",
    .meaning = "n. 萝卜，小萝卜n. (Radish)人名；(俄)拉季什；(塞)拉迪什"};

String_and_meaning String_and_meaning_radium = {
    .string = "radium",
    .meaning = "n. [化学] 镭（88号元素符号Ra）"};

String_and_meaning String_and_meaning_radius = {
    .string = "radius",
    .meaning = "n. 半径，半径范围；[解剖] 桡骨；辐射光线；有效航程n. (Radius)人名；(意、印尼)拉迪乌斯；(英)雷迪厄斯；(法)拉迪于斯"};

String_and_meaning String_and_meaning_rag = {
    .string = "rag",
    .meaning = "n. 破布；碎屑vt. 戏弄；责骂vi. 变破碎；穿着讲究"};

String_and_meaning String_and_meaning_rage = {
    .string = "rage",
    .meaning = "n. 愤怒；狂暴，肆虐；情绪激动vi. 大怒，发怒；流行，风行n. (Rage)人名；(丹)拉厄"};

String_and_meaning String_and_meaning_raid = {
    .string = "raid",
    .meaning = "n. 袭击；突袭；搜捕；抢劫vi. 突袭vt. 袭击，突袭n. （Raid）（阿拉伯）拉伊德（人名）abbr. （Raid）独立硬盘冗余阵列（Redundant Array of Inexpensive Disks）"};

String_and_meaning String_and_meaning_rail = {
    .string = "rail",
    .meaning = "n. 铁轨；扶手；横杆；围栏vi. 抱怨；责骂vt. 铺铁轨；以横木围栏"};

String_and_meaning String_and_meaning_railroad = {
    .string = "railroad",
    .meaning = "n. 铁路；铁路公司v. 迫使……仓促行事； 强使……草率通过； 轻率判处； 在铁路工作；乘火车旅行"};

String_and_meaning String_and_meaning_railway = {
    .string = "railway",
    .meaning = "n. （英）铁路；轨道；铁道部门vi. 乘火车旅行"};

String_and_meaning String_and_meaning_rain = {
    .string = "rain",
    .meaning = "n. 雨；下雨；雨天；雨季vi. 下雨；降雨vt. 大量地给；使大量落下n. (Rain)人名；(法)兰；(英)雷恩；(罗、捷)赖恩"};

String_and_meaning String_and_meaning_rainbow = {
    .string = "rainbow",
    .meaning = "n. 彩虹；五彩缤纷的排列；幻想adj. 五彩缤纷的；彩虹状的vt. 使呈彩虹状；如彩虹般装饰vi. 呈彩虹状n. (Rainbow)人名；(英)雷恩博"};

String_and_meaning String_and_meaning_rainy = {
    .string = "rainy",
    .meaning = "adj. 下雨的；多雨的n. (Rainy)人名；(英)雷尼"};

String_and_meaning String_and_meaning_raise = {
    .string = "raise",
    .meaning = "vt. 提高；筹集；养育；升起；饲养，种植vi. 上升n. 高地；上升；加薪n. （Raise）（意、法、英、美）雷兹（人名）"};

String_and_meaning String_and_meaning_rake = {
    .string = "rake",
    .meaning = "n.耙子,斜度,向船尾的倾斜,放荡者v.搜索,掠过,用耙子耙,(使)倾斜"};

String_and_meaning String_and_meaning_rally = {
    .string = "rally",
    .meaning = "v.重整旗鼓,给予新力量,(使)恢复健康,力量,决心,集结n.集会"};

String_and_meaning String_and_meaning_random = {
    .string = "random",
    .meaning = "adj. [数] 随机的；任意的；胡乱的n. 随意adv. 胡乱地"};

String_and_meaning String_and_meaning_range = {
    .string = "range",
    .meaning = "n. 范围；幅度；排；山脉vi. （在...内）变动；平行，列为一行；延伸；漫游；射程达到vt. 漫游；放牧；使并列；归类于；来回走动"};

String_and_meaning String_and_meaning_rank = {
    .string = "rank",
    .meaning = "n. 排；等级；军衔；队列adj. 讨厌的；恶臭的；繁茂的vt. 排列；把…分等vi. 列为；列队n. (Rank)人名；(英、德、芬、捷)兰克"};

String_and_meaning String_and_meaning_rapid = {
    .string = "rapid",
    .meaning = "adj. 迅速的，急促的；飞快的；险峻的n. 急流；高速交通工具，高速交通网"};

String_and_meaning String_and_meaning_rapidly = {
    .string = "rapidly",
    .meaning = "adv. 迅速地；很快地；立即"};

String_and_meaning String_and_meaning_rare = {
    .string = "rare",
    .meaning = "adj. 稀有的；稀薄的；半熟的adj. 杰出的；极度的；非常好的adv. 非常；极其vi. 用后腿站起；渴望"};

String_and_meaning String_and_meaning_rarely = {
    .string = "rarely",
    .meaning = "adv. 很少地；难得；罕有地"};

String_and_meaning String_and_meaning_rat = {
    .string = "rat",
    .meaning = "n. 鼠；卑鄙小人，叛徒vi. 捕鼠；背叛，告密n. （Rat）（法、意、印、瑞典）拉特；（泰）叻（人名）"};

String_and_meaning String_and_meaning_rate = {
    .string = "rate",
    .meaning = "n. 比率，率；速度；价格；等级vt. 认为；估价；责骂vi. 责骂；被评价n. (Rate)人名；(法、塞)拉特"};

String_and_meaning String_and_meaning_rather = {
    .string = "rather",
    .meaning = "adv. 宁可，宁愿；相当；准确地说；或多或少地conj. 而不是int. 当然啦（回答问题时用）n. (Rather)人名；(英)拉瑟"};

String_and_meaning String_and_meaning_rating = {
    .string = "rating",
    .meaning = "n. 等级；等级评定；额定功率v. 对…评价（rate的ing形式）n. (Rating)人名；(德)拉廷"};

String_and_meaning String_and_meaning_ratio = {
    .string = "ratio",
    .meaning = "n. 比率，比例"};

String_and_meaning String_and_meaning_rational = {
    .string = "rational",
    .meaning = "adj. 合理的；理性的n. 有理数"};

String_and_meaning String_and_meaning_raw = {
    .string = "raw",
    .meaning = "adj. 生的；未加工的；阴冷的；刺痛的；擦掉皮的；无经验的；（在艺术等方面）不成熟的n. 擦伤处vt. 擦伤n. (Raw)人名；(英)罗"};

String_and_meaning String_and_meaning_ray = {
    .string = "ray",
    .meaning = "n. 射线；光线；鳐鱼vt. 放射；显出vi. 放射光线；浮现n. （Ray）雷（人名）"};

String_and_meaning String_and_meaning_razor = {
    .string = "razor",
    .meaning = "n. 剃（须）刀v. 用剃刀剃，用剃刀刮"};

String_and_meaning String_and_meaning_reach = {
    .string = "reach",
    .meaning = "vi. 达到；延伸；伸出手；传开vt. 达到；影响；抵达；伸出n. 范围；延伸；河段；横风行驶n. (Reach)人名；(柬)列"};

String_and_meaning String_and_meaning_react = {
    .string = "react",
    .meaning = "vi. 反应，作出反应；产生（化学）反应；"};

String_and_meaning String_and_meaning_reaction = {
    .string = "reaction",
    .meaning = "n. 反应，感应；反动，复古；反作用"};

String_and_meaning String_and_meaning_read = {
    .string = "read",
    .meaning = "vt. 阅读；读懂，理解vi. 读；读起来n. 阅读；读物adj. 有学问的n. (Read)人名；(英)里德"};

String_and_meaning String_and_meaning_reader = {
    .string = "reader",
    .meaning = "n. 读者；阅读器；读物n. (Reader)人名；(英)里德"};

String_and_meaning String_and_meaning_readily = {
    .string = "readily",
    .meaning = "adv. 容易地；乐意地；无困难地"};

String_and_meaning String_and_meaning_reading = {
    .string = "reading",
    .meaning = "n. 阅读，朗读；读物；读数adj. 阅读的v. 阅读（read的ing形式）"};

String_and_meaning String_and_meaning_ready = {
    .string = "ready",
    .meaning = "adj. 准备好；现成的；迅速的；情愿的；快要…的n. 现款；预备好的状态adv. 迅速地；预先vt. 使准备好n. (Ready)人名；(英)雷迪"};

String_and_meaning String_and_meaning_real = {
    .string = "real",
    .meaning = "adj. 实际的；真实的；实在的adv. 真正地；确实地n. 现实；实数n. （Real）（德、西、葡、法）雷亚尔；（英）里尔（人名）"};

String_and_meaning String_and_meaning_realistic = {
    .string = "realistic",
    .meaning = "adj. 现实的；现实主义的；逼真的；实在论的"};

String_and_meaning String_and_meaning_reality = {
    .string = "reality",
    .meaning = "n. 现实；实际；真实"};

String_and_meaning String_and_meaning_realize = {
    .string = "realize",
    .meaning = "vt. 实现；认识到；了解；将某物卖得，把(证券等)变成现钱；变卖"};

String_and_meaning String_and_meaning_really = {
    .string = "really",
    .meaning = "adv. 实际上，事实上；真正地，真实地；真的吗？（表语气）"};

String_and_meaning String_and_meaning_realm = {
    .string = "realm",
    .meaning = "n. 领域，范围；王国"};

String_and_meaning String_and_meaning_reap = {
    .string = "reap",
    .meaning = "vt. 收获，获得；收割vi. 收割，收获n. (Reap)人名；(英)里普"};

String_and_meaning String_and_meaning_rear = {
    .string = "rear",
    .meaning = "n. 后面；后方部队；屁股adj. 后方的，后面的；背面的v. 抚养；培养；喂养，饲养；栽种，培植；（马等动物）用后腿直立；竖起adv. 向后；在后面"};

String_and_meaning String_and_meaning_reason = {
    .string = "reason",
    .meaning = "n. 理由；理性；动机vi. 推论；劝说vt. 说服；推论；辩论n. (Reason)人名；(英)里森"};

String_and_meaning String_and_meaning_reasonable = {
    .string = "reasonable",
    .meaning = "adj. 合理的，公道的；通情达理的"};

String_and_meaning String_and_meaning_rebel = {
    .string = "rebel",
    .meaning = "n.造反者,叛逆者,反抗者,叛乱者adj.造反的,叛逆的,反抗的v.造反,反叛,反抗,叛乱"};

String_and_meaning String_and_meaning_rebellion = {
    .string = "rebellion",
    .meaning = "n. 叛乱；反抗；谋反；不服从"};

String_and_meaning String_and_meaning_recall = {
    .string = "recall",
    .meaning = "vt. 召回；回想起，记起；取消n. 召回；回忆；撤消"};

String_and_meaning String_and_meaning_receipt = {
    .string = "receipt",
    .meaning = "n. 收到；收据；收入vt. 收到"};

String_and_meaning String_and_meaning_receive = {
    .string = "receive",
    .meaning = "vt. 收到；接待；接纳vi. 接收"};

String_and_meaning String_and_meaning_receiver = {
    .string = "receiver",
    .meaning = "n. （电话）听筒；无线电接收机；（破产公司的）官方接管人；接受者，收受者；购买（或接受）赃物的人；接球手；接受罐，聚集器；机匣"};

String_and_meaning String_and_meaning_recent = {
    .string = "recent",
    .meaning = "adj. 最近的；近代的"};

String_and_meaning String_and_meaning_recently = {
    .string = "recently",
    .meaning = "adv. 最近；新近"};

String_and_meaning String_and_meaning_reception = {
    .string = "reception",
    .meaning = "n. 接待；接收；招待会；感受；反应"};

String_and_meaning String_and_meaning_recession = {
    .string = "recession",
    .meaning = "n. 衰退；不景气；后退；凹处"};

String_and_meaning String_and_meaning_recipe = {
    .string = "recipe",
    .meaning = "n. 食谱；[临床] 处方；秘诀；烹饪法"};

String_and_meaning String_and_meaning_recipient = {
    .string = "recipient",
    .meaning = "n. 容器，接受者；容纳者adj. 容易接受的；容纳的"};

String_and_meaning String_and_meaning_reciprocal = {
    .string = "reciprocal",
    .meaning = "adj. 互惠的；相互的；倒数的，彼此相反的n. [数] 倒数；互相起作用的事物"};

String_and_meaning String_and_meaning_recite = {
    .string = "recite",
    .meaning = "vt. 背诵；叙述；列举vi. 背诵；叙述"};

String_and_meaning String_and_meaning_reckless = {
    .string = "reckless",
    .meaning = "adj. 鲁莽的，不顾后果的；粗心大意的n. (Reckless)人名；(英)雷克利斯"};

String_and_meaning String_and_meaning_reckon = {
    .string = "reckon",
    .meaning = "vt. 测算，估计；认为；计算vi. 估计；计算；猜想，料想"};

String_and_meaning String_and_meaning_reclaim = {
    .string = "reclaim",
    .meaning = "vt. 开拓；回收再利用；改造某人，使某人悔改vi. 抗议，喊叫n. 改造，感化；再生胶"};

String_and_meaning String_and_meaning_recognition = {
    .string = "recognition",
    .meaning = "n. 识别；承认，认出；重视；赞誉；公认"};

String_and_meaning String_and_meaning_recognize = {
    .string = "recognize",
    .meaning = "vt. 认出，识别；承认；接受，认可；赞赏vi. 确认，承认；具结"};

String_and_meaning String_and_meaning_recollect = {
    .string = "recollect",
    .meaning = "v. 回忆，想起"};

String_and_meaning String_and_meaning_recommend = {
    .string = "recommend",
    .meaning = "vt. 推荐，介绍；劝告；使受欢迎；托付vi. 推荐；建议"};

String_and_meaning String_and_meaning_recommendation = {
    .string = "recommendation",
    .meaning = "n. 推荐；建议；推荐信"};

String_and_meaning String_and_meaning_reconcile = {
    .string = "reconcile",
    .meaning = "vt. 使一致；使和解；调停，调解；使顺从"};

String_and_meaning String_and_meaning_record = {
    .string = "record",
    .meaning = "n.履历,档案,诉状,最高纪录,报告,唱片vt.记录,标明,将...录音vi.录音,被录音adj.创纪录的"};

String_and_meaning String_and_meaning_recorder = {
    .string = "recorder",
    .meaning = "n. 录音机；记录器；记录员；八孔直笛"};

String_and_meaning String_and_meaning_recover = {
    .string = "recover",
    .meaning = "vt. 恢复；弥补；重新获得vi. 恢复；胜诉；重新得球n. 还原至预备姿势n. (Recover)人名；(西)雷科韦尔"};

String_and_meaning String_and_meaning_recovery = {
    .string = "recovery",
    .meaning = "n. 恢复，复原；痊愈；重获"};

String_and_meaning String_and_meaning_recreation = {
    .string = "recreation",
    .meaning = "n. 娱乐；消遣；休养"};

String_and_meaning String_and_meaning_recruit = {
    .string = "recruit",
    .meaning = "v. 征募；聘用；通过招募组建；补充；（非正式）说服；（使）恢复健康n. 招聘；新兵；新成员"};

String_and_meaning String_and_meaning_rectangular = {
    .string = "rectangular",
    .meaning = "adj. 矩形的；成直角的"};

String_and_meaning String_and_meaning_rectify = {
    .string = "rectify",
    .meaning = "vt. 改正；精馏；整流"};

String_and_meaning String_and_meaning_recur = {
    .string = "recur",
    .meaning = "vi. 复发；重现；采用；再来；循环；递归"};

String_and_meaning String_and_meaning_recycle = {
    .string = "recycle",
    .meaning = "v. 回收利用；使再循环；重新使用n. 回收利用，循环使用"};

String_and_meaning String_and_meaning_red = {
    .string = "red",
    .meaning = "n.红色,红衣服,红颜料,赤字,亏空adj.红(色)的,革命的"};

String_and_meaning String_and_meaning_reduce = {
    .string = "reduce",
    .meaning = "vt. 减少；降低；使处于；把…分解vi. 减少；缩小；归纳为"};

String_and_meaning String_and_meaning_reduction = {
    .string = "reduction",
    .meaning = "n. 减少；下降；缩小；还原反应"};

String_and_meaning String_and_meaning_redundant = {
    .string = "redundant",
    .meaning = "adj. 多余的，过剩的；被解雇的，失业的；冗长的，累赘的"};

String_and_meaning String_and_meaning_reed = {
    .string = "reed",
    .meaning = "n. [作物] 芦苇；簧片；牧笛；不可依靠的人vt. 用芦苇盖；用芦苇装饰n. (Reed)人名；(西、意、瑞典)雷德；(英)里德"};

String_and_meaning String_and_meaning_reel = {
    .string = "reel",
    .meaning = "n.(棉纱,电线等的)卷轴,(磁带等的)一盘,旋转,蹒跚vt.卷...于轴上,使旋转vi.蹒跚地走,旋转,眩晕,骚乱,退缩,摇晃"};

String_and_meaning String_and_meaning_refer = {
    .string = "refer",
    .meaning = "vi. 参考；涉及；提到；查阅vt. 涉及；委托；归诸于；使…求助于"};

String_and_meaning String_and_meaning_reference = {
    .string = "reference",
    .meaning = "n. 参考，参照；涉及，提及；参考书目；介绍信；证明书vi. 引用vt. 引用"};

String_and_meaning String_and_meaning_refine = {
    .string = "refine",
    .meaning = "vt. 精炼，提纯；改善；使…文雅"};

String_and_meaning String_and_meaning_reflect = {
    .string = "reflect",
    .meaning = "vt. 反映；反射，照出；表达；显示；反省vi. 反射，映现；深思"};

String_and_meaning String_and_meaning_reflection = {
    .string = "reflection",
    .meaning = "n. 反射；沉思；映象"};

String_and_meaning String_and_meaning_reflexion = {
    .string = "reflexion",
    .meaning = "n. 反射；沉思；映象"};

String_and_meaning String_and_meaning_reform = {
    .string = "reform",
    .meaning = "v. 改革，革新；重组；（使）改过自新；（石油炼制）重整n. 改革，改良；改正adj. 改革的；改革教会的"};

String_and_meaning String_and_meaning_refrain = {
    .string = "refrain",
    .meaning = "vi. 节制，克制；避免；制止n. 叠句，副歌；重复"};

String_and_meaning String_and_meaning_refresh = {
    .string = "refresh",
    .meaning = "vt. 更新；使……恢复；使……清新；消除……的疲劳vi. 恢复精神；喝饮料，吃点心；补充给养"};

String_and_meaning String_and_meaning_refreshment = {
    .string = "refreshment",
    .meaning = "n. 点心；起提神作用的东西；精力恢复"};

String_and_meaning String_and_meaning_refrigerator = {
    .string = "refrigerator",
    .meaning = "n. 冰箱，冷藏库"};

String_and_meaning String_and_meaning_refuge = {
    .string = "refuge",
    .meaning = "n. 避难；避难所；庇护vt. 给予…庇护；接纳…避难vi. 避难；逃避"};

String_and_meaning String_and_meaning_refugee = {
    .string = "refugee",
    .meaning = "n. 难民，避难者；流亡者，逃亡者"};

String_and_meaning String_and_meaning_refusal = {
    .string = "refusal",
    .meaning = "n. 拒绝；优先取舍权；推却；取舍权"};

String_and_meaning String_and_meaning_refuse = {
    .string = "refuse",
    .meaning = "vt.拒绝,谢绝n.废物,垃圾"};

String_and_meaning String_and_meaning_refute = {
    .string = "refute",
    .meaning = "vt. 反驳，驳斥；驳倒"};

String_and_meaning String_and_meaning_regard = {
    .string = "regard",
    .meaning = "n. 注意；尊重；问候；凝视vt. 注重，考虑；看待；尊敬；把…看作；与…有关vi. 注意，注重；注视n. (Regard)人名；(西、意)雷加德；(法)勒加尔"};

String_and_meaning String_and_meaning_regarding = {
    .string = "regarding",
    .meaning = "prep. 关于，至于；就……而论v. 看待；（以特定方式）注视；注意；听从；涉及（regard 的现在分词）"};

String_and_meaning String_and_meaning_regardless = {
    .string = "regardless",
    .meaning = "adj. 不管的，不顾的；不注意的adv. 不顾后果地；不加理会；不管怎样，无论如何"};

String_and_meaning String_and_meaning_regime = {
    .string = "regime",
    .meaning = "n. 政权，政体；社会制度；管理体制"};

String_and_meaning String_and_meaning_region = {
    .string = "region",
    .meaning = "n. 地区；范围；部位"};

String_and_meaning String_and_meaning_register = {
    .string = "register",
    .meaning = "n.记录,登记簿,登记,注册,寄存器vt.记录,登记,注册,提示,把...挂号vi.登记,注册,挂号"};

String_and_meaning String_and_meaning_regret = {
    .string = "regret",
    .meaning = "vt. 后悔；对……感到遗憾；礼貌或正式地表示惋惜或抱歉；对（损失或缺乏）感到痛惜vi. 遗憾n. 遗憾，歉意"};

String_and_meaning String_and_meaning_regular = {
    .string = "regular",
    .meaning = "adj. 经常的；定期的；有规律的；合格的；整齐的；普通的n. 常客；正式队员；中坚分子n. （Regular）（以）雷古拉尔（人名）"};

String_and_meaning String_and_meaning_regularly = {
    .string = "regularly",
    .meaning = "adv. 定期地；有规律地；整齐地；匀称地"};

String_and_meaning String_and_meaning_regulate = {
    .string = "regulate",
    .meaning = "vt. 调节；规定；控制；校准；有系统地管理"};

String_and_meaning String_and_meaning_regulation = {
    .string = "regulation",
    .meaning = "n. 管理；规则；校准adj. 规定的；平常的"};

String_and_meaning String_and_meaning_rehearsal = {
    .string = "rehearsal",
    .meaning = "n. 排演；预演；练习；训练；叙述"};

String_and_meaning String_and_meaning_reign = {
    .string = "reign",
    .meaning = "n. 君主统治时期；任期；（运动员）持荣誉头衔时期；主宰期v. 统治；成为最佳；盛行，支配"};

String_and_meaning String_and_meaning_rein = {
    .string = "rein",
    .meaning = "n. 缰绳；驾驭；统治；支配vt. 控制；驾驭；勒住vi. 勒住马n. (Rein)人名；(西、阿拉伯)雷因；(法)兰；(英、荷、捷、德、芬、瑞典)赖因；(爱沙)雷恩"};

String_and_meaning String_and_meaning_reinforce = {
    .string = "reinforce",
    .meaning = "vt. 加强，加固；强化；补充vi. 求援；得到增援；给予更多的支持n. 加强；加固物；加固材料"};

String_and_meaning String_and_meaning_reject = {
    .string = "reject",
    .meaning = "vt. 拒绝；排斥；抵制；丢弃n. 被弃之物或人；次品"};

String_and_meaning String_and_meaning_rejoice = {
    .string = "rejoice",
    .meaning = "vi. 高兴；庆祝vt. 使高兴"};

String_and_meaning String_and_meaning_relate = {
    .string = "relate",
    .meaning = "vt. 叙述；使…有联系vi. 涉及；认同；符合；与…有某种联系"};

String_and_meaning String_and_meaning_relation = {
    .string = "relation",
    .meaning = "n. 关系；叙述；故事；亲属关系"};

String_and_meaning String_and_meaning_relationship = {
    .string = "relationship",
    .meaning = "n. 关系；关联"};

String_and_meaning String_and_meaning_relative = {
    .string = "relative",
    .meaning = "adj. 相对的；有关系的；成比例的n. 亲戚；相关物；[语] 关系词；亲缘植物"};

String_and_meaning String_and_meaning_relatively = {
    .string = "relatively",
    .meaning = "adv. 相当地；相对地，比较地"};

String_and_meaning String_and_meaning_relativity = {
    .string = "relativity",
    .meaning = "n. 相对论；相关性；相对性"};

String_and_meaning String_and_meaning_relax = {
    .string = "relax",
    .meaning = "vi. 放松，休息；松懈，松弛；变从容；休养vt. 放松；使休息；使松弛；缓和；使松懈"};

String_and_meaning String_and_meaning_relay = {
    .string = "relay",
    .meaning = "n. 接力赛；轮班，轮换；继电器；中继设备v. 传达，转发；转播；重新铺设"};

String_and_meaning String_and_meaning_release = {
    .string = "release",
    .meaning = "n.释放,让渡,豁免,发行的书,释放证书vt.释放,解放,放弃,让与,免除,发表n.版本,发布"};

String_and_meaning String_and_meaning_relevant = {
    .string = "relevant",
    .meaning = "adj. 相关的；切题的；中肯的；有重大关系的；有意义的，目的明确的"};

String_and_meaning String_and_meaning_reliability = {
    .string = "reliability",
    .meaning = "n. 可靠性"};

String_and_meaning String_and_meaning_reliable = {
    .string = "reliable",
    .meaning = "adj. 可靠的；可信赖的n. 可靠的人"};

String_and_meaning String_and_meaning_reliance = {
    .string = "reliance",
    .meaning = "n. 信赖；信心；受信赖的人或物"};

String_and_meaning String_and_meaning_relief = {
    .string = "relief",
    .meaning = "n. 救济；减轻，解除；安慰；浮雕"};

String_and_meaning String_and_meaning_relieve = {
    .string = "relieve",
    .meaning = "vt. 解除，减轻；使不单调乏味；换……的班；解围；使放心"};

String_and_meaning String_and_meaning_religion = {
    .string = "religion",
    .meaning = "n. 宗教；宗教信仰"};

String_and_meaning String_and_meaning_religious = {
    .string = "religious",
    .meaning = "adj. 宗教的；虔诚的；严谨的；修道的n. 修道士；尼姑"};

String_and_meaning String_and_meaning_reluctant = {
    .string = "reluctant",
    .meaning = "adj. 不情愿的；勉强的；顽抗的"};

String_and_meaning String_and_meaning_rely = {
    .string = "rely",
    .meaning = "vi. 依靠；信赖"};

String_and_meaning String_and_meaning_remain = {
    .string = "remain",
    .meaning = "vi. 保持；依然；留下；剩余；逗留；残存n. 废语留待；余留"};

String_and_meaning String_and_meaning_remainder = {
    .string = "remainder",
    .meaning = "n. [数] 余数，残余；剩余物；其余的人adj. 剩余的；吃剩的vt. 廉价出售；削价出售vi. 廉价出售；削价出售"};

String_and_meaning String_and_meaning_remains = {
    .string = "remains",
    .meaning = "n. 残余物，剩饭菜；古迹，遗迹；遗骸v. 保持（remain 的第三人称单数）"};

String_and_meaning String_and_meaning_remark = {
    .string = "remark",
    .meaning = "n. 注意；言辞vt. 评论；觉察vi. 谈论"};

String_and_meaning String_and_meaning_remarkable = {
    .string = "remarkable",
    .meaning = "adj. 卓越的；非凡的；值得注意的"};

String_and_meaning String_and_meaning_remedy = {
    .string = "remedy",
    .meaning = "n. 补救；疗法；解决办法；（硬币的）公差v. 补救，纠正，改进；治疗"};

String_and_meaning String_and_meaning_remember = {
    .string = "remember",
    .meaning = "vt. 记得；牢记；纪念；代…问好vi. 记得，记起"};

String_and_meaning String_and_meaning_remind = {
    .string = "remind",
    .meaning = "vt. 提醒；使想起"};

String_and_meaning String_and_meaning_remnant = {
    .string = "remnant",
    .meaning = "n. 剩余adj. 剩余的n. (Remnant)人名；(英)雷姆南特"};

String_and_meaning String_and_meaning_remote = {
    .string = "remote",
    .meaning = "adj. 遥远的；偏僻的；疏远的n. 远程"};

String_and_meaning String_and_meaning_removal = {
    .string = "removal",
    .meaning = "n. 免职；移动；排除；搬迁"};

String_and_meaning String_and_meaning_remove = {
    .string = "remove",
    .meaning = "vt. 移动，迁移；开除；调动vi. 移动，迁移；搬家n. 移动；距离；搬家"};

String_and_meaning String_and_meaning_renaissance = {
    .string = "renaissance",
    .meaning = "n. （艺术等的）新生，复活n. (Renaissance) 文艺复兴，文艺复兴风格"};

String_and_meaning String_and_meaning_render = {
    .string = "render",
    .meaning = "vt.呈递,归还,着色,汇报,致使,放弃,表演,实施vi.给予补偿n.交纳,粉刷,打底"};

String_and_meaning String_and_meaning_renew = {
    .string = "renew",
    .meaning = "vt. 使更新；续借；续费；复兴；重申vi. 更新；重新开始"};

String_and_meaning String_and_meaning_rent = {
    .string = "rent",
    .meaning = "n. 租金vt. 出租；租用；租借vi. 租；出租n. (Rent)人名；(瑞典)伦特"};

String_and_meaning String_and_meaning_repair = {
    .string = "repair",
    .meaning = "v. 修理；修复，补救；（使）重归于好；（结伴）去n. 修理；修补过的部位；具体情况，物质条件；常去；常去的场所"};

String_and_meaning String_and_meaning_repay = {
    .string = "repay",
    .meaning = "vi. 偿还；报答；报复vt. 回报；报复；付还"};

String_and_meaning String_and_meaning_repeat = {
    .string = "repeat",
    .meaning = "n.重复,反复vt.重做,复述,向他人转述,复制,使再现vi.重复,留有味道"};

String_and_meaning String_and_meaning_repeatedly = {
    .string = "repeatedly",
    .meaning = "adv. 反复地；再三地；屡次地"};

String_and_meaning String_and_meaning_repel = {
    .string = "repel",
    .meaning = "vt. 击退；抵制；使厌恶；使不愉快"};

String_and_meaning String_and_meaning_repent = {
    .string = "repent",
    .meaning = "vi. 后悔；忏悔vt. 后悔；对…感到后悔adj. [植] 匍匐生根的；[动] 爬行的"};

String_and_meaning String_and_meaning_repertoire = {
    .string = "repertoire",
    .meaning = "n. 全部节目；计算机指令系统；（美）某人或机器的全部技能"};

String_and_meaning String_and_meaning_repetition = {
    .string = "repetition",
    .meaning = "n. 重复；背诵；副本"};

String_and_meaning String_and_meaning_replace = {
    .string = "replace",
    .meaning = "vt. 取代，代替；替换，更换；归还，偿还；把…放回原处"};

String_and_meaning String_and_meaning_replacement = {
    .string = "replacement",
    .meaning = "n. 更换；复位；代替者；补充兵员"};

String_and_meaning String_and_meaning_reply = {
    .string = "reply",
    .meaning = "vi. 回答；[法] 答辩；回击n. 回答；[法] 答辩vt. 回答；答复"};

String_and_meaning String_and_meaning_report = {
    .string = "report",
    .meaning = "n. 报告；报道；成绩单vt. 报告；报导；使报到vi. 报告；报到；写报导n. (Report)人名；(匈)雷波特"};

String_and_meaning String_and_meaning_reporter = {
    .string = "reporter",
    .meaning = "n. 记者"};

String_and_meaning String_and_meaning_represent = {
    .string = "represent",
    .meaning = "vt. 代表；表现；描绘；回忆；再赠送vi. 代表；提出异议"};

String_and_meaning String_and_meaning_representation = {
    .string = "representation",
    .meaning = "n. 代表；表现；表示法；陈述"};

String_and_meaning String_and_meaning_representative = {
    .string = "representative",
    .meaning = "adj. 典型的，有代表性的；代议制的；表现的，体现的；与表象有关的n. 代表；典型；众议员；销售代表"};

String_and_meaning String_and_meaning_reproach = {
    .string = "reproach",
    .meaning = "n. 责备；耻辱vt. 责备；申斥"};

String_and_meaning String_and_meaning_reproduce = {
    .string = "reproduce",
    .meaning = "vt. 复制；再生；生殖；使…在脑海中重现vi. 复制；繁殖"};

String_and_meaning String_and_meaning_republic = {
    .string = "republic",
    .meaning = "n. 共和国；共和政体"};

String_and_meaning String_and_meaning_republican = {
    .string = "republican",
    .meaning = "adj. 共和国的；共和政体的；共和主义的；拥护共和政体的n. 共和主义者"};

String_and_meaning String_and_meaning_reputation = {
    .string = "reputation",
    .meaning = "n. 名声，名誉；声望"};

String_and_meaning String_and_meaning_request = {
    .string = "request",
    .meaning = "n. 请求；需要vt. 要求，请求"};

String_and_meaning String_and_meaning_require = {
    .string = "require",
    .meaning = "vt. 需要；要求；命令"};

String_and_meaning String_and_meaning_requirement = {
    .string = "requirement",
    .meaning = "n. 要求；必要条件；必需品"};

String_and_meaning String_and_meaning_rescue = {
    .string = "rescue",
    .meaning = "v. 营救，援救；（非正式）防止……丢失n. 营救，解救，援救；营救行动"};

String_and_meaning String_and_meaning_research = {
    .string = "research",
    .meaning = "n. 研究；调查vi. 研究；调查vt. 研究；调查[ 过去式 researched 过去分词 researched 现在分词 researching ]"};

String_and_meaning String_and_meaning_researcher = {
    .string = "researcher",
    .meaning = "n. 研究员"};

String_and_meaning String_and_meaning_resemblance = {
    .string = "resemblance",
    .meaning = "n. 相似；相似之处；相似物；肖像"};

String_and_meaning String_and_meaning_resemble = {
    .string = "resemble",
    .meaning = "vt. 类似，像"};

String_and_meaning String_and_meaning_resent = {
    .string = "resent",
    .meaning = "vt. 怨恨；愤恨；厌恶"};

String_and_meaning String_and_meaning_reservation = {
    .string = "reservation",
    .meaning = "n. 预约，预订；保留"};

String_and_meaning String_and_meaning_reserve = {
    .string = "reserve",
    .meaning = "n.储备(物),储藏量,预备队vt.储备,保存,保留,预定,预约"};

String_and_meaning String_and_meaning_reside = {
    .string = "reside",
    .meaning = "vi. 住，居住；属于"};

String_and_meaning String_and_meaning_residence = {
    .string = "residence",
    .meaning = "n. 住宅，住处；居住"};

String_and_meaning String_and_meaning_resident = {
    .string = "resident",
    .meaning = "n.居民adj.居住的,常驻的"};

String_and_meaning String_and_meaning_residential = {
    .string = "residential",
    .meaning = "adj. 住宅的；与居住有关的"};

String_and_meaning String_and_meaning_resign = {
    .string = "resign",
    .meaning = "vt. 辞职；放弃；委托；使听从vi. 辞职n. 辞去职务"};

String_and_meaning String_and_meaning_resignation = {
    .string = "resignation",
    .meaning = "n. 辞职；放弃；辞职书；顺从"};

String_and_meaning String_and_meaning_resist = {
    .string = "resist",
    .meaning = "vi. 抵抗，抗拒；忍耐vt. 抵抗；忍耐，忍住n. [助剂] 抗蚀剂；防染剂"};

String_and_meaning String_and_meaning_resistance = {
    .string = "resistance",
    .meaning = "n. 阻力；电阻；抵抗；反抗；抵抗力"};

String_and_meaning String_and_meaning_resistant = {
    .string = "resistant",
    .meaning = "adj. 抵抗的，反抗的；顽固的n. 抵抗者"};

String_and_meaning String_and_meaning_resolution = {
    .string = "resolution",
    .meaning = "n. [物] 分辨率；决议；解决；决心"};

String_and_meaning String_and_meaning_resolve = {
    .string = "resolve",
    .meaning = "vt. 决定；溶解；使……分解；决心要做……；[主化]解析vi. 解决；决心；分解n. 坚决；决定要做的事"};

String_and_meaning String_and_meaning_resonance = {
    .string = "resonance",
    .meaning = "n. [力] 共振；共鸣；反响"};

String_and_meaning String_and_meaning_resort = {
    .string = "resort",
    .meaning = "n. 凭借，手段；度假胜地；常去之地vi. 求助，诉诸；常去；采取某手段或方法"};

String_and_meaning String_and_meaning_resource = {
    .string = "resource",
    .meaning = "n. 资源，财力；办法；智谋vi. 向...提供资金"};

String_and_meaning String_and_meaning_respect = {
    .string = "respect",
    .meaning = "n. 尊敬，尊重；方面；敬意vt. 尊敬，尊重；遵守"};

String_and_meaning String_and_meaning_respectful = {
    .string = "respectful",
    .meaning = "adj. 恭敬的；有礼貌的"};

String_and_meaning String_and_meaning_respective = {
    .string = "respective",
    .meaning = "adj. 分别的，各自的"};

String_and_meaning String_and_meaning_respectively = {
    .string = "respectively",
    .meaning = "adv. 分别地；各自地，独自地"};

String_and_meaning String_and_meaning_respond = {
    .string = "respond",
    .meaning = "vi. 回答；作出反应；承担责任vt. 以…回答n. 应答；唱和"};

String_and_meaning String_and_meaning_response = {
    .string = "response",
    .meaning = "n. 响应；反应；回答"};

String_and_meaning String_and_meaning_responsibility = {
    .string = "responsibility",
    .meaning = "n. 责任，职责；义务"};

String_and_meaning String_and_meaning_responsible = {
    .string = "responsible",
    .meaning = "adj. 负责的，可靠的；有责任的"};

String_and_meaning String_and_meaning_rest = {
    .string = "rest",
    .meaning = "n.休息,静止,支持物,台,架,[音]休止符,其余,其他vi.休息,睡眠,静止,依靠,搁在,保持(状态),取决于vt.使休息,使静止,睡眠,依靠,搁在"};

String_and_meaning String_and_meaning_restaurant = {
    .string = "restaurant",
    .meaning = "n. 餐馆；[经] 饭店"};

String_and_meaning String_and_meaning_restless = {
    .string = "restless",
    .meaning = "adj. 焦躁不安的；不安宁的；得不到满足的"};

String_and_meaning String_and_meaning_restore = {
    .string = "restore",
    .meaning = "vt. 恢复；修复；归还vi. 恢复；还原"};

String_and_meaning String_and_meaning_restrain = {
    .string = "restrain",
    .meaning = "vt. 抑制，控制；约束；制止"};

String_and_meaning String_and_meaning_restraint = {
    .string = "restraint",
    .meaning = "n. 抑制，克制；约束"};

String_and_meaning String_and_meaning_restrict = {
    .string = "restrict",
    .meaning = "vt. 限制；约束；限定"};

String_and_meaning String_and_meaning_restriction = {
    .string = "restriction",
    .meaning = "n. 限制；约束；束缚"};

String_and_meaning String_and_meaning_result = {
    .string = "result",
    .meaning = "n. 结果；成绩；答案；比赛结果vi. 结果；导致；产生"};

String_and_meaning String_and_meaning_resultant = {
    .string = "resultant",
    .meaning = "adj. 由此导致的，因而发生的n. 合力，合成速率；结果"};

String_and_meaning String_and_meaning_resume = {
    .string = "resume",
    .meaning = "n.摘要,概略,美 履历vt.再继续,重新开始,重新占用,再用,恢复"};

String_and_meaning String_and_meaning_retail = {
    .string = "retail",
    .meaning = "n. 零售v. 零售，（以某价格）零售；详述；散播（私密消息）adv. 以零售方式adj. 零售的n. (Retail) （印）勒塔伊（人名）"};

String_and_meaning String_and_meaning_retain = {
    .string = "retain",
    .meaning = "vt. 保持；雇；记住"};

String_and_meaning String_and_meaning_retell = {
    .string = "retell",
    .meaning = "vt. 复述；再讲；重述"};

String_and_meaning String_and_meaning_retention = {
    .string = "retention",
    .meaning = "n. 保留；扣留，滞留；记忆力；闭尿"};

String_and_meaning String_and_meaning_retire = {
    .string = "retire",
    .meaning = "vi. 退休；撤退；退却；（陪审团）退庭vt. 退休；离开；收回n. 退休；退隐；退兵信号"};

String_and_meaning String_and_meaning_retort = {
    .string = "retort",
    .meaning = "v. 反驳，回嘴；蒸馏；在曲颈瓶里加热；（对侮辱或伤害）进行报复n. 反驳，顶嘴；曲颈瓶，蒸馏瓶；蒸馏，干馏"};

String_and_meaning String_and_meaning_retreat = {
    .string = "retreat",
    .meaning = "n. 撤退；休息寓所vi. 撤退；退避；向后倾vt. 退（棋）；使后退"};

String_and_meaning String_and_meaning_retrieve = {
    .string = "retrieve",
    .meaning = "vt. [计] 检索；恢复；重新得到vi. 找回猎物n. [计] 检索；恢复，取回"};

String_and_meaning String_and_meaning_retrospect = {
    .string = "retrospect",
    .meaning = "n. 回顾，追溯vi. 回顾，追溯；回想vt. 回顾；追忆"};

String_and_meaning String_and_meaning_return = {
    .string = "return",
    .meaning = "n.回来,返回,来回票,利润,回答adj.返回的,回程的,报答的,反向的,重现的vi.回返,归还vt.归还,回报,报告,获得,回答,返回"};

String_and_meaning String_and_meaning_reveal = {
    .string = "reveal",
    .meaning = "vt. 显示；透露；揭露；泄露n. 揭露；暴露；门侧，窗侧"};

String_and_meaning String_and_meaning_revelation = {
    .string = "revelation",
    .meaning = "n. 启示；揭露；出乎意料的事；被揭露的真相"};

String_and_meaning String_and_meaning_revenge = {
    .string = "revenge",
    .meaning = "n. 报复；复仇vt. 报复；替…报仇；洗雪vi. 报仇；雪耻"};

String_and_meaning String_and_meaning_reverse = {
    .string = "reverse",
    .meaning = "n.相反,背面,反面,倒退adj.相反的,倒转的,颠倒的vt.颠倒,倒转"};

String_and_meaning String_and_meaning_review = {
    .string = "review",
    .meaning = "n. 回顾；复习；评论；检讨；检阅vt. 回顾；检查；复审vi. 回顾；复习功课；写评论"};

String_and_meaning String_and_meaning_revise = {
    .string = "revise",
    .meaning = "vt. 修正；复习；校订vi. 修订；校订；复习功课n. 修订；校订n. (Revise)人名；(法)勒维斯"};

String_and_meaning String_and_meaning_revive = {
    .string = "revive",
    .meaning = "vi. 复兴；复活；苏醒；恢复精神vt. 使复兴；使苏醒；回想起；重演，重播"};

String_and_meaning String_and_meaning_revolt = {
    .string = "revolt",
    .meaning = "n. 违抗，反抗；起义，叛乱v. 反抗，反叛；叛逆，违抗；（使）厌恶，反感"};

String_and_meaning String_and_meaning_revolution = {
    .string = "revolution",
    .meaning = "n. 革命；旋转；运行；循环"};

String_and_meaning String_and_meaning_revolutionary = {
    .string = "revolutionary",
    .meaning = "adj. 革命的；旋转的；大变革的n. 革命者"};

String_and_meaning String_and_meaning_revolve = {
    .string = "revolve",
    .meaning = "vi. 旋转；循环出现；反复考虑vt. 使…旋转；使…循环；反复考虑n. 旋转；循环；旋转舞台"};

String_and_meaning String_and_meaning_reward = {
    .string = "reward",
    .meaning = "n. [劳经] 报酬；报答；酬谢vt. [劳经] 奖励；奖赏"};

String_and_meaning String_and_meaning_rhythm = {
    .string = "rhythm",
    .meaning = "n. 节奏；韵律"};

String_and_meaning String_and_meaning_rib = {
    .string = "rib",
    .meaning = "n. 肋骨；排骨；肋状物vt. 戏弄；装肋于"};

String_and_meaning String_and_meaning_ribbon = {
    .string = "ribbon",
    .meaning = "n. 带；缎带；（勋章等的）绶带；带状物；勋表vi. 形成带状vt. 把…撕成条带；用缎带装饰"};

String_and_meaning String_and_meaning_rice = {
    .string = "rice",
    .meaning = "n. 稻；米饭vt. 把…捣成米糊状n. (Rice)人名；(瑞典)里瑟；(塞)里采；(英)赖斯"};

String_and_meaning String_and_meaning_rich = {
    .string = "rich",
    .meaning = "adj. 富有的；肥沃的；昂贵的adj. 油腻的，含有很多脂肪n. (Rich)人名；(丹)里克；(捷)里赫；(英、西)里奇；(葡、法)里什"};

String_and_meaning String_and_meaning_rid = {
    .string = "rid",
    .meaning = "v. 使摆脱，使去掉n. (Rid) （俄、德、英、美）里德（人名）"};

String_and_meaning String_and_meaning_riddle = {
    .string = "riddle",
    .meaning = "n.谜,谜语,神秘人物v.解谜,出谜,迷惑"};

String_and_meaning String_and_meaning_ride = {
    .string = "ride",
    .meaning = "v.骑,乘n.骑,乘"};

String_and_meaning String_and_meaning_rider = {
    .string = "rider",
    .meaning = "n. 骑手；附文；扶手n. (Rider)人名；(英)赖德；(西)里德尔"};

String_and_meaning String_and_meaning_ridge = {
    .string = "ridge",
    .meaning = "n. 山脊；山脉；屋脊vt. 使成脊状；作垄vi. 成脊状n. (Ridge)人名；(英)里奇"};

String_and_meaning String_and_meaning_ridiculous = {
    .string = "ridiculous",
    .meaning = "adj. 可笑的；荒谬的"};

String_and_meaning String_and_meaning_rifle = {
    .string = "rifle",
    .meaning = "n. 步枪；来复枪vt. 用步枪射击；抢夺；偷走"};

String_and_meaning String_and_meaning_rig = {
    .string = "rig",
    .meaning = "v. 操纵；装配；装扮；装上索具；为……提供服装n. 装备；钻探设备；服装； 帆装；重型铰接式开车"};

String_and_meaning String_and_meaning_right = {
    .string = "right",
    .meaning = "adj. 正确的；直接的；右方的vi. 复正；恢复平稳n. 正确；右边；正义；权利adv. 正确地；恰当地；彻底地vt. 纠正n. (Right)人名；(英)赖特"};

String_and_meaning String_and_meaning_rigid = {
    .string = "rigid",
    .meaning = "adj. 严格的；僵硬的，死板的；坚硬的；精确的"};

String_and_meaning String_and_meaning_rigorous = {
    .string = "rigorous",
    .meaning = "adj. 严格的，严厉的；严密的；严酷的"};

String_and_meaning String_and_meaning_rim = {
    .string = "rim",
    .meaning = "n. 边，边缘；轮辋；圆圈vi. 作…的边，装边于vt. 作…的边，装边于n. (Rim)人名；(俄)里姆"};

String_and_meaning String_and_meaning_ring = {
    .string = "ring",
    .meaning = "n.环,环形物,环状,铃声,声调,打电话,拳击场vt.包围,套住,按铃,敲钟vi.成环形,响,鸣,敲钟,回响,按铃"};

String_and_meaning String_and_meaning_riot = {
    .string = "riot",
    .meaning = "n. 暴乱；放纵；蔓延vi. 骚乱；放荡vt. 浪费，挥霍n. (Riot)人名；(法)里奥；(西)里奥特"};

String_and_meaning String_and_meaning_rip = {
    .string = "rip",
    .meaning = "vt. 撕；锯vi. 裂开，被撕裂n. 裂口，裂缝n. (Rip)人名；(塞)里普"};

String_and_meaning String_and_meaning_ripe = {
    .string = "ripe",
    .meaning = "adj. 熟的，成熟的；时机成熟的n. 里佩（Ripe，意、瑞典人名）"};

String_and_meaning String_and_meaning_ripen = {
    .string = "ripen",
    .meaning = "vt. 使成熟vi. 成熟"};

String_and_meaning String_and_meaning_ripple = {
    .string = "ripple",
    .meaning = "n. 波纹；涟漪；[物] 涟波vi. 起潺潺声vt. 在…上形成波痕n. (Ripple)人名；(英)里普尔"};

String_and_meaning String_and_meaning_rise = {
    .string = "rise",
    .meaning = "n.上升,增加,上涨,高地,小山,发生,出现vi.升起,起身,发源,起义,高耸,增长,上升,复活vt.使飞起"};

String_and_meaning String_and_meaning_risk = {
    .string = "risk",
    .meaning = "n. 风险；危险；冒险vt. 冒…的危险n. (Risk)人名；(英、阿拉伯)里斯克"};

String_and_meaning String_and_meaning_ritual = {
    .string = "ritual",
    .meaning = "n. 仪式；惯例；礼制adj. 仪式的；例行的；礼节性的"};

String_and_meaning String_and_meaning_rival = {
    .string = "rival",
    .meaning = "n. 竞争对手；可与……匹敌的人；同行者v. 与…竞争；比得上某人；赶上（某人）；竞争adj. 竞争的n. (Rival) （俄）里瓦尔（人名）"};

String_and_meaning String_and_meaning_river = {
    .string = "river",
    .meaning = "n. 河，江n. (River)人名；(英)里弗"};

String_and_meaning String_and_meaning_road = {
    .string = "road",
    .meaning = "n. 公路，马路；道路；手段vt. （狗）沿臭迹追逐（猎物）adj. （美）巡回的n. (Road)人名；(英)罗德"};

String_and_meaning String_and_meaning_roar = {
    .string = "roar",
    .meaning = "n. 咆哮；吼；轰鸣vi. 咆哮；吼叫；喧闹vt. 咆哮；呼喊；使……轰鸣n. (Roar)人名；(挪)罗阿尔"};

String_and_meaning String_and_meaning_roast = {
    .string = "roast",
    .meaning = "v.烤,烘,烘烤,暴露于某种热力下以得温暖"};

String_and_meaning String_and_meaning_rob = {
    .string = "rob",
    .meaning = "v. 抢劫，掠夺；（非正式）敲诈；（非正式）盗窃；使……丧失，非法剥夺；（英足）夺（对手）的球"};

String_and_meaning String_and_meaning_robber = {
    .string = "robber",
    .meaning = "n. 强盗；盗贼"};

String_and_meaning String_and_meaning_robbery = {
    .string = "robbery",
    .meaning = "n. 抢劫，盗窃；抢掠"};

String_and_meaning String_and_meaning_robe = {
    .string = "robe",
    .meaning = "n. 长袍，礼服；制服vi. 穿长袍vt. 使穿长袍n. （Robe）（德、罗、塞）罗贝；（英、法）罗布（人名）"};

String_and_meaning String_and_meaning_robot = {
    .string = "robot",
    .meaning = "n. 机器人；遥控设备，自动机械；机械般工作的人"};

String_and_meaning String_and_meaning_robust = {
    .string = "robust",
    .meaning = "adj. 强健的；健康的；粗野的；粗鲁的"};

String_and_meaning String_and_meaning_rock = {
    .string = "rock",
    .meaning = "n. 岩石；摇滚乐；暗礁vt. 摇动；使摇晃vi. 摇动；摇晃n. (Rock)人名；(英、德、匈、意、瑞典)罗克"};

String_and_meaning String_and_meaning_rocket = {
    .string = "rocket",
    .meaning = "n. 火箭；火箭武器；烟花；芝麻菜；（非正式）严厉斥责v. 迅速增加；飞速移动；迅速成功；用火箭武器攻击；用火箭运载"};

String_and_meaning String_and_meaning_rod = {
    .string = "rod",
    .meaning = "n. 棒；惩罚；枝条；权力n. (Rod)人名；(英、法、德、捷、希)罗德；(阿拉伯)鲁德；(老)罗"};

String_and_meaning String_and_meaning_role = {
    .string = "role",
    .meaning = "n. 角色；任务n. (Role)人名；(意、塞、赤几)罗莱"};

String_and_meaning String_and_meaning_roll = {
    .string = "roll",
    .meaning = "adj.滚动,滚转,(使)摇摆,(使)摇晃,卷起,卷拢vt.辗,轧n.(一)卷,卷形物,摇晃,摆动,名单"};

String_and_meaning String_and_meaning_roller = {
    .string = "roller",
    .meaning = "n. [机] 滚筒；[机] 滚轴；辊子；滚转机n. (Roller)人名；(英、德、俄、匈、罗、捷、瑞典)罗勒；(法)罗莱"};

String_and_meaning String_and_meaning_Roman = {
    .string = "Roman",
    .meaning = "n. 罗马人；古罗马语adj. 罗马的；罗马人的"};

String_and_meaning String_and_meaning_romance = {
    .string = "romance",
    .meaning = "n. 传奇；浪漫史；风流韵事；冒险故事vi. 虚构；渲染；写传奇n. (Romance)人名；(西)罗曼塞"};

String_and_meaning String_and_meaning_romantic = {
    .string = "romantic",
    .meaning = "adj. 浪漫的；多情的；空想的n. 浪漫的人vt. 使…浪漫化"};

String_and_meaning String_and_meaning_roof = {
    .string = "roof",
    .meaning = "n. 屋顶；最高处，顶部；最高限度vt. 给…盖屋顶，覆盖n. (Roof)人名；(英)鲁夫"};

String_and_meaning String_and_meaning_room = {
    .string = "room",
    .meaning = "n.房间,屋子,寓所,场所,地位,空间,机会,余地"};

String_and_meaning String_and_meaning_root = {
    .string = "root",
    .meaning = "n. 根；根源；词根；祖先vi. 生根；根除vt. 生根，固定；根源在于n. (Root)人名；(英)鲁特；(德、瑞典)罗特"};

String_and_meaning String_and_meaning_rope = {
    .string = "rope",
    .meaning = "n. 绳，绳索vt. 捆，绑vi. 拧成绳状n. (Rope)人名；(英)罗普；(芬)罗佩"};

String_and_meaning String_and_meaning_rose = {
    .string = "rose",
    .meaning = "n.蔷薇属,玫瑰,玫瑰红;vbl.rise的过去式;Rose 罗斯(女子名);Remote Operations Service Elements,远程操作服务单元"};

String_and_meaning String_and_meaning_rot = {
    .string = "rot",
    .meaning = "v.(使)腐烂,(使)腐败n.腐烂,腐败"};

String_and_meaning String_and_meaning_rotary = {
    .string = "rotary",
    .meaning = "adj. 旋转的，转动的；轮流的n. 旋转式机器；[动力] 转缸式发动机"};

String_and_meaning String_and_meaning_rotate = {
    .string = "rotate",
    .meaning = "vi. 旋转；循环vt. 使旋转；使转动；使轮流adj. [植] 辐状的"};

String_and_meaning String_and_meaning_rotation = {
    .string = "rotation",
    .meaning = "n. 旋转；循环，轮流"};

String_and_meaning String_and_meaning_rotten = {
    .string = "rotten",
    .meaning = "adj. 腐烂的；堕落的；恶臭的；虚弱的；极坏的adv. 非常n. (Rotten)人名；(法、德)罗滕"};

String_and_meaning String_and_meaning_rough = {
    .string = "rough",
    .meaning = "adj.粗糙的,粗略的,大致的,粗野的,粗暴的,粗略叙述的v.大体描述adv.粗糙地"};

String_and_meaning String_and_meaning_roughly = {
    .string = "roughly",
    .meaning = "adv. 粗糙地；概略地"};

String_and_meaning String_and_meaning_round = {
    .string = "round",
    .meaning = "n.圆,圆形物,巡回,一轮;adj.圆的,丰满的,大概的,完全的,率直的;prep.围着,附近,绕过,在...周围;vt.弄圆,使成圆形,绕行,完成,四舍五入vi.变圆,发胖,环行,拐弯,进展;adv.围绕着,循环地,在周围,迂回地,朝反方向,挨个"};

String_and_meaning String_and_meaning_rouse = {
    .string = "rouse",
    .meaning = "vt. 唤醒；激起，使振奋；惊起vi. 醒来；奋起n. 觉醒；奋起n. (Rouse)人名；(英)劳斯"};

String_and_meaning String_and_meaning_route = {
    .string = "route",
    .meaning = "n.路线,路程,通道v.发送"};

String_and_meaning String_and_meaning_routine = {
    .string = "routine",
    .meaning = "n. 常规，惯例；生活乏味；（演出中的）一套动作；（计算机）例行程序adj. 常规的，例行的；平常的；乏味的v. 按惯例安排"};

String_and_meaning String_and_meaning_row = {
    .string = "row",
    .meaning = "n. 行，排；划船；街道；吵闹vt. 划船；使……成排vi. 划船；争吵n. (Row)人名；(英)罗"};

String_and_meaning String_and_meaning_royal = {
    .string = "royal",
    .meaning = "adj. 皇家的；盛大的；女王的；高贵的；第一流的n. 王室；王室成员"};

String_and_meaning String_and_meaning_royalty = {
    .string = "royalty",
    .meaning = "n. 皇室；版税；王权；专利税"};

String_and_meaning String_and_meaning_rub = {
    .string = "rub",
    .meaning = "vt. 擦；摩擦；惹怒vi. 擦；摩擦；擦破n. 摩擦；障碍；磨损处n. (Rub)人名；(捷)鲁布"};

String_and_meaning String_and_meaning_rubber = {
    .string = "rubber",
    .meaning = "n. 橡胶；橡皮；合成橡胶；避孕套adj. 橡胶制成的vt. 涂橡胶于；用橡胶制造vi. 扭转脖子看；好奇地引颈而望n. (Rubber)（西鲁）韦尔（人名）"};

String_and_meaning String_and_meaning_rubbish = {
    .string = "rubbish",
    .meaning = "n.垃圾,废物,废话"};

String_and_meaning String_and_meaning_rude = {
    .string = "rude",
    .meaning = "adj. 粗鲁的；无礼的；狂暴的；未开化的n. （Rude）（美）鲁德（人名）"};

String_and_meaning String_and_meaning_rug = {
    .string = "rug",
    .meaning = "n. 小地毯；毛皮地毯；男子假发n. (Rug)人名；(塞)鲁格"};

String_and_meaning String_and_meaning_ruin = {
    .string = "ruin",
    .meaning = "v.(使)破产,(使)堕落,毁灭n.毁灭,崩溃,(pl.) 废墟,遗迹"};

String_and_meaning String_and_meaning_rule = {
    .string = "rule",
    .meaning = "n.规则,惯例,统治,章程,破折号,准则,标准,控制vt.规定,统治,支配,裁决vi.统治,管辖,裁定n.规则,水线"};

String_and_meaning String_and_meaning_ruler = {
    .string = "ruler",
    .meaning = "n. 尺；统治者；[测] 划线板，划线的人"};

String_and_meaning String_and_meaning_rumour = {
    .string = "rumour",
    .meaning = "n. 谣言vt. 传闻"};

String_and_meaning String_and_meaning_run = {
    .string = "run",
    .meaning = "vi. 经营；奔跑；运转vt. 管理，经营；运行；参赛n. 奔跑；赛跑；趋向；奔跑的路程n. (Run)人名；(塞)鲁恩"};

String_and_meaning String_and_meaning_runner = {
    .string = "runner",
    .meaning = "n. 跑步者；走私者；推销员；送信人n. （Runner）（英）朗纳（人名）"};

String_and_meaning String_and_meaning_rupture = {
    .string = "rupture",
    .meaning = "n. 破裂；决裂；疝气vi. 破裂；发疝气vt. 使破裂；断绝；发生疝"};

String_and_meaning String_and_meaning_rural = {
    .string = "rural",
    .meaning = "adj. 农村的，乡下的；田园的，有乡村风味的"};

String_and_meaning String_and_meaning_rush = {
    .string = "rush",
    .meaning = "n. 冲进；匆促；急流；灯心草adj. 急需的vt. 使冲；突袭；匆忙地做；飞跃vi. 冲；奔；闯；赶紧；涌现n. (Rush)人名；(英)拉什"};

String_and_meaning String_and_meaning_Russian = {
    .string = "Russian",
    .meaning = "adj. 俄国的；俄语的n. 俄国人；俄语"};

String_and_meaning String_and_meaning_rust = {
    .string = "rust",
    .meaning = "n. 锈；生锈；[植保] 锈病vt. 使生锈；腐蚀vi. 生锈；成铁锈色；变迟钝n. (Rust)人名；(英)拉斯特；(德、捷、瑞典)鲁斯特；(法)吕斯特"};

String_and_meaning String_and_meaning_rusty = {
    .string = "rusty",
    .meaning = "adj. 生锈的，腐蚀的；铁锈色的，锈色的；迟钝的"};

String_and_meaning String_and_meaning_sack = {
    .string = "sack",
    .meaning = "n. 麻布袋；洗劫vt. 解雇；把……装入袋；劫掠n. (Sack)人名；(英、法、葡、瑞典)萨克；(德)扎克"};

String_and_meaning String_and_meaning_sacred = {
    .string = "sacred",
    .meaning = "adj. 神的；神圣的；宗教的；庄严的"};

String_and_meaning String_and_meaning_sacrifice = {
    .string = "sacrifice",
    .meaning = "n. 牺牲；祭品；供奉vt. 牺牲；献祭；亏本出售vi. 献祭；奉献"};

String_and_meaning String_and_meaning_sad = {
    .string = "sad",
    .meaning = "adj. 难过的；悲哀的，令人悲痛的；凄惨的，阴郁的（形容颜色）"};

String_and_meaning String_and_meaning_saddle = {
    .string = "saddle",
    .meaning = "n. 鞍，鞍状物；车座；拖具vt. 承受；使负担；装以马鞍vi. 跨上马鞍"};

String_and_meaning String_and_meaning_sadly = {
    .string = "sadly",
    .meaning = "adv. 悲哀地；悲痛地"};

String_and_meaning String_and_meaning_sadness = {
    .string = "sadness",
    .meaning = "n. 悲哀；悲伤，悲痛；使人悲伤的事"};

String_and_meaning String_and_meaning_safe = {
    .string = "safe",
    .meaning = "adj. 安全的；可靠的；平安的n. 保险箱；冷藏室；纱橱n. (Safe)人名；(几)萨菲"};

String_and_meaning String_and_meaning_safeguard = {
    .string = "safeguard",
    .meaning = "n. 保护；保卫；保护措施；预防措施v. 保护；护卫"};

String_and_meaning String_and_meaning_safely = {
    .string = "safely",
    .meaning = "adv. 安全地稳定地"};

String_and_meaning String_and_meaning_safety = {
    .string = "safety",
    .meaning = "n. 安全；保险；安全设备；保险装置；安打"};

String_and_meaning String_and_meaning_sail = {
    .string = "sail",
    .meaning = "vi. 航行；启航，开船n. 帆，篷；航行vt. 航行"};

String_and_meaning String_and_meaning_sailor = {
    .string = "sailor",
    .meaning = "n. 水手，海员；乘船者n. (Sailor)人名；(英)赛勒"};

String_and_meaning String_and_meaning_saint = {
    .string = "saint",
    .meaning = "n. 圣人；圣徒；道德崇高的人adj. 神圣的vt. 成为圣徒"};

String_and_meaning String_and_meaning_sake = {
    .string = "sake",
    .meaning = "n. 目的；利益；理由；日本米酒n. (Sake)人名；(罗)萨克；(日)酒(姓)"};

String_and_meaning String_and_meaning_salad = {
    .string = "salad",
    .meaning = "n. 色拉；尤指莴苣n. (Salad)人名；(阿拉伯)萨拉德"};

String_and_meaning String_and_meaning_salary = {
    .string = "salary",
    .meaning = "n. 薪水，工资v. 给……薪金"};

String_and_meaning String_and_meaning_sale = {
    .string = "sale",
    .meaning = "n. 销售；出售；拍卖；销售额；廉价出售n. (Sale)人名；(意、塞、瑞典)萨莱；(英、萨摩)塞尔；(法)萨尔"};

String_and_meaning String_and_meaning_salesman = {
    .string = "salesman",
    .meaning = "n. 推销员；售货员"};

String_and_meaning String_and_meaning_salt = {
    .string = "salt",
    .meaning = "n.食盐,风趣,刺激adj.含盐的,咸的,风趣的,辛辣的vt.加盐于,用盐腌 SALT [缩写] 限制战略武器会谈"};

String_and_meaning String_and_meaning_salute = {
    .string = "salute",
    .meaning = "n. 致敬，欢迎；敬礼vt. 行礼致敬，欢迎vi. 致意，打招呼；行礼"};

String_and_meaning String_and_meaning_same = {
    .string = "same",
    .meaning = "adj. 相同的；同一的；上述的（通常与the连用）；无变化的pron. 同样的事物或人（通常与the连用）adv. 同样地（通常与the连用）n. (Same)人名；(意)萨梅"};

String_and_meaning String_and_meaning_sample = {
    .string = "sample",
    .meaning = "n.标本,样品,例子vt.取样,采样,抽取...的样品,试验的一部分,尝试"};

String_and_meaning String_and_meaning_sanction = {
    .string = "sanction",
    .meaning = "n. 制裁，处罚；认可；支持vt. 制裁，处罚；批准；鼓励"};

String_and_meaning String_and_meaning_sand = {
    .string = "sand",
    .meaning = "n.沙,沙子,[pl.] 沙滩,沙地v.撒沙子"};

String_and_meaning String_and_meaning_sandwich = {
    .string = "sandwich",
    .meaning = "n. 三明治（状物）；夹心面包片；（奶油）夹心蛋糕；教学与实习交替培训课程v. 夹入（或挤进）……中间；粘合；把..……做成三明治"};

String_and_meaning String_and_meaning_sandy = {
    .string = "sandy",
    .meaning = "adj. 沙地的；多沙的；含沙的n. (Sandy)人名；(法、喀、罗、西、英)桑迪(教名Alasdair、Alastair、Alexander、Alister、Elshender的昵称)"};

String_and_meaning String_and_meaning_satellite = {
    .string = "satellite",
    .meaning = "n. 卫星；人造卫星；卫星国家adj. 卫星的"};

String_and_meaning String_and_meaning_satisfaction = {
    .string = "satisfaction",
    .meaning = "n. 满意，满足；赔偿；乐事；赎罪"};

String_and_meaning String_and_meaning_satisfactory = {
    .string = "satisfactory",
    .meaning = "adj. 满意的；符合要求的；赎罪的"};

String_and_meaning String_and_meaning_satisfy = {
    .string = "satisfy",
    .meaning = "vi. 令人满意；令人满足vt. 满足；说服，使相信；使满意，使高兴"};

String_and_meaning String_and_meaning_saturate = {
    .string = "saturate",
    .meaning = "vt. 浸透，使湿透；使饱和，使充满adj. 浸透的，饱和的；深颜色的"};

String_and_meaning String_and_meaning_Saturday = {
    .string = "Saturday",
    .meaning = "n. 星期六"};

String_and_meaning String_and_meaning_sauce = {
    .string = "sauce",
    .meaning = "n. 酱油；沙司；调味汁vt. 使增加趣味；给…调味n. （Sauce）（西）绍塞；（法）索斯（人名）"};

String_and_meaning String_and_meaning_saucer = {
    .string = "saucer",
    .meaning = "n. 茶托，浅碟；浅碟形物；微波或射频辐射用抛物面反射器构成的定向天线；投掷比赛用的圆盘"};

String_and_meaning String_and_meaning_sausage = {
    .string = "sausage",
    .meaning = "n. 香肠；腊肠；装香肠的碎肉"};

String_and_meaning String_and_meaning_savage = {
    .string = "savage",
    .meaning = "adj. 野蛮的；残酷的；狂怒的；荒凉的n. 未开化的人；粗鲁的人；残暴成性的人vt. 乱咬；粗暴的对待n. (Savage)人名；(西)萨瓦赫；(英、德)萨维奇"};

String_and_meaning String_and_meaning_save = {
    .string = "save",
    .meaning = "vt. 节省；保存；储蓄；解救vi. 节省；挽救prep. 除...之外n. 救援n. (Save)人名；(法)萨夫；(意、保、西、罗、塞、瑞典)萨薇 (女名)，萨韦"};

String_and_meaning String_and_meaning_saving = {
    .string = "saving",
    .meaning = "n. 节约；挽救；存款adj. 节约的；挽救的；补偿的；保留的prep. 考虑到；除...之外n. (Saving)人名；(瑞典)萨温"};

String_and_meaning String_and_meaning_saw = {
    .string = "saw",
    .meaning = "n. 锯；格言v. 锯；锯成；用锯；乱剪；拉锯似的来回移动v. 看见；明白，了解（see 的过去式）"};

String_and_meaning String_and_meaning_say = {
    .string = "say",
    .meaning = "vt. 讲；说明；例如；声称；假设；指明vi. 讲；表示；念；假定；背诵n. (Say)人名；(土)萨伊；(法、老、柬)赛；(英)塞伊；(匈、罗)绍伊"};

String_and_meaning String_and_meaning_scale = {
    .string = "scale",
    .meaning = "n.刻度,衡量,比例,数值范围,比例尺,天平,等级vt.依比例决定,攀登,测量vi.剥落,生水垢,重,攀登,衡量"};

String_and_meaning String_and_meaning_scan = {
    .string = "scan",
    .meaning = "vt. 扫描；浏览；细看；详细调查；标出格律vi. 扫描；扫掠n. 扫描；浏览；审视；细看"};

String_and_meaning String_and_meaning_scandal = {
    .string = "scandal",
    .meaning = "n. 丑闻；流言蜚语；诽谤；公愤"};

String_and_meaning String_and_meaning_scar = {
    .string = "scar",
    .meaning = "n.伤痕,疤痕v.结疤,使留下伤痕,创伤"};

String_and_meaning String_and_meaning_scarce = {
    .string = "scarce",
    .meaning = "adj. 缺乏的，不足的；稀有的adv. 仅仅；几乎不；几乎没有"};

String_and_meaning String_and_meaning_scarcely = {
    .string = "scarcely",
    .meaning = "adv. 几乎不，简直不；几乎没有；决不； 刚……就……；仅仅，刚刚；勉强，刚；根本不可能；不可能，不会"};

String_and_meaning String_and_meaning_scare = {
    .string = "scare",
    .meaning = "v. （使）害怕；受惊吓；吓跑n. 恐惧；惊吓；（社会上的）大恐慌adj. 骇人的"};

String_and_meaning String_and_meaning_scared = {
    .string = "scared",
    .meaning = "adj. 害怕的v. 使害怕（scare的过去分词）"};

String_and_meaning String_and_meaning_scarf = {
    .string = "scarf",
    .meaning = "n. 围巾；嵌接，嵌接处；头巾领巾vt. 披嵌接；用围巾围n. (Scarf)人名；(英)斯卡夫[ 复数 scarfs或scarves ]"};

String_and_meaning String_and_meaning_scatter = {
    .string = "scatter",
    .meaning = "v. 撒播；散开；散布；驱散；散布于……上；散射（电磁辐射或粒子）；（棒球）有效投（球）n. 零星散布的东西；离差；散射"};

String_and_meaning String_and_meaning_scene = {
    .string = "scene",
    .meaning = "n. 场面；情景；景象；事件"};

String_and_meaning String_and_meaning_scenery = {
    .string = "scenery",
    .meaning = "n. 风景；景色；舞台布景"};

String_and_meaning String_and_meaning_scent = {
    .string = "scent",
    .meaning = "n. 气味；嗅觉；痕迹；察觉能力vt. 闻到；发觉；使充满…的气味；循着遗臭追踪vi. 发出…的气味；有…的迹象；嗅着气味追赶n. (Scent)人名；(英)森特"};

String_and_meaning String_and_meaning_sceptical = {
    .string = "sceptical",
    .meaning = "adj. 怀疑的；怀疑论的；习惯怀疑的"};

String_and_meaning String_and_meaning_schedule = {
    .string = "schedule",
    .meaning = "n.时间表,进度表v.确定时间"};

String_and_meaning String_and_meaning_scheme = {
    .string = "scheme",
    .meaning = "n. 计划；组合；体制；诡计vi. 搞阴谋；拟订计划vt. 计划；策划n. (Scheme)人名；(瑞典)谢默"};

String_and_meaning String_and_meaning_scholar = {
    .string = "scholar",
    .meaning = "n. 学者；奖学金获得者"};

String_and_meaning String_and_meaning_scholarship = {
    .string = "scholarship",
    .meaning = "n. 奖学金；学识，学问"};

String_and_meaning String_and_meaning_school = {
    .string = "school",
    .meaning = "n. 学校；学院；学派；鱼群vt. 教育"};

String_and_meaning String_and_meaning_science = {
    .string = "science",
    .meaning = "n. 科学；技术；学科；理科n. (Science)人名；(英)赛恩斯"};

String_and_meaning String_and_meaning_scientific = {
    .string = "scientific",
    .meaning = "adj. 科学的，系统的"};

String_and_meaning String_and_meaning_scientist = {
    .string = "scientist",
    .meaning = "n. 科学家"};

String_and_meaning String_and_meaning_scissors = {
    .string = "scissors",
    .meaning = "n. 剪刀；剪式跳法v. 剪开；删除（scissor的第三人称单数）"};

String_and_meaning String_and_meaning_scold = {
    .string = "scold",
    .meaning = "vi. 责骂；叱责vt. 骂；责骂n. 责骂；爱责骂的人"};

String_and_meaning String_and_meaning_scope = {
    .string = "scope",
    .meaning = "n. 范围；余地；视野；眼界；导弹射程vt. 审视"};

String_and_meaning String_and_meaning_score = {
    .string = "score",
    .meaning = "n. 分数；二十；配乐；刻痕vt. 获得；评价；划线，刻划；把…记下vi. 得分；记分；刻痕n. (Score)人名；(英)斯科尔"};

String_and_meaning String_and_meaning_scorn = {
    .string = "scorn",
    .meaning = "n. 轻蔑；嘲笑；藐视的对象v. 轻蔑；藐视；不屑做"};

String_and_meaning String_and_meaning_scout = {
    .string = "scout",
    .meaning = "n. 搜索，侦察；侦察员；侦察机vt. 侦察；跟踪，监视；发现vi. 侦察；巡视；嘲笑"};

String_and_meaning String_and_meaning_scrap = {
    .string = "scrap",
    .meaning = "n. 碎片；残余物；打架；少量vt. 废弃；使解体；拆毁adj. 废弃的；零碎的vi. 吵架"};

String_and_meaning String_and_meaning_scrape = {
    .string = "scrape",
    .meaning = "n.刮,擦,擦痕,刮擦声,困境vi.刮掉,擦掉,刮出刺耳声vt.刮,擦,擦伤,挖成"};

String_and_meaning String_and_meaning_scratch = {
    .string = "scratch",
    .meaning = "n. 擦伤；抓痕；刮擦声；乱写adj. 打草稿用的；凑合的；碰巧的vt. 抓；刮；挖出；乱涂vi. 抓；搔；发刮擦声；勉强糊口；退出比赛"};

String_and_meaning String_and_meaning_scream = {
    .string = "scream",
    .meaning = "vi. 尖叫；呼啸；发出尖锐刺耳的声音；令人触目惊心vt. 尖声喊叫；大叫大嚷着要求n. 尖叫声；尖锐刺耳的声音；极其滑稽可笑的人"};

String_and_meaning String_and_meaning_screen = {
    .string = "screen",
    .meaning = "n. 屏，幕；屏风vt. 筛；拍摄；放映；掩蔽vi. 拍电影n. (Screen)人名；(英)斯克林"};

String_and_meaning String_and_meaning_screw = {
    .string = "screw",
    .meaning = "vt. 旋，拧；压榨；强迫n. 螺旋；螺丝钉；吝啬鬼vi. 转动，拧"};

String_and_meaning String_and_meaning_script = {
    .string = "script",
    .meaning = "n. 脚本；手迹；书写用的字母vt. 把…改编为剧本vi. 写电影脚本"};

String_and_meaning String_and_meaning_scrutiny = {
    .string = "scrutiny",
    .meaning = "n. 详细审查；监视；细看；选票复查"};

String_and_meaning String_and_meaning_sculpture = {
    .string = "sculpture",
    .meaning = "n. 雕塑；雕刻；刻蚀vt. 雕塑；雕刻；刻蚀vi. 从事雕刻"};

String_and_meaning String_and_meaning_sea = {
    .string = "sea",
    .meaning = "n. 海；海洋；许多；大量"};

String_and_meaning String_and_meaning_seal = {
    .string = "seal",
    .meaning = "n. 密封；印章；海豹；封条；标志vt. 密封；盖章vi. 猎海豹n. （Seal）西尔（人名）"};

String_and_meaning String_and_meaning_seam = {
    .string = "seam",
    .meaning = "n. 缝；接缝vt. 缝合；接合；使留下伤痕vi. 裂开；产生裂缝"};

String_and_meaning String_and_meaning_seaman = {
    .string = "seaman",
    .meaning = "n. 海员，水手；水兵n. (Seaman)人名；(英)西曼；(意、瑞典)塞亚曼"};

String_and_meaning String_and_meaning_seaport = {
    .string = "seaport",
    .meaning = "n. 海港；港口都市"};

String_and_meaning String_and_meaning_search = {
    .string = "search",
    .meaning = "v. 搜索，搜寻；调查，搜查；搜身；探求；思索; （在计算机上）搜索n. 搜寻；探究，查究；检索n. (Search) （印、美）瑟奇（人名）"};

String_and_meaning String_and_meaning_season = {
    .string = "season",
    .meaning = "n. 时期；季节；赛季vt. 给…调味；使适应vi. 变得成熟；变干燥"};

String_and_meaning String_and_meaning_seat = {
    .string = "seat",
    .meaning = "n. 座位；所在地；职位vt. 使…坐下；可容纳…的；使就职"};

String_and_meaning String_and_meaning_second = {
    .string = "second",
    .meaning = "n.秒,片刻,第二者,第二人,助手,次货,二等品adj.另一个,又一个 num.第二vt.赞成,支持"};

String_and_meaning String_and_meaning_secondary = {
    .string = "secondary",
    .meaning = "adj. 第二的；中等的；次要的；中级的n. 副手；代理人"};

String_and_meaning String_and_meaning_secondly = {
    .string = "secondly",
    .meaning = "adv. 其次；第二"};

String_and_meaning String_and_meaning_secret = {
    .string = "secret",
    .meaning = "adj. 秘密的，机密的；不公开的；善于掩饰自己的n. 秘密，机密；秘诀；奥秘；默祷n. (Secret) （法）塞克雷（人名）"};

String_and_meaning String_and_meaning_secretary = {
    .string = "secretary",
    .meaning = "n. 秘书；书记；部长；大臣"};

String_and_meaning String_and_meaning_section = {
    .string = "section",
    .meaning = "n. 截面；部分；部门；地区；章节vi. 被切割成片；被分成部分vt. 把…分段；将…切片；对…进行划分"};

String_and_meaning String_and_meaning_sector = {
    .string = "sector",
    .meaning = "n. 部门；扇形，扇区；象限仪；函数尺vt. 把…分成扇形"};

String_and_meaning String_and_meaning_secure = {
    .string = "secure",
    .meaning = "adj. 安全的；无虑的；有把握的；稳当的vt. 保护；弄到；招致；缚住vi. 获得安全；船抛锚；停止工作"};

String_and_meaning String_and_meaning_security = {
    .string = "security",
    .meaning = "n. 安全，安全性；保证；证券；抵押品adj. 安全的；保安的；保密的"};

String_and_meaning String_and_meaning_see = {
    .string = "see",
    .meaning = "vt. 看见；理解；领会；觉察；拜访vi. 看；看见；领会n. （See）（英）西伊；（柬）塞；（德）泽（人名）"};

String_and_meaning String_and_meaning_seed = {
    .string = "seed",
    .meaning = "n. 种子；根据；精液；萌芽；子孙；原由vt. 播种；结实；成熟；去…籽vi. 播种；（植物）结实n. (Seed)人名；(英)锡德"};

String_and_meaning String_and_meaning_seek = {
    .string = "seek",
    .meaning = "vt. 寻求；寻找；探索；搜索vi. 寻找；探索；搜索"};

String_and_meaning String_and_meaning_seem = {
    .string = "seem",
    .meaning = "vi. 似乎；像是；装作n. (Seem)人名；(英)西姆"};

String_and_meaning String_and_meaning_seemingly = {
    .string = "seemingly",
    .meaning = "adv. 看来似乎；表面上看来"};

String_and_meaning String_and_meaning_segment = {
    .string = "segment",
    .meaning = "n. 段，部分；（水果或花的）瓣，（动物的）节；弓形；音段；（广播或节目的）时间段v. 分割；（细胞）分裂"};

String_and_meaning String_and_meaning_segregate = {
    .string = "segregate",
    .meaning = "vt. 使隔离；使分离；在…实行种族隔离"};

String_and_meaning String_and_meaning_seize = {
    .string = "seize",
    .meaning = "vt. 抓住；夺取；理解；逮捕vi. 抓住；利用；（机器）卡住"};

String_and_meaning String_and_meaning_seldom = {
    .string = "seldom",
    .meaning = "adv. 很少，不常"};

String_and_meaning String_and_meaning_select = {
    .string = "select",
    .meaning = "vt.选择,挑选adj.精选的"};

String_and_meaning String_and_meaning_selection = {
    .string = "selection",
    .meaning = "n. 选择，挑选；选集；精选品"};

String_and_meaning String_and_meaning_self = {
    .string = "self",
    .meaning = "n. 自己，自我；本质；私心adj. 同一的vt. 使自花授精；使近亲繁殖vi. 自花授精n. （Self）（英）塞尔夫（人名）"};

String_and_meaning String_and_meaning_selfish = {
    .string = "selfish",
    .meaning = "adj. 自私的；利己主义的"};

String_and_meaning String_and_meaning_sell = {
    .string = "sell",
    .meaning = "vt. 销售；推销；出卖；欺骗vi. 卖；出售；受欢迎；有销路n. 销售；失望；推销术n. (Sell)人名；(德)泽尔；(英、芬、瑞典)塞尔"};

String_and_meaning String_and_meaning_seller = {
    .string = "seller",
    .meaning = "n. 卖方，售货员n. (Seller)人名；(匈)谢勒；(西)塞列尔"};

String_and_meaning String_and_meaning_semester = {
    .string = "semester",
    .meaning = "n. 学期；半年"};

String_and_meaning String_and_meaning_semiconductor = {
    .string = "semiconductor",
    .meaning = "n. [电子][物] 半导体"};

String_and_meaning String_and_meaning_seminar = {
    .string = "seminar",
    .meaning = "n. 讨论会，研讨班"};

String_and_meaning String_and_meaning_senate = {
    .string = "senate",
    .meaning = "n. 参议院，上院；（古罗马的）元老院"};

String_and_meaning String_and_meaning_senator = {
    .string = "senator",
    .meaning = "n. 参议员；（古罗马的）元老院议员；评议员，理事n. (Senator)人名；(瑞典、斯威)塞纳托尔"};

String_and_meaning String_and_meaning_send = {
    .string = "send",
    .meaning = "vt. 发送，寄；派遣；使进入；发射vi. 派人；寄信n. 上升运动n. (Send)人名；(德)森德"};

String_and_meaning String_and_meaning_senior = {
    .string = "senior",
    .meaning = "adj. 高级的；年长的；地位较高的；年资较深的，资格较老的n. 上司；较年长者；毕业班学生n. (Senior)人名；(英)西尼尔"};

String_and_meaning String_and_meaning_sensation = {
    .string = "sensation",
    .meaning = "n. 感觉；轰动；感动"};

String_and_meaning String_and_meaning_sense = {
    .string = "sense",
    .meaning = "n. 感觉，官能；观念；道理；理智vt. 感觉到；检测n. (Sense) （美）森斯（人名）"};

String_and_meaning String_and_meaning_sensible = {
    .string = "sensible",
    .meaning = "adj. 明智的；通情达理的；合乎情理的；意识到的，能感觉到的n. 可感觉到的东西"};

String_and_meaning String_and_meaning_sensitive = {
    .string = "sensitive",
    .meaning = "adj. 敏感的；感觉的；[仪] 灵敏的；感光的；易受伤害的；易受影响的n. 敏感的人；有灵异能力的人"};

String_and_meaning String_and_meaning_sentence = {
    .string = "sentence",
    .meaning = "n. [语][计] 句子，命题；宣判，判决vt. 判决，宣判"};

String_and_meaning String_and_meaning_sentiment = {
    .string = "sentiment",
    .meaning = "n. 感情，情绪；情操；观点；多愁善感"};

String_and_meaning String_and_meaning_separate = {
    .string = "separate",
    .meaning = "adj.分开的,分离的,个别的,单独的v.分开,隔离,分散,分别"};

String_and_meaning String_and_meaning_separately = {
    .string = "separately",
    .meaning = "adv. 分别地；分离地；个别地"};

String_and_meaning String_and_meaning_separation = {
    .string = "separation",
    .meaning = "n. 分离，分开；间隔，距离；[法] 分居；缺口"};

String_and_meaning String_and_meaning_September = {
    .string = "September",
    .meaning = "n. 九月"};

String_and_meaning String_and_meaning_sequence = {
    .string = "sequence",
    .meaning = "n. [数][计] 序列；顺序；续发事件vt. 按顺序排好"};

String_and_meaning String_and_meaning_series = {
    .string = "series",
    .meaning = "n. 系列，连续；[电] 串联；级数；丛书"};

String_and_meaning String_and_meaning_serious = {
    .string = "serious",
    .meaning = "adj. 严肃的，严重的；认真的；庄重的；危急的"};

String_and_meaning String_and_meaning_seriously = {
    .string = "seriously",
    .meaning = "adv. 认真地；严重地，严肃地"};

String_and_meaning String_and_meaning_servant = {
    .string = "servant",
    .meaning = "n. 仆人，佣人；公务员；雇工n. (Servant)人名；(西)塞尔万特；(法)塞尔旺"};

String_and_meaning String_and_meaning_serve = {
    .string = "serve",
    .meaning = "vt. 招待，供应；为…服务；对…有用；可作…用vi. 服役，服务；适合，足够；发球；招待，侍候n. 发球，轮到发球n. (Serve)人名；(法)塞尔夫"};

String_and_meaning String_and_meaning_service = {
    .string = "service",
    .meaning = "n. 服务，服侍；服役；仪式adj. 服务性的；耐用的；服现役的vt. 维修，检修；保养n. (Service)人名；(英)瑟维斯"};

String_and_meaning String_and_meaning_session = {
    .string = "session",
    .meaning = "n. 会议；（法庭的）开庭；（议会等的）开会；学期；讲习会"};

String_and_meaning String_and_meaning_set = {
    .string = "set",
    .meaning = "vt.  放置，安置; 使处于某种状况; 设置; 摆放餐具;vi.  落山; 出发; 凝结;n.  一套，一副; 集合; 布景; 电视机;adj.  固定的; 位于…的; 顽固的; 安排好的;"};

String_and_meaning String_and_meaning_setting = {
    .string = "setting",
    .meaning = "n. 环境；安装；布置；[天] 沉落v. 放置；沉没；使…处于某位置（set的ing形式）"};

String_and_meaning String_and_meaning_settle = {
    .string = "settle",
    .meaning = "vi. 解决；定居；沉淀；下陷vt. 解决；安排；使…定居n. 有背长椅n. (Settle)人名；(英)塞特尔"};

String_and_meaning String_and_meaning_settlement = {
    .string = "settlement",
    .meaning = "n. 解决，处理；[会计] 结算；沉降；殖民"};

String_and_meaning String_and_meaning_seven = {
    .string = "seven",
    .meaning = "num. 七个，七n. 七个人；七点钟；七岁adj. 七的；七个的n. (Seven) （土、法、俄）谢文（人名）"};

String_and_meaning String_and_meaning_seventeen = {
    .string = "seventeen",
    .meaning = "n. 十七，十七个adj. 十七岁的；十七的，十七个的num. 十七n. (Seventeen)人名；(瑞典)塞文滕"};

String_and_meaning String_and_meaning_seventh = {
    .string = "seventh",
    .meaning = "num.第七"};

String_and_meaning String_and_meaning_seventy = {
    .string = "seventy",
    .meaning = "n. 七十；七十个；七十岁；七十年代adj. 七十的；七十个的；七十岁的num. 七十"};

String_and_meaning String_and_meaning_several = {
    .string = "several",
    .meaning = "adj. 几个的；各自的pron. 几个；数个"};

String_and_meaning String_and_meaning_severe = {
    .string = "severe",
    .meaning = "adj. 严峻的；严厉的；剧烈的；苛刻的"};

String_and_meaning String_and_meaning_severely = {
    .string = "severely",
    .meaning = "adv. 严重地；严格地，严厉地；纯朴地"};

String_and_meaning String_and_meaning_sew = {
    .string = "sew",
    .meaning = "vt. 缝合，缝上；缝纫vi. 缝纫，缝"};

String_and_meaning String_and_meaning_sex = {
    .string = "sex",
    .meaning = "n. 性；性别；性行为；色情vt. 引起…的性欲；区别…的性别"};

String_and_meaning String_and_meaning_sexual = {
    .string = "sexual",
    .meaning = "adj. 性的；性别的；有性的"};

String_and_meaning String_and_meaning_shabby = {
    .string = "shabby",
    .meaning = "adj. 破旧的；卑鄙的；吝啬的；低劣的"};

String_and_meaning String_and_meaning_shade = {
    .string = "shade",
    .meaning = "n.荫,阴暗,荫凉处,图案阴影,黑暗,颜色深浅,遮光物,帘vi.渐变vt.遮蔽,使阴暗,使渐变,微减"};

String_and_meaning String_and_meaning_shadow = {
    .string = "shadow",
    .meaning = "n. 阴影；影子；幽灵；庇护；隐蔽处vt. 遮蔽；使朦胧；尾随；预示vi. 变阴暗adj. 影子内阁的"};

String_and_meaning String_and_meaning_shady = {
    .string = "shady",
    .meaning = "adj. 成荫的；阴暗的；名声不好的n. (Shady)人名；(阿拉伯)沙迪"};

String_and_meaning String_and_meaning_shaft = {
    .string = "shaft",
    .meaning = "n. 竖井；通风井；（电梯的）升降机井；杆，柄vt. 欺骗；苛待"};

String_and_meaning String_and_meaning_shake = {
    .string = "shake",
    .meaning = "vt. 动摇；摇动；震动；握手vi. 动摇；摇动；发抖n. 摇动；哆嗦"};

String_and_meaning String_and_meaning_shall = {
    .string = "shall",
    .meaning = "aux. 应；会；将；必须"};

String_and_meaning String_and_meaning_shallow = {
    .string = "shallow",
    .meaning = "adj. 浅的；肤浅的n. [地理] 浅滩vt. 使变浅vi. 变浅n. (Shallow)人名；(英)沙洛"};

String_and_meaning String_and_meaning_shame = {
    .string = "shame",
    .meaning = "n. 羞耻，羞愧；憾事，带来耻辱的人vt. 使丢脸，使羞愧n. (Shame)人名；(科特)沙梅"};

String_and_meaning String_and_meaning_shampoo = {
    .string = "shampoo",
    .meaning = "n. 洗发；洗发精vt. 洗发"};

String_and_meaning String_and_meaning_shape = {
    .string = "shape",
    .meaning = "n. 形状；模型；身材；具体化vt. 形成；塑造，使成形；使符合vi. 形成；成形；成长n. (Shape)人名；(瑞典)沙佩"};

String_and_meaning String_and_meaning_share = {
    .string = "share",
    .meaning = "v. 分享，共用；分配；有同样的感情（或经历）；分担n. 份，份额；股份；责任，贡献n. (Share) （美）沙雷（人名）"};

String_and_meaning String_and_meaning_sharp = {
    .string = "sharp",
    .meaning = "adj. 急剧的；锋利的；强烈的；敏捷的；刺耳的adv. 急剧地；锐利地；突然地n. 尖头vt. 磨快；把音调升高vi. 升音演奏n. (Sharp)人名；(英)夏普"};

String_and_meaning String_and_meaning_sharpen = {
    .string = "sharpen",
    .meaning = "vt. 削尖；磨快；使敏捷；加重vi. 尖锐；变锋利"};

String_and_meaning String_and_meaning_sharply = {
    .string = "sharply",
    .meaning = "adv. 急剧地；锐利地"};

String_and_meaning String_and_meaning_shatter = {
    .string = "shatter",
    .meaning = "vt. 粉碎；打碎；破坏；破掉；使散开vi. 粉碎；损坏；落叶n. 碎片；乱七八糟的状态"};

String_and_meaning String_and_meaning_shave = {
    .string = "shave",
    .meaning = "vi. 剃须，剃毛vt. 剃，削去；修剪；切成薄片；掠n. 刮脸，剃胡子；修面；口侥幸逃过，幸免；剃刀，刮刀"};

String_and_meaning String_and_meaning_she = {
    .string = "she",
    .meaning = "pron. 她（主格）；它（用来指雌性动物或国家、船舶、地球、月亮等）n. 女人；雌性动物n. (She)人名；(中)佘(普通话·威妥玛)"};

String_and_meaning String_and_meaning_shear = {
    .string = "shear",
    .meaning = "v. 剪（羊或其他动物的）毛；剪（头发）；（受剪切力作用而）断裂n. 切变n. (Shear) （美）希尔（人名）"};

String_and_meaning String_and_meaning_shed = {
    .string = "shed",
    .meaning = "vt. 摆脱；使落下vi. 流出；脱落；散布n. 小屋，棚；分水岭"};

String_and_meaning String_and_meaning_sheep = {
    .string = "sheep",
    .meaning = "n. 羊，绵羊；胆小鬼"};

String_and_meaning String_and_meaning_sheer = {
    .string = "sheer",
    .meaning = "adj. 绝对的；透明的；峻峭的；纯粹的adv. 完全；陡峭地vi. 偏航vt. 使偏航；使急转向n. 偏航；透明薄织物"};

String_and_meaning String_and_meaning_sheet = {
    .string = "sheet",
    .meaning = "n. 薄片，纸张；薄板；床单vt. 覆盖；盖上被单；使成大片vi. 成片流动；大片落下adj. 片状的n. (Sheet)人名；(英)希特"};

String_and_meaning String_and_meaning_shelf = {
    .string = "shelf",
    .meaning = "n. 架子；搁板；搁板状物；暗礁"};

String_and_meaning String_and_meaning_shell = {
    .string = "shell",
    .meaning = "n. 壳，贝壳；炮弹；外形vi. 剥落；设定命令行解释器的位置vt. 剥皮；炮轰"};

String_and_meaning String_and_meaning_shelter = {
    .string = "shelter",
    .meaning = "n. 庇护；避难所；遮盖物vt. 保护；使掩蔽vi. 躲避，避难n. (Shelter)人名；(英)谢尔特"};

String_and_meaning String_and_meaning_shepherd = {
    .string = "shepherd",
    .meaning = "n. 牧羊人；牧师；指导者v. 牧羊；带领，护送；指导；看管n. (Shepherd) （英、美、菲）谢泼德（人名）"};

String_and_meaning String_and_meaning_shield = {
    .string = "shield",
    .meaning = "n. 盾；防护物；保护者vt. 遮蔽；包庇；避开；保卫vi. 防御；起保护作用n. （Shield）（英）希尔德（人名）"};

String_and_meaning String_and_meaning_shift = {
    .string = "shift",
    .meaning = "n.移动,轮班,移位,变化,办法,手段vt.替换,转移,改变,移转,推卸,变速vi.转换,移动,转变,推托,变速"};

String_and_meaning String_and_meaning_shilling = {
    .string = "shilling",
    .meaning = "n. 先令n. (Shilling)人名；(英)希林"};

String_and_meaning String_and_meaning_shine = {
    .string = "shine",
    .meaning = "v.照耀,发光vt.擦亮n.光泽,光亮"};

String_and_meaning String_and_meaning_ship = {
    .string = "ship",
    .meaning = "n.船,海船,舰v.装上船,航运,载运,在船上工作"};

String_and_meaning String_and_meaning_shipment = {
    .string = "shipment",
    .meaning = "n. 装货n. 装载的货物n. 出货量"};

String_and_meaning String_and_meaning_shirt = {
    .string = "shirt",
    .meaning = "n. 衬衫；汗衫，内衣"};

String_and_meaning String_and_meaning_shiver = {
    .string = "shiver",
    .meaning = "v. 颤抖，哆嗦；打碎n. 颤抖，哆嗦；（因恐惧产生的）寒颤；碎片n. (Shiver) （美、斯）希弗（人名）"};

String_and_meaning String_and_meaning_shock = {
    .string = "shock",
    .meaning = "n.打击,震动,冲突,休克,突击,禾束堆,乱蓬的头发vt.使震动,使休克,使受电击,震惊得vi.震动,吓人adj.蓬乱的,浓密的"};

String_and_meaning String_and_meaning_shoe = {
    .string = "shoe",
    .meaning = "n. 鞋；蹄铁；外胎vt. 给……穿上鞋；穿……鞋n. (Shoe)人名；(英)休"};

String_and_meaning String_and_meaning_shoot = {
    .string = "shoot",
    .meaning = "vt. 射击，射中；拍摄；发芽；使爆炸；给…注射vi. 射击；发芽；拍电影n. 射击；摄影；狩猎；急流"};

String_and_meaning String_and_meaning_shop = {
    .string = "shop",
    .meaning = "n. 商店；店铺vt. 购物vi. 购物；买东西"};

String_and_meaning String_and_meaning_shopkeeper = {
    .string = "shopkeeper",
    .meaning = "n. 店主，老板"};

String_and_meaning String_and_meaning_shopping = {
    .string = "shopping",
    .meaning = "n. 购物，买东西v. 购物（shop的ing形式）"};

String_and_meaning String_and_meaning_shore = {
    .string = "shore",
    .meaning = "n. 海滨；沿海国家（或地区）；支柱；涨潮线与落潮线之间的地带v. 用支柱撑住；支撑，使稳住；帮助，支持n. (Shore) （美、英、加）肖尔 （人名）"};

String_and_meaning String_and_meaning_short = {
    .string = "short",
    .meaning = "adj. 短的；不足的；矮的，低的n. 短；缺乏；短路；短裤adv. 不足；突然；唐突地n. (Short) (英) 肖特 (人名)"};

String_and_meaning String_and_meaning_shortage = {
    .string = "shortage",
    .meaning = "n. 缺乏，缺少；不足"};

String_and_meaning String_and_meaning_shortcoming = {
    .string = "shortcoming",
    .meaning = "n. 缺点；短处"};

String_and_meaning String_and_meaning_shortly = {
    .string = "shortly",
    .meaning = "adv. 立刻；简短地；唐突地"};

String_and_meaning String_and_meaning_shot = {
    .string = "shot",
    .meaning = "n. 发射；炮弹；射手；镜头adj. 用尽的；破旧的；杂色的，闪光的v. 射击（shoot的过去式和过去分词）"};

String_and_meaning String_and_meaning_should = {
    .string = "should",
    .meaning = "aux. 应该；就；可能；将要；本当；竟然"};

String_and_meaning String_and_meaning_shoulder = {
    .string = "shoulder",
    .meaning = "n. 肩，肩膀；肩部vt. 肩负，承担vi. 用肩推挤，用肩顶"};

String_and_meaning String_and_meaning_shout = {
    .string = "shout",
    .meaning = "vi. 呼喊；喊叫；大声说vt. 呼喊；大声说n. 呼喊；呼叫"};

String_and_meaning String_and_meaning_show = {
    .string = "show",
    .meaning = "vt. 显示；说明；演出；展出vi. 显示；说明；指示n. 显示；表演；炫耀n. (Show) （美、巴西）肖（人名）"};

String_and_meaning String_and_meaning_shower = {
    .string = "shower",
    .meaning = "n. 淋浴；（倾泻般出现的）一阵，一大批；阵雨vt. 大量地给予；把……弄湿vi. 淋浴；下阵雨"};

String_and_meaning String_and_meaning_shrewd = {
    .string = "shrewd",
    .meaning = "adj. 精明的；狡猾的；机灵的n. 精明（的人）；机灵（的人）"};

String_and_meaning String_and_meaning_shriek = {
    .string = "shriek",
    .meaning = "v. 尖叫；尖声说；促人注意；（无生命的东西）发出尖锐刺耳声；明显地不协调n. 尖声；尖锐的响声；感叹号（非正式）"};

String_and_meaning String_and_meaning_shrink = {
    .string = "shrink",
    .meaning = "v.收缩,(使)皱缩,缩短"};

String_and_meaning String_and_meaning_shrug = {
    .string = "shrug",
    .meaning = "vt. 耸肩，耸肩表示n. 耸肩vi. 耸肩"};

String_and_meaning String_and_meaning_shut = {
    .string = "shut",
    .meaning = "vt. 关闭；停业；幽禁vi. 关上；停止营业n. 关闭adj. 关闭的；围绕的n. (Shut)人名；(俄)舒特；(中)室(广东话·威妥玛)"};

String_and_meaning String_and_meaning_shutter = {
    .string = "shutter",
    .meaning = "n. 快门；百叶窗；关闭物；遮板vt. 为…装百叶窗；以百叶窗遮闭"};

String_and_meaning String_and_meaning_shuttle = {
    .string = "shuttle",
    .meaning = "n. 航天飞机；穿梭；梭子；穿梭班机、公共汽车等vt. 使穿梭般来回移动；短程穿梭般运送vi. 穿梭往返"};

String_and_meaning String_and_meaning_shy = {
    .string = "shy",
    .meaning = "adj. 害羞的；畏缩的，胆怯的vi. 投；畏缩；惊退；厌恶vt. 投；乱掷n. 投掷；惊跳n. (Shy)人名；(英)夏伊"};

String_and_meaning String_and_meaning_sick = {
    .string = "sick",
    .meaning = "adj. 厌恶的；病态的；不舒服；渴望的；恶心的 ；生病的n. 病人vt. 使狗去咬；呕吐；追击n. （Sick）（德、西）西克（人名）"};

String_and_meaning String_and_meaning_sickness = {
    .string = "sickness",
    .meaning = "n. 疾病；呕吐；弊病"};

String_and_meaning String_and_meaning_side = {
    .string = "side",
    .meaning = "n. 方面；侧面；旁边vi. 支持；赞助；偏袒adj. 旁的，侧的vt. 同意，支持n. (Side)人名；(英)赛德"};

String_and_meaning String_and_meaning_sideways = {
    .string = "sideways",
    .meaning = "adv. 向侧面地，向一旁地；平级变动地；间接地adj. 向侧面的，向一旁的；平级变动的；间接的；非正统的"};

String_and_meaning String_and_meaning_sigh = {
    .string = "sigh",
    .meaning = "v. 叹气；叹着气说；（风）呼啸，悲鸣n. 叹息，叹气；（尤指风发出的）叹息般的声音"};

String_and_meaning String_and_meaning_sight = {
    .string = "sight",
    .meaning = "n. 视力；景象；眼界；见解vt. 看见；瞄准vi. 瞄准；观看adj. 见票即付的；即席的"};

String_and_meaning String_and_meaning_sightseeing = {
    .string = "sightseeing",
    .meaning = "n. 观光；游览adj. 观光的；游览的v. 观光（sightsee的ing形式）；游览"};

String_and_meaning String_and_meaning_sign = {
    .string = "sign",
    .meaning = "n. 迹象；符号；记号；手势；指示牌vi. 签署；签名vt. 签署；示意"};

String_and_meaning String_and_meaning_signal = {
    .string = "signal",
    .meaning = "n. 信号；暗号；导火线vt. 标志；用信号通知；表示adj. 显著的；作为信号的vi. 发信号n. (Signal)人名；(瑞典)西格纳尔"};

String_and_meaning String_and_meaning_signature = {
    .string = "signature",
    .meaning = "n. 署名；签名；信号"};

String_and_meaning String_and_meaning_significance = {
    .string = "significance",
    .meaning = "n. 意义；重要性；意思"};

String_and_meaning String_and_meaning_significant = {
    .string = "significant",
    .meaning = "adj. 重大的；有效的；有意义的；值得注意的；意味深长的n. 象征；有意义的事物"};

String_and_meaning String_and_meaning_signify = {
    .string = "signify",
    .meaning = "vt. 表示；意味；预示vi. 有重要性；要紧；冒充内行"};

String_and_meaning String_and_meaning_silence = {
    .string = "silence",
    .meaning = "n. 沉默；寂静；缄默；不谈；无声状态vt. 使沉默；使安静；压制；消除噪音int. 安静！；别作声！"};

String_and_meaning String_and_meaning_silent = {
    .string = "silent",
    .meaning = "adj. 沉默的；寂静的；无记载的n. 无声电影"};

String_and_meaning String_and_meaning_silicon = {
    .string = "silicon",
    .meaning = "n. [化学] 硅；硅元素"};

String_and_meaning String_and_meaning_silk = {
    .string = "silk",
    .meaning = "n. 丝绸；蚕丝；丝织物adj. 丝的；丝绸的；丝制的vi. （玉米）处于长须的阶段中n. (Silk)人名；(英、瑞典)西尔克"};

String_and_meaning String_and_meaning_silly = {
    .string = "silly",
    .meaning = "adj. 愚蠢的；不明事理的；没头脑的n. 傻瓜n. (Silly)人名；(匈)希伊；(法)西利"};

String_and_meaning String_and_meaning_silver = {
    .string = "silver",
    .meaning = "n.银,银子vt.镀银"};

String_and_meaning String_and_meaning_similar = {
    .string = "similar",
    .meaning = "adj. 相似的n. 类似物"};

String_and_meaning String_and_meaning_similarly = {
    .string = "similarly",
    .meaning = "adv. 类似地，差不多地；同样地，也"};

String_and_meaning String_and_meaning_simple = {
    .string = "simple",
    .meaning = "adj. 简单的；单纯的；天真的n. 笨蛋；愚蠢的行为；出身低微者n. (Simple)人名；(法)桑普勒"};

String_and_meaning String_and_meaning_simplicity = {
    .string = "simplicity",
    .meaning = "n. 朴素；简易；天真；愚蠢"};

String_and_meaning String_and_meaning_simplify = {
    .string = "simplify",
    .meaning = "vt. 简化；使单纯；使简易"};

String_and_meaning String_and_meaning_simply = {
    .string = "simply",
    .meaning = "adv. 简单地；仅仅；简直；朴素地；坦白地"};

String_and_meaning String_and_meaning_simulate = {
    .string = "simulate",
    .meaning = "vt. 模仿；假装；冒充adj. 模仿的；假装的"};

String_and_meaning String_and_meaning_simultaneous = {
    .string = "simultaneous",
    .meaning = "adj. 同时的；联立的；同时发生的n. 同时译员"};

String_and_meaning String_and_meaning_sin = {
    .string = "sin",
    .meaning = "n. 罪恶；罪孽；过失vi. 犯罪；犯过失vt. 犯罪n. （Sin）（罗）西恩；（匈）欣；（柬、阿拉伯）辛；（缅）信（人名）"};

String_and_meaning String_and_meaning_since = {
    .string = "since",
    .meaning = "prep. 自……以后；（表示气愤）何曾conj. 自……以来；因为adv. 自……以后；此后；之前n. (Since) （法、美）新斯（人名）"};

String_and_meaning String_and_meaning_sincere = {
    .string = "sincere",
    .meaning = "adj. 真诚的；诚挚的；真实的"};

String_and_meaning String_and_meaning_sing = {
    .string = "sing",
    .meaning = "vi. 唱歌；歌颂；鸣叫；呼号vt. 唱；用诗赞颂；唱着使n. 演唱；鸣声；呼啸声n. (Sing)人名；(老、德、泰)辛"};

String_and_meaning String_and_meaning_singer = {
    .string = "singer",
    .meaning = "n. 歌手，歌唱家n. （Singer）（美）桑热（人名）"};

String_and_meaning String_and_meaning_single = {
    .string = "single",
    .meaning = "adj. 单一的；单身的；单程的n. 一个；单打；单程票vt. 选出vi. 击出一垒安打"};

String_and_meaning String_and_meaning_singular = {
    .string = "singular",
    .meaning = "adj. 单数的；单一的；非凡的；异常的n. 单数"};

String_and_meaning String_and_meaning_sink = {
    .string = "sink",
    .meaning = "vi.沉下,(使)下沉n.水槽,水池 接收器"};

String_and_meaning String_and_meaning_sir = {
    .string = "sir",
    .meaning = "n. 先生；（用于姓名前）爵士；阁下；（中小学生对男教师的称呼）先生；老师n. （苏丹、德）西尔（人名）"};

String_and_meaning String_and_meaning_sister = {
    .string = "sister",
    .meaning = "n. 姐妹；（称志同道合者）姐妹；修女；护士adj. 姐妹般的；同类型的"};

String_and_meaning String_and_meaning_sit = {
    .string = "sit",
    .meaning = "vi. 坐；位于vt. 使就座n. (Sit) （美、加）西特（人名）"};

String_and_meaning String_and_meaning_site = {
    .string = "site",
    .meaning = "n. 地点；位置；场所vt. 设置；为…选址"};

String_and_meaning String_and_meaning_situated = {
    .string = "situated",
    .meaning = "adj. 位于…的；处于…境遇的v. 使位于；使处于（situate的过去分词）"};

String_and_meaning String_and_meaning_situation = {
    .string = "situation",
    .meaning = "n. 情况；形势；处境；位置"};

String_and_meaning String_and_meaning_six = {
    .string = "six",
    .meaning = "num. 数字6；六个；六个人（或物）一组；六岁；六点钟n. (Six) （美、德）西克斯（人名）"};

String_and_meaning String_and_meaning_sixteen = {
    .string = "sixteen",
    .meaning = "num. 十六；十六个adj. 十六的；十六个的"};

String_and_meaning String_and_meaning_sixth = {
    .string = "sixth",
    .meaning = "n. 第六；（比赛或竞赛的）第六名；六分之一；六年级；六度音程；六度音adj. （与 the 连用）第六的，第六个的；六分之一的"};

String_and_meaning String_and_meaning_sixty = {
    .string = "sixty",
    .meaning = "num. 六十，六十个；六十几，六十年代；六十岁"};

String_and_meaning String_and_meaning_size = {
    .string = "size",
    .meaning = "n. 大小；尺寸adj. 一定尺寸的vt. 依大小排列vi. 可比拟"};

String_and_meaning String_and_meaning_skate = {
    .string = "skate",
    .meaning = "n.冰鞋,溜冰,老马,可鄙的人vi.滑冰,滑过"};

String_and_meaning String_and_meaning_skeleton = {
    .string = "skeleton",
    .meaning = "n. 骨架，骨骼；纲要；骨瘦如柴的人adj. 骨骼的；骨瘦如柴的；概略的"};

String_and_meaning String_and_meaning_skeptical = {
    .string = "skeptical",
    .meaning = "adj. 怀疑的；（哲学）怀疑论的，不可知论的"};

String_and_meaning String_and_meaning_sketch = {
    .string = "sketch",
    .meaning = "n. 素描；略图；梗概vt. 画素描或速写vi. 画素描或速写n. (Sketch)人名；(英)斯凯奇"};

String_and_meaning String_and_meaning_ski = {
    .string = "ski",
    .meaning = "n. 滑雪橇vi. 滑雪adj. 滑雪（用）的"};

String_and_meaning String_and_meaning_skill = {
    .string = "skill",
    .meaning = "n. 技能，技巧；本领，技术n. (Skill)人名；(瑞典)希尔"};

String_and_meaning String_and_meaning_skilled = {
    .string = "skilled",
    .meaning = "adj. 熟练的；有技能的；需要技能的"};

String_and_meaning String_and_meaning_skillful = {
    .string = "skillful",
    .meaning = "adj. 熟练的；巧妙的"};

String_and_meaning String_and_meaning_skim = {
    .string = "skim",
    .meaning = "v.撇去"};

String_and_meaning String_and_meaning_skin = {
    .string = "skin",
    .meaning = "n. 皮肤；外皮vt. 剥皮vi. 愈合；长皮"};

String_and_meaning String_and_meaning_skip = {
    .string = "skip",
    .meaning = "vi. 跳跃；跳绳；遗漏；跳读vt. 跳过；遗漏n. 跳跃；跳读n. (Skip)人名；(英)斯基普"};

String_and_meaning String_and_meaning_skirt = {
    .string = "skirt",
    .meaning = "n. 裙子vt. 绕过，回避；位于…边缘vi. 沿边走，绕开；环绕"};

String_and_meaning String_and_meaning_sky = {
    .string = "sky",
    .meaning = "n. 天空；顶点vt. 把…投向空中；把…挂得过高vi. 踢或击高空球；把桨叶翘得过高；飞涨n. (Sky)人名；(英)斯凯"};

String_and_meaning String_and_meaning_slack = {
    .string = "slack",
    .meaning = "n.松弛,静止,淡季,闲散,家常裤adj.松弛的,不流畅的,疏忽的,软弱的,漏水的,呆滞的,懒散的adv.马虎地,缓慢地vt.使松弛,使缓慢,马虎从事vi.松懈,减弱,松驰"};

String_and_meaning String_and_meaning_slam = {
    .string = "slam",
    .meaning = "v.砰地关上,砰地放下,猛力抨击,冲击n.砰,猛击,撞击,冲击"};

String_and_meaning String_and_meaning_slap = {
    .string = "slap",
    .meaning = "vt.拍,掌击,拍击n.拍,掌击,拍击"};

String_and_meaning String_and_meaning_slaughter = {
    .string = "slaughter",
    .meaning = "n.屠宰,残杀,屠杀v.屠宰,残杀,屠杀"};

String_and_meaning String_and_meaning_slave = {
    .string = "slave",
    .meaning = "n. 奴隶；从动装置vi. 苦干；拼命工作n. (Slave)人名；(塞、罗)斯拉韦"};

String_and_meaning String_and_meaning_slavery = {
    .string = "slavery",
    .meaning = "n. 奴役；奴隶制度；奴隶身份"};

String_and_meaning String_and_meaning_sleep = {
    .string = "sleep",
    .meaning = "vi. 睡，睡觉n. 睡眠n. (Sleep)人名；(英)斯利普"};

String_and_meaning String_and_meaning_sleepy = {
    .string = "sleepy",
    .meaning = "adj. 困倦的，瞌睡的；（地方）冷清的，寂静的；（生意，产业等）没有活力的"};

String_and_meaning String_and_meaning_sleeve = {
    .string = "sleeve",
    .meaning = "n. [机] 套筒，[机] 套管；袖子，[服装] 袖套vt. 给……装袖子；给……装套筒"};

String_and_meaning String_and_meaning_slender = {
    .string = "slender",
    .meaning = "adj. 细长的；苗条的；微薄的"};

String_and_meaning String_and_meaning_slice = {
    .string = "slice",
    .meaning = "n. 薄片；部分；菜刀，火铲vt. 切下；把…分成部分；将…切成薄片vi. 切开；割破"};

String_and_meaning String_and_meaning_slide = {
    .string = "slide",
    .meaning = "v.(使)滑动,(使)滑行n.滑,滑动,幻灯片"};

String_and_meaning String_and_meaning_slight = {
    .string = "slight",
    .meaning = "adj. 轻微的，少量的；脆弱的；细长的；不重要的vt. 轻视，忽略；怠慢n. 怠慢；轻蔑"};

String_and_meaning String_and_meaning_slightly = {
    .string = "slightly",
    .meaning = "adv. 些微地，轻微地；纤细地，瘦小的"};

String_and_meaning String_and_meaning_slim = {
    .string = "slim",
    .meaning = "adj. 苗条的；修长的；微小的；差的vt. 使…体重减轻；使…苗条vi. 减轻体重；变细n. (Slim)人名；(阿拉伯)萨利姆；(英、西)斯利姆"};

String_and_meaning String_and_meaning_slip = {
    .string = "slip",
    .meaning = "n.滑倒,事故,片,纸片;vi.滑动,滑倒,失足,减退;vt.使滑动,滑过,摆脱,闪开,塞入;adj.滑动的,活络的,有活结的;Serial Line Interface Protocol,串行线路接口协议"};

String_and_meaning String_and_meaning_slipper = {
    .string = "slipper",
    .meaning = "n. 拖鞋vt. 用拖鞋打"};

String_and_meaning String_and_meaning_slippery = {
    .string = "slippery",
    .meaning = "adj. 滑的；狡猾的；不稳定的"};

String_and_meaning String_and_meaning_slit = {
    .string = "slit",
    .meaning = "n. 狭长的切口；裂缝v. 使有狭缝；撕裂；使成长条；眯起眼睛"};

String_and_meaning String_and_meaning_slogan = {
    .string = "slogan",
    .meaning = "n. 标语；呐喊声"};

String_and_meaning String_and_meaning_slope = {
    .string = "slope",
    .meaning = "n. 斜坡；倾斜；斜率；扛枪姿势vi. 倾斜；逃走vt. 倾斜；使倾斜；扛"};

String_and_meaning String_and_meaning_slot = {
    .string = "slot",
    .meaning = "n. 位置；狭槽；水沟；硬币投币口vt. 跟踪；开槽于n. (Slot)人名；(英、荷)斯洛特"};

String_and_meaning String_and_meaning_slow = {
    .string = "slow",
    .meaning = "adj. 慢的；减速的；迟钝的vi. 变慢；变萧条vt. 放慢；阻碍adv. 慢慢地；迟缓地n. (Slow)人名；(英)斯洛"};

String_and_meaning String_and_meaning_slowly = {
    .string = "slowly",
    .meaning = "adv. 缓慢地，慢慢地"};

String_and_meaning String_and_meaning_slum = {
    .string = "slum",
    .meaning = "n. 贫民窟；（不宜居住的）房屋；脏乱的地方v. （为猎奇或救济）去贫民窟；将就适应，过穷日子"};

String_and_meaning String_and_meaning_sly = {
    .string = "sly",
    .meaning = "adj. 狡猾的；淘气的；诡密的n. (Sly)人名；(英)斯莱"};

String_and_meaning String_and_meaning_small = {
    .string = "small",
    .meaning = "adj. 少的，小的；微弱的；几乎没有的；不重要的；幼小的adv. 小小地；卑鄙地n. 小件物品；矮小的人n. (Small)人名；(英)斯莫尔"};

String_and_meaning String_and_meaning_smart = {
    .string = "smart",
    .meaning = "adj. 聪明的；巧妙的；敏捷的；厉害的；潇洒的；剧烈的；时髦的n. （Smart）（法）斯马尔；（英、德）斯马特（人名）"};

String_and_meaning String_and_meaning_smash = {
    .string = "smash",
    .meaning = "v.打碎,粉碎n.打碎,粉碎adj.出色的"};

String_and_meaning String_and_meaning_smell = {
    .string = "smell",
    .meaning = "n. 气味，嗅觉；臭味v. 嗅，闻；有……气味；察觉到；发出……的气味n. (Smell) （美、俄、英、印、新）史默乐（人名）"};

String_and_meaning String_and_meaning_smile = {
    .string = "smile",
    .meaning = "v. 微笑；微笑着表示；露出（某种笑容）n. 微笑，笑容；喜色n. (Smile) （俄、印度、美）斯米莱（人名）"};

String_and_meaning String_and_meaning_smog = {
    .string = "smog",
    .meaning = "n. 烟雾"};

String_and_meaning String_and_meaning_smoke = {
    .string = "smoke",
    .meaning = "n. 烟；抽烟；无常的事物vi. 冒烟，吸烟；抽烟；弥漫vt. 吸烟；抽"};

String_and_meaning String_and_meaning_smooth = {
    .string = "smooth",
    .meaning = "adj. 顺利的；光滑的；平稳的vt. 使光滑；消除（障碍等）；使优雅；缓和n. 平滑部分；一块平地vi. 变平静；变平滑adv. 光滑地；平稳地；流畅地"};

String_and_meaning String_and_meaning_smoothly = {
    .string = "smoothly",
    .meaning = "adv. 平稳地，平滑地；顺利地，流畅地；平静地；均匀地"};

String_and_meaning String_and_meaning_smuggle = {
    .string = "smuggle",
    .meaning = "vt. 走私；偷运vi. 走私，私运；偷带"};

String_and_meaning String_and_meaning_snack = {
    .string = "snack",
    .meaning = "n. 小吃，点心；快餐；易办到的事，小事一桩v.  吃点心（或快餐、小吃）"};

String_and_meaning String_and_meaning_snake = {
    .string = "snake",
    .meaning = "n. 蛇；阴险的人vi. 迂回前进vt. 拉（木材等）；迂回前进"};

String_and_meaning String_and_meaning_snap = {
    .string = "snap",
    .meaning = "vt. 突然折断，拉断；猛咬；啪地关上vi. 咬；厉声说；咯嗒一声关上n. 猛咬；劈啪声；突然折断adj. 突然的"};

String_and_meaning String_and_meaning_snatch = {
    .string = "snatch",
    .meaning = "v.攫取n.攫取"};

String_and_meaning String_and_meaning_snow = {
    .string = "snow",
    .meaning = "n. 雪，积雪；下雪vi. 降雪vt. 使纷纷落下；使变白n. (Snow)人名；(英)斯诺"};

String_and_meaning String_and_meaning_snowstorm = {
    .string = "snowstorm",
    .meaning = "n. 暴风雪；雪暴"};

String_and_meaning String_and_meaning_snowy = {
    .string = "snowy",
    .meaning = "adj. 下雪的，多雪的；被雪覆盖的；洁白无瑕的"};

String_and_meaning String_and_meaning_so = {
    .string = "so",
    .meaning = "adv. 如此，这么；确是如此conj. 所以；因此pron. 这样n. (So)人名；(柬)索"};

String_and_meaning String_and_meaning_soak = {
    .string = "soak",
    .meaning = "vt. 吸收，吸入；沉浸在（工作或学习中）；使……上下湿透vi. 浸泡；渗透n. 浸；湿透；大雨"};

String_and_meaning String_and_meaning_soap = {
    .string = "soap",
    .meaning = "n. 肥皂vt. 将肥皂涂在……上；俚对……拍马屁vi. 用肥皂擦洗"};

String_and_meaning String_and_meaning_soar = {
    .string = "soar",
    .meaning = "vi. 急升，激增；高飞；升空；翱翔；（树木、建筑物等）高耸；（情绪）高涨n. 高飞；高涨n. （Soar）（英、葡）索尔（人名）"};

String_and_meaning String_and_meaning_sob = {
    .string = "sob",
    .meaning = "vi. 啜泣，呜咽；（风等）发出呜咽声vt. 哭诉，啜泣n. 啜泣，呜咽"};

String_and_meaning String_and_meaning_sober = {
    .string = "sober",
    .meaning = "adj. 冷静的，清醒的；未醉的vt. 使严肃；使醒酒，使清醒n. （Sober）索伯（人名）"};

String_and_meaning String_and_meaning_soccer = {
    .string = "soccer",
    .meaning = "n. 英式足球，足球"};

String_and_meaning String_and_meaning_social = {
    .string = "social",
    .meaning = "adj. 社会的，社交的；群居的n. 联谊会；联欢会"};

String_and_meaning String_and_meaning_socialism = {
    .string = "socialism",
    .meaning = "n. 社会主义"};

String_and_meaning String_and_meaning_socialist = {
    .string = "socialist",
    .meaning = "n. 社会主义者，社会党党员adj. 社会主义的，社会党的"};

String_and_meaning String_and_meaning_society = {
    .string = "society",
    .meaning = "n. 社会；交往；社团；社交界"};

String_and_meaning String_and_meaning_sociology = {
    .string = "sociology",
    .meaning = "n. 社会学；群体生态学"};

String_and_meaning String_and_meaning_sock = {
    .string = "sock",
    .meaning = "n. 短袜；一击vt. 重击；给……穿袜adv. 正着地；不偏不倚地adj. 非常成功的n. (Sock)人名；(德)佐克"};

String_and_meaning String_and_meaning_soda = {
    .string = "soda",
    .meaning = "n. 苏打；碳酸水n. (Soda)人名；(意)索达；(日)曾田(姓)"};

String_and_meaning String_and_meaning_soft = {
    .string = "soft",
    .meaning = "adj. 软的，柔软的；温柔的，温和的；软弱的；笨的adv. 柔软地；温和地n. 柔性；柔软的东西；柔软部分"};

String_and_meaning String_and_meaning_softly = {
    .string = "softly",
    .meaning = "adv. 轻声地；温柔地；柔和地"};

String_and_meaning String_and_meaning_software = {
    .string = "software",
    .meaning = "n. 软件"};

String_and_meaning String_and_meaning_soil = {
    .string = "soil",
    .meaning = "n. 土地；土壤；国家；粪便；务农；温床vt. 弄脏；污辱vi. 变脏"};

String_and_meaning String_and_meaning_solar = {
    .string = "solar",
    .meaning = "adj. 太阳的；日光的；利用太阳光的；与太阳相关的n. 日光浴室n. （Solar）（法、英、意、西、塞、捷）索拉尔（人名）"};

String_and_meaning String_and_meaning_soldier = {
    .string = "soldier",
    .meaning = "n. 军人；[昆] 兵蚁；懒汉；一片烤面包vi. 当兵；磨洋工；坚持干；假称害病"};

String_and_meaning String_and_meaning_sole = {
    .string = "sole",
    .meaning = "adj.单独的,唯一的n.脚底,鞋底,基础v.换鞋底"};

String_and_meaning String_and_meaning_solely = {
    .string = "solely",
    .meaning = "adv. 单独地；仅仅"};

String_and_meaning String_and_meaning_solemn = {
    .string = "solemn",
    .meaning = "adj. 庄严的，严肃的；隆重的，郑重的"};

String_and_meaning String_and_meaning_solid = {
    .string = "solid",
    .meaning = "adj. 固体的；可靠的；立体的；结实的；一致的n. 固体；立方体n. (Solid)人名；(瑞典)索利德"};

String_and_meaning String_and_meaning_solidarity = {
    .string = "solidarity",
    .meaning = "n. 团结，团结一致"};

String_and_meaning String_and_meaning_solitary = {
    .string = "solitary",
    .meaning = "adj. 孤独的；独居的n. 独居者；隐士"};

String_and_meaning String_and_meaning_solo = {
    .string = "solo",
    .meaning = "n. 独奏；独唱；独奏曲adj. 独奏的；独唱的；单独的vt. 单人攀登；单独驾vi. 单独表演；放单飞adv. 单独地"};

String_and_meaning String_and_meaning_soluble = {
    .string = "soluble",
    .meaning = "adj. [化学] 可溶的，可溶解的；可解决的"};

String_and_meaning String_and_meaning_solution = {
    .string = "solution",
    .meaning = "n. 解决方案；溶液；溶解；解答"};

String_and_meaning String_and_meaning_solve = {
    .string = "solve",
    .meaning = "vt. 解决；解答；溶解vi. 作解答"};

String_and_meaning String_and_meaning_some = {
    .string = "some",
    .meaning = "adj.一些,少许,若干,有些,大约,相当的 pron.一些,若干,有些,某些"};

String_and_meaning String_and_meaning_somebody = {
    .string = "somebody",
    .meaning = "pron. 有人，某人；重要人物n. 大人物，重要人物"};

String_and_meaning String_and_meaning_somehow = {
    .string = "somehow",
    .meaning = "adv. 以某种方法；莫名其妙地"};

String_and_meaning String_and_meaning_someone = {
    .string = "someone",
    .meaning = "pron. 有人，某人；重要人物"};

String_and_meaning String_and_meaning_something = {
    .string = "something",
    .meaning = "pron.某事,某物adj.有点象,大约"};

String_and_meaning String_and_meaning_sometime = {
    .string = "sometime",
    .meaning = "adv. 改天；来日；在某一时候adj. 以前的；某一时间的"};

String_and_meaning String_and_meaning_sometimes = {
    .string = "sometimes",
    .meaning = "adv. 有时，间或"};

String_and_meaning String_and_meaning_somewhat = {
    .string = "somewhat",
    .meaning = "adv. 有点，稍微pron. 某物；几分"};

String_and_meaning String_and_meaning_somewhere = {
    .string = "somewhere",
    .meaning = "adv. 在某处；到某处n. 某个地方"};

String_and_meaning String_and_meaning_son = {
    .string = "son",
    .meaning = "n. 儿子；孩子（对年轻人的称呼）；男性后裔n. (Son)人名；(土、老、柬)松；(法、罗)索恩；(日)存(名)；(日)孙(姓)；(越)山"};

String_and_meaning String_and_meaning_song = {
    .string = "song",
    .meaning = "n. 歌曲；歌唱；诗歌；鸣声n. (Song)人名；(泰)颂；(柬)松；(英)桑；(老)宋；(越)双；(东南亚国家华语)松"};

String_and_meaning String_and_meaning_soon = {
    .string = "soon",
    .meaning = "adv. 快；不久，一会儿；立刻；宁愿"};

String_and_meaning String_and_meaning_sophisticated = {
    .string = "sophisticated",
    .meaning = "adj. 复杂的；精致的；久经世故的；富有经验的v. 使变得世故；使迷惑；篡改（sophisticate的过去分词形式）"};

String_and_meaning String_and_meaning_sore = {
    .string = "sore",
    .meaning = "adj. 疼痛的，痛心的；剧烈的，极度的；恼火的，发怒的；厉害的，迫切的n. 溃疡，痛处；恨事，伤心事n. (Sore)人名；(法)索尔；(意)索雷"};

String_and_meaning String_and_meaning_sorrow = {
    .string = "sorrow",
    .meaning = "n. 悲伤；懊悔；伤心事vi. 懊悔；遗憾；感到悲伤vt. 为…悲痛"};

String_and_meaning String_and_meaning_sorry = {
    .string = "sorry",
    .meaning = "adj. 遗憾的；对不起的，抱歉的int. 对不起，抱歉（表示委婉的拒绝等）"};

String_and_meaning String_and_meaning_sort = {
    .string = "sort",
    .meaning = "n. 种类；方式；品质；[计]（资料、数据的）分类，排序vi. 分类；协调；交往vt. 将…分类；将…排序；挑选出某物"};

String_and_meaning String_and_meaning_soul = {
    .string = "soul",
    .meaning = "n. 灵魂；心灵；精神；鬼魂n. 一种人，某种人（强调具有某种特质的人）adj. 美国黑人文化的n. （Soul）（英、法）苏尔（人名）"};

String_and_meaning String_and_meaning_sound = {
    .string = "sound",
    .meaning = "n.声音,语音,噪音,吵闹,海峡,听力范围,探条adj.健全的,可靠的,合理的,有效彻底的,健康的adv.彻底地,充分地vi.发出声音,回响,测深,听起来vt.使发声,宣告,听诊,测...深,试探"};

String_and_meaning String_and_meaning_soup = {
    .string = "soup",
    .meaning = "n. 汤，羹；马力vt. 加速；增加马力"};

String_and_meaning String_and_meaning_sour = {
    .string = "sour",
    .meaning = "adj. 酸的；发酵的；刺耳的；酸臭的；讨厌的vi. 发酵；变酸；厌烦vt. 使变酸；使失望n. 酸味；苦事n. (Sour)人名；(柬)索"};

String_and_meaning String_and_meaning_source = {
    .string = "source",
    .meaning = "n. 来源；水源；原始资料n. (Source)人名；(法)苏尔斯"};

String_and_meaning String_and_meaning_south = {
    .string = "south",
    .meaning = "n. 南；（罗盘的）南方adj. 位于南方的；（风）来自南方的；南部居民的adv. 向南，朝南v. 朝南移动；（天体）穿过子午线n. (South) （美）苏（人名）"};

String_and_meaning String_and_meaning_southeast = {
    .string = "southeast",
    .meaning = "n. 东南，东南方；东南地区，东南部adj. 东南的，东南部的；（风）来自东南的adv. 在东南，朝东南；来自东南"};

String_and_meaning String_and_meaning_southern = {
    .string = "southern",
    .meaning = "adj. 南的；南方的n. 南方人n. (Southern)人名；(英)萨瑟恩"};

String_and_meaning String_and_meaning_southwest = {
    .string = "southwest",
    .meaning = "n. 西南方adj. 西南的adv. 往西南；来自西南"};

String_and_meaning String_and_meaning_sovereign = {
    .string = "sovereign",
    .meaning = "n. 君主；独立国；金磅adj. 至高无上的；有主权的；拥有最高统治权的；不折不扣的；有效的n. (Sovereign) （美、加、俄、英、印、澳）索夫林（人名）"};

String_and_meaning String_and_meaning_Soviet = {
    .string = "Soviet",
    .meaning = "n. 苏维埃，苏联政府；苏联人adj. 苏维埃的；苏联的；苏联人的"};

String_and_meaning String_and_meaning_sow = {
    .string = "sow",
    .meaning = "vt. 播种；散布；使密布vi. 播种n. 母猪n. (Sow)人名；(几、马里、乍、毛里塔、塞内)索乌"};

String_and_meaning String_and_meaning_space = {
    .string = "space",
    .meaning = "n. 空间；太空；距离vi. 留间隔vt. 隔开"};

String_and_meaning String_and_meaning_spacecraft = {
    .string = "spacecraft",
    .meaning = "n. [航] 宇宙飞船，航天器"};

String_and_meaning String_and_meaning_spaceship = {
    .string = "spaceship",
    .meaning = "n. [航] 宇宙飞船"};

String_and_meaning String_and_meaning_spacious = {
    .string = "spacious",
    .meaning = "adj. 宽敞的，广阔的；无边无际的"};

String_and_meaning String_and_meaning_spade = {
    .string = "spade",
    .meaning = "n. 铁锹，铲子；（扑克牌中的） 黑桃v. 铲；把……弄实抹平n. （Spade）（英）斯佩德；（法）斯帕德（人名）"};

String_and_meaning String_and_meaning_span = {
    .string = "span",
    .meaning = "n. 跨度，跨距；范围vt. 跨越；持续；以手指测量n. (Span)人名；(捷)斯潘"};

String_and_meaning String_and_meaning_Spanish = {
    .string = "Spanish",
    .meaning = "adj. 西班牙的；西班牙人的；西班牙语的；西班牙文化的n. 西班牙语；西班牙人"};

String_and_meaning String_and_meaning_spare = {
    .string = "spare",
    .meaning = "adj.多余的,剩下的,高而瘦的人的,少量的,贫乏的,备用的v.节约,节省,不伤害,宽恕,分让,提供给某人"};

String_and_meaning String_and_meaning_spark = {
    .string = "spark",
    .meaning = "n.火花,火星,闪光,情郎,花花公子,活力,电信技师,瞬间放电vi.闪烁,发火花,求婚vt.发动,鼓舞,使有朝气,求婚"};

String_and_meaning String_and_meaning_sparkle = {
    .string = "sparkle",
    .meaning = "v. （使）闪耀；（使）发光；（酒类饮料）发泡；活跃，生机勃勃；活泼机智n. 闪耀；火花；起泡；亮点；活力，活跃机智；生动新颖"};

String_and_meaning String_and_meaning_sparrow = {
    .string = "sparrow",
    .meaning = "n. 麻雀；矮小的人"};

String_and_meaning String_and_meaning_spatial = {
    .string = "spatial",
    .meaning = "adj. 空间的；存在于空间的；受空间条件限制的"};

String_and_meaning String_and_meaning_speak = {
    .string = "speak",
    .meaning = "vi. 说话；演讲；表明；陈述vt. 讲话；发言；讲演"};

String_and_meaning String_and_meaning_speaker = {
    .string = "speaker",
    .meaning = "n. 演讲者；扬声器；说话者；说某种语言的人n. (Speaker)人名；(英)斯皮克"};

String_and_meaning String_and_meaning_spear = {
    .string = "spear",
    .meaning = "n. 矛，枪vt. 用矛刺n. (Spear)人名；(英)斯皮尔"};

String_and_meaning String_and_meaning_special = {
    .string = "special",
    .meaning = "n.特派员,专车,专刊adj.特别的,特殊的,专门的,专用的"};

String_and_meaning String_and_meaning_specialist = {
    .string = "specialist",
    .meaning = "n. 专家；专门医师adj. 专家的；专业的"};

String_and_meaning String_and_meaning_speciality = {
    .string = "speciality",
    .meaning = "n. 专业，专长；特性；特产"};

String_and_meaning String_and_meaning_specialize = {
    .string = "specialize",
    .meaning = "vi. 专门从事；详细说明；特化vt. 使专门化；使适应特殊情况；详细说明"};

String_and_meaning String_and_meaning_specially = {
    .string = "specially",
    .meaning = "adv. 特别地；专门地"};

String_and_meaning String_and_meaning_species = {
    .string = "species",
    .meaning = "n. [生物] 物种；种类adj. 物种上的"};

String_and_meaning String_and_meaning_specific = {
    .string = "specific",
    .meaning = "adj. 特殊的，特定的；明确的；详细的；[药] 具有特效的n. 特性；细节；特效药"};

String_and_meaning String_and_meaning_specifically = {
    .string = "specifically",
    .meaning = "adv. 特别地；明确地"};

String_and_meaning String_and_meaning_specification = {
    .string = "specification",
    .meaning = "n. 规格；说明书；详述"};

String_and_meaning String_and_meaning_specify = {
    .string = "specify",
    .meaning = "vt. 指定；详细说明；列举；把…列入说明书"};

String_and_meaning String_and_meaning_specimen = {
    .string = "specimen",
    .meaning = "n. 样品，样本；标本"};

String_and_meaning String_and_meaning_spectacle = {
    .string = "spectacle",
    .meaning = "n. 景象；场面；奇观；壮观；盛大的演出；（复）眼镜"};

String_and_meaning String_and_meaning_spectacular = {
    .string = "spectacular",
    .meaning = "adj. 壮观的，惊人的；公开展示的"};

String_and_meaning String_and_meaning_spectator = {
    .string = "spectator",
    .meaning = "n. 观众；旁观者"};

String_and_meaning String_and_meaning_spectrum = {
    .string = "spectrum",
    .meaning = "n. 光谱；频谱；范围；余象"};

String_and_meaning String_and_meaning_speculate = {
    .string = "speculate",
    .meaning = "vi. 推测；投机；思索vt. 推断"};

String_and_meaning String_and_meaning_speech = {
    .string = "speech",
    .meaning = "n. 演讲；讲话；[语] 语音；演说"};

String_and_meaning String_and_meaning_speed = {
    .string = "speed",
    .meaning = "n.迅速,速度,速率v.加快,速飞,飞跑"};

String_and_meaning String_and_meaning_spell = {
    .string = "spell",
    .meaning = "n.符咒,魅力,一段时间,轮班vt.拼写,拼成,意味着,轮值,招致,迷住vi.轮替,拼字"};

String_and_meaning String_and_meaning_spelling = {
    .string = "spelling",
    .meaning = "n. 拼写；拼字；拼法v. 拼写；意味着（spell的ing形式）；迷住n. (Spelling)人名；(英)斯佩林"};

String_and_meaning String_and_meaning_spend = {
    .string = "spend",
    .meaning = "vt. 度过，消磨（时光）；花费；浪费；用尽vi. 花钱；用尽，耗尽n. 预算"};

String_and_meaning String_and_meaning_sphere = {
    .string = "sphere",
    .meaning = "n. 范围；球体vt. 包围；放入球内；使…成球形adj. 球体的"};

String_and_meaning String_and_meaning_spider = {
    .string = "spider",
    .meaning = "n. 蜘蛛；设圈套者；三脚架"};

String_and_meaning String_and_meaning_spill = {
    .string = "spill",
    .meaning = "n.溢出,溅出,摔下,木片,小塞子,暴跌,溢出量vt.使溢出,使散落,洒,使流出,使摔下,倒出vi.溢出,涌流,充满"};

String_and_meaning String_and_meaning_spin = {
    .string = "spin",
    .meaning = "vi. 旋转；纺纱；吐丝；晕眩vt. 使旋转；纺纱；编造；结网n. 旋转；疾驰"};

String_and_meaning String_and_meaning_spiral = {
    .string = "spiral",
    .meaning = "adj.螺旋形的n.螺旋v.盘旋"};

String_and_meaning String_and_meaning_spirit = {
    .string = "spirit",
    .meaning = "n. 精神；心灵；情绪；志气；烈酒vt. 鼓励；鼓舞；诱拐"};

String_and_meaning String_and_meaning_spiritual = {
    .string = "spiritual",
    .meaning = "adj. 精神的，心灵的；宗教的；（人）高尚的n. 圣歌（尤指美国南部黑人的）"};

String_and_meaning String_and_meaning_spit = {
    .string = "spit",
    .meaning = "vi. 吐痰；吐口水；发出劈啪声vt. 吐，吐出；发出；发射n. 唾液"};

String_and_meaning String_and_meaning_splash = {
    .string = "splash",
    .meaning = "n.溅,飞溅,斑点v.溅,泼,溅湿"};

String_and_meaning String_and_meaning_splendid = {
    .string = "splendid",
    .meaning = "adj. 辉煌的；灿烂的；极好的；杰出的"};

String_and_meaning String_and_meaning_split = {
    .string = "split",
    .meaning = "vt. 分离；使分离；劈开；离开；分解vi. 离开；被劈开；断绝关系n. 劈开；裂缝adj. 劈开的"};

String_and_meaning String_and_meaning_spoil = {
    .string = "spoil",
    .meaning = "vt. 溺爱；糟蹋；破坏；掠夺vi. 掠夺；变坏；腐败n. 次品；奖品"};

String_and_meaning String_and_meaning_spokesman = {
    .string = "spokesman",
    .meaning = "n. 发言人；代言人"};

String_and_meaning String_and_meaning_sponge = {
    .string = "sponge",
    .meaning = "n.海绵,海绵体,海绵状物,(外科用的)棉球,纱布v.用海绵等冼涤、揩拭、擦拭或清除,用海绵吸收(液体),(俗)依赖某人生活,诈取某人钱财,海绵般吸收"};

String_and_meaning String_and_meaning_sponsor = {
    .string = "sponsor",
    .meaning = "n. 赞助者；主办者；保证人vt. 赞助；发起"};

String_and_meaning String_and_meaning_spontaneous = {
    .string = "spontaneous",
    .meaning = "adj. 自发的；自然的；无意识的"};

String_and_meaning String_and_meaning_spoon = {
    .string = "spoon",
    .meaning = "n. 匙，勺子；一杓的量vt. 用匙舀；使成匙状vi. 轻轻向上击"};

String_and_meaning String_and_meaning_sport = {
    .string = "sport",
    .meaning = "n. 运动；游戏；娱乐；运动会；玩笑vi. 游戏vt. 游戏；参加体育运动；夸耀adj. 运动的"};

String_and_meaning String_and_meaning_sportsman = {
    .string = "sportsman",
    .meaning = "n. 运动员；运动家；冒险家n. (Sportsman)人名；(英)斯波茨曼"};

String_and_meaning String_and_meaning_spot = {
    .string = "spot",
    .meaning = "n. 地点；斑点vt. 认出；弄脏；用灯光照射vi. 沾上污渍；满是斑点adj. 现场的；现货买卖的adv. 准确地；恰好"};

String_and_meaning String_and_meaning_spouse = {
    .string = "spouse",
    .meaning = "n. 配偶vt. 和…结婚n. (Spouse)人名；(英)斯波斯"};

String_and_meaning String_and_meaning_spray = {
    .string = "spray",
    .meaning = "n. 喷雾，喷雾剂；喷雾器；水沫；（用作装饰的）小树枝，小花枝vt. 喷射vi. 喷n. （Spray）（英）斯普雷（人名）"};

String_and_meaning String_and_meaning_spread = {
    .string = "spread",
    .meaning = "vi. 传播；伸展vt. 传播，散布；展开；伸展；铺开n. 传播；伸展adj. 伸展的"};

String_and_meaning String_and_meaning_spring = {
    .string = "spring",
    .meaning = "n.春天,跃起,泉,弹簧,发条,弹性,弹力,根源v.跳,跃,跃出,使跳跃,使爆炸,触发"};

String_and_meaning String_and_meaning_springtime = {
    .string = "springtime",
    .meaning = "n. 春天；春季；初期"};

String_and_meaning String_and_meaning_sprinkle = {
    .string = "sprinkle",
    .meaning = "v. 撒，洒；用……点缀，在……中穿插；下小雨；零星分布n. 撒，洒；少量，一点；稀疏小雨；（撒在糕饼上作装饰用的）彩糖，糖屑"};

String_and_meaning String_and_meaning_spur = {
    .string = "spur",
    .meaning = "n. 马刺；鞭策；山嘴；（公路或铁路的）支线；骨刺v. 用踢马刺驱马前进；激励；促进；紧贴主干剪短（副梢）n. (Spur) （美）斯普尔（人名）"};

String_and_meaning String_and_meaning_spy = {
    .string = "spy",
    .meaning = "n. 间谍；密探v. 从事间谍活动；突然看见；认出"};

String_and_meaning String_and_meaning_square = {
    .string = "square",
    .meaning = "adj. 平方的；正方形的；直角的；正直的vt. 使成方形；与…一致vi. 一致；成方形n. 平方；广场；正方形adv. 成直角地"};

String_and_meaning String_and_meaning_squeeze = {
    .string = "squeeze",
    .meaning = "n.压榨,挤v.压榨,挤,挤榨"};

String_and_meaning String_and_meaning_squirrel = {
    .string = "squirrel",
    .meaning = "n. 松鼠；松鼠毛皮vt. 贮藏"};

String_and_meaning String_and_meaning_stab = {
    .string = "stab",
    .meaning = "vt. 刺；刺伤；戳；刺穿；直入vi. 刺；刺伤；戳；刺痛n. 刺；戳；尝试；突发的一阵n. (Stab)人名；(泰)萨达"};

String_and_meaning String_and_meaning_stability = {
    .string = "stability",
    .meaning = "n. 稳定性；坚定，恒心"};

String_and_meaning String_and_meaning_stabilize = {
    .string = "stabilize",
    .meaning = "vt. 使稳固，使安定vi. 稳定，安定"};

String_and_meaning String_and_meaning_stable = {
    .string = "stable",
    .meaning = "adj.稳定的"};

String_and_meaning String_and_meaning_stack = {
    .string = "stack",
    .meaning = "n.堆,一堆,堆栈v.堆叠"};

String_and_meaning String_and_meaning_stadium = {
    .string = "stadium",
    .meaning = "n. 体育场；露天大型运动场"};

String_and_meaning String_and_meaning_staff = {
    .string = "staff",
    .meaning = "n.棒,杖,杆,支柱,全体职员,[军]参谋机构,[音]五线谱vt.供给人员,充当职员"};

String_and_meaning String_and_meaning_stage = {
    .string = "stage",
    .meaning = "n. 阶段；舞台；戏剧；驿站vt. 举行；上演；筹划vi. 举行；适于上演；乘驿车旅行n. (Stage)人名；(英)斯特奇"};

String_and_meaning String_and_meaning_stagger = {
    .string = "stagger",
    .meaning = "vt. 蹒跚；使交错；使犹豫vi. 蹒跚；犹豫n. 蹒跚；交错安排adj. 交错的；错开的"};

String_and_meaning String_and_meaning_stain = {
    .string = "stain",
    .meaning = "vt. 玷污；败坏；给…着色vi. 污染；被玷污；被染污n. 污点；瑕疵；着色剂"};

String_and_meaning String_and_meaning_stair = {
    .string = "stair",
    .meaning = "n. 楼梯，阶梯；梯级n. (Stair)人名；(英、葡)斯泰尔"};

String_and_meaning String_and_meaning_staircase = {
    .string = "staircase",
    .meaning = "n. 楼梯"};

String_and_meaning String_and_meaning_stake = {
    .string = "stake",
    .meaning = "n. 桩，棍子；赌注；火刑；奖金vt. 资助，支持；系…于桩上；把…押下打赌vi. 打赌n. (Stake)人名；(瑞典)斯塔克"};

String_and_meaning String_and_meaning_stale = {
    .string = "stale",
    .meaning = "adj. 陈腐的；不新鲜的vi. 变陈旧；撒尿；变得不新鲜vt. 使变旧；变得不新鲜n. 尿n. (Stale)人名；(塞)斯塔莱"};

String_and_meaning String_and_meaning_stall = {
    .string = "stall",
    .meaning = "n.货摊,畜栏,厩,出售摊v.(使)停转,(使)停止,迟延"};

String_and_meaning String_and_meaning_stamp = {
    .string = "stamp",
    .meaning = "n. 邮票；印记；标志；跺脚vt. 铭记；标出；盖章于…；贴邮票于…；用脚踩踏vi. 跺脚；捣碎；毁掉n. (Stamp)人名；(德)施坦普；(英)斯坦普"};

String_and_meaning String_and_meaning_stand = {
    .string = "stand",
    .meaning = "vi. 站立；位于；停滞vt. 使站立；忍受；抵抗n. 站立；立场；看台；停止；货摊；证人席；支架"};

String_and_meaning String_and_meaning_standard = {
    .string = "standard",
    .meaning = "n. 标准；水准；旗；度量衡标准adj. 标准的；合规格的；公认为优秀的n. (Standard)人名；(英)斯坦达德；(德)施坦达德"};

String_and_meaning String_and_meaning_standpoint = {
    .string = "standpoint",
    .meaning = "n. 立场；观点"};

String_and_meaning String_and_meaning_star = {
    .string = "star",
    .meaning = "n. 星，恒星；明星；星形物vt. 用星号标于；由…主演，由…担任主角vi. 担任主角adj. 明星的，主角的；星形的n. (Star)人名；(瑞典)斯塔尔；(德)施塔尔"};

String_and_meaning String_and_meaning_stare = {
    .string = "stare",
    .meaning = "vi. 凝视，盯着看；显眼vt. 凝视，盯着看n. 凝视；注视n. (Stare)人名；(瑞典)斯塔勒"};

String_and_meaning String_and_meaning_start = {
    .string = "start",
    .meaning = "vt. 开始；启动vi. 出发n. 开始；起点"};

String_and_meaning String_and_meaning_startle = {
    .string = "startle",
    .meaning = "vt. 使吓一跳；使惊奇vi. 惊吓；惊跳；惊奇n. 惊愕；惊恐"};

String_and_meaning String_and_meaning_starve = {
    .string = "starve",
    .meaning = "vi. 饿死；挨饿；渴望vt. 使饿死；使挨饿"};

String_and_meaning String_and_meaning_state = {
    .string = "state",
    .meaning = "n. 国家；州；情形vt. 规定；声明；陈述adj. 国家的；州的；正式的n. （State）（罗、瑞典）斯塔特；（英）斯泰特（人名）"};

String_and_meaning String_and_meaning_statement = {
    .string = "statement",
    .meaning = "n. 声明；陈述，叙述；报表，清单"};

String_and_meaning String_and_meaning_statesman = {
    .string = "statesman",
    .meaning = "n. 政治家；国务活动家"};

String_and_meaning String_and_meaning_static = {
    .string = "static",
    .meaning = "adj. 静态的；静电的；静力的n. 静电；静电干扰"};

String_and_meaning String_and_meaning_station = {
    .string = "station",
    .meaning = "n. 车站；驻地；地位；身份vt. 配置；安置；驻扎"};

String_and_meaning String_and_meaning_stationary = {
    .string = "stationary",
    .meaning = "adj. 固定的；静止的；定居的；常备军的n. 不动的人；驻军"};

String_and_meaning String_and_meaning_statistical = {
    .string = "statistical",
    .meaning = "adj. 统计的；统计学的"};

String_and_meaning String_and_meaning_statistics = {
    .string = "statistics",
    .meaning = "n. 统计；统计学；[统计] 统计资料；统计数字"};

String_and_meaning String_and_meaning_statue = {
    .string = "statue",
    .meaning = "n. 雕像，塑像vt. 以雕像装饰"};

String_and_meaning String_and_meaning_status = {
    .string = "status",
    .meaning = "n. 地位；状态；情形；重要身份"};

String_and_meaning String_and_meaning_stay = {
    .string = "stay",
    .meaning = "vi. 停留；坚持；暂住；停下vt. 坚持；暂住；抑制n. 逗留；停止；支柱"};

String_and_meaning String_and_meaning_steadily = {
    .string = "steadily",
    .meaning = "adv. 稳定地；稳固地；有规则地"};

String_and_meaning String_and_meaning_steady = {
    .string = "steady",
    .meaning = "adj. 稳定的；不变的；沉着的vi. 稳固vt. 使稳定；稳固；使坚定adv. 稳定地；稳固地n. 关系固定的情侣；固定支架"};

String_and_meaning String_and_meaning_steal = {
    .string = "steal",
    .meaning = "vt. 剽窃；偷偷地做；偷窃vi. 窃取；偷偷地行动；偷垒n. 偷窃；便宜货；偷垒；断球"};

String_and_meaning String_and_meaning_steam = {
    .string = "steam",
    .meaning = "n. 蒸汽；蒸汽动力；水汽；精力vi. 冒水汽；蒸；用蒸汽动力推动；疾行；非正式开始战斗；抢劫adj. 蒸汽的"};

String_and_meaning String_and_meaning_steamer = {
    .string = "steamer",
    .meaning = "n. 轮船；蒸汽机；蒸笼"};

String_and_meaning String_and_meaning_steel = {
    .string = "steel",
    .meaning = "n. 钢铁；钢制品；坚固vt. 钢化；使冷酷adj. 钢制的；钢铁业的；坚强的n. （Steel）（德）施特尔；（英）斯蒂尔（人名）"};

String_and_meaning String_and_meaning_steep = {
    .string = "steep",
    .meaning = "adj. 陡峭的；不合理的；夸大的；急剧升降的vt. 泡；浸；使…充满vi. 泡；沉浸n. 峭壁；浸渍"};

String_and_meaning String_and_meaning_steer = {
    .string = "steer",
    .meaning = "vt. 控制，引导；驾驶vi. 驾驶，掌舵；行驶n. 阉牛n. (Steer)人名；(英)斯蒂尔；(德、匈)施特尔"};

String_and_meaning String_and_meaning_stem = {
    .string = "stem",
    .meaning = "n. 干；茎；船首；血统vt. 阻止；除去…的茎；给…装柄vi. 阻止；起源于某事物；逆行abbr. 理工科的统称（science，technology，engineering，math）"};

String_and_meaning String_and_meaning_step = {
    .string = "step",
    .meaning = "n. 步，脚步；步骤；步伐；梯级vi. 踏，踩；走vt. 走，迈步； 竖立（桅杆）于桅座上"};

String_and_meaning String_and_meaning_stereo = {
    .string = "stereo",
    .meaning = "n. 立体声；立体声系统adj. 立体的；立体声的；立体感觉的"};

String_and_meaning String_and_meaning_stereotype = {
    .string = "stereotype",
    .meaning = "n. 陈腔滥调，老套；成见；模式化形象；铅版，铅版（浇铸或印刷）v. 对……形成模式化的看法，对……存有成见；套用老套，使一成不变；使用铅版"};

String_and_meaning String_and_meaning_stern = {
    .string = "stern",
    .meaning = "adj. 严厉的；坚定的；严峻的；认真的n. 船尾；末端；（幽默）（人的）臀部n. (Stern) （英、以、法、瑞典、西）斯特恩（人名）"};

String_and_meaning String_and_meaning_steward = {
    .string = "steward",
    .meaning = "n. 管家；乘务员；膳务员；工会管事vi. 当服务员；当管事vt. 管理n. (Steward)人名；(英)斯图尔德"};

String_and_meaning String_and_meaning_stewardess = {
    .string = "stewardess",
    .meaning = "n. 女管家；女干事；女服务员"};

String_and_meaning String_and_meaning_stick = {
    .string = "stick",
    .meaning = "vt. 刺，戳；伸出；粘贴vi. 坚持；伸出；粘住n. 棍；手杖；呆头呆脑的人n. （Stick）（芬）斯蒂克（人名）"};

String_and_meaning String_and_meaning_sticky = {
    .string = "sticky",
    .meaning = "adj. 粘的；粘性的"};

String_and_meaning String_and_meaning_stiff = {
    .string = "stiff",
    .meaning = "adj.硬的,僵直的,拘谨的,呆板的,艰难的,费劲的,僵硬的"};

String_and_meaning String_and_meaning_stiffen = {
    .string = "stiffen",
    .meaning = "vi. 变硬；变猛烈；变粘vt. 使变硬；使粘稠"};

String_and_meaning String_and_meaning_still = {
    .string = "still",
    .meaning = "n.寂静,剧照,照片adj.静止的,静寂的adv.还,仍,更,还要,尽管如此,依然 静止画面,静态图片"};

String_and_meaning String_and_meaning_stimulate = {
    .string = "stimulate",
    .meaning = "vt. 刺激；鼓舞，激励vi. 起刺激作用；起促进作用"};

String_and_meaning String_and_meaning_stimulus = {
    .string = "stimulus",
    .meaning = "n. 刺激；激励；刺激物"};

String_and_meaning String_and_meaning_sting = {
    .string = "sting",
    .meaning = "n. 刺痛；讽刺，刺激；刺毛vt. 刺；驱使；使…苦恼；使…疼痛vi. 刺痛；被刺痛；感到剧痛n. (Sting)人名；(英)斯廷；(德)施廷"};

String_and_meaning String_and_meaning_stir = {
    .string = "stir",
    .meaning = "v. 搅拌；微动；（使）活动；激发，打动；（非正式）挑拨；传播n. 搅拌；激动；（非正式）监狱"};

String_and_meaning String_and_meaning_stitch = {
    .string = "stitch",
    .meaning = "n. 针脚，线迹；一针vt. 缝，缝合vi. 缝，缝合"};

String_and_meaning String_and_meaning_stock = {
    .string = "stock",
    .meaning = "n.树干,库存,股票,股份,托盘,祖先,血统,原料adj.股票的,普通的,常备的,存货的,繁殖用的vt.装把手于,进货,备有,放牧vi.出新芽,采购"};

String_and_meaning String_and_meaning_stocking = {
    .string = "stocking",
    .meaning = "n.长袜"};

String_and_meaning String_and_meaning_stomach = {
    .string = "stomach",
    .meaning = "n. 胃；腹部；胃口vt. 忍受；吃下vi. 忍受"};

String_and_meaning String_and_meaning_stone = {
    .string = "stone",
    .meaning = "n. 石头；结石；[宝] 宝石adj. 石的，石制的vt. 向扔石块；用石头铺n. (Stone)人名；(捷)斯托内；(瑞典)斯托内；(英)斯通"};

String_and_meaning String_and_meaning_stony = {
    .string = "stony",
    .meaning = "adj. 石头覆盖的；石头制的；像石头的；无情的；石质的"};

String_and_meaning String_and_meaning_stool = {
    .string = "stool",
    .meaning = "n. 凳子；粪便；厕所vi. 长新枝；分檗vt. 引诱，诱捕"};

String_and_meaning String_and_meaning_stoop = {
    .string = "stoop",
    .meaning = "vi. 弯腰；屈服；堕落n. 弯腰，屈背；屈服vt. 辱没，堕落；俯曲n. (Stoop)人名；(法、荷、葡)斯托普"};

String_and_meaning String_and_meaning_stop = {
    .string = "stop",
    .meaning = "vt. 停止；堵塞；断绝vi. 停止；中止；逗留；被塞住n. 停止；车站；障碍；逗留"};

String_and_meaning String_and_meaning_storage = {
    .string = "storage",
    .meaning = "n. 存储；仓库；贮藏所"};

String_and_meaning String_and_meaning_store = {
    .string = "store",
    .meaning = "n. 商店；储备，贮藏；仓库vt. 贮藏，储存n. (Store)人名；(德)施托雷"};

String_and_meaning String_and_meaning_storey = {
    .string = "storey",
    .meaning = "n. [建] 楼层；叠架的一层n. (Storey)人名；(西、瑞典)斯托雷；(英)斯托里"};

String_and_meaning String_and_meaning_storm = {
    .string = "storm",
    .meaning = "n. 暴风雨；大动荡vi. 起风暴；横冲直撞；狂怒咆哮vt. 猛攻；怒骂n. (Storm)人名；(瑞典)斯托姆；(德)施托姆；(英、西、芬)斯托姆"};

String_and_meaning String_and_meaning_stormy = {
    .string = "stormy",
    .meaning = "adj. 暴风雨的；猛烈的；暴躁的"};

String_and_meaning String_and_meaning_story = {
    .string = "story",
    .meaning = "n. 故事；小说；描述；新闻报道；来历；假话；层；一种测量单位（1 story 等于 3.3 米）vt. 用历史故事画装饰vi. 说谎n. （Story）斯托里（人名）"};

String_and_meaning String_and_meaning_stove = {
    .string = "stove",
    .meaning = "n. 火炉；窑；温室vt. 用火炉烤n. (Stove)人名；(瑞典)斯托韦"};

String_and_meaning String_and_meaning_straight = {
    .string = "straight",
    .meaning = "adj.直的,诚实的,正直的,率直的,整齐的adv.直,直接,一直"};

String_and_meaning String_and_meaning_straightforward = {
    .string = "straightforward",
    .meaning = "adj. 简单的；坦率的；明确的；径直的adv. 直截了当地；坦率地"};

String_and_meaning String_and_meaning_strain = {
    .string = "strain",
    .meaning = "n. 张力；拉紧；负担；扭伤；血缘vi. 拉紧；尽力vt. 拉紧；滥用；滤去；竭力n. (Strain)人名；(英)斯特兰n. （植物、动物的）品种；种类"};

String_and_meaning String_and_meaning_strange = {
    .string = "strange",
    .meaning = "adj. 奇怪的；陌生的；外行的adv. 奇怪地；陌生地，冷淡地n. (Strange)人名；(英)斯特兰奇；(瑞典、塞)斯特朗格"};

String_and_meaning String_and_meaning_stranger = {
    .string = "stranger",
    .meaning = "n. 陌生人；外地人；局外人n. (Stranger)人名；(瑞典)斯特朗格；(英)斯特兰杰"};

String_and_meaning String_and_meaning_strap = {
    .string = "strap",
    .meaning = "n. 带子，皮带，金属带；鞭打v. 用带捆绑，用带固定；包扎；鞭打"};

String_and_meaning String_and_meaning_strategic = {
    .string = "strategic",
    .meaning = "adj. 战略上的，战略的"};

String_and_meaning String_and_meaning_strategy = {
    .string = "strategy",
    .meaning = "n. 战略，策略"};

String_and_meaning String_and_meaning_straw = {
    .string = "straw",
    .meaning = "n. 稻草；吸管；一文不值的东西adj. 稻草的；无价值的n. (Straw)人名；(英)斯特劳"};

String_and_meaning String_and_meaning_strawberry = {
    .string = "strawberry",
    .meaning = "n. 草莓；草莓色"};

String_and_meaning String_and_meaning_stream = {
    .string = "stream",
    .meaning = "n. 溪流；流动；潮流；光线；（数据）流vi. 流；涌进；飘扬vt. 流出；涌出；使飘动"};

String_and_meaning String_and_meaning_streamline = {
    .string = "streamline",
    .meaning = "vt. 把…做成流线型；使现代化；组织；使合理化；使简单化n. 流线；流线型adj. 流线型的"};

String_and_meaning String_and_meaning_street = {
    .string = "street",
    .meaning = "n. 街道adj. 街道的n. (Street)人名；(英、葡)斯特里特；(德)施特雷特"};

String_and_meaning String_and_meaning_strength = {
    .string = "strength",
    .meaning = "n. 力量；力气；兵力；长处"};

String_and_meaning String_and_meaning_strengthen = {
    .string = "strengthen",
    .meaning = "vt. 加强；巩固vi. 变强；变坚挺"};

String_and_meaning String_and_meaning_stress = {
    .string = "stress",
    .meaning = "n. 压力；强调；紧张；重要性；重读vt. 强调；使紧张；加压力于；用重音读n. (Stress)人名；(意)斯特雷斯"};

String_and_meaning String_and_meaning_stretch = {
    .string = "stretch",
    .meaning = "v.伸展,伸长n.一段时间,一段路程,伸展"};

String_and_meaning String_and_meaning_strict = {
    .string = "strict",
    .meaning = "adj. 严格的；绝对的；精确的；详细的"};

String_and_meaning String_and_meaning_strictly = {
    .string = "strictly",
    .meaning = "adv. 严格地；完全地；确实地"};

String_and_meaning String_and_meaning_stride = {
    .string = "stride",
    .meaning = "n. 大步；步幅；进展vt. 跨过；大踏步走过；跨坐在…vi. 跨；跨过；大步行走"};

String_and_meaning String_and_meaning_strike = {
    .string = "strike",
    .meaning = "n.罢工,打击,殴打vt.打,撞击,冲击,罢工,打动,划燃,到达,侵袭vi.打,打击,罢工,抓,敲,搏动,打动,穿透"};

String_and_meaning String_and_meaning_striking = {
    .string = "striking",
    .meaning = "adj. 显著的，突出的，惊人的；打击的；罢工的v. 打（strike的ing形式）"};

String_and_meaning String_and_meaning_string = {
    .string = "string",
    .meaning = "n. 线，弦，细绳；一串，一行vt. 悬挂；系；扎；用线（或细绳等）串，把……连在一起"};

String_and_meaning String_and_meaning_strip = {
    .string = "strip",
    .meaning = "vt.剥,剥去n.条,带"};

String_and_meaning String_and_meaning_stripe = {
    .string = "stripe",
    .meaning = "n. 条纹，斑纹；种类vt. 加条纹于…"};

String_and_meaning String_and_meaning_strive = {
    .string = "strive",
    .meaning = "vi. 努力；奋斗；抗争"};

String_and_meaning String_and_meaning_stroke = {
    .string = "stroke",
    .meaning = "n.击,敲,报时的钟声,(网球等)一击,(划船等)一划,(绘画等)一笔,一次努力,打击vt.抚摸"};

String_and_meaning String_and_meaning_strong = {
    .string = "strong",
    .meaning = "adj. 坚强的；强壮的；牢固的；擅长的adv. 强劲地；猛烈地n. (Strong)人名；(英)斯特朗"};

String_and_meaning String_and_meaning_strongly = {
    .string = "strongly",
    .meaning = "adv. 坚定地；强有力地；强烈地（说服）；（气味）浓重地"};

String_and_meaning String_and_meaning_structural = {
    .string = "structural",
    .meaning = "adj. 结构的；建筑的"};

String_and_meaning String_and_meaning_structure = {
    .string = "structure",
    .meaning = "n. 结构；构造；建筑物vt. 组织；构成；建造"};

String_and_meaning String_and_meaning_struggle = {
    .string = "struggle",
    .meaning = "v. 奋斗；艰难地行进；斗争；搏斗；争夺；挣扎成名n. 斗争；冲突；使劲；奋斗；难事"};

String_and_meaning String_and_meaning_stubborn = {
    .string = "stubborn",
    .meaning = "adj. 顽固的；顽强的；难处理的"};

String_and_meaning String_and_meaning_student = {
    .string = "student",
    .meaning = "n. 学生；学者n. (Student)人名；(德)施图登特"};

String_and_meaning String_and_meaning_studio = {
    .string = "studio",
    .meaning = "n. 工作室；[广播][电视] 演播室；画室；电影制片厂"};

String_and_meaning String_and_meaning_study = {
    .string = "study",
    .meaning = "n. 学习，研究；课题；书房；学问vt. 学习；考虑；攻读；细察vi. 研究；用功n. (Study)人名；(英)斯塔迪"};

String_and_meaning String_and_meaning_stuff = {
    .string = "stuff",
    .meaning = "n. 东西；材料；填充物；素材资料vt. 塞满；填塞；让吃饱vi. 吃得过多"};

String_and_meaning String_and_meaning_stumble = {
    .string = "stumble",
    .meaning = "vi. 踌躇，蹒跚；失足；犯错vt. 使…困惑；使…绊倒n. 绊倒；蹒跚而行"};

String_and_meaning String_and_meaning_stupid = {
    .string = "stupid",
    .meaning = "adj. 愚蠢的；麻木的；乏味的n. 傻瓜，笨蛋"};

String_and_meaning String_and_meaning_sturdy = {
    .string = "sturdy",
    .meaning = "adj. 坚定的；强健的；健全的n. 羊晕倒病n. (Sturdy)人名；(英)斯特迪"};

String_and_meaning String_and_meaning_style = {
    .string = "style",
    .meaning = "n. 风格；时尚；类型；字体vt. 设计；称呼；使合潮流vi. 设计式样；用刻刀作装饰画n. (Style)人名；(英)斯泰尔"};

String_and_meaning String_and_meaning_subject = {
    .string = "subject",
    .meaning = "n.题目,主题,科目,学科,国民,[语法]主语adj.受他国统治的,未独立的,受制于...的,受...影响的,以...为条件的vt.使屈从于...,使隶属"};

String_and_meaning String_and_meaning_subjective = {
    .string = "subjective",
    .meaning = "adj. 主观的；个人的；自觉的"};

String_and_meaning String_and_meaning_submarine = {
    .string = "submarine",
    .meaning = "n. 潜水艇；海底生物adj. 海底的；水下的vt. 用潜水艇攻击vi. 在下疾行；在下滑动"};

String_and_meaning String_and_meaning_submerge = {
    .string = "submerge",
    .meaning = "vt. 淹没；把…浸入；沉浸vi. 淹没；潜入水中；湮没"};

String_and_meaning String_and_meaning_submit = {
    .string = "submit",
    .meaning = "vt. 使服从；主张；呈递；提交vi. 服从，顺从"};

String_and_meaning String_and_meaning_subordinate = {
    .string = "subordinate",
    .meaning = "n. 部属，下属，下级；从属，次要vt. 使……居下位；使……服从adj. 从属的，隶属的；次要的"};

String_and_meaning String_and_meaning_subscribe = {
    .string = "subscribe",
    .meaning = "vi. 订阅；捐款；认购；赞成；签署vt. 签署；赞成；捐助"};

String_and_meaning String_and_meaning_subsequent = {
    .string = "subsequent",
    .meaning = "adj. 随后的"};

String_and_meaning String_and_meaning_subsidiary = {
    .string = "subsidiary",
    .meaning = "adj. 辅助的，次要的；附属的；子公司的n. 子公司；辅助者"};

String_and_meaning String_and_meaning_subsidy = {
    .string = "subsidy",
    .meaning = "n. 补贴；津贴；补助金"};

String_and_meaning String_and_meaning_substance = {
    .string = "substance",
    .meaning = "n. 物质；实质；资产；主旨"};

String_and_meaning String_and_meaning_substantial = {
    .string = "substantial",
    .meaning = "adj. 大量的；实质的；内容充实的n. 本质；重要材料"};

String_and_meaning String_and_meaning_substitute = {
    .string = "substitute",
    .meaning = "n. 代用品；代替者vi. 替代vt. 代替"};

String_and_meaning String_and_meaning_subtle = {
    .string = "subtle",
    .meaning = "adj. 微妙的；精细的；敏感的；狡猾的；稀薄的"};

String_and_meaning String_and_meaning_subtract = {
    .string = "subtract",
    .meaning = "vt. 减去；扣掉"};

String_and_meaning String_and_meaning_suburb = {
    .string = "suburb",
    .meaning = "n. 郊区；边缘"};

String_and_meaning String_and_meaning_subway = {
    .string = "subway",
    .meaning = "n. 地铁；地道vi. 乘地铁"};

String_and_meaning String_and_meaning_succeed = {
    .string = "succeed",
    .meaning = "vi. 成功；继承；继任；兴旺vt. 继承；接替；继……之后"};

String_and_meaning String_and_meaning_success = {
    .string = "success",
    .meaning = "n. 成功，成就；胜利；大获成功的人或事物"};

String_and_meaning String_and_meaning_successful = {
    .string = "successful",
    .meaning = "adj. 成功的；一帆风顺的"};

String_and_meaning String_and_meaning_successfully = {
    .string = "successfully",
    .meaning = "adv. 成功地；顺利地"};

String_and_meaning String_and_meaning_succession = {
    .string = "succession",
    .meaning = "n. 连续；继位；继承权；[生态] 演替"};

String_and_meaning String_and_meaning_successive = {
    .string = "successive",
    .meaning = "adj. 连续的；继承的；依次的；接替的"};

String_and_meaning String_and_meaning_successor = {
    .string = "successor",
    .meaning = "n. 继承者；后续的事物"};

String_and_meaning String_and_meaning_such = {
    .string = "such",
    .meaning = "adj. 这样的，如此的pron. 这样的，类似的n. （Such）（英）萨奇，（德）祖赫（人名）"};

String_and_meaning String_and_meaning_suck = {
    .string = "suck",
    .meaning = "vt. 吸吮；吸取vi. 吸吮；糟糕；巴结n. 吮吸"};

String_and_meaning String_and_meaning_sudden = {
    .string = "sudden",
    .meaning = "adj. 突然的，意外的；快速的n. 突然发生的事"};

String_and_meaning String_and_meaning_suddenly = {
    .string = "suddenly",
    .meaning = "adv. 突然地；忽然"};

String_and_meaning String_and_meaning_sue = {
    .string = "sue",
    .meaning = "vt. 控告；请求vi. 控告；提出请求n. (Sue)人名；(日)末(名)；(法)休；(英)休(女子教名Susan、Susanna的昵称)"};

String_and_meaning String_and_meaning_suffer = {
    .string = "suffer",
    .meaning = "vt. 遭受；忍受；经历vi. 遭受，忍受；受痛苦；经验；受损害n. (Suffer)人名；(意)苏费尔"};

String_and_meaning String_and_meaning_suffice = {
    .string = "suffice",
    .meaning = "vt. 使满足；足够…用；合格vi. 足够；有能力"};

String_and_meaning String_and_meaning_sufficient = {
    .string = "sufficient",
    .meaning = "adj. 足够的；充分的"};

String_and_meaning String_and_meaning_sufficiently = {
    .string = "sufficiently",
    .meaning = "adv. 充分地；足够地"};

String_and_meaning String_and_meaning_sugar = {
    .string = "sugar",
    .meaning = "n. 糖；食糖；甜言蜜语vt. 加糖于；粉饰vi. 形成糖n. (Sugar)人名；(英)休格"};

String_and_meaning String_and_meaning_suggest = {
    .string = "suggest",
    .meaning = "vt. 提议，建议；启发；使人想起；显示；暗示"};

String_and_meaning String_and_meaning_suggestion = {
    .string = "suggestion",
    .meaning = "n. 建议；示意；微量，细微的迹象"};

String_and_meaning String_and_meaning_suicide = {
    .string = "suicide",
    .meaning = "n. 自杀；自杀行为；自杀者adj. 自杀的vt. 自杀vi. 自杀"};

String_and_meaning String_and_meaning_suit = {
    .string = "suit",
    .meaning = "v.合适,适合,相配,合式,适宜于n.一套衣服"};

String_and_meaning String_and_meaning_suitable = {
    .string = "suitable",
    .meaning = "adj. 适当的；相配的"};

String_and_meaning String_and_meaning_suitcase = {
    .string = "suitcase",
    .meaning = "n. [轻] 手提箱；衣箱"};

String_and_meaning String_and_meaning_sulphur = {
    .string = "sulphur",
    .meaning = "n. 硫磺；硫磺色vt. 使硫化；用硫磺处理"};

String_and_meaning String_and_meaning_sum = {
    .string = "sum",
    .meaning = "n. 金额；总数vi. 概括vt. 总结；合计n. (Sum)人名；(英)萨姆；(柬)孙；(俄、德、捷)苏姆；(越)森"};

String_and_meaning String_and_meaning_summarize = {
    .string = "summarize",
    .meaning = "vt. 总结；概述vi. 作总结；作概括"};

String_and_meaning String_and_meaning_summary = {
    .string = "summary",
    .meaning = "n. 总结，概要adj. 总结性的；简略的，扼要的；（司法程序）即决的；简易判罪的"};

String_and_meaning String_and_meaning_summer = {
    .string = "summer",
    .meaning = "n. 夏季；全盛时期vi. 避暑；过夏天adj. 夏季的n. (Summer)人名；(德)祖默；(英)萨默"};

String_and_meaning String_and_meaning_summit = {
    .string = "summit",
    .meaning = "n. 顶点；最高级会议；最高阶层adj. 最高级的；政府首脑的"};

String_and_meaning String_and_meaning_summon = {
    .string = "summon",
    .meaning = "vt. 召唤；召集；鼓起；振作"};

String_and_meaning String_and_meaning_sun = {
    .string = "sun",
    .meaning = "n. 太阳vt. 使晒vi. 晒太阳n. (Sun)人名；(中)孙(普通话·威妥玛)；(柬)孙；(缅)素；(土)松"};

String_and_meaning String_and_meaning_Sunday = {
    .string = "Sunday",
    .meaning = "n. 星期日；礼拜日"};

String_and_meaning String_and_meaning_sunlight = {
    .string = "sunlight",
    .meaning = "n. 日光n. (Sunlight)人名；(英)森莱特"};

String_and_meaning String_and_meaning_sunny = {
    .string = "sunny",
    .meaning = "adj. 阳光充足的，和煦的；快活的；性情开朗的"};

String_and_meaning String_and_meaning_sunrise = {
    .string = "sunrise",
    .meaning = "n. 日出；黎明n. (Sunrise)人名；(德)松里泽"};

String_and_meaning String_and_meaning_sunset = {
    .string = "sunset",
    .meaning = "n. 日落，傍晚"};

String_and_meaning String_and_meaning_sunshine = {
    .string = "sunshine",
    .meaning = "n. 阳光；愉快；晴天；快活n. (Sunshine)人名；(英)森夏恩"};

String_and_meaning String_and_meaning_super = {
    .string = "super",
    .meaning = "adj. 特级的；极好的n. 特级品，特大号；临时雇员n. (Super)人名；(英)休珀"};

String_and_meaning String_and_meaning_superb = {
    .string = "superb",
    .meaning = "adj. 极好的；华丽的；宏伟的n. (Superb)人名；(罗)苏佩尔布"};

String_and_meaning String_and_meaning_superficial = {
    .string = "superficial",
    .meaning = "adj. 表面的；肤浅的 ；表面文章的；外表的；（人）浅薄的"};

String_and_meaning String_and_meaning_superior = {
    .string = "superior",
    .meaning = "adj. 上级的；优秀的，出众的；高傲的n. 上级，长官；优胜者，高手；长者"};

String_and_meaning String_and_meaning_superiority = {
    .string = "superiority",
    .meaning = "n. 优越，优势；优越性"};

String_and_meaning String_and_meaning_supermarket = {
    .string = "supermarket",
    .meaning = "n. 超级市场；自助售货商店"};

String_and_meaning String_and_meaning_supersonic = {
    .string = "supersonic",
    .meaning = "adj. 超音速的；超声波的n. 超音速；超声波"};

String_and_meaning String_and_meaning_supervise = {
    .string = "supervise",
    .meaning = "v. 监督；管理；指导；主管；照看"};

String_and_meaning String_and_meaning_supper = {
    .string = "supper",
    .meaning = "n. 晚餐，晚饭；夜宵"};

String_and_meaning String_and_meaning_supplement = {
    .string = "supplement",
    .meaning = "n. 增补（物）；补品；增刊；（书籍的）附录；额外服务费用；补角v. 增补，补充"};

String_and_meaning String_and_meaning_supplementary = {
    .string = "supplementary",
    .meaning = "adj. 补充的；追加的n. 补充者；增补物"};

String_and_meaning String_and_meaning_supply = {
    .string = "supply",
    .meaning = "n. 供给，补给；供应品vt. 供给，提供；补充vi. 供给；替代"};

String_and_meaning String_and_meaning_support = {
    .string = "support",
    .meaning = "vt.支撑,扶持,支持,支援,拥护,维持,赡养,忍受n.支撑,支持,支援,维持,赡养,支持者,支柱"};

String_and_meaning String_and_meaning_suppose = {
    .string = "suppose",
    .meaning = "vt. 假设；认为；让（虚拟语气）；推想vi. 猜想；料想conj. 假使……结果会怎样"};

String_and_meaning String_and_meaning_suppress = {
    .string = "suppress",
    .meaning = "vt. 抑制；镇压；废止"};

String_and_meaning String_and_meaning_supreme = {
    .string = "supreme",
    .meaning = "adj. 最高的；至高的；极大的"};

String_and_meaning String_and_meaning_sure = {
    .string = "sure",
    .meaning = "adj. 确信的；可靠的；必定的adv. 当然；的确n. (Sure) （法、印、美、德）休尔（人名）"};

String_and_meaning String_and_meaning_surely = {
    .string = "surely",
    .meaning = "adv. 当然；无疑；坚定地；稳当地"};

String_and_meaning String_and_meaning_surface = {
    .string = "surface",
    .meaning = "n. 表面；表层；外观adj. 表面的，肤浅的vi. 浮出水面vt. 使浮出水面；使成平面n. (Surface)人名；(英)瑟菲斯"};

String_and_meaning String_and_meaning_surge = {
    .string = "surge",
    .meaning = "n. 汹涌；大浪，波涛；汹涌澎湃；巨涌v. 汹涌；起大浪，蜂拥而来"};

String_and_meaning String_and_meaning_surgeon = {
    .string = "surgeon",
    .meaning = "n. 外科医生n. (Surgeon)人名；(法)叙尔容"};

String_and_meaning String_and_meaning_surgery = {
    .string = "surgery",
    .meaning = "n. 外科；外科手术；手术室；诊疗室"};

String_and_meaning String_and_meaning_surname = {
    .string = "surname",
    .meaning = "n. 姓，姓氏；绰号，别名vt. 给…起别名；给…姓氏"};

String_and_meaning String_and_meaning_surpass = {
    .string = "surpass",
    .meaning = "vt. 超越；胜过，优于；非…所能办到或理解"};

String_and_meaning String_and_meaning_surplus = {
    .string = "surplus",
    .meaning = "n. 剩余；[贸易] 顺差；盈余；过剩adj. 剩余的；过剩的"};

String_and_meaning String_and_meaning_surprise = {
    .string = "surprise",
    .meaning = "n. 惊奇，诧异；突然袭击vt. 使惊奇；奇袭adj. 令人惊讶的"};

String_and_meaning String_and_meaning_surprising = {
    .string = "surprising",
    .meaning = "adj. 令人惊讶的；意外的v. 使惊奇；意外发现（surprise的ing形式）"};

String_and_meaning String_and_meaning_surprisingly = {
    .string = "surprisingly",
    .meaning = "adv. 惊人地；出人意料地"};

String_and_meaning String_and_meaning_surrender = {
    .string = "surrender",
    .meaning = "vt. 使投降；放弃；交出；听任vi. 投降；屈服；自首n. 投降；放弃；交出；屈服"};

String_and_meaning String_and_meaning_surround = {
    .string = "surround",
    .meaning = "vt. 围绕；包围n. 围绕物adj. 环绕立体声的"};

String_and_meaning String_and_meaning_surroundings = {
    .string = "surroundings",
    .meaning = "n. 环境；周围的事物"};

String_and_meaning String_and_meaning_survey = {
    .string = "survey",
    .meaning = "n. 调查；测量；审视；纵览vt. 调查；勘测；俯瞰vi. 测量土地"};

String_and_meaning String_and_meaning_survival = {
    .string = "survival",
    .meaning = "n. 幸存，残存；幸存者，残存物"};

String_and_meaning String_and_meaning_survive = {
    .string = "survive",
    .meaning = "vt. 幸存；生还；幸免于；比...活得长vi. 幸存；活下来"};

String_and_meaning String_and_meaning_susceptible = {
    .string = "susceptible",
    .meaning = "adj. 易受影响的；易感动的；容许……的n. 易得病的人"};

String_and_meaning String_and_meaning_suspect = {
    .string = "suspect",
    .meaning = "v. 怀疑；猜想n. 嫌疑犯adj. 靠不住的；可疑的"};

String_and_meaning String_and_meaning_suspend = {
    .string = "suspend",
    .meaning = "vt. 延缓，推迟；使暂停；使悬浮vi. 悬浮；禁赛"};

String_and_meaning String_and_meaning_suspension = {
    .string = "suspension",
    .meaning = "n. 悬浮；暂停；停职"};

String_and_meaning String_and_meaning_suspicion = {
    .string = "suspicion",
    .meaning = "n. 怀疑；嫌疑；疑心；一点儿vt. 怀疑"};

String_and_meaning String_and_meaning_suspicious = {
    .string = "suspicious",
    .meaning = "adj. 可疑的；怀疑的；多疑的"};

String_and_meaning String_and_meaning_sustain = {
    .string = "sustain",
    .meaning = "vt. 维持；支撑，承担；忍受；供养；证实"};

String_and_meaning String_and_meaning_swallow = {
    .string = "swallow",
    .meaning = "vt. 忍受；吞没vi. 吞下；咽下n. 燕子；一次吞咽的量n. （Swallow）（英）斯沃洛（人名）"};

String_and_meaning String_and_meaning_swamp = {
    .string = "swamp",
    .meaning = "n.沼泽,湿地,煤层聚水v.陷入沼泽,淹没,覆没"};

String_and_meaning String_and_meaning_swan = {
    .string = "swan",
    .meaning = "n. 天鹅；天鹅星座vi. 游荡，闲荡n. (Swan)人名；(英、芬、德)斯旺"};

String_and_meaning String_and_meaning_swarm = {
    .string = "swarm",
    .meaning = "n. 一大群；蜂群；人群；一大群小型天体同时在空中出现v. 成群来回移动；蜂拥而至；挤满；爬；（蜜蜂）成群飞离蜂巢"};

String_and_meaning String_and_meaning_sway = {
    .string = "sway",
    .meaning = "vt. 影响；统治；使摇动vi. 影响；摇摆n. 影响；摇摆；统治n. (Sway)人名；(以)斯韦"};

String_and_meaning String_and_meaning_swear = {
    .string = "swear",
    .meaning = "vt. 发誓；咒骂vi. 发誓，宣誓；诅咒n. 宣誓；诅咒"};

String_and_meaning String_and_meaning_sweat = {
    .string = "sweat",
    .meaning = "n.汗v.(使)出汗"};

String_and_meaning String_and_meaning_sweater = {
    .string = "sweater",
    .meaning = "n. 毛线衣，运动衫；大量出汗的人，发汗剂"};

String_and_meaning String_and_meaning_sweep = {
    .string = "sweep",
    .meaning = "v.扫,打扫,清扫,席卷,冲光,扫过,掠过"};

String_and_meaning String_and_meaning_sweet = {
    .string = "sweet",
    .meaning = "adj. 甜的；悦耳的；芳香的；亲切的n. 糖果；乐趣；芳香；宝贝（俚）酷毙了n. (Sweet)人名；(英)斯威特"};

String_and_meaning String_and_meaning_swell = {
    .string = "swell",
    .meaning = "v.(使)膨胀,增大"};

String_and_meaning String_and_meaning_swift = {
    .string = "swift",
    .meaning = "n.[鸟]雨燕,(梳棉机等的)大滚筒adj.迅速的,快的,敏捷的,立刻的adv.迅速地,敏捷地"};

String_and_meaning String_and_meaning_swim = {
    .string = "swim",
    .meaning = "vi. 游泳；漂浮；浸；眩晕vt. 游过；使浮起n. 游泳；漂浮；眩晕adj. 游泳时穿戴的"};

String_and_meaning String_and_meaning_swing = {
    .string = "swing",
    .meaning = "v.摇摆,摆动,回转,旋转n.秋千,摇摆,摆动"};

String_and_meaning String_and_meaning_Swiss = {
    .string = "Swiss",
    .meaning = "adj. 瑞士的；瑞士人的；瑞士风格的n. 瑞士人n. （美）史威史（人名）"};

String_and_meaning String_and_meaning_switch = {
    .string = "switch",
    .meaning = "n.开关,电闸,转换vt.转换,转变"};

String_and_meaning String_and_meaning_sword = {
    .string = "sword",
    .meaning = "n. 刀，剑；武力，战争n. (Sword)人名；(英)索德"};

String_and_meaning String_and_meaning_symbol = {
    .string = "symbol",
    .meaning = "n. 象征；符号；标志"};

String_and_meaning String_and_meaning_symmetry = {
    .string = "symmetry",
    .meaning = "n. 对称（性）；整齐，匀称"};

String_and_meaning String_and_meaning_sympathetic = {
    .string = "sympathetic",
    .meaning = "adj. 同情的；交感神经的；共鸣的；赞同的；和谐的；合意的n. 交感神经；容易感受的人"};

String_and_meaning String_and_meaning_sympathize = {
    .string = "sympathize",
    .meaning = "vi. 同情，怜悯；支持"};

String_and_meaning String_and_meaning_sympathy = {
    .string = "sympathy",
    .meaning = "n. 同情；慰问；赞同"};

String_and_meaning String_and_meaning_symphony = {
    .string = "symphony",
    .meaning = "n. 交响乐；谐声，和声"};

String_and_meaning String_and_meaning_symposium = {
    .string = "symposium",
    .meaning = "n. 讨论会，座谈会；专题论文集；酒宴，宴会"};

String_and_meaning String_and_meaning_symptom = {
    .string = "symptom",
    .meaning = "n. [临床] 症状；征兆"};

String_and_meaning String_and_meaning_synthesis = {
    .string = "synthesis",
    .meaning = "n. 综合，[化学] 合成；综合体"};

String_and_meaning String_and_meaning_synthetic = {
    .string = "synthetic",
    .meaning = "adj. 综合的；合成的，人造的n. 合成物"};

String_and_meaning String_and_meaning_system = {
    .string = "system",
    .meaning = "n. 制度，体制；系统；方法"};

String_and_meaning String_and_meaning_table = {
    .string = "table",
    .meaning = "n. 桌子；表格；平地层vt. 制表；搁置；嵌合adj. 桌子的n. (Table)人名；(罗)塔布莱"};

String_and_meaning String_and_meaning_tablet = {
    .string = "tablet",
    .meaning = "n. 碑；药片；写字板；小块；平板电脑vt. 用碑牌纪念；将(备忘录等)写在板上；将…制成小片或小块"};

String_and_meaning String_and_meaning_tackle = {
    .string = "tackle",
    .meaning = "n.工具,复滑车,滑车,用具,装备,扭倒vt.固定,应付(难事等),处理,解决,抓住vi.捉住,扭住,扭倒"};

String_and_meaning String_and_meaning_tactics = {
    .string = "tactics",
    .meaning = "n. 策略；战术；用兵学"};

String_and_meaning String_and_meaning_tag = {
    .string = "tag",
    .meaning = "n. 标签；名称；结束语；附属物vt. 给……加上标签；尾随，紧随；连接；起浑名vi. 紧随n. （Tag） 塔（人名）"};

String_and_meaning String_and_meaning_tail = {
    .string = "tail",
    .meaning = "n. 尾巴；踪迹；辫子；燕尾服vt. 尾随；装上尾巴vi. 跟踪；变少或缩小adj. 从后面而来的；尾部的"};

String_and_meaning String_and_meaning_tailor = {
    .string = "tailor",
    .meaning = "n. 裁缝v. 专门制作，订做；调整；迎合n. (Tailor) （美、爱、英）泰勒（人名）"};

String_and_meaning String_and_meaning_take = {
    .string = "take",
    .meaning = "v.拿,拿走,取,抓,占领,获得,接受,感受n.捕获量"};

String_and_meaning String_and_meaning_tale = {
    .string = "tale",
    .meaning = "n. 故事；传说；叙述；流言蜚语n. (Tale)人名；(塞)塔莱"};

String_and_meaning String_and_meaning_talent = {
    .string = "talent",
    .meaning = "n. 才能；天才；天资"};

String_and_meaning String_and_meaning_talk = {
    .string = "talk",
    .meaning = "v.谈话,讲,谈论,议论,说服某人做某事n.谈话,会谈,讲演,讲话"};

String_and_meaning String_and_meaning_tall = {
    .string = "tall",
    .meaning = "adj. 高的；长的；过分的；夸大的adv. 夸大地n. (Tall)人名；(马里、阿拉伯)塔勒；(芬、罗、瑞典)塔尔；(英)托尔；(土)塔勒"};

String_and_meaning String_and_meaning_tame = {
    .string = "tame",
    .meaning = "adj. 驯服的；平淡的；乏味的；顺从的vt. 驯养；使变得平淡；制服vi. 变得驯服n. (Tame)人名；(捷)塔梅"};

String_and_meaning String_and_meaning_tan = {
    .string = "tan",
    .meaning = "n.日晒后的颜色,棕褐色,茶色adj.棕褐色的,茶色v.晒黑,晒成褐色"};

String_and_meaning String_and_meaning_tangle = {
    .string = "tangle",
    .meaning = "v. （使）缠结在一起；（使）乱成一团；处于混乱状态；（和……）争吵；打架n. 缠结；混乱，纷乱；争吵；打架；大型棕色海藻（尤指昆布）"};

String_and_meaning String_and_meaning_tank = {
    .string = "tank",
    .meaning = "n. 坦克；水槽；池塘vt. 把…贮放在柜内；打败vi. 乘坦克行进n. (Tank)人名；(德、土、阿塞、土库、挪)汤克"};

String_and_meaning String_and_meaning_tap = {
    .string = "tap",
    .meaning = "v. 轻敲；装上嘴子；窃听；采用；在树上切口；委任；非法劝说转会n. 水龙头；阀门；轻打；窃听；踢踏舞；熄灯号；葬礼号n. (Tap) 塔（人名）"};

String_and_meaning String_and_meaning_tape = {
    .string = "tape",
    .meaning = "n. 胶带；磁带；带子；卷尺vt. 录音；用带子捆扎；用胶布把…封住vi. 用磁带录音n. (Tape)人名；(英)泰普"};

String_and_meaning String_and_meaning_tar = {
    .string = "tar",
    .meaning = "n. 焦油；柏油；水手vt. 涂以焦油；玷污n. (Tar)人名；(东南亚国家华语)大；(罗、塞、匈、阿拉伯)塔尔"};

String_and_meaning String_and_meaning_target = {
    .string = "target",
    .meaning = "n. 目标，指标；（攻击的）对象；靶子v. 把...作为目标；面向，对准（某群体）n. （Target）美国塔吉特公司"};

String_and_meaning String_and_meaning_tariff = {
    .string = "tariff",
    .meaning = "n. 关税表；收费表vt. 定税率；征收关税"};

String_and_meaning String_and_meaning_task = {
    .string = "task",
    .meaning = "n. （困难的）任务，工作；（语言教学中的）活动v. 派给某人（任务）；对（手段或能力）要求极高"};

String_and_meaning String_and_meaning_taste = {
    .string = "taste",
    .meaning = "n. 味道；品味；审美vt. 尝；体验vi. 尝起来；有…的味道n. (Taste)人名；(法)塔斯特"};

String_and_meaning String_and_meaning_tax = {
    .string = "tax",
    .meaning = "n. 税金；重负v. 向……课税；使……负重担；缴纳车辆牌照税；批评；审定诉讼费n. (Tax) （美、荷、奥、印、俄、德）塔克斯（人名）"};

String_and_meaning String_and_meaning_taxi = {
    .string = "taxi",
    .meaning = "n. 出租汽车；（非洲的）小巴士；出租汽船v. （飞机）滑行；乘出租车；用出租车送"};

String_and_meaning String_and_meaning_tea = {
    .string = "tea",
    .meaning = "n. 茶叶；茶树；茶点vt. 给…沏茶vi. 喝茶；进茶点n. (Tea)人名；(柬)迪"};

String_and_meaning String_and_meaning_teach = {
    .string = "teach",
    .meaning = "vt. 教；教授；教导vi. 教授；讲授；当老师n. (Teach)人名；(英)蒂奇"};

String_and_meaning String_and_meaning_teacher = {
    .string = "teacher",
    .meaning = "n. 教师；导师n. (Teacher)人名；(英)蒂彻"};

String_and_meaning String_and_meaning_teaching = {
    .string = "teaching",
    .meaning = "n. 教学；教义v. 教学；教导（teach的ing形式）"};

String_and_meaning String_and_meaning_team = {
    .string = "team",
    .meaning = "n. 队；组vt. 使合作vi. 合作n. (Team)人名；(柬)甸"};

String_and_meaning String_and_meaning_tear = {
    .string = "tear",
    .meaning = "v. 撕掉，扯下；撕破；拔掉；拉伤；（非正式）狂奔；饱经……摧残；流眼泪n. 眼泪；（撕破的）洞或裂缝， 撕扯n. (Tear) （美）蒂尔（人名）"};

String_and_meaning String_and_meaning_tease = {
    .string = "tease",
    .meaning = "vt. 取笑；戏弄；梳理；欺负；强求；使起毛n. 戏弄；爱纠缠的小孩；挑逗者；卖弄风骚的女孩vi. 取笑"};

String_and_meaning String_and_meaning_technical = {
    .string = "technical",
    .meaning = "adj. 工艺的，科技的；技术上的；专门的"};

String_and_meaning String_and_meaning_technician = {
    .string = "technician",
    .meaning = "n. 技师，技术员；技巧纯熟的人"};

String_and_meaning String_and_meaning_technique = {
    .string = "technique",
    .meaning = "n. 技巧，技术；手法"};

String_and_meaning String_and_meaning_technology = {
    .string = "technology",
    .meaning = "n. 技术；工艺；术语"};

String_and_meaning String_and_meaning_tedious = {
    .string = "tedious",
    .meaning = "adj. 沉闷的；冗长乏味的"};

String_and_meaning String_and_meaning_teenager = {
    .string = "teenager",
    .meaning = "n. 十几岁的青少年；十三岁到十九岁的少年"};

String_and_meaning String_and_meaning_telegram = {
    .string = "telegram",
    .meaning = "n. 电报vt. 用电报发送vi. 发电报"};

String_and_meaning String_and_meaning_telegraph = {
    .string = "telegraph",
    .meaning = "n. [通信] 电报机，电报vt. 电汇；流露出；打电报给…vi. 打电报"};

String_and_meaning String_and_meaning_telephone = {
    .string = "telephone",
    .meaning = "n. （美）电话；电话机；电话耳机vi. 打电话vt. 打电话给…"};

String_and_meaning String_and_meaning_telescope = {
    .string = "telescope",
    .meaning = "n. 望远镜v. 叠套缩短；精简，压缩；（车）相撞而嵌进"};

String_and_meaning String_and_meaning_television = {
    .string = "television",
    .meaning = "n. 电视，电视机；电视业"};

String_and_meaning String_and_meaning_tell = {
    .string = "tell",
    .meaning = "vt. 告诉，说；辨别；吩咐；断定vi. 讲述；告发，泄密；识别n. (Tell)人名；(英、德、瑞典)特尔；(罗、意)泰尔；(阿拉伯)塔勒"};

String_and_meaning String_and_meaning_temper = {
    .string = "temper",
    .meaning = "n. 脾气；（钢等）回火；性情；倾向vt. 使回火；锻炼；调和；使缓和vi. 回火；调和"};

String_and_meaning String_and_meaning_temperament = {
    .string = "temperament",
    .meaning = "n. 气质，性情，性格；急躁"};

String_and_meaning String_and_meaning_temperature = {
    .string = "temperature",
    .meaning = "n. 温度；体温；气温；发烧"};

String_and_meaning String_and_meaning_temple = {
    .string = "temple",
    .meaning = "n. 庙宇；寺院；神殿；太阳穴n. (Temple)；（法）唐普勒（人名）；（英）坦普尔（人名）"};

String_and_meaning String_and_meaning_tempo = {
    .string = "tempo",
    .meaning = "n. 速度，发展速度；拍子n. (Tempo)人名；(意)滕波"};

String_and_meaning String_and_meaning_temporary = {
    .string = "temporary",
    .meaning = "adj. 暂时的，临时的n. 临时工，临时雇员"};

String_and_meaning String_and_meaning_tempt = {
    .string = "tempt",
    .meaning = "vt. 诱惑；引起；冒…的风险；使感兴趣"};

String_and_meaning String_and_meaning_temptation = {
    .string = "temptation",
    .meaning = "n. 引诱；诱惑物"};

String_and_meaning String_and_meaning_ten = {
    .string = "ten",
    .meaning = "num. 十个，十n. (Ten) （美、俄、加、德、荷、西、英）登（人名）"};

String_and_meaning String_and_meaning_tenant = {
    .string = "tenant",
    .meaning = "n. 承租人；房客；佃户；居住者vt. 租借（常用于被动语态）n. (Tenant)人名；(法)特南"};

String_and_meaning String_and_meaning_tend = {
    .string = "tend",
    .meaning = "vi. 趋向，倾向；照料，照顾vt. 照料，照管"};

String_and_meaning String_and_meaning_tendency = {
    .string = "tendency",
    .meaning = "n. 倾向，趋势；癖好"};

String_and_meaning String_and_meaning_tender = {
    .string = "tender",
    .meaning = "adj.嫩的,温柔的,软弱的"};

String_and_meaning String_and_meaning_tennis = {
    .string = "tennis",
    .meaning = "n. 网球（运动）n. （Tennis）（英）坦尼斯（人名）"};

String_and_meaning String_and_meaning_tense = {
    .string = "tense",
    .meaning = "adj. 紧张的；拉紧的vt. 变得紧张；使拉紧vi. 拉紧，变得紧张n. 时态"};

String_and_meaning String_and_meaning_tent = {
    .string = "tent",
    .meaning = "n. 帐篷；住处；帷幕vt. 用帐篷遮盖；使在帐篷里住宿vi. 住帐蓬；暂时居住n. (Tent)人名；(罗、瑞典)滕特"};

String_and_meaning String_and_meaning_tentative = {
    .string = "tentative",
    .meaning = "adj. 试验性的，暂定的；踌躇的n. 假设，试验"};

String_and_meaning String_and_meaning_tenth = {
    .string = "tenth",
    .meaning = "num. 第十n. 第十个；十分之一；十度音adj. 第十个的；十分之一的"};

String_and_meaning String_and_meaning_term = {
    .string = "term",
    .meaning = "n. 术语；学期；期限；条款；(代数式等的)项vt. 把…叫做n. (Term)人名；(泰)丁"};

String_and_meaning String_and_meaning_terminal = {
    .string = "terminal",
    .meaning = "n. 航空站；终点站；终端机；线接头；末端；晚期病人adj. 晚期的；无可挽回的；末端的；终点的；期末的；（花朵等）顶升的"};

String_and_meaning String_and_meaning_terminate = {
    .string = "terminate",
    .meaning = "vt. 使终止；使结束；解雇vi. 结束，终止；结果adj. 结束的"};

String_and_meaning String_and_meaning_terrace = {
    .string = "terrace",
    .meaning = "n. 平台；梯田；阳台vt. 使成梯田，使成阶地；使有平台屋顶vi. 成阶地；成梯田；筑成坛adj. （女服）叠层式的n. (Terrace)人名；(英)特勒斯"};

String_and_meaning String_and_meaning_terrain = {
    .string = "terrain",
    .meaning = "n. [地理] 地形，地势；领域；地带"};

String_and_meaning String_and_meaning_terrible = {
    .string = "terrible",
    .meaning = "adj. 可怕的；很糟的；令人讨厌的adv. 很，非常"};

String_and_meaning String_and_meaning_terrific = {
    .string = "terrific",
    .meaning = "adj. 极好的；极其的，非常的；可怕的"};

String_and_meaning String_and_meaning_terrify = {
    .string = "terrify",
    .meaning = "vt. 恐吓；使恐怖；使害怕"};

String_and_meaning String_and_meaning_territory = {
    .string = "territory",
    .meaning = "n. 领土，领域；范围；地域；版图"};

String_and_meaning String_and_meaning_terror = {
    .string = "terror",
    .meaning = "n. 恐怖；恐怖行动；恐怖时期；可怕的人n. (Terror)人名；(南非)特罗尔"};

String_and_meaning String_and_meaning_test = {
    .string = "test",
    .meaning = "n. 测验，考查；测试；检验；化验v. 测验；化验，检查；试验，测试；考验"};

String_and_meaning String_and_meaning_testify = {
    .string = "testify",
    .meaning = "vt. 证明，证实；作证vi. 作证；证明"};

String_and_meaning String_and_meaning_testimony = {
    .string = "testimony",
    .meaning = "n. [法] 证词，证言；证据"};

String_and_meaning String_and_meaning_text = {
    .string = "text",
    .meaning = "n. [计] 文本；课文；主题vt. 发短信"};

String_and_meaning String_and_meaning_textbook = {
    .string = "textbook",
    .meaning = "n. 教科书，课本"};

String_and_meaning String_and_meaning_textile = {
    .string = "textile",
    .meaning = "n. 纺织品，织物adj. 纺织的"};

String_and_meaning String_and_meaning_texture = {
    .string = "texture",
    .meaning = "n. 质地；纹理；结构；本质，实质vt. 使具有浮凸纹理；使质地不平"};

String_and_meaning String_and_meaning_than = {
    .string = "than",
    .meaning = "conj.比 prep.与...相比较"};

String_and_meaning String_and_meaning_thank = {
    .string = "thank",
    .meaning = "vt. 感谢n. 感谢int. 谢谢"};

String_and_meaning String_and_meaning_thanksgiving = {
    .string = "thanksgiving",
    .meaning = "n. 感恩"};

String_and_meaning String_and_meaning_that = {
    .string = "that",
    .meaning = "adj.那,那个 pron.那,那个 conj.引导从句"};

String_and_meaning String_and_meaning_the = {
    .string = "the",
    .meaning = "art. 这；那adv. 更加（用于比较级，最高级前）"};

String_and_meaning String_and_meaning_theatre = {
    .string = "theatre",
    .meaning = "n. 电影院，戏院；戏剧；阶梯式讲堂"};

String_and_meaning String_and_meaning_theft = {
    .string = "theft",
    .meaning = "n. 盗窃；偷；赃物"};

String_and_meaning String_and_meaning_their = {
    .string = "their",
    .meaning = "pron. 他们的，她们的；它们的n. (Their)人名；(英)蒂尔；(芬、瑞典)泰尔"};

String_and_meaning String_and_meaning_theirs = {
    .string = "theirs",
    .meaning = "pron. 他们的，她们的，它们的；他的，她的"};

String_and_meaning String_and_meaning_them = {
    .string = "them",
    .meaning = "pron. 他们；她们；它们n. （Them）（老）探（人名）"};

String_and_meaning String_and_meaning_theme = {
    .string = "theme",
    .meaning = "n. 主题；主旋律；题目adj. 以奇想主题布置的"};

String_and_meaning String_and_meaning_themselves = {
    .string = "themselves",
    .meaning = "pron. 他们自己；他们亲自"};

String_and_meaning String_and_meaning_then = {
    .string = "then",
    .meaning = "adv. 当时；然后；那么；此外；而且；总之adj. 当时的n. 那时"};

String_and_meaning String_and_meaning_theoretical = {
    .string = "theoretical",
    .meaning = "adj. 理论的；理论上的；假设的；推理的"};

String_and_meaning String_and_meaning_theory = {
    .string = "theory",
    .meaning = "n. 理论；原理；学说；推测"};

String_and_meaning String_and_meaning_therapy = {
    .string = "therapy",
    .meaning = "n. 治疗，疗法"};

String_and_meaning String_and_meaning_there = {
    .string = "there",
    .meaning = "adv. 在那里；在那边；在那点上int. 你瞧n. 那个地方"};

String_and_meaning String_and_meaning_thereafter = {
    .string = "thereafter",
    .meaning = "adv. 其后；从那时以后"};

String_and_meaning String_and_meaning_thereby = {
    .string = "thereby",
    .meaning = "adv. 从而，因此；在那附近；在那方面"};

String_and_meaning String_and_meaning_therefore = {
    .string = "therefore",
    .meaning = "adv. 因此；所以"};

String_and_meaning String_and_meaning_thermal = {
    .string = "thermal",
    .meaning = "adj. 热的；热量的；保热的n. 上升的热气流"};

String_and_meaning String_and_meaning_thermometer = {
    .string = "thermometer",
    .meaning = "n. 温度计；体温计"};

String_and_meaning String_and_meaning_these = {
    .string = "these",
    .meaning = "det. 这些（this 的复数）pron. 这些（this 的复数）adj. 这些的（this 的复数）"};

String_and_meaning String_and_meaning_thesis = {
    .string = "thesis",
    .meaning = "n. 论文；论点"};

String_and_meaning String_and_meaning_they = {
    .string = "they",
    .meaning = "pron. 他们；它们；她们"};

String_and_meaning String_and_meaning_thick = {
    .string = "thick",
    .meaning = "adj.厚的,粗的,稠的,浓的n.最拥挤部份,活动最多部份,事物的粗大浓密部份"};

String_and_meaning String_and_meaning_thickness = {
    .string = "thickness",
    .meaning = "n. 厚度；层；浓度；含混不清"};

String_and_meaning String_and_meaning_thief = {
    .string = "thief",
    .meaning = "n. 小偷，贼"};

String_and_meaning String_and_meaning_thin = {
    .string = "thin",
    .meaning = "adj. 薄的；瘦的；稀薄的；微弱的vt. 使瘦；使淡；使稀疏vi. 变薄；变瘦；变淡adv. 稀疏地；微弱地n. 细小部分n. （Thin）（越）辰；（柬）廷（人名）"};

String_and_meaning String_and_meaning_thing = {
    .string = "thing",
    .meaning = "n. 事情；东西；事物；情况"};

String_and_meaning String_and_meaning_think = {
    .string = "think",
    .meaning = "vt. 想；认为；想起；想像；打算vi. 想；认为n. 想；想法adj. 思想的"};

String_and_meaning String_and_meaning_third = {
    .string = "third",
    .meaning = "num.第三,三分之一"};

String_and_meaning String_and_meaning_thirdly = {
    .string = "thirdly",
    .meaning = "adv. 第三"};

String_and_meaning String_and_meaning_thirst = {
    .string = "thirst",
    .meaning = "n. 渴望；口渴；热望vi. 渴望；口渴"};

String_and_meaning String_and_meaning_thirsty = {
    .string = "thirsty",
    .meaning = "adj. 口渴的，口干的；渴望的，热望的"};

String_and_meaning String_and_meaning_thirteen = {
    .string = "thirteen",
    .meaning = "n. 十三；十三岁；十三个num. 十三adj. 十三的；十三个的"};

String_and_meaning String_and_meaning_thirty = {
    .string = "thirty",
    .meaning = "n. 三十年代num. 三十adj. 三十个的"};

String_and_meaning String_and_meaning_this = {
    .string = "this",
    .meaning = "pron. 这，这个；这样；今，本；……的这个；有个adj. 这，这个（离说话人较近的）adv. 这样地，这么n. (This) （法、美、印、巴）蒂斯（人名）"};

String_and_meaning String_and_meaning_thorn = {
    .string = "thorn",
    .meaning = "n. 刺；荆棘n. （Thorn）（英、法、德、丹、瑞典）托恩（人名）"};

String_and_meaning String_and_meaning_thorough = {
    .string = "thorough",
    .meaning = "adj. 彻底的；十分的；周密的"};

String_and_meaning String_and_meaning_those = {
    .string = "those",
    .meaning = "det. 那些（that 的复数）pron. 那些（that 的复数）"};

String_and_meaning String_and_meaning_though = {
    .string = "though",
    .meaning = "conj. 虽然，尽管adv. 虽然；不过；然而"};

String_and_meaning String_and_meaning_thought = {
    .string = "thought",
    .meaning = "n. 思想；思考；想法；关心v. 想，思考；认为（think的过去式和过去分词）"};

String_and_meaning String_and_meaning_thoughtful = {
    .string = "thoughtful",
    .meaning = "adj. 深思的；体贴的；关切的"};

String_and_meaning String_and_meaning_thousand = {
    .string = "thousand",
    .meaning = "n. 一千；一千个；许许多多"};

String_and_meaning String_and_meaning_thread = {
    .string = "thread",
    .meaning = "n. 线；螺纹；思路；衣服；线状物；玻璃纤维；路线vt. 穿过；穿线于；使交织vi. 通过；穿透过"};

String_and_meaning String_and_meaning_threat = {
    .string = "threat",
    .meaning = "n. 威胁，恐吓；凶兆"};

String_and_meaning String_and_meaning_threaten = {
    .string = "threaten",
    .meaning = "vt. 威胁；恐吓；预示vi. 威胁；可能来临"};

String_and_meaning String_and_meaning_three = {
    .string = "three",
    .meaning = "n. 三，三个num. 三adj. 三的，三个的"};

String_and_meaning String_and_meaning_threshold = {
    .string = "threshold",
    .meaning = "n. 入口；门槛；开始；极限；临界值"};

String_and_meaning String_and_meaning_thrill = {
    .string = "thrill",
    .meaning = "n. 激动；震颤；紧张vt. 使…颤动；使…紧张；使…感到兴奋或激动vi. 颤抖；感到兴奋；感到紧张"};

String_and_meaning String_and_meaning_thrive = {
    .string = "thrive",
    .meaning = "vi. 繁荣，兴旺；茁壮成长"};

String_and_meaning String_and_meaning_throat = {
    .string = "throat",
    .meaning = "n. 喉咙；嗓子，嗓音；窄路vt. 开沟于；用喉音说"};

String_and_meaning String_and_meaning_throne = {
    .string = "throne",
    .meaning = "n. 王座；君主；王权vi. 登上王座vt. 使登王位n. (Throne)人名；(瑞典)特罗内；(英)特罗恩"};

String_and_meaning String_and_meaning_throng = {
    .string = "throng",
    .meaning = "n. 人群；众多vt. 群集；挤满vi. 蜂拥而至；群集adj. 拥挤的"};

String_and_meaning String_and_meaning_through = {
    .string = "through",
    .meaning = "prep.穿过,通过,从开始到结束,经由,以adv.从头到尾,自始至终,直达地,彻底,完全adj.直达的,直通的"};

String_and_meaning String_and_meaning_throughout = {
    .string = "throughout",
    .meaning = "adv. 自始至终；遍及prep. 自始至终；遍及"};

String_and_meaning String_and_meaning_throw = {
    .string = "throw",
    .meaning = "vt. 投；抛；掷；举行（派对）vi. 抛；投掷n. 投掷；冒险"};

String_and_meaning String_and_meaning_thrust = {
    .string = "thrust",
    .meaning = "v. 插；插入；推挤；插入；用向某人刺去；猛然或用力推；伸展；强使接受；竖起，挺出n. 推力；刺；要旨，重点；强攻；冲断层，逆断层；苛评"};

String_and_meaning String_and_meaning_thumb = {
    .string = "thumb",
    .meaning = "n. 拇指；（手套的）拇指部分v. 翻阅；以拇指拨弄；作搭车手势"};

String_and_meaning String_and_meaning_thunder = {
    .string = "thunder",
    .meaning = "n. 雷；轰隆声；恐吓vi. 打雷；怒喝vt. 轰隆地发出；大声喊出"};

String_and_meaning String_and_meaning_Thursday = {
    .string = "Thursday",
    .meaning = "n. 星期四"};

String_and_meaning String_and_meaning_thus = {
    .string = "thus",
    .meaning = "adv. 因此；从而；这样；如此"};

String_and_meaning String_and_meaning_tick = {
    .string = "tick",
    .meaning = "n.滴答声,记号,勾号,扁虱v.滴答地响,标以记号,作滴答声"};

String_and_meaning String_and_meaning_ticket = {
    .string = "ticket",
    .meaning = "n. 票；入场券，标签；（美）候选人名单；证明书；交通罚款单vt. 加标签于；指派；对…开出交通违规罚单"};

String_and_meaning String_and_meaning_tide = {
    .string = "tide",
    .meaning = "n. 趋势，潮流；潮汐vt. 随潮漂流"};

String_and_meaning String_and_meaning_tidy = {
    .string = "tidy",
    .meaning = "adj. 整齐的；相当大的vt. 整理；收拾；弄整齐vi. 整理；收拾n. 椅子的背罩n. (Tidy)人名；(英)泰迪"};

String_and_meaning String_and_meaning_tie = {
    .string = "tie",
    .meaning = "n.带子,线,鞋带,不分胜负,关系,领带,领结,平局vt.系,打结,扎,约束,与...成平局vi.被用带(或绳子等)系住,结合,打结,不分胜负"};

String_and_meaning String_and_meaning_tiger = {
    .string = "tiger",
    .meaning = "n. 老虎；凶暴的人n. (Tiger)人名；(英)泰格；(法)蒂热；(瑞典)蒂格"};

String_and_meaning String_and_meaning_tight = {
    .string = "tight",
    .meaning = "adj. 紧的；密封的；绷紧的；麻烦的；严厉的；没空的；吝啬的adv. 紧紧地；彻底地n. (Tight)人名；(英)泰特"};

String_and_meaning String_and_meaning_tile = {
    .string = "tile",
    .meaning = "n. 瓷砖，瓦片vt. 铺以瓦；铺以瓷砖n. (Tile)人名；(俄、塞、萨摩)蒂勒"};

String_and_meaning String_and_meaning_till = {
    .string = "till",
    .meaning = "prep.直到,在...以前,迄 conj.在...以前,直到...为止vt.耕种n.(商店)铁柜,放钱的抽屉,备用现金,冰渍"};

String_and_meaning String_and_meaning_tilt = {
    .string = "tilt",
    .meaning = "v. 倾斜，翘起；俯仰（摄影机）；以言词或文字抨击n. 倾斜；（意欲赢得某物或战胜某人的）企图，尝试n. (Tilt) （美、英）蒂尔特（人名）"};

String_and_meaning String_and_meaning_timber = {
    .string = "timber",
    .meaning = "n. 木材；木料n. (Timber)人名；(瑞典)廷贝尔"};

String_and_meaning String_and_meaning_time = {
    .string = "time",
    .meaning = "n. 时间；时代；次数；节拍；倍数vt. 计时；测定…的时间；安排…的速度adj. 定时的；定期的；分期的n. (Time)人名；(俄)季梅；(英)泰姆；(罗)蒂梅"};

String_and_meaning String_and_meaning_timely = {
    .string = "timely",
    .meaning = "adj. 及时的；适时的adv. 及时地；早"};

String_and_meaning String_and_meaning_timetable = {
    .string = "timetable",
    .meaning = "n. 时间表；时刻表；课程表"};

String_and_meaning String_and_meaning_timid = {
    .string = "timid",
    .meaning = "adj. 胆小的；羞怯的"};

String_and_meaning String_and_meaning_tin = {
    .string = "tin",
    .meaning = "n. 锡；罐头，罐；马口铁adj. 锡制的vt. 涂锡于；给…包马口铁n. (Tin)人名；(缅、柬)丁；(印尼)婷；(越)信；(泰、土)廷"};

String_and_meaning String_and_meaning_tiny = {
    .string = "tiny",
    .meaning = "adj. 微小的；很少的n. (Tiny)人名；(葡、印)蒂尼"};

String_and_meaning String_and_meaning_tip = {
    .string = "tip",
    .meaning = "n.顶,尖端,梢,倾斜,轻击,末端,小费,秘密消息vt.在...顶端装附加物,使倾斜,使翻倒,暗示,轻击,给,泄露,给小费vi.倾斜,翻倒,倾覆,踮脚走,给小费n.提示,技巧"};

String_and_meaning String_and_meaning_tire = {
    .string = "tire",
    .meaning = "v. 疲劳，疲倦；厌倦，厌烦n. 轮胎；头饰（同 tyre）n. (Tire) （法、俄、土）蒂雷（人名）"};

String_and_meaning String_and_meaning_tired = {
    .string = "tired",
    .meaning = "adj. 疲倦的；厌倦的，厌烦的v. 疲倦；对…腻烦（tire的过去分词形式）"};

String_and_meaning String_and_meaning_tissue = {
    .string = "tissue",
    .meaning = "n. 组织；纸巾；薄纱；一套vt. 饰以薄纱；用化妆纸揩去"};

String_and_meaning String_and_meaning_title = {
    .string = "title",
    .meaning = "n. 冠军；标题；头衔；权利；字幕vt. 加标题于；赋予头衔；把…称为adj. 冠军的；标题的；头衔的"};

String_and_meaning String_and_meaning_to = {
    .string = "to",
    .meaning = "prep.向,往,给...,于...,直到...为止,在...之前,比,对,[表示程度、范围] 到,达 [域] Tonga ,汤加"};

String_and_meaning String_and_meaning_toast = {
    .string = "toast",
    .meaning = "n. 干杯；烤面包；接受敬酒的人；（在某领域）广受赞誉的人vt. 向…祝酒，为…干杯vi. 烤火，取暖；使暖和；烘烤（面包片等）"};

String_and_meaning String_and_meaning_tobacco = {
    .string = "tobacco",
    .meaning = "n. 烟草，烟叶；烟草制品；抽烟"};

String_and_meaning String_and_meaning_today = {
    .string = "today",
    .meaning = "adv. 今天，今日；现今，当代n. 今天，今日；现今，当代n. (Today) （印度、美、俄）托迪（人名）"};

String_and_meaning String_and_meaning_toe = {
    .string = "toe",
    .meaning = "n. 脚趾；足尖vt. 用脚尖走；以趾踏触vi. 动脚尖；用足尖跳舞n. (Toe)人名；(布基)托埃；(缅)梭；(朝)堆；(日)土江 (姓)"};

String_and_meaning String_and_meaning_together = {
    .string = "together",
    .meaning = "adv. 一起；同时；相互；连续地；总共adj. 新潮的；情绪稳定的，做事有效率的"};

String_and_meaning String_and_meaning_toilet = {
    .string = "toilet",
    .meaning = "n. 厕所，盥洗室；梳妆，打扮vi. 梳妆，打扮vt. 给…梳妆打扮"};

String_and_meaning String_and_meaning_token = {
    .string = "token",
    .meaning = "n.表示,向征,记号,代币adj.象征的,表意的"};

String_and_meaning String_and_meaning_tolerance = {
    .string = "tolerance",
    .meaning = "n. 宽容，容忍；耐力；公差"};

String_and_meaning String_and_meaning_tolerant = {
    .string = "tolerant",
    .meaning = "adj. 宽容的；容忍的；有耐药力的"};

String_and_meaning String_and_meaning_tolerate = {
    .string = "tolerate",
    .meaning = "vt. 忍受；默许；宽恕"};

String_and_meaning String_and_meaning_tomato = {
    .string = "tomato",
    .meaning = "n. 番茄，西红柿"};

String_and_meaning String_and_meaning_tomb = {
    .string = "tomb",
    .meaning = "n. 坟墓；死亡vt. 埋葬n. (Tomb)人名；(英)图姆"};

String_and_meaning String_and_meaning_tomorrow = {
    .string = "tomorrow",
    .meaning = "adv. 在明天，在明日；在未来n. 明天，明日； 未来，来日（尤指不久的将来）"};

String_and_meaning String_and_meaning_ton = {
    .string = "ton",
    .meaning = "n. 吨；很多，大量n. (Ton)人名；(西、俄、捷、荷)托恩；(柬)敦；(东南亚国家华语)通；(朝)敦"};

String_and_meaning String_and_meaning_tone = {
    .string = "tone",
    .meaning = "n. 语气；色调；音调；音色vt. 增强；用某种调子说vi. 颜色调和；呈现悦目色调n. (Tone)人名；(罗、塞、乍)托内；(英)托恩"};

String_and_meaning String_and_meaning_tongue = {
    .string = "tongue",
    .meaning = "n. 舌头；语言vt. 舔；斥责；用舌吹vi. 说话；吹管乐器n. (Tongue)人名；(英)唐"};

String_and_meaning String_and_meaning_tonight = {
    .string = "tonight",
    .meaning = "adv. 在今晚，今夜n. 今晚，今夜"};

String_and_meaning String_and_meaning_too = {
    .string = "too",
    .meaning = "adv. 太；也；很；还；非常；过度"};

String_and_meaning String_and_meaning_tool = {
    .string = "tool",
    .meaning = "n. 工具，用具；器械，机床；手段vi. 使用工具；用机床装备工厂vt. 用工具给……加工"};

String_and_meaning String_and_meaning_tooth = {
    .string = "tooth",
    .meaning = "n. 牙齿vt. 给……装齿vi. 啮合n. (Tooth)人名；(英)图思"};

String_and_meaning String_and_meaning_top = {
    .string = "top",
    .meaning = "n.顶部,顶端,极点,顶蓬,陀螺,(常用复数)根菜植物的叶子,上部,盖子adj.最高的,顶上的,头等的vt.盖,戴,高耸,达到顶端,截去(植物)顶端,高过,超越vi.结束,完成,胜过"};

String_and_meaning String_and_meaning_topic = {
    .string = "topic",
    .meaning = "n. 主题（等于theme）；题目；一般规则；总论"};

String_and_meaning String_and_meaning_torch = {
    .string = "torch",
    .meaning = "n. 火把，火炬；手电筒；启发之物vi. 像火炬一样燃烧vt. 用火炬点燃"};

String_and_meaning String_and_meaning_torrent = {
    .string = "torrent",
    .meaning = "n. 奔流；倾注；迸发；连续不断；急流，激流；（话语、感情的）迸发n. (Torrent) （西、法、美等）托伦特（人名）"};

String_and_meaning String_and_meaning_tortoise = {
    .string = "tortoise",
    .meaning = "n. 龟，[脊椎] 乌龟（等于testudo）；迟缓的人"};

String_and_meaning String_and_meaning_torture = {
    .string = "torture",
    .meaning = "n. 折磨；拷问；歪曲v. 折磨；拷问；歪曲"};

String_and_meaning String_and_meaning_toss = {
    .string = "toss",
    .meaning = "v.投,掷"};

String_and_meaning String_and_meaning_total = {
    .string = "total",
    .meaning = "adj. 全部的；完全的；整个的vt. 总数达vi. 合计n. 总数，合计n. (Total)人名；(法、德)托塔尔"};

String_and_meaning String_and_meaning_touch = {
    .string = "touch",
    .meaning = "n.触,触觉,接触,联系,轻触,碰,缺点,格调vt.接触,触摸,触及,达到,涉及,点缀,使接触,感动vi.触摸,接近,涉及,提到"};

String_and_meaning String_and_meaning_tough = {
    .string = "tough",
    .meaning = "adj. 艰苦的，困难的；坚强的，不屈不挠的；坚韧的，牢固的；强壮的，结实的n. 恶棍vt. 坚持；忍受，忍耐adv. 强硬地，顽强地n. (Tough)人名；(英)图赫"};

String_and_meaning String_and_meaning_tour = {
    .string = "tour",
    .meaning = "n. 旅游，旅行；巡回演出vt. 旅行，在……旅游；在……作巡回演出vi. 旅行，旅游；作巡回演出n. （Tour）（瑞典、英）托尔；图尔（人名）"};

String_and_meaning String_and_meaning_tourist = {
    .string = "tourist",
    .meaning = "n. 旅行者，观光客adj. 旅游的vt. 在旅行参观vi. 旅游；观光adv. 坐旅游车厢；坐经济舱"};

String_and_meaning String_and_meaning_tow = {
    .string = "tow",
    .meaning = "v. 拖；牵引；拽n. 拖；麻的粗纤维；拖具n. (Tow) （美、新加坡、马来西亚）道（人名）"};

String_and_meaning String_and_meaning_toward = {
    .string = "toward",
    .meaning = "prep. 向；趋向；对于；接近（时间）；靠近；用于，为了（同 towards）adj. 即将来到的，进行中的n. (Toward) （美、加、沙特）特沃德"};

String_and_meaning String_and_meaning_towards = {
    .string = "towards",
    .meaning = "prep. 朝，向；趋向；接近（目的）；将近（某一时间）；对于；向……致敬；用于；有助于"};

String_and_meaning String_and_meaning_towel = {
    .string = "towel",
    .meaning = "n. 毛巾，手巾；[纸] 纸巾vt. 用毛巾擦vi. 用毛巾擦干身体"};

String_and_meaning String_and_meaning_tower = {
    .string = "tower",
    .meaning = "n. 塔；高楼；堡垒vi. 高耸；超越n. (Tower)人名；(英)托尔"};

String_and_meaning String_and_meaning_town = {
    .string = "town",
    .meaning = "n. 城镇，市镇；市内商业区n. (Town)人名；(英)汤"};

String_and_meaning String_and_meaning_toy = {
    .string = "toy",
    .meaning = "n. 玩具；小装饰品；不值钱的东西vi. 玩弄；调情；随随便便地对待adj. 作为玩具的；玩物似的n. (Toy) （美）托伊（人名）"};

String_and_meaning String_and_meaning_trace = {
    .string = "trace",
    .meaning = "n.痕迹,踪迹,微量,迹线,缰绳vt.描绘,映描,画轮廓,追踪,回溯,探索vi.上溯,沿路走"};

String_and_meaning String_and_meaning_track = {
    .string = "track",
    .meaning = "n. 轨道；足迹，踪迹；小道vt. 追踪；通过；循路而行；用纤拉vi. 追踪；走；留下足迹"};

String_and_meaning String_and_meaning_tract = {
    .string = "tract",
    .meaning = "n. 束；大片土地，地带；小册子n. (Tract)人名；(英)特拉克特"};

String_and_meaning String_and_meaning_tractor = {
    .string = "tractor",
    .meaning = "n. 拖拉机；牵引机"};

String_and_meaning String_and_meaning_trade = {
    .string = "trade",
    .meaning = "n. 贸易，交易；行业；职业vi. 交易，买卖；以物易物vt. 用……进行交换"};

String_and_meaning String_and_meaning_tradition = {
    .string = "tradition",
    .meaning = "n. 惯例，传统；传说"};

String_and_meaning String_and_meaning_traditional = {
    .string = "traditional",
    .meaning = "adj. 传统的；惯例的"};

String_and_meaning String_and_meaning_traffic = {
    .string = "traffic",
    .meaning = "n. 交通；运输；贸易；[通信] 通信量vt. 用…作交换；在…通行vi. 交易，买卖"};

String_and_meaning String_and_meaning_tragedy = {
    .string = "tragedy",
    .meaning = "n. 悲剧；灾难；惨案"};

String_and_meaning String_and_meaning_tragic = {
    .string = "tragic",
    .meaning = "adj. 悲剧的；悲痛的，不幸的"};

String_and_meaning String_and_meaning_trail = {
    .string = "trail",
    .meaning = "n.踪迹,痕迹,形迹vt.跟踪,追踪,拉,拖,拖拉,(指植物)蔓生,蔓延,(指人)没精打采地走"};

String_and_meaning String_and_meaning_train = {
    .string = "train",
    .meaning = "n. 火车；行列；长队；裙裾v. 培养；训练；瞄准n. (Train)人名；(英)特雷恩；(法)特兰；(意)特拉因"};

String_and_meaning String_and_meaning_training = {
    .string = "training",
    .meaning = "n. 训练；培养；瞄准；整枝v. 训练；教养（train的ing形式）"};

String_and_meaning String_and_meaning_trait = {
    .string = "trait",
    .meaning = "n. 特性，特点；品质；少许n. （Trait）（美、法）特雷（人名）"};

String_and_meaning String_and_meaning_traitor = {
    .string = "traitor",
    .meaning = "n. 叛徒；卖国贼；背信弃义的人"};

String_and_meaning String_and_meaning_tram = {
    .string = "tram",
    .meaning = "n. 电车轨道；煤车vt. 用煤车运载vi. 乘电车"};

String_and_meaning String_and_meaning_tramp = {
    .string = "tramp",
    .meaning = "v.重步行走,踏,践,践踏"};

String_and_meaning String_and_meaning_transaction = {
    .string = "transaction",
    .meaning = "n. 交易；事务；办理；会报，学报"};

String_and_meaning String_and_meaning_transcend = {
    .string = "transcend",
    .meaning = "vt. 胜过，超越"};

String_and_meaning String_and_meaning_transfer = {
    .string = "transfer",
    .meaning = "n.迁移,移动,传递,转移,调任,转帐,过户,转让vt.转移,调转,调任,传递,转让,改变vi.转移,转学,换车"};

String_and_meaning String_and_meaning_transform = {
    .string = "transform",
    .meaning = "vt. 改变，使…变形；转换vi. 变换，改变；转化"};

String_and_meaning String_and_meaning_transformation = {
    .string = "transformation",
    .meaning = "n. [遗] 转化；转换；改革；变形"};

String_and_meaning String_and_meaning_transformer = {
    .string = "transformer",
    .meaning = "n. [电] 变压器；促使变化的人"};

String_and_meaning String_and_meaning_transient = {
    .string = "transient",
    .meaning = "adj. 短暂的；路过的n. 瞬变现象；过往旅客；候鸟"};

String_and_meaning String_and_meaning_transistor = {
    .string = "transistor",
    .meaning = "n. 晶体管（收音机）"};

String_and_meaning String_and_meaning_transit = {
    .string = "transit",
    .meaning = "n.经过,通行,搬运,运输,运输线,转变vt.横越,通过,经过vi.通过n.[天] 中天,经纬仪"};

String_and_meaning String_and_meaning_transition = {
    .string = "transition",
    .meaning = "n. 过渡；转变；[分子生物] 转换；变调"};

String_and_meaning String_and_meaning_translate = {
    .string = "translate",
    .meaning = "vt. 翻译；转化；解释；转变为；调动vi. 翻译"};

String_and_meaning String_and_meaning_translation = {
    .string = "translation",
    .meaning = "n. 翻译；译文；转化；调任"};

String_and_meaning String_and_meaning_transmission = {
    .string = "transmission",
    .meaning = "n. 传动装置，[机] 变速器；传递；传送；播送"};

String_and_meaning String_and_meaning_transmit = {
    .string = "transmit",
    .meaning = "vt. 传输；传播；发射；传达；遗传vi. 传输；发射信号"};

String_and_meaning String_and_meaning_transparent = {
    .string = "transparent",
    .meaning = "adj. 透明的；显然的；坦率的；易懂的"};

String_and_meaning String_and_meaning_transplant = {
    .string = "transplant",
    .meaning = "v. 移植；移栽；使移居n. 移植；移植器官；被移植物；移居者"};

String_and_meaning String_and_meaning_transport = {
    .string = "transport",
    .meaning = "n. 运输；运输机；狂喜；流放犯vt. 运输；流放；使狂喜"};

String_and_meaning String_and_meaning_transportation = {
    .string = "transportation",
    .meaning = "n. 运输；运输系统；运输工具；流放"};

String_and_meaning String_and_meaning_trap = {
    .string = "trap",
    .meaning = "n.圈套,陷阱,诡计,活板门,存水弯,汽水闸,(双轮)轻便马车vi.设圈套,设陷阱vt.诱捕,诱骗,计捉,设陷,坑害,使受限制"};

String_and_meaning String_and_meaning_travel = {
    .string = "travel",
    .meaning = "v.旅行,传播vi.行进,传播n.旅行"};

String_and_meaning String_and_meaning_traverse = {
    .string = "traverse",
    .meaning = "n.横贯,横断,横木,障碍,否认,反驳,(建筑)通廊vt.横过,穿过,经过,在...来回移动,反对,详细研究vi.横越,横断,旋转,来回移动adj.横断的,横的"};

String_and_meaning String_and_meaning_tray = {
    .string = "tray",
    .meaning = "n. 托盘；文件盒"};

String_and_meaning String_and_meaning_treason = {
    .string = "treason",
    .meaning = "n. [法] 叛国罪；不忠"};

String_and_meaning String_and_meaning_treasure = {
    .string = "treasure",
    .meaning = "n. 财富，财产；财宝；珍品vt. 珍爱；珍藏n. (Treasure)（英、美、爱）特雷热（人名）"};

String_and_meaning String_and_meaning_treat = {
    .string = "treat",
    .meaning = "vt. 治疗；对待；探讨；视为vi. 探讨；请客；协商n. 请客；款待n. (Treat)人名；(英)特里特"};

String_and_meaning String_and_meaning_treatment = {
    .string = "treatment",
    .meaning = "n. 治疗，疗法；处理；对待"};

String_and_meaning String_and_meaning_treaty = {
    .string = "treaty",
    .meaning = "n. 条约，协议；谈判"};

String_and_meaning String_and_meaning_tree = {
    .string = "tree",
    .meaning = "n. 树；木料；树状物vt. 把...赶上树vi. 爬上树；逃上树n. (Tree)人名；(英)特里"};

String_and_meaning String_and_meaning_tremble = {
    .string = "tremble",
    .meaning = "vi. 发抖；战栗；焦虑；摇晃vt. 使挥动；用颤抖的声音说出n. 颤抖；战栗；摇晃"};

String_and_meaning String_and_meaning_tremendous = {
    .string = "tremendous",
    .meaning = "adj. 极大的，巨大的；惊人的；极好的"};

String_and_meaning String_and_meaning_trench = {
    .string = "trench",
    .meaning = "n. 沟，沟渠；战壕；堑壕vt. 掘沟vi. 挖战壕；侵害n. (Trench)人名；(英、西)特伦奇"};

String_and_meaning String_and_meaning_trend = {
    .string = "trend",
    .meaning = "n. 趋势，倾向；走向vi. 趋向，伸向vt. 使…趋向n. (Trend)人名；(英)特伦德"};

String_and_meaning String_and_meaning_trial = {
    .string = "trial",
    .meaning = "n. 试验；审讯；努力；磨炼adj. 试验的；审讯的n. （Trial）（法）特里亚尔（人名）"};

String_and_meaning String_and_meaning_triangle = {
    .string = "triangle",
    .meaning = "n. 三角（形）；三角关系；三角形之物；三人一组"};

String_and_meaning String_and_meaning_tribe = {
    .string = "tribe",
    .meaning = "n. 部落；族；宗族；一伙n. (Tribe)人名；(英)特赖布"};

String_and_meaning String_and_meaning_tribute = {
    .string = "tribute",
    .meaning = "n. 礼物；[税收] 贡物；颂词；（尤指对死者的）致敬，悼念，吊唁礼物"};

String_and_meaning String_and_meaning_trick = {
    .string = "trick",
    .meaning = "n. 诡计；恶作剧；窍门；花招；骗局；欺诈vt. 欺骗；哄骗；装饰；打扮vi. 哄骗；戏弄adj. 特技的；欺诈的；有诀窍的n. (Trick)人名；(英)特里克"};

String_and_meaning String_and_meaning_trifle = {
    .string = "trifle",
    .meaning = "n. 少量；琐事；不值钱的东西；屈莱弗甜食v. 轻浮地说（或做）；虚度，浪费；轻视"};

String_and_meaning String_and_meaning_trigger = {
    .string = "trigger",
    .meaning = "n. 扳机；起因，引起反应的事；触发器，引爆装置v. 触发，引起；开动（装置）n. (Trigger) 特里杰（人名）"};

String_and_meaning String_and_meaning_trim = {
    .string = "trim",
    .meaning = "adj.整齐的,整洁的vt.整理,修整,装饰"};

String_and_meaning String_and_meaning_trip = {
    .string = "trip",
    .meaning = "n.(短途)旅行,绊倒,摔倒,失足,往返,差错,支吾,旅程vt.使跌倒,使犯错,使失败,挑剔vi.轻快地走,摔倒,绊倒,失足,结巴,远足,犯错,旅行"};

String_and_meaning String_and_meaning_triple = {
    .string = "triple",
    .meaning = "adj. 三倍的；三方的n. 三倍数；三个一组vi. 增至三倍vt. 使成三倍"};

String_and_meaning String_and_meaning_triumph = {
    .string = "triumph",
    .meaning = "n. 胜利，凯旋；欢欣vi. 获得胜利，成功"};

String_and_meaning String_and_meaning_trivial = {
    .string = "trivial",
    .meaning = "adj. 不重要的，琐碎的；琐细的"};

String_and_meaning String_and_meaning_troop = {
    .string = "troop",
    .meaning = "n. 军队；组；群；多数vi. 群集；成群而行；结队vt. 把（骑兵）编成骑兵连"};

String_and_meaning String_and_meaning_tropical = {
    .string = "tropical",
    .meaning = "adj. 热带的；热情的；酷热的"};

String_and_meaning String_and_meaning_trouble = {
    .string = "trouble",
    .meaning = "n. 麻烦；烦恼；故障；动乱vt. 麻烦；使烦恼；折磨vi. 费心，烦恼"};

String_and_meaning String_and_meaning_troublesome = {
    .string = "troublesome",
    .meaning = "adj. 麻烦的；讨厌的；使人苦恼的"};

String_and_meaning String_and_meaning_trousers = {
    .string = "trousers",
    .meaning = "n. 裤子，长裤"};

String_and_meaning String_and_meaning_truck = {
    .string = "truck",
    .meaning = "n. 卡车；交易；手推车vi. 驾驶卡车；以物易物vt. 交易；以卡车运输adj. （美）运货汽车的n. (Truck)人名；(德)特鲁克"};

String_and_meaning String_and_meaning_true = {
    .string = "true",
    .meaning = "adj. 真实的；正确的adv. 真实地；准确地n. 真实；准确vt. 装准n. (TRUE)人名；(英)特鲁"};

String_and_meaning String_and_meaning_truly = {
    .string = "truly",
    .meaning = "adv. 真实地，不假；真诚地n. (Truly)人名；(英)特鲁利"};

String_and_meaning String_and_meaning_trumpet = {
    .string = "trumpet",
    .meaning = "n. 喇叭；喇叭声vt. 吹喇叭；吹嘘vi. 吹喇叭；发出喇叭般的声音"};

String_and_meaning String_and_meaning_trunk = {
    .string = "trunk",
    .meaning = "n. 树干；躯干；象鼻；汽车车尾的行李箱vt. 把…放入旅行箱内adj. 干线的；躯干的；箱子的n. (Trunk)人名；(德、匈、西)特伦克"};

String_and_meaning String_and_meaning_trust = {
    .string = "trust",
    .meaning = "n. 信任，信赖；责任；托拉斯vt. 信任，信赖；盼望；赊卖给vi. 信任，信赖；依靠n. (Trust)人名；(英)特拉斯特"};

String_and_meaning String_and_meaning_truth = {
    .string = "truth",
    .meaning = "n. 真理；事实；诚实；实质"};

String_and_meaning String_and_meaning_try = {
    .string = "try",
    .meaning = "vt. 试图，努力；试验；审判；考验vi. 尝试；努力；试验n. 尝试；努力；试验n. (Try)人名；(英、印尼)特里；(柬)德里"};

String_and_meaning String_and_meaning_tub = {
    .string = "tub",
    .meaning = "n. 浴盆；桶vt. 把…装入桶；为…洗盆浴vi. 洗盆浴；（衣服等）被放在桶里洗"};

String_and_meaning String_and_meaning_tube = {
    .string = "tube",
    .meaning = "n. 管；电子管；隧道；电视机vt. 使成管状；把…装管；用管输送vi. 乘地铁；不及格"};

String_and_meaning String_and_meaning_tuck = {
    .string = "tuck",
    .meaning = "n.缝摺,活力,鼓声,船尾突出部下方,食物(尤指点心、蛋糕)vt.打摺,卷起,挤进,塞,使隐藏vi.折成摺子,缩拢"};

String_and_meaning String_and_meaning_Tuesday = {
    .string = "Tuesday",
    .meaning = "n. 星期二"};

String_and_meaning String_and_meaning_tug = {
    .string = "tug",
    .meaning = "v. （用力地）拉，拖；（迅速地）穿衣服；较量；用拖船拖；竞争；努力做n. 拖船；拖曳；苦干；一股强烈的感情；（系在马鞍上的）圆环"};

String_and_meaning String_and_meaning_tuition = {
    .string = "tuition",
    .meaning = "n. 学费；讲授"};

String_and_meaning String_and_meaning_tumble = {
    .string = "tumble",
    .meaning = "vi. 摔倒；倒塌；滚动；打滚；仓惶地行动vt. 使摔倒；使滚翻；弄乱n. 跌倒；翻筋斗；跌跤[ 过去式tumbled 过去分词tumbled 现在分词tumbling ]"};

String_and_meaning String_and_meaning_tune = {
    .string = "tune",
    .meaning = "n. 曲调；和谐；心情vt. 调整；使一致；为…调音vi. [电子][通信] 调谐；协调n. (Tune)人名；(英)图恩"};

String_and_meaning String_and_meaning_tunnel = {
    .string = "tunnel",
    .meaning = "n. 隧道；坑道；洞穴通道vt. 挖；在…打开通道；在…挖掘隧道vi. 挖掘隧道；打开通道"};

String_and_meaning String_and_meaning_turbine = {
    .string = "turbine",
    .meaning = "n. [动力] 涡轮；[动力] 涡轮机"};

String_and_meaning String_and_meaning_turbulent = {
    .string = "turbulent",
    .meaning = "adj. 动荡的；湍流的；与紊流有关的"};

String_and_meaning String_and_meaning_turkey = {
    .string = "turkey",
    .meaning = "n. 火鸡；笨蛋；失败之作"};

String_and_meaning String_and_meaning_turn = {
    .string = "turn",
    .meaning = "vt. 转动，使旋转；转弯；翻过来；兑换vi. 转向；转变；转动n. 转弯；变化；(损害或有益于别人的)行为，举动，举止n. (Turn)人名；(德、匈)图恩"};

String_and_meaning String_and_meaning_turning = {
    .string = "turning",
    .meaning = "n. 转向；旋转；回转；转弯处v. 旋转（turn的ing形式）"};

String_and_meaning String_and_meaning_turnip = {
    .string = "turnip",
    .meaning = "n. 萝卜；芜菁甘蓝，大头菜"};

String_and_meaning String_and_meaning_turnover = {
    .string = "turnover",
    .meaning = "n. 翻覆；[贸易] 营业额；流通量；半圆卷饼；失误adj. 翻过来的；可翻转的"};

String_and_meaning String_and_meaning_tutor = {
    .string = "tutor",
    .meaning = "n. 导师；家庭教师；助教；（尤指音乐）课本v. 辅导；约束；当家庭教师，当大学导师"};

String_and_meaning String_and_meaning_twelfth = {
    .string = "twelfth",
    .meaning = "adj. 第十二的，第十二个的；十二分之一的n. 第十二；月的第十二日"};

String_and_meaning String_and_meaning_twelve = {
    .string = "twelve",
    .meaning = "n. 十二；十二个num. 十二；十二个adj. 十二的；十二个的"};

String_and_meaning String_and_meaning_twentieth = {
    .string = "twentieth",
    .meaning = "n. 第二十；二十分之一adj. 第二十的；二十分之一的"};

String_and_meaning String_and_meaning_twenty = {
    .string = "twenty",
    .meaning = "n. 二十；二十年代num. 二十adj. 二十的"};

String_and_meaning String_and_meaning_twice = {
    .string = "twice",
    .meaning = "adv. 两次；两倍"};

String_and_meaning String_and_meaning_twin = {
    .string = "twin",
    .meaning = "n.双胞胎中一人,孪生子adj.双胞胎的,一对的,相似的vi.生双胞胎,成对vt.孪生,使成对"};

String_and_meaning String_and_meaning_twinkle = {
    .string = "twinkle",
    .meaning = "v. 闪烁；（眼睛）闪亮，闪闪发光；发亮；轻快移动n. （眼睛的）闪亮；欣喜的神情；闪烁"};

String_and_meaning String_and_meaning_twist = {
    .string = "twist",
    .meaning = "n.一扭,扭曲,盘旋,曲折,歪曲,手法,螺旋状vt.拧,扭曲,绞,搓,捻,使苦恼,使转动,编织vi.扭弯,扭曲,缠绕,扭动,呈螺旋形"};

String_and_meaning String_and_meaning_two = {
    .string = "two",
    .meaning = "n. 两个adj. 两个的num. 二"};

String_and_meaning String_and_meaning_type = {
    .string = "type",
    .meaning = "n. 类型，品种；模范；样式vt. 打字；测定（血等）类型vi. 打字n. (Type)人名；(英)泰普"};

String_and_meaning String_and_meaning_typewriter = {
    .string = "typewriter",
    .meaning = "n. 打字机"};

String_and_meaning String_and_meaning_typhoon = {
    .string = "typhoon",
    .meaning = "n. [气象] 台风"};

String_and_meaning String_and_meaning_typical = {
    .string = "typical",
    .meaning = "adj. 典型的；特有的；象征性的"};

String_and_meaning String_and_meaning_typist = {
    .string = "typist",
    .meaning = "n. 打字员，打字者"};

String_and_meaning String_and_meaning_tyre = {
    .string = "tyre",
    .meaning = "n. 轮胎，轮箍v. 装轮胎于……n. (Tyre)  （美、英、加）泰尔（人名）"};

String_and_meaning String_and_meaning_ugly = {
    .string = "ugly",
    .meaning = "adj. 丑陋的；邪恶的；令人厌恶的"};

String_and_meaning String_and_meaning_ultimate = {
    .string = "ultimate",
    .meaning = "adj. 最终的；极限的；根本的n. 终极；根本；基本原则"};

String_and_meaning String_and_meaning_ultimately = {
    .string = "ultimately",
    .meaning = "adv. 最后；根本；基本上"};

String_and_meaning String_and_meaning_ultraviolet = {
    .string = "ultraviolet",
    .meaning = "adj. 紫外的；紫外线的n. 紫外线辐射，紫外光"};

String_and_meaning String_and_meaning_umbrella = {
    .string = "umbrella",
    .meaning = "n. 雨伞；保护伞；庇护；伞形结构"};

String_and_meaning String_and_meaning_unable = {
    .string = "unable",
    .meaning = "adj. 不会的，不能的；[劳经] 无能力的；不能胜任的"};

String_and_meaning String_and_meaning_unanimous = {
    .string = "unanimous",
    .meaning = "adj. 全体一致的；意见一致的；无异议的"};

String_and_meaning String_and_meaning_unbearable = {
    .string = "unbearable",
    .meaning = "adj. 难以忍受的；承受不住的"};

String_and_meaning String_and_meaning_uncertain = {
    .string = "uncertain",
    .meaning = "adj. 无把握的；多变的；不确定的；信心不足的；靠不住的"};

String_and_meaning String_and_meaning_uncle = {
    .string = "uncle",
    .meaning = "n. 叔叔；伯父；伯伯；舅父；姨丈；姑父"};

String_and_meaning String_and_meaning_uncomfortable = {
    .string = "uncomfortable",
    .meaning = "adj. 不舒服的；不安的"};

String_and_meaning String_and_meaning_unconscious = {
    .string = "unconscious",
    .meaning = "adj. 无意识的；失去知觉的；不省人事的；未发觉的"};

String_and_meaning String_and_meaning_uncover = {
    .string = "uncover",
    .meaning = "vt. 发现；揭开；揭露vi. 发现；揭示；揭去盖子"};

String_and_meaning String_and_meaning_under = {
    .string = "under",
    .meaning = "prep.在...之下,在...之内,在...领导下,低于,假借adv.在下"};

String_and_meaning String_and_meaning_underestimate = {
    .string = "underestimate",
    .meaning = "vt. 低估；看轻n. 低估"};

String_and_meaning String_and_meaning_undergo = {
    .string = "undergo",
    .meaning = "vt. 经历，经受；忍受"};

String_and_meaning String_and_meaning_undergraduate = {
    .string = "undergraduate",
    .meaning = "n. 大学本科生；大学肄业生adj. 大学本科生的；大学肄业生的"};

String_and_meaning String_and_meaning_underground = {
    .string = "underground",
    .meaning = "adv. 在地下；秘密地adj. 位于地下的；地下的；先锋派的，急进探索的v. 铺（电缆）于地下n. 地铁；秘密政治组织"};

String_and_meaning String_and_meaning_underline = {
    .string = "underline",
    .meaning = "vt. 强调；在…下面划线；预告n. 下划线；下期节目预告"};

String_and_meaning String_and_meaning_underlying = {
    .string = "underlying",
    .meaning = "adj. 潜在的；根本的；在下面的；优先的v. 放在…的下面；为…的基础；优先于（underlie的ing形式）"};

String_and_meaning String_and_meaning_undermine = {
    .string = "undermine",
    .meaning = "vt. 破坏，渐渐破坏；挖掘地基"};

String_and_meaning String_and_meaning_underneath = {
    .string = "underneath",
    .meaning = "adv.在下面 prep.在...的下面"};

String_and_meaning String_and_meaning_understand = {
    .string = "understand",
    .meaning = "vt. 理解；懂；获悉；推断；省略；明白vi. 理解；懂得；熟悉"};

String_and_meaning String_and_meaning_understanding = {
    .string = "understanding",
    .meaning = "n. 谅解，理解；理解力；协议adj. 了解的；聪明的；有理解力的v. 理解；明白（understand的ing形式）"};

String_and_meaning String_and_meaning_undertake = {
    .string = "undertake",
    .meaning = "vt. 承担，保证；从事；同意；试图"};

String_and_meaning String_and_meaning_undertaking = {
    .string = "undertaking",
    .meaning = "n. 事业；企业；保证；殡仪业v. 同意；担任；许诺（undertake的ing形式）"};

String_and_meaning String_and_meaning_undo = {
    .string = "undo",
    .meaning = "vt. 取消；解开；破坏；扰乱vi. 撤消"};

String_and_meaning String_and_meaning_undoubtedly = {
    .string = "undoubtedly",
    .meaning = "adv. 确实地，毋庸置疑地"};

String_and_meaning String_and_meaning_uneasy = {
    .string = "uneasy",
    .meaning = "adj. 不舒服的；心神不安的；不稳定的"};

String_and_meaning String_and_meaning_unemployment = {
    .string = "unemployment",
    .meaning = "n. 失业；失业率；失业人数"};

String_and_meaning String_and_meaning_unexpected = {
    .string = "unexpected",
    .meaning = "adj. 意外的，想不到的"};

String_and_meaning String_and_meaning_unfair = {
    .string = "unfair",
    .meaning = "adj. 不公平的，不公正的"};

String_and_meaning String_and_meaning_unfold = {
    .string = "unfold",
    .meaning = "vt. 打开；呈现vi. 展开；显露"};

String_and_meaning String_and_meaning_unfortunate = {
    .string = "unfortunate",
    .meaning = "adj. 不幸的；令人遗憾的；不成功的"};

String_and_meaning String_and_meaning_unfortunately = {
    .string = "unfortunately",
    .meaning = "adv. 不幸地"};

String_and_meaning String_and_meaning_unhappy = {
    .string = "unhappy",
    .meaning = "adj. 不快乐的；不幸福的；不适当的"};

String_and_meaning String_and_meaning_uniform = {
    .string = "uniform",
    .meaning = "adj. 统一的；一致的；相同的；均衡的；始终如一的n. 制服vt. 使穿制服；使成一样"};

String_and_meaning String_and_meaning_unify = {
    .string = "unify",
    .meaning = "v. 整合，联合；统一，使成一体"};

String_and_meaning String_and_meaning_union = {
    .string = "union",
    .meaning = "n. 联盟，协会；工会；联合"};

String_and_meaning String_and_meaning_unique = {
    .string = "unique",
    .meaning = "adj. 独特的，稀罕的；[数] 唯一的，独一无二的n. 独一无二的人或物n. (Unique)人名；(英)尤妮克"};

String_and_meaning String_and_meaning_unit = {
    .string = "unit",
    .meaning = "n. 单位，单元；装置；[军] 部队；部件"};

String_and_meaning String_and_meaning_unite = {
    .string = "unite",
    .meaning = "vt. 使…混合；使…联合；使…团结vi. 团结；联合；混合"};

String_and_meaning String_and_meaning_unity = {
    .string = "unity",
    .meaning = "n. 团结；一致；联合；个体n. (Unity)人名；(英)尤妮蒂"};

String_and_meaning String_and_meaning_universal = {
    .string = "universal",
    .meaning = "adj. 普遍的；通用的；宇宙的；全世界的；全体的n. 一般概念；普通性"};

String_and_meaning String_and_meaning_universe = {
    .string = "universe",
    .meaning = "n. 宇宙；世界；领域"};

String_and_meaning String_and_meaning_university = {
    .string = "university",
    .meaning = "n. 大学；综合性大学；大学校舍"};

String_and_meaning String_and_meaning_unjust = {
    .string = "unjust",
    .meaning = "adj. 不公平的，不公正的；非正义的"};

String_and_meaning String_and_meaning_unkind = {
    .string = "unkind",
    .meaning = "adj. 不友善的，不亲切的；刻薄的；（天气）恶劣的"};

String_and_meaning String_and_meaning_unknown = {
    .string = "unknown",
    .meaning = "adj. 未知的；陌生的，默默无闻的n. 未知数；未知的事物，默默无闻的人"};

String_and_meaning String_and_meaning_unless = {
    .string = "unless",
    .meaning = "conj. 除非；若非prep. 除……之外"};

String_and_meaning String_and_meaning_unlike = {
    .string = "unlike",
    .meaning = "prep. 不像，和……不同；与……不同，与……相反；非……的特征，不是……的特点adj. 不同的，不相似的，不像的conj. 不同于"};

String_and_meaning String_and_meaning_unlikely = {
    .string = "unlikely",
    .meaning = "adj. 不太可能的；没希望的adv. 未必"};

String_and_meaning String_and_meaning_unload = {
    .string = "unload",
    .meaning = "vt. 卸；摆脱…之负担；倾销vi. 卸货；退子弹"};

String_and_meaning String_and_meaning_unlucky = {
    .string = "unlucky",
    .meaning = "adj. 不幸的；倒霉的；不吉利的"};

String_and_meaning String_and_meaning_unnecessary = {
    .string = "unnecessary",
    .meaning = "adj. 不必要的；多余的，无用的"};

String_and_meaning String_and_meaning_unpleasant = {
    .string = "unpleasant",
    .meaning = "adj. 讨厌的；使人不愉快的"};

String_and_meaning String_and_meaning_unsatisfactory = {
    .string = "unsatisfactory",
    .meaning = "adj. 不令人满意的；不满足的；不符合要求的"};

String_and_meaning String_and_meaning_unstable = {
    .string = "unstable",
    .meaning = "adj. 不稳定的；动荡的；易变的"};

String_and_meaning String_and_meaning_unsuitable = {
    .string = "unsuitable",
    .meaning = "adj. 不适合的；不适宜的；不相称的"};

String_and_meaning String_and_meaning_until = {
    .string = "until",
    .meaning = "conj. 到……时，直到……为止prep. 到……时，直到……为止"};

String_and_meaning String_and_meaning_unusual = {
    .string = "unusual",
    .meaning = "adj. 不寻常的；与众不同的；不平常的"};

String_and_meaning String_and_meaning_unusually = {
    .string = "unusually",
    .meaning = "adv. 特别地，及其，非常；异常地，不同寻常地"};

String_and_meaning String_and_meaning_unwilling = {
    .string = "unwilling",
    .meaning = "adj. 不愿意的；不情愿的；勉强的"};

String_and_meaning String_and_meaning_up = {
    .string = "up",
    .meaning = "adv.向上,到(较高的地方,北方),起来,起床 prep.向上,在上,沿adj.向上的,上行的"};

String_and_meaning String_and_meaning_update = {
    .string = "update",
    .meaning = "vt. 更新；校正，修正；使现代化n. 更新；现代化"};

String_and_meaning String_and_meaning_upgrade = {
    .string = "upgrade",
    .meaning = "n.升级,上升,上坡adv.往上vt.使升级,提升,改良品种"};

String_and_meaning String_and_meaning_uphold = {
    .string = "uphold",
    .meaning = "vt. 支撑；鼓励；赞成；举起"};

String_and_meaning String_and_meaning_upon = {
    .string = "upon",
    .meaning = "prep. 在……之上；即将来临adv. 在上面地；此后"};

String_and_meaning String_and_meaning_upper = {
    .string = "upper",
    .meaning = "adj. 上面的，上部的；较高的n. 鞋面；兴奋剂（常用复数 uppers）n. （Upper）（英）厄珀（人名）"};

String_and_meaning String_and_meaning_upright = {
    .string = "upright",
    .meaning = "adj. 正直的，诚实的；垂直的，直立的；笔直的；合乎正道的n. 垂直；竖立"};

String_and_meaning String_and_meaning_upset = {
    .string = "upset",
    .meaning = "vt. 使心烦；颠覆；扰乱vi. 翻倒adj. 心烦的；混乱的；弄翻的n. 混乱；翻倒；颠覆"};

String_and_meaning String_and_meaning_upstairs = {
    .string = "upstairs",
    .meaning = "adv. 在（或向）楼上；在（或向）上一层；智力上adj. 楼上的n. 楼上"};

String_and_meaning String_and_meaning_upward = {
    .string = "upward",
    .meaning = "adj. 向上的；上升的adv. 向上地；增涨地"};

String_and_meaning String_and_meaning_upwards = {
    .string = "upwards",
    .meaning = "adv. 向上；在上部；向上游"};

String_and_meaning String_and_meaning_urge = {
    .string = "urge",
    .meaning = "vt. 力劝，催促；驱策，推进n. 强烈的欲望，迫切要求；推动力vi. 强烈要求"};

String_and_meaning String_and_meaning_urgent = {
    .string = "urgent",
    .meaning = "adj. 紧急的；急迫的"};

String_and_meaning String_and_meaning_us = {
    .string = "us",
    .meaning = "pron. 我们"};

String_and_meaning String_and_meaning_usage = {
    .string = "usage",
    .meaning = "n. 使用；用法；惯例"};

String_and_meaning String_and_meaning_use = {
    .string = "use",
    .meaning = "n. 使用；用途；发挥vt. 使用，运用；利用；耗费n. （Use）（德）乌泽（人名）"};

String_and_meaning String_and_meaning_used = {
    .string = "used",
    .meaning = "adj. 习惯的；二手的，使用过的v. 用（use 的过去式和过去分词）"};

String_and_meaning String_and_meaning_useful = {
    .string = "useful",
    .meaning = "adj. 有用的，有益的；有帮助的"};

String_and_meaning String_and_meaning_useless = {
    .string = "useless",
    .meaning = "adj. 无用的；无效的"};

String_and_meaning String_and_meaning_user = {
    .string = "user",
    .meaning = "n. 用户；使用者n. （User）（土）乌塞尔（人名）"};

String_and_meaning String_and_meaning_usual = {
    .string = "usual",
    .meaning = "adj. 通常的，惯例的；平常的"};

String_and_meaning String_and_meaning_usually = {
    .string = "usually",
    .meaning = "adv. 通常，经常"};

String_and_meaning String_and_meaning_utility = {
    .string = "utility",
    .meaning = "n. 实用；效用；公共设施；功用adj. 实用的；通用的；有多种用途的"};

String_and_meaning String_and_meaning_utilize = {
    .string = "utilize",
    .meaning = "vt. 利用"};

String_and_meaning String_and_meaning_utmost = {
    .string = "utmost",
    .meaning = "adj. 极度的；最远的n. 极限；最大可能"};

String_and_meaning String_and_meaning_utter = {
    .string = "utter",
    .meaning = "adj. 完全的；彻底的；无条件的v. 说出；发出，表达；发射；使用伪钞n. (Utter) （美、瑞、德、加、法、俄、匈）乌特（人名）"};

String_and_meaning String_and_meaning_vacant = {
    .string = "vacant",
    .meaning = "adj. 空虚的；空的；空缺的；空闲的；茫然的n. （Vacant）（法）瓦康（人名）"};

String_and_meaning String_and_meaning_vacation = {
    .string = "vacation",
    .meaning = "n. 假期；（房屋）搬出vi. 休假，度假"};

String_and_meaning String_and_meaning_vacuum = {
    .string = "vacuum",
    .meaning = "n. 真空；空缺，空白；真空吸尘器adj. 真空的；利用真空的；产生真空的vt. 用真空吸尘器清扫"};

String_and_meaning String_and_meaning_vague = {
    .string = "vague",
    .meaning = "adj. 模糊的；含糊的；不明确的；暧昧的n. (Vague)人名；(法)瓦格；(英)韦格"};

String_and_meaning String_and_meaning_vain = {
    .string = "vain",
    .meaning = "adj. 徒劳的；自负的；无结果的；无用的"};

String_and_meaning String_and_meaning_valid = {
    .string = "valid",
    .meaning = "adj. 有效的；有根据的；合法的；正当的"};

String_and_meaning String_and_meaning_validity = {
    .string = "validity",
    .meaning = "n. [计] 有效性；正确；正确性"};

String_and_meaning String_and_meaning_valley = {
    .string = "valley",
    .meaning = "n. 山谷；流域；溪谷n. (Valley)人名；(英)瓦利；(法)瓦莱"};

String_and_meaning String_and_meaning_valuable = {
    .string = "valuable",
    .meaning = "adj. 有价值的；贵重的；可估价的n. 贵重物品"};

String_and_meaning String_and_meaning_value = {
    .string = "value",
    .meaning = "n. 值；价值；价格；重要性；确切涵义vt. 评价；重视；估价"};

String_and_meaning String_and_meaning_valve = {
    .string = "valve",
    .meaning = "n. 阀；[解剖] 瓣膜；真空管；活门vt. 装阀于；以活门调节n. (Valve)人名；(俄、芬)瓦尔韦"};

String_and_meaning String_and_meaning_van = {
    .string = "van",
    .meaning = "n. 先锋；厢式货车；增值网vt. 用车搬运n. (Van)人名；(老、泰、柬、缅)万"};

String_and_meaning String_and_meaning_vanish = {
    .string = "vanish",
    .meaning = "vi. 消失；突然不见；成为零vt. 使不见，使消失n. 弱化音"};

String_and_meaning String_and_meaning_vanity = {
    .string = "vanity",
    .meaning = "n. 虚荣心；空虚；浮华；无价值的东西"};

String_and_meaning String_and_meaning_vapour = {
    .string = "vapour",
    .meaning = "n. 蒸汽，烟雾vi. 自我吹嘘"};

String_and_meaning String_and_meaning_variable = {
    .string = "variable",
    .meaning = "adj. 变量的；可变的；易变的，多变的；变异的，[生物] 畸变的n. [数] 变量；可变物，可变因素"};

String_and_meaning String_and_meaning_variation = {
    .string = "variation",
    .meaning = "n. 变化，变更，变动；[生物] 变异，变种；变奏曲"};

String_and_meaning String_and_meaning_variety = {
    .string = "variety",
    .meaning = "n. 多样；种类；杂耍；变化，多样化"};

String_and_meaning String_and_meaning_various = {
    .string = "various",
    .meaning = "adj. 各种各样的；多方面的"};

String_and_meaning String_and_meaning_vary = {
    .string = "vary",
    .meaning = "vi. 变化；变异；违反vt. 改变；使多样化；变奏n. (Vary)人名；(英、法、罗、柬)瓦里"};

String_and_meaning String_and_meaning_vase = {
    .string = "vase",
    .meaning = "n. 瓶；花瓶n. （Vase）（塞、罗、芬）瓦塞（人名）"};

String_and_meaning String_and_meaning_vast = {
    .string = "vast",
    .meaning = "adj. 广阔的；巨大的；大量的；巨额的n. 浩瀚；广阔无垠的空间n. (Vast)人名；(法)瓦斯特"};

String_and_meaning String_and_meaning_vegetable = {
    .string = "vegetable",
    .meaning = "n. 蔬菜；植物；植物人adj. 蔬菜的；植物的"};

String_and_meaning String_and_meaning_vegetation = {
    .string = "vegetation",
    .meaning = "n. 植被；植物，草木；呆板单调的生活"};

String_and_meaning String_and_meaning_vehicle = {
    .string = "vehicle",
    .meaning = "n. [车辆] 车辆；工具；交通工具；运载工具；传播媒介；媒介物"};

String_and_meaning String_and_meaning_veil = {
    .string = "veil",
    .meaning = "n. 面纱；面罩；遮蔽物；托词vt. 遮蔽；掩饰；以面纱遮掩；用帷幕分隔vi. 蒙上面纱；出现轻度灰雾n. (Veil)人名；(法)韦伊；(德)法伊尔"};

String_and_meaning String_and_meaning_vein = {
    .string = "vein",
    .meaning = "n. 血管；叶脉；[地质] 岩脉；纹理；翅脉；性情vt. 使成脉络；像脉络般分布于n. (Vein)人名；(英)维因；(塞)魏因"};

String_and_meaning String_and_meaning_velocity = {
    .string = "velocity",
    .meaning = "n. 【物】速度"};

String_and_meaning String_and_meaning_velvet = {
    .string = "velvet",
    .meaning = "n. 天鹅绒，丝绒；天鹅绒似的东西adj. 天鹅绒的"};

String_and_meaning String_and_meaning_vent = {
    .string = "vent",
    .meaning = "n.通风孔,出烟孔,出口,(感情等的)发泄v.放出,排出,发泄"};

String_and_meaning String_and_meaning_ventilate = {
    .string = "ventilate",
    .meaning = "vt. 使通风；给…装通风设备；宣布"};

String_and_meaning String_and_meaning_venture = {
    .string = "venture",
    .meaning = "n. 冒险旅行；（有风险的）企业v. 敢于冒险；小心地说（或做）；冒着失去……的风险n. (Venture) （法）旺蒂尔（人名）"};

String_and_meaning String_and_meaning_verb = {
    .string = "verb",
    .meaning = "n. 动词；动词词性；动词性短语或从句n. (Verb) （俄）韦尔布（人名）"};

String_and_meaning String_and_meaning_verbal = {
    .string = "verbal",
    .meaning = "adj. 口头的；言语的；动词的；照字面的n. 动词的非谓语形式"};

String_and_meaning String_and_meaning_verdict = {
    .string = "verdict",
    .meaning = "n. 结论；裁定"};

String_and_meaning String_and_meaning_verge = {
    .string = "verge",
    .meaning = "n. 边缘；绿地；极限；山墙突瓦；权杖（作为职位标志）v. 濒临，接近；趋向；处在边缘n. (Verge) （英、美、法、加、西）贝尔赫（人名）"};

String_and_meaning String_and_meaning_verify = {
    .string = "verify",
    .meaning = "vt. 核实；查证"};

String_and_meaning String_and_meaning_versatile = {
    .string = "versatile",
    .meaning = "adj. 多才多艺的；通用的，万能的；多面手的"};

String_and_meaning String_and_meaning_verse = {
    .string = "verse",
    .meaning = "n. 诗，诗篇；韵文；诗节vi. 作诗vt. 使熟练，使精通n. (Verse)人名；(德)费尔泽"};

String_and_meaning String_and_meaning_version = {
    .string = "version",
    .meaning = "n. 版本；译文；倒转术"};

String_and_meaning String_and_meaning_versus = {
    .string = "versus",
    .meaning = "prep. 对，对抗；与……相对，与……相比"};

String_and_meaning String_and_meaning_vertical = {
    .string = "vertical",
    .meaning = "adj. 垂直的，直立的；[解剖] 头顶的，顶点的；[植]纵长的，直上的n. 垂直线，垂直面；垂直位置"};

String_and_meaning String_and_meaning_very = {
    .string = "very",
    .meaning = "adv.很,甚,及其,非常,完全adj.真正的,真实的,恰好的,绝对的,十足的,特别的"};

String_and_meaning String_and_meaning_vessel = {
    .string = "vessel",
    .meaning = "n. 船，舰；[组织] 脉管，血管；容器，器皿n. (Vessel)人名；(荷)费塞尔；(俄、意、捷)韦塞尔"};

String_and_meaning String_and_meaning_vest = {
    .string = "vest",
    .meaning = "n. 背心；汗衫vt. 授予；使穿衣vi. 归属；穿衣服n. (Vest)人名；(英)维斯特；(匈)韦什特"};

String_and_meaning String_and_meaning_veteran = {
    .string = "veteran",
    .meaning = "n. 老兵；老手；富有经验的人；老运动员adj. 经验丰富的；老兵的"};

String_and_meaning String_and_meaning_veto = {
    .string = "veto",
    .meaning = "n. 否决权vt. 否决；禁止vi. 否决；禁止"};

String_and_meaning String_and_meaning_vex = {
    .string = "vex",
    .meaning = "vt. 使烦恼；使困惑；使恼怒vi. 烦恼"};

String_and_meaning String_and_meaning_via = {
    .string = "via",
    .meaning = "prep. 经由，通过；凭借，借助于"};

String_and_meaning String_and_meaning_vibrate = {
    .string = "vibrate",
    .meaning = "vi. 振动；颤动；摇摆；踌躇vt. 使振动；使颤动"};

String_and_meaning String_and_meaning_vibration = {
    .string = "vibration",
    .meaning = "n. 振动；犹豫；心灵感应"};

String_and_meaning String_and_meaning_vice = {
    .string = "vice",
    .meaning = "n. 恶习；缺点；[机] 老虎钳；卖淫prep. 代替vt. 钳住adj. 副的；代替的n. (Vice)人名；(塞)维采"};

String_and_meaning String_and_meaning_vicinity = {
    .string = "vicinity",
    .meaning = "n. 邻近，附近；近处"};

String_and_meaning String_and_meaning_vicious = {
    .string = "vicious",
    .meaning = "adj. 恶毒的；恶意的；堕落的；有错误的；品性不端的；剧烈的n. (Vicious)人名；(英)维舍斯"};

String_and_meaning String_and_meaning_victim = {
    .string = "victim",
    .meaning = "n. 受害人，牺牲品，牺牲者；受骗者，上当的人；祭品，牺牲；无助者，被动者"};

String_and_meaning String_and_meaning_victorious = {
    .string = "victorious",
    .meaning = "adj. 胜利的；凯旋的"};

String_and_meaning String_and_meaning_victory = {
    .string = "victory",
    .meaning = "n. 胜利；成功；克服n. (Victory)人名；(西)维多利；(英)维克托里"};

String_and_meaning String_and_meaning_video = {
    .string = "video",
    .meaning = "n. [电子] 视频；录像，录像机；电视adj. 视频的；录像的；电视的v. 录制"};

String_and_meaning String_and_meaning_view = {
    .string = "view",
    .meaning = "n. 观察；视野；意见；风景vt. 观察；考虑；查看"};

String_and_meaning String_and_meaning_viewpoint = {
    .string = "viewpoint",
    .meaning = "n. 观点，看法；视角"};

String_and_meaning String_and_meaning_vigorous = {
    .string = "vigorous",
    .meaning = "adj. 有力的；精力充沛的"};

String_and_meaning String_and_meaning_village = {
    .string = "village",
    .meaning = "n. 村庄；村民；（动物的）群落"};

String_and_meaning String_and_meaning_vine = {
    .string = "vine",
    .meaning = "n. 藤；葡萄树；藤本植物；攀缘植物；藤蔓植物vi. 长成藤蔓；爬藤n. (Vine)人名；(葡)维内；(英)瓦因"};

String_and_meaning String_and_meaning_vinegar = {
    .string = "vinegar",
    .meaning = "n. 醋"};

String_and_meaning String_and_meaning_violate = {
    .string = "violate",
    .meaning = "vt. 违反；侵犯，妨碍；亵渎"};

String_and_meaning String_and_meaning_violence = {
    .string = "violence",
    .meaning = "n. 暴力；侵犯；激烈；歪曲"};

String_and_meaning String_and_meaning_violent = {
    .string = "violent",
    .meaning = "adj. 暴力的；猛烈的"};

String_and_meaning String_and_meaning_violet = {
    .string = "violet",
    .meaning = "n. 紫罗兰；堇菜；羞怯的人adj. 紫色的；紫罗兰色的n. (Violet)人名；(西)比奥莱特；(法)维奥莱；(印、匈、英)维奥莱特"};

String_and_meaning String_and_meaning_violin = {
    .string = "violin",
    .meaning = "n. 小提琴；小提琴手n. (Violin)（意）维奥林（人名）"};

String_and_meaning String_and_meaning_virgin = {
    .string = "virgin",
    .meaning = "n.处女,(晚近用法)处男adj.处女的,童贞的,纯洁的,洁白无瑕疵的,未被玷污的,原始的,处于原耒状态的,未采伐过的森林 美国著名游戏软件公司"};

String_and_meaning String_and_meaning_virtual = {
    .string = "virtual",
    .meaning = "adj. [计] 虚拟的；实质上的，事实上的（但未在名义上或正式获承认）"};

String_and_meaning String_and_meaning_virtually = {
    .string = "virtually",
    .meaning = "adv. 事实上，几乎；实质上"};

String_and_meaning String_and_meaning_virtue = {
    .string = "virtue",
    .meaning = "n. 美德；优点；贞操；功效n. (Virtue)人名；(英)弗丘"};

String_and_meaning String_and_meaning_virus = {
    .string = "virus",
    .meaning = "n. [病毒] 病毒；恶毒；毒害n. (Virus)人名；(西)比鲁斯"};

String_and_meaning String_and_meaning_visible = {
    .string = "visible",
    .meaning = "adj. 明显的；看得见的；现有的；可得到的n. 可见物；进出口贸易中的有形项目"};

String_and_meaning String_and_meaning_vision = {
    .string = "vision",
    .meaning = "n. 视力；美景；眼力；幻象；想象力；幻视（漫威漫画旗下超级英雄）vt. 想象；显现；梦见"};

String_and_meaning String_and_meaning_visit = {
    .string = "visit",
    .meaning = "n.拜访,访问,游览,参观,(作客)逗留,视察,调查vt.拜访,访问,参观,视察,降临vi.访问,参观,闲谈"};

String_and_meaning String_and_meaning_visitor = {
    .string = "visitor",
    .meaning = "n. 访问者，参观者；视察者；候鸟"};

String_and_meaning String_and_meaning_visual = {
    .string = "visual",
    .meaning = "adj. 视觉的，视力的；栩栩如生的"};

String_and_meaning String_and_meaning_visualize = {
    .string = "visualize",
    .meaning = "vt. 形象，形象化；想像，设想vi. 显现"};

String_and_meaning String_and_meaning_vital = {
    .string = "vital",
    .meaning = "adj. 至关重要的；生死攸关的；有活力的n. （Vital）（法、德、意、俄、葡）维塔尔；（西）比塔尔（人名）"};

String_and_meaning String_and_meaning_vitamin = {
    .string = "vitamin",
    .meaning = "n. [生化] 维生素；[生化] 维他命"};

String_and_meaning String_and_meaning_vivid = {
    .string = "vivid",
    .meaning = "adj. 生动的；鲜明的；鲜艳的"};

String_and_meaning String_and_meaning_vocabulary = {
    .string = "vocabulary",
    .meaning = "n. 词汇；词表；词汇量"};

String_and_meaning String_and_meaning_vocal = {
    .string = "vocal",
    .meaning = "adj. 歌唱的；声音的，有声的adj. 直言不讳的n. 声乐作品；元音n. Vocal)人名；(西)博卡尔"};

String_and_meaning String_and_meaning_vocational = {
    .string = "vocational",
    .meaning = "adj. 职业的，行业的"};

String_and_meaning String_and_meaning_voice = {
    .string = "voice",
    .meaning = "n. 声音；嗓音；发言权；愿望vt. 表达；吐露"};

String_and_meaning String_and_meaning_void = {
    .string = "void",
    .meaning = "adj. 无效的；空的；无人（居住）的；缺乏的n. 空间；空白；空虚感v. 使无效；排放（大小便）n. (Void) （美、俄、印）沃伊德（人名）"};

String_and_meaning String_and_meaning_volcano = {
    .string = "volcano",
    .meaning = "n. 火山"};

String_and_meaning String_and_meaning_volleyball = {
    .string = "volleyball",
    .meaning = "n. 排球"};

String_and_meaning String_and_meaning_volt = {
    .string = "volt",
    .meaning = "n. 伏特（电压单位）；环骑；闪避n. (Volt)人名；(捷)沃尔特"};

String_and_meaning String_and_meaning_volume = {
    .string = "volume",
    .meaning = "n. 量；体积；卷；音量；大量；册adj. 大量的vi. 成团卷起vt. 把…收集成卷"};

String_and_meaning String_and_meaning_voluntary = {
    .string = "voluntary",
    .meaning = "adj. 自愿的；志愿的；自发的；故意的n. 志愿者；自愿行动"};

String_and_meaning String_and_meaning_volunteer = {
    .string = "volunteer",
    .meaning = "n. 志愿者；志愿兵adj. 志愿的vi. 自愿vt. 自愿"};

String_and_meaning String_and_meaning_vote = {
    .string = "vote",
    .meaning = "n. 投票，选举；选票；得票数，选票总数；选举权vt. 提议，使投票；选举，投票决定；公认vi. 选举，投票n. (Vote)人名；(英、法)沃特"};

String_and_meaning String_and_meaning_voyage = {
    .string = "voyage",
    .meaning = "n. 航行；航程；旅行记vi. 航行；航海vt. 飞过；渡过"};

String_and_meaning String_and_meaning_vulgar = {
    .string = "vulgar",
    .meaning = "adj. 粗俗的；通俗的；本土的n. 平民，百姓"};

String_and_meaning String_and_meaning_vulnerable = {
    .string = "vulnerable",
    .meaning = "adj. 易受攻击的，易受……的攻击；易受伤害的；有弱点的"};

String_and_meaning String_and_meaning_wage = {
    .string = "wage",
    .meaning = "n. 工资；报酬；代价；报应v. 进行，发动（运动、战争等）；开展n. (Wage) （美）伟杰（人名）"};

String_and_meaning String_and_meaning_waggon = {
    .string = "waggon",
    .meaning = "n. 四轮运货马车；运货车"};

String_and_meaning String_and_meaning_waist = {
    .string = "waist",
    .meaning = "n. 腰，腰部"};

String_and_meaning String_and_meaning_wait = {
    .string = "wait",
    .meaning = "vt. 等候；推迟；延缓vi. 等待；耽搁；伺候用餐n. 等待；等候n. (Wait)人名；(英)韦特；(捷)魏特"};

String_and_meaning String_and_meaning_waiter = {
    .string = "waiter",
    .meaning = "n. 服务员，侍者"};

String_and_meaning String_and_meaning_wake = {
    .string = "wake",
    .meaning = "vt. 唤醒；唤起；为……守灵vi. 醒来；唤醒；警觉n. 守夜；航迹n. （Wake）（英）韦克（人名）"};

String_and_meaning String_and_meaning_waken = {
    .string = "waken",
    .meaning = "vt. 唤醒；使觉醒vi. 醒来；觉醒"};

String_and_meaning String_and_meaning_walk = {
    .string = "walk",
    .meaning = "vi.步,行,走n.步行,散步,步,行道"};

String_and_meaning String_and_meaning_wall = {
    .string = "wall",
    .meaning = "n. 墙壁，围墙；似墙之物vt. 用墙围住，围以墙adj. 墙壁的n. (Wall)人名；(英)沃尔；(德、芬、捷、瑞典)瓦尔"};

String_and_meaning String_and_meaning_wallet = {
    .string = "wallet",
    .meaning = "n. 钱包，皮夹n. (Wallet)人名；(英)沃利特；(法)瓦莱"};

String_and_meaning String_and_meaning_wander = {
    .string = "wander",
    .meaning = "vi. 徘徊；漫步；迷路；离题vt. 游荡，漫游n. (Wander)人名；(英)万德(女子教名)"};

String_and_meaning String_and_meaning_want = {
    .string = "want",
    .meaning = "vt. 需要；希望；应该；缺少n. 需要；缺乏；贫困；必需品vi. 需要；缺少"};

String_and_meaning String_and_meaning_war = {
    .string = "war",
    .meaning = "n. 战争，斗争；军事，战术；冲突，对抗，竞争vi. 打仗，作战；对抗"};

String_and_meaning String_and_meaning_ward = {
    .string = "ward",
    .meaning = "n. 病房；保卫；监视；区，选区vt. 避开；保卫；守护n. （Ward）（英）沃德；（德、芬、瑞典、葡）瓦尔德（人名）"};

String_and_meaning String_and_meaning_warehouse = {
    .string = "warehouse",
    .meaning = "n. 仓库；货栈；大商店vt. 储入仓库；以他人名义购进（股票）"};

String_and_meaning String_and_meaning_warfare = {
    .string = "warfare",
    .meaning = "n. 战争；冲突"};

String_and_meaning String_and_meaning_warm = {
    .string = "warm",
    .meaning = "adj. 温暖的；热情的vi. 同情；激动；变温暖vt. 使…兴奋；使…温暖；使…感兴趣n. 取暖；加热n. (Warm)人名；(英)沃姆；(德)瓦姆"};

String_and_meaning String_and_meaning_warmth = {
    .string = "warmth",
    .meaning = "n. 温暖；热情；激动"};

String_and_meaning String_and_meaning_warn = {
    .string = "warn",
    .meaning = "vt. 警告，提醒；通知vi. 发出警告，发出预告n. (Warn)人名；(英)沃恩；(德)瓦恩"};

String_and_meaning String_and_meaning_warrant = {
    .string = "warrant",
    .meaning = "n. 根据；证明；正当理由；委任状vt. 保证；担保；批准；辩解"};

String_and_meaning String_and_meaning_wash = {
    .string = "wash",
    .meaning = "n.洗,洗涤,冲洗,洗涤剂,洼地,洗的衣服,冲积物vt.洗,洗涤,洗清,粉刷,冲出,弄湿,流过,镀金于vi.洗涤,洗澡,被冲蚀,漂浮adj.耐洗的,(证券交易)虚假的"};

String_and_meaning String_and_meaning_waste = {
    .string = "waste",
    .meaning = "n. 浪费；废物；荒地；损耗；地面风化物vt. 浪费；消耗；使荒芜vi. 浪费；变消瘦；挥霍钱财adj. 废弃的；多余的；荒芜的"};

String_and_meaning String_and_meaning_watch = {
    .string = "watch",
    .meaning = "vt. 观察；注视；看守；警戒n. 手表；监视；守护；值班人vi. 观看，注视；守候，看守"};

String_and_meaning String_and_meaning_water = {
    .string = "water",
    .meaning = "n. 水；海水；雨水；海域，大片的水vt. 使湿；供以水；给…浇水vi. 加水；流泪；流口水n. (Water)人名；(英)沃特"};

String_and_meaning String_and_meaning_waterfall = {
    .string = "waterfall",
    .meaning = "n. 瀑布；瀑布似的东西n. (Waterfall)人名；(英)沃特福尔"};

String_and_meaning String_and_meaning_waterproof = {
    .string = "waterproof",
    .meaning = "adj. 防水的，不透水的vt. 使防水n. 防水材料"};

String_and_meaning String_and_meaning_watertight = {
    .string = "watertight",
    .meaning = "adj. 水密的；不漏水的；无懈可击的"};

String_and_meaning String_and_meaning_watt = {
    .string = "watt",
    .meaning = "n. 瓦特n. (Watt)人名；(英、葡)瓦特"};

String_and_meaning String_and_meaning_wave = {
    .string = "wave",
    .meaning = "v. 挥手；挥手示意；挥舞；飘扬；使（头发）略呈波形n. 海浪；心潮；涌现的人（或物）；挥手；波；（头发）卷曲；（感情）爆发"};

String_and_meaning String_and_meaning_wavelength = {
    .string = "wavelength",
    .meaning = "n. [物] 波长"};

String_and_meaning String_and_meaning_wax = {
    .string = "wax",
    .meaning = "n. 蜡；蜡状物vt. 给…上蜡vi. 月亮渐满；增大adj. 蜡制的；似蜡的n. (Wax)人名；(德、罗、匈、英)瓦克斯"};

String_and_meaning String_and_meaning_way = {
    .string = "way",
    .meaning = "n. 方法；道路；方向；行业；习惯adv. 大大地；远远地adj. 途中的n. (Way)人名；(中)见 Wei；(英、缅)韦"};

String_and_meaning String_and_meaning_we = {
    .string = "we",
    .meaning = "pron. 我们（主格）；笔者，本人（作者或演讲人使用）；朕，寡人n. (We)人名；(缅)韦"};

String_and_meaning String_and_meaning_weak = {
    .string = "weak",
    .meaning = "adj. [经] 疲软的；虚弱的；无力的；不牢固的"};

String_and_meaning String_and_meaning_weaken = {
    .string = "weaken",
    .meaning = "vt. 减少；使变弱；使变淡vi. 变弱；畏缩；变软弱"};

String_and_meaning String_and_meaning_weakness = {
    .string = "weakness",
    .meaning = "n. 弱点；软弱；嗜好"};

String_and_meaning String_and_meaning_wealth = {
    .string = "wealth",
    .meaning = "n. 财富；大量；富有"};

String_and_meaning String_and_meaning_wealthy = {
    .string = "wealthy",
    .meaning = "adj. 富有的；充分的；丰裕的n. 富人"};

String_and_meaning String_and_meaning_weapon = {
    .string = "weapon",
    .meaning = "n. 武器，兵器"};

String_and_meaning String_and_meaning_wear = {
    .string = "wear",
    .meaning = "vt.穿,戴v.(～ out) 磨损,用旧,(～ out) 穿着"};

String_and_meaning String_and_meaning_weary = {
    .string = "weary",
    .meaning = "adj. 疲倦的；厌烦的；令人厌烦的vi. 疲倦；厌烦vt. 使疲倦；使厌烦"};

String_and_meaning String_and_meaning_weather = {
    .string = "weather",
    .meaning = "n. 天气；气象；气候；处境vt. 经受住；使风化；侵蚀；使受风吹雨打vi. 风化；受侵蚀；经受风雨adj. 露天的；迎风的n. (Weather)人名；(英)韦瑟"};

String_and_meaning String_and_meaning_weave = {
    .string = "weave",
    .meaning = "vt. 编织；编排；使迂回前进vi. 纺织；编成；迂回行进n. 织物；织法；编织式样"};

String_and_meaning String_and_meaning_web = {
    .string = "web",
    .meaning = "n. 网；卷筒纸；蹼；织物；圈套vt. 用网缠住；使中圈套vi. 形成网"};

String_and_meaning String_and_meaning_wedding = {
    .string = "wedding",
    .meaning = "n. 婚礼，婚宴；结婚；结合v. 与…结婚（wed的ing形式）n. (Wedding)人名；(德)韦丁"};

String_and_meaning String_and_meaning_wedge = {
    .string = "wedge",
    .meaning = "n. 楔子；楔形物；不和v. 楔入；挤进；楔住n. (Wedge) 韦奇（人名）"};

String_and_meaning String_and_meaning_Wednesday = {
    .string = "Wednesday",
    .meaning = "n. 星期三"};

String_and_meaning String_and_meaning_weed = {
    .string = "weed",
    .meaning = "n.野草,杂草v.除草,铲除"};

String_and_meaning String_and_meaning_week = {
    .string = "week",
    .meaning = "n. 周，星期"};

String_and_meaning String_and_meaning_weekday = {
    .string = "weekday",
    .meaning = "n. 平日，普通日；工作日"};

String_and_meaning String_and_meaning_weekend = {
    .string = "weekend",
    .meaning = "n. 周末，周末休假；周末聚会adj. 周末的，周末用的vi. 度周末"};

String_and_meaning String_and_meaning_weekly = {
    .string = "weekly",
    .meaning = "adj. 每周的；周刊的；一周一次的n. 周刊adv. 每周一次；逐周"};

String_and_meaning String_and_meaning_weep = {
    .string = "weep",
    .meaning = "v. 哭泣，流泪；哭着说；哀悼；渗出（液体）n. 哭泣，落泪"};

String_and_meaning String_and_meaning_weigh = {
    .string = "weigh",
    .meaning = "vt. 权衡；考虑；称…重量vi. 重量为…；具有重要性；成为…的重荷；起锚n. 权衡；称重量"};

String_and_meaning String_and_meaning_weight = {
    .string = "weight",
    .meaning = "n. 重量，重力；负担；砝码；重要性vt. 加重量于，使变重n. (Weight)人名；(英)韦特；(捷)魏格特"};

String_and_meaning String_and_meaning_welcome = {
    .string = "welcome",
    .meaning = "n.欢迎vt.欢迎int.欢迎adj.受欢迎的"};

String_and_meaning String_and_meaning_weld = {
    .string = "weld",
    .meaning = "vt. 焊接；使结合；使成整体vi. 焊牢n. 焊接；焊接点n. (Weld)人名；(英)韦尔德"};

String_and_meaning String_and_meaning_welfare = {
    .string = "welfare",
    .meaning = "n. 福利；幸福；福利事业；安宁adj. 福利的；接受社会救济的"};

String_and_meaning String_and_meaning_well = {
    .string = "well",
    .meaning = "adv. 很好地；充分地；满意地；适当地adj. 良好的；健康的；适宜的n. 井；源泉v. 涌出n. (Well)人名；(英、德、荷)韦尔"};

String_and_meaning String_and_meaning_west = {
    .string = "west",
    .meaning = "n. 西；西方；西部adj. 西方的；朝西的adv. 在西方；向西方；自西方n. (West)人名；(英、德、芬、瑞典)韦斯特"};

String_and_meaning String_and_meaning_western = {
    .string = "western",
    .meaning = "adj. 西方的，西部的；有西方特征的n. 西方人；西部片，西部小说n. (Western)人名；(英)韦斯顿"};

String_and_meaning String_and_meaning_westward = {
    .string = "westward",
    .meaning = "adj. 向西的；西方的adv. 向西n. 西部；西方n. (Westward) （英、美）韦史特华尔德（人名）"};

String_and_meaning String_and_meaning_wet = {
    .string = "wet",
    .meaning = "adj. [气象][物] 潮湿的；有雨的n. 雨天；湿气vt. 弄湿vi. 变湿n. (Wet)人名；(英、纳米、南非)韦特"};

String_and_meaning String_and_meaning_what = {
    .string = "what",
    .meaning = "pron. 什么；多么；多少adj. 什么；多么；何等adv. 到什么程度，在哪一方面int. 什么；多么"};

String_and_meaning String_and_meaning_whatever = {
    .string = "whatever",
    .meaning = "pron.凡是...,无论什么adj.无论怎样的,无论哪一种的,什么也"};

String_and_meaning String_and_meaning_wheat = {
    .string = "wheat",
    .meaning = "n. 小麦；小麦色n. (Wheat)人名；(英)惠特"};

String_and_meaning String_and_meaning_wheel = {
    .string = "wheel",
    .meaning = "n. 车轮；方向盘；转动vt. 转动；使变换方向；给…装轮子vi. 旋转；突然转变方向；盘旋飞行"};

String_and_meaning String_and_meaning_when = {
    .string = "when",
    .meaning = "conj.就在那个时候,在...的时候adv.什么时候,...的时候 pron.什么时侯,那时"};

String_and_meaning String_and_meaning_whenever = {
    .string = "whenever",
    .meaning = "conj. 无论何时，无论什么情况；每当；别的什么时候（也可以）adv. 不论何时，随便什么时候；究竟什么时候"};

String_and_meaning String_and_meaning_where = {
    .string = "where",
    .meaning = "adv. 在哪里pron. 哪里conj. 在…的地方n. 地点"};

String_and_meaning String_and_meaning_whereas = {
    .string = "whereas",
    .meaning = "conj. 然而；鉴于n. 序言，开场白；条件语句"};

String_and_meaning String_and_meaning_whereby = {
    .string = "whereby",
    .meaning = "conj. 凭借；通过…；借以；与…一致adv. 凭此；借以"};

String_and_meaning String_and_meaning_wherever = {
    .string = "wherever",
    .meaning = "adv. 无论什么地方；究竟在哪里conj. 无论在哪里；无论什么情况下"};

String_and_meaning String_and_meaning_whether = {
    .string = "whether",
    .meaning = "conj. 是否；不论pron. 两个中的哪一个"};

String_and_meaning String_and_meaning_which = {
    .string = "which",
    .meaning = "pron.哪个,哪几个,...的,...那个adj.哪个"};

String_and_meaning String_and_meaning_whichever = {
    .string = "whichever",
    .meaning = "pron. 任何一个；无论哪个；无论哪些adj. 无论哪个；无论哪些det. 任何一个；无论哪个；无论哪些"};

String_and_meaning String_and_meaning_while = {
    .string = "while",
    .meaning = "n.一会儿,时间 conj.当...的时候,虽然vt.消磨 prep.古方直到"};

String_and_meaning String_and_meaning_whilst = {
    .string = "whilst",
    .meaning = "conj. 当……的时候；与……同时；然而；虽然，尽管；直到……为止（等于 while）adv. 在……时候（等于 while）"};

String_and_meaning String_and_meaning_whip = {
    .string = "whip",
    .meaning = "n.鞭子,车夫v.鞭打,抽打,突然移动"};

String_and_meaning String_and_meaning_whirl = {
    .string = "whirl",
    .meaning = "v.(使)旋转,急动,急走n.旋转,—连串快速的活动"};

String_and_meaning String_and_meaning_whisky = {
    .string = "whisky",
    .meaning = "n. 威士忌酒adj. 威士忌酒的"};

String_and_meaning String_and_meaning_whisper = {
    .string = "whisper",
    .meaning = "v. 耳语；私下说，密谈；飒飒地响；造谣n. 耳语（声）；轻柔的声音；谣传；（诗、文）飒飒声；蛛丝马迹，暗示"};

String_and_meaning String_and_meaning_whistle = {
    .string = "whistle",
    .meaning = "n. 口哨；汽笛；呼啸声；一套衣服；一手同花色牌v. 吹口哨；发啸叫声；吹哨示意；鸣汽笛；呼啸而行"};

String_and_meaning String_and_meaning_white = {
    .string = "white",
    .meaning = "adj. 白色的；白种的；纯洁的n. 白色；洁白；白种人vt. 古使变白，把……涂白n. （White）怀特（人名）"};

String_and_meaning String_and_meaning_whitewash = {
    .string = "whitewash",
    .meaning = "n. 粉饰；白色涂料；石灰水vt. 掩饰；把…刷白"};

String_and_meaning String_and_meaning_who = {
    .string = "who",
    .meaning = "pron. 谁；什么人"};

String_and_meaning String_and_meaning_whoever = {
    .string = "whoever",
    .meaning = "pron. 无论谁；任何人n. 《爱谁谁》（电影名）"};

String_and_meaning String_and_meaning_whole = {
    .string = "whole",
    .meaning = "adj. 完整的；纯粹的n. 整体；全部"};

String_and_meaning String_and_meaning_wholly = {
    .string = "wholly",
    .meaning = "adv. 完全地；全部；统统"};

String_and_meaning String_and_meaning_whom = {
    .string = "whom",
    .meaning = "pron. 谁（who的宾格）"};

String_and_meaning String_and_meaning_whose = {
    .string = "whose",
    .meaning = "pron. 谁的（疑问代词）"};

String_and_meaning String_and_meaning_why = {
    .string = "why",
    .meaning = "adv. 为什么；（反问，表示不必）何必； ……的原因int. 哎呀，呦；呃n. 原因，理由"};

String_and_meaning String_and_meaning_wicked = {
    .string = "wicked",
    .meaning = "adj. 邪恶的；恶劣的；不道德的；顽皮的adv. 俚语非常，很"};

String_and_meaning String_and_meaning_wide = {
    .string = "wide",
    .meaning = "adj. 广泛的；宽的，广阔的；张大的；远离目标的adv. 广泛地；广阔地；充分地n. 大千世界n. (Wide)人名；(瑞典、芬)维德"};

String_and_meaning String_and_meaning_widely = {
    .string = "widely",
    .meaning = "adv. 广泛地"};

String_and_meaning String_and_meaning_widen = {
    .string = "widen",
    .meaning = "vt. 放宽vi. 变宽n. (Widen)人名；(德)维登"};

String_and_meaning String_and_meaning_widespread = {
    .string = "widespread",
    .meaning = "adj. 普遍的，广泛的；分布广的"};

String_and_meaning String_and_meaning_widow = {
    .string = "widow",
    .meaning = "n. 寡妇；未排足的行；寡妇鸟v. 使丧偶"};

String_and_meaning String_and_meaning_width = {
    .string = "width",
    .meaning = "n. 宽度；广度"};

String_and_meaning String_and_meaning_wife = {
    .string = "wife",
    .meaning = "n. 妻子，已婚妇女；夫人"};

String_and_meaning String_and_meaning_wild = {
    .string = "wild",
    .meaning = "adj. 野生的；野蛮的；狂热的；荒凉的n. 荒野adv. 疯狂地；胡乱地n. (Wild)人名；(英)怀尔德；(法、德、葡、捷、匈)维尔德"};

String_and_meaning String_and_meaning_will = {
    .string = "will",
    .meaning = "n.意志,决心,意向,遗嘱v.aux.将,愿意,必须"};

String_and_meaning String_and_meaning_willing = {
    .string = "willing",
    .meaning = "adj. 乐意的；自愿的；心甘情愿的v. 决心；用意志力驱使；将（财产等）遗赠某人（will的现在分词）n. (Willing)人名；(德、芬、瑞典)维林；(英)威林"};

String_and_meaning String_and_meaning_win = {
    .string = "win",
    .meaning = "vt. 赢得；在…中获胜vi. 赢；获胜；成功n. 赢；胜利n. (Win)人名；(德、荷、缅)温；(英)温(女子教名Winifred的昵称)"};

String_and_meaning String_and_meaning_wind = {
    .string = "wind",
    .meaning = "n. 风；呼吸；气味；卷绕vt. 缠绕；上发条；使弯曲；吹号角；绕住或缠住某人vi. 缠绕；上发条；吹响号角n. (Wind)人名；(英、德、瑞典)温德"};

String_and_meaning String_and_meaning_window = {
    .string = "window",
    .meaning = "n. 窗；窗口；窗户"};

String_and_meaning String_and_meaning_wine = {
    .string = "wine",
    .meaning = "n. 酒，葡萄酒；紫红色vi. 喝酒vt. 请…喝酒n. (Wine)人名；(英)瓦恩"};

String_and_meaning String_and_meaning_wing = {
    .string = "wing",
    .meaning = "n. 翼；翅膀；飞翔；派别；侧厅，耳房，厢房vt. 使飞；飞过；空运；增加…速度；装以翼vi. 飞行n. (Wing)人名；(英、印尼)温"};

String_and_meaning String_and_meaning_winner = {
    .string = "winner",
    .meaning = "n. 获胜者；（可能）成功的人（或事物）；赢得比赛的一分；能赢的牌；最大的得益者n. (Winner) （美、德、英）温纳（人名）"};

String_and_meaning String_and_meaning_winter = {
    .string = "winter",
    .meaning = "n. 冬季；年岁；萧条期vi. 过冬adj. 冬天的；越冬的n. (Winter)人名；(英、德、匈、罗、捷、西、芬、瑞典、法)温特"};

String_and_meaning String_and_meaning_wipe = {
    .string = "wipe",
    .meaning = "vt. 擦；消除；涂上vi. 擦；打n. 擦拭；用力打"};

String_and_meaning String_and_meaning_wire = {
    .string = "wire",
    .meaning = "n. 电线；金属丝；电报vt. 拍电报；给…装电线vi. 打电报n. (Wire)人名；(英)怀尔"};

String_and_meaning String_and_meaning_wireless = {
    .string = "wireless",
    .meaning = "adj. 无线的；无线电的n. 无线电vt. 用无线电报与…联系；用无线电报发送vi. 打无线电报；打无线电话"};

String_and_meaning String_and_meaning_wisdom = {
    .string = "wisdom",
    .meaning = "n. 智慧，才智；明智；学识；至理名言n. (Wisdom)人名；(英)威兹德姆"};

String_and_meaning String_and_meaning_wise = {
    .string = "wise",
    .meaning = "adj. 明智的；聪明的；博学的vt. 使知道；教导vi. 了解n. (Wise)人名；(英)怀斯"};

String_and_meaning String_and_meaning_wish = {
    .string = "wish",
    .meaning = "n.愿望,心愿,请求,所愿望的事物,祝愿v.希望,想要,但愿,祝贺"};

String_and_meaning String_and_meaning_wit = {
    .string = "wit",
    .meaning = "n. 智慧；才智；智力n. (Wit)人名；(泰)威；(英、德、波)威特v. 古知道；即"};

String_and_meaning String_and_meaning_with = {
    .string = "with",
    .meaning = "prep.有,以,用,同...,由于,和...一致,赞成,关于,就"};

String_and_meaning String_and_meaning_withdraw = {
    .string = "withdraw",
    .meaning = "vt. 撤退；收回；撤消；（从银行）取钱，提款；退股vi. 撤退；离开"};

String_and_meaning String_and_meaning_withhold = {
    .string = "withhold",
    .meaning = "vt. 保留，不给；隐瞒；抑制vi. 忍住；克制"};

String_and_meaning String_and_meaning_within = {
    .string = "within",
    .meaning = "prep. 在……之内；在……里面adv. 在内部；在里面n. 里面；内部"};

String_and_meaning String_and_meaning_without = {
    .string = "without",
    .meaning = "prep. 没有；不和……在一起；不带；在……外部adv. 没有，缺乏；在外面conj. 不那样的话；除非n. 外部，外面"};

String_and_meaning String_and_meaning_withstand = {
    .string = "withstand",
    .meaning = "vt. 抵挡；禁得起；反抗vi. 反抗"};

String_and_meaning String_and_meaning_witness = {
    .string = "witness",
    .meaning = "n. 证人；目击者；证据vt. 目击；证明；为…作证vi. 作证人n. (Witness)人名；(津)威特尼斯"};

String_and_meaning String_and_meaning_wolf = {
    .string = "wolf",
    .meaning = "n. 狼；色狼；残忍贪婪之人vt. 大吃；狼吞虎咽地吃n. (Wolf)人名；(以、捷、芬、瑞典、德、匈、法、罗、荷、英)沃尔夫"};

String_and_meaning String_and_meaning_woman = {
    .string = "woman",
    .meaning = "n. 妇女；女性；成年女子"};

String_and_meaning String_and_meaning_wonder = {
    .string = "wonder",
    .meaning = "n.奇迹,惊奇,惊愕vt.对...感到惊讶,惊奇,想知道vi.惊讶,怀疑adj.非凡的,奇妙的"};

String_and_meaning String_and_meaning_wonderful = {
    .string = "wonderful",
    .meaning = "adj. 极好的，精彩的，绝妙的；奇妙的；美妙；胜；神妙"};

String_and_meaning String_and_meaning_wood = {
    .string = "wood",
    .meaning = "n. 木材；木制品；树林vi. 收集木材vt. 植林于；给…添加木柴n. (Wood)人名；(英、法、西、葡、阿拉伯)伍德"};

String_and_meaning String_and_meaning_wooden = {
    .string = "wooden",
    .meaning = "adj. 木制的；僵硬的，呆板的"};

String_and_meaning String_and_meaning_wool = {
    .string = "wool",
    .meaning = "n. 羊毛；毛线；绒线；毛织品；毛料衣物n. (Wool)人名；(英)伍尔"};

String_and_meaning String_and_meaning_woollen = {
    .string = "woollen",
    .meaning = "adj. 羊毛制的；毛纺织业的n. 毛织品n. (Woollen) （美、英、德）伍伦（人名）"};

String_and_meaning String_and_meaning_word = {
    .string = "word",
    .meaning = "n. [语] 单词；话语；消息；诺言；命令vt. 用言辞表达n. (Word)人名；(英)沃德"};

String_and_meaning String_and_meaning_work = {
    .string = "work",
    .meaning = "n.工作,劳动,操作,职业,[物]功,手工,作品,机件v.(使)工作,(使)运转,起作用,造成,产生,经营,(使)渐渐移动,煅制"};

String_and_meaning String_and_meaning_worker = {
    .string = "worker",
    .meaning = "n. 工人，劳动者；职蚁n. （Worker）（英）沃克（人名）"};

String_and_meaning String_and_meaning_workman = {
    .string = "workman",
    .meaning = "n. 工匠；技工；男工n. (Workman)人名；(英)沃克曼"};

String_and_meaning String_and_meaning_workshop = {
    .string = "workshop",
    .meaning = "n. 车间；研讨会；工场；讲习班"};

String_and_meaning String_and_meaning_world = {
    .string = "world",
    .meaning = "n. 世界；领域；世俗；全人类；物质生活"};

String_and_meaning String_and_meaning_worm = {
    .string = "worm",
    .meaning = "n.虫,蠕虫,蚯蚓,蜗杆,螺纹,小人物;vi.蠕行,慢慢前进;vt.使蠕行,慢慢地走,给(烟草作物)除虫"};

String_and_meaning String_and_meaning_worry = {
    .string = "worry",
    .meaning = "v. （使）担心,（使）发愁；骚扰，烦扰；撕咬（动物）n. 担心；让人发愁的事（或人）"};

String_and_meaning String_and_meaning_worse = {
    .string = "worse",
    .meaning = "adj. 更坏的；更差的；更恶劣的（bad的比较级）；（病情）更重的（ill的比较级）adv. 更糟；更坏；更恶劣地；更坏地n. 更坏的事；更恶劣的事"};

String_and_meaning String_and_meaning_worship = {
    .string = "worship",
    .meaning = "n. 崇拜；礼拜；尊敬vt. 崇拜；尊敬；爱慕vi. 拜神；做礼拜"};

String_and_meaning String_and_meaning_worst = {
    .string = "worst",
    .meaning = "adj. 最差的，最坏的；最不利的；效能最低的n. 最坏；最坏的时候adv. 最坏地；最不利地n. (Worst)人名；(英、德)沃斯特"};

String_and_meaning String_and_meaning_worth = {
    .string = "worth",
    .meaning = "adj. 值…的n. 价值；财产n. (Worth)人名；(英)沃思；(德)沃特"};

String_and_meaning String_and_meaning_worthless = {
    .string = "worthless",
    .meaning = "adj. 无价值的；不值钱的；卑微的"};

String_and_meaning String_and_meaning_worthwhile = {
    .string = "worthwhile",
    .meaning = "adj. 重要的；令人愉快的；有趣的；值得（花时间、金钱、努力等）的；有价值的，有益的；值得做的"};

String_and_meaning String_and_meaning_worthy = {
    .string = "worthy",
    .meaning = "adj. 值得的；有价值的；配得上的，相称的；可尊敬的；应…的n. 杰出人物；知名人士n. (Worthy)人名；(英)沃西"};

String_and_meaning String_and_meaning_would = {
    .string = "would",
    .meaning = "v. 将，将会（will 的过去式）；会，就；想；请；愿意；也许；老是；要是；表原来的目的"};

String_and_meaning String_and_meaning_wound = {
    .string = "wound",
    .meaning = "n. 创伤，伤口vt. 使受伤vi. 受伤，伤害"};

String_and_meaning String_and_meaning_wrap = {
    .string = "wrap",
    .meaning = "vt. 包；缠绕；隐藏；掩护vi. 包起来；缠绕；穿外衣；非正式完成拍摄，杀青n. 外套；围巾"};

String_and_meaning String_and_meaning_wreath = {
    .string = "wreath",
    .meaning = "n. 花冠；圈状物vt. 环绕（等于wreathe）vi. 盘旋（等于wreathe）"};

String_and_meaning String_and_meaning_wreck = {
    .string = "wreck",
    .meaning = "n. 破坏；失事；残骸；失去健康的人vt. 破坏；使失事；拆毁vi. 失事；营救失事船只"};

String_and_meaning String_and_meaning_wrench = {
    .string = "wrench",
    .meaning = "n. 扳手，扳钳；扭伤；痛苦；歪曲；猛扭vt. 扭伤；猛扭；曲解；折磨vi. 扭伤；猛扭；猛绞n. (Wrench)人名；(英)伦奇"};

String_and_meaning String_and_meaning_wretched = {
    .string = "wretched",
    .meaning = "adj. 可怜的；卑鄙的；令人苦恼或难受的"};

String_and_meaning String_and_meaning_wrinkle = {
    .string = "wrinkle",
    .meaning = "n. 皱纹vi. 起皱vt. 使起皱纹"};

String_and_meaning String_and_meaning_wrist = {
    .string = "wrist",
    .meaning = "n. 手腕；腕关节vt. 用腕力移动"};

String_and_meaning String_and_meaning_write = {
    .string = "write",
    .meaning = "vi. 写，写字；写作，作曲；写信vt. 写，书写；写信给；著述"};

String_and_meaning String_and_meaning_writer = {
    .string = "writer",
    .meaning = "n. 作家；作者；期权卖方"};

String_and_meaning String_and_meaning_writing = {
    .string = "writing",
    .meaning = "n. 书写；写作技能；著书立说，写作的职业；作品，著作；文字；笔迹v. 书写；写作（write 的现在分词）"};

String_and_meaning String_and_meaning_wrong = {
    .string = "wrong",
    .meaning = "adj.错误的,不正当的,道德不好的,失常的adv.错误地n.坏事,错误,不公正"};

String_and_meaning String_and_meaning_yacht = {
    .string = "yacht",
    .meaning = "n. 游艇，快艇；轻舟v. 乘游艇，驾游艇；驾帆船比赛n. (Yacht) （美、加、土、法、荷、俄）约特（人名）"};

String_and_meaning String_and_meaning_yard = {
    .string = "yard",
    .meaning = "n. 院子；码（英制中丈量长度单位，1码=3英尺）；庭院；帆桁vt. 把…关进或围在畜栏里n. (Yard)人名；(英)亚德"};

String_and_meaning String_and_meaning_yawn = {
    .string = "yawn",
    .meaning = "v. 打哈欠；张得很开；（令人恐惧地）豁开n. 打哈欠；乏味的人（事物）"};

String_and_meaning String_and_meaning_year = {
    .string = "year",
    .meaning = "n. 年；年度；历年；年纪；一年的期间；某年级的学生"};

String_and_meaning String_and_meaning_yearly = {
    .string = "yearly",
    .meaning = "adj. 每年的adv. 每年；一年一次n. 年刊；年鉴"};

String_and_meaning String_and_meaning_yell = {
    .string = "yell",
    .meaning = "vi. 大叫，叫喊n. 喊声，叫声vt. 喊叫着说"};

String_and_meaning String_and_meaning_yellow = {
    .string = "yellow",
    .meaning = "adj. 黄色的；黄皮肤的adj. 胆小的n. 黄色；黄种人；黄色颜料vi. 变黄或发黄vt. 使变黄或发黄"};

String_and_meaning String_and_meaning_yes = {
    .string = "yes",
    .meaning = "adv. 是, 是的n. 是（表示肯定）"};

String_and_meaning String_and_meaning_yesterday = {
    .string = "yesterday",
    .meaning = "adv. 在昨天n. 昨天；最近，往昔"};

String_and_meaning String_and_meaning_yet = {
    .string = "yet",
    .meaning = "adv. 还；但是；已经conj. 但是；然而n. (Yet)人名；(东南亚国家华语)一"};

String_and_meaning String_and_meaning_yield = {
    .string = "yield",
    .meaning = "v. 出产（产品或作物）；产出（效果、收益等）；生息；屈服；放弃；停止争论；给（车辆）让路；（在外力、重压等下）屈曲n. 产量；利润，红利率"};

String_and_meaning String_and_meaning_yoke = {
    .string = "yoke",
    .meaning = "n. 轭；束缚；牛轭vt. 结合；给…上轭vi. 结合；匹配n. (Yoke)人名；(日)与家(姓)"};

String_and_meaning String_and_meaning_you = {
    .string = "you",
    .meaning = "pron. 你；你们n. (You)人名；(柬)尤；(东南亚国家华语)猷"};

String_and_meaning String_and_meaning_young = {
    .string = "young",
    .meaning = "adj. 年轻的；初期的；没有经验的n. 年轻人；（动物的）崽，仔n. (Young)人名；(中)杨(广东话·威妥玛)；(柬)永；(英、葡)扬"};

String_and_meaning String_and_meaning_youngster = {
    .string = "youngster",
    .meaning = "n. 年轻人；少年"};

String_and_meaning String_and_meaning_your = {
    .string = "your",
    .meaning = "pron. 你的，你们的"};

String_and_meaning String_and_meaning_yourself = {
    .string = "yourself",
    .meaning = "pron. 你自己"};

String_and_meaning String_and_meaning_youth = {
    .string = "youth",
    .meaning = "n. 青年；青春；年轻；青少年时期n. (Youth)《芳华》（电影名）"};

String_and_meaning String_and_meaning_youthful = {
    .string = "youthful",
    .meaning = "adj. 年轻的；早期的"};

String_and_meaning String_and_meaning_zeal = {
    .string = "zeal",
    .meaning = "n. 热情；热心；热诚"};

String_and_meaning String_and_meaning_zealous = {
    .string = "zealous",
    .meaning = "adj. 热心的，热情的，积极的n. (Zealous)人名；(英)泽勒斯"};

String_and_meaning String_and_meaning_zebra = {
    .string = "zebra",
    .meaning = "n. [脊椎] 斑马adj. 有斑纹的（Zebra）斑马（文具品牌）；斑马公司（指盈利性和有责任感的公司）"};

String_and_meaning String_and_meaning_zero = {
    .string = "zero",
    .meaning = "n. 零点，零度num. 零n. (Zero)人名；(意)泽罗"};

String_and_meaning String_and_meaning_zinc = {
    .string = "zinc",
    .meaning = "n. 锌；（用于屋顶等的）镀锌铁板v. 镀锌于，用锌处理"};

String_and_meaning String_and_meaning_zone = {
    .string = "zone",
    .meaning = "n. 地带；地区；联防vi. 分成区vt. 使分成地带；环绕n. (Zone)人名；(塞)佐内"};

String_and_meaning String_and_meaning_zoo = {
    .string = "zoo",
    .meaning = "n. 动物园n. (Zoo)人名；(朝)朱；(阿拉伯)祖"};

/*
现在要将所有词汇都赋值给string_and_meaning数组，请你实现，并且将结果存在文件：C:\Users\29001\Desktop\code\fun-eg-v1\include\4_vocaulary\strings_array.h中，如下：
*/
// String_and_meaning string_and_meaning[10000]{
//     String_and_meaning_abandon,
//     ...

// };
