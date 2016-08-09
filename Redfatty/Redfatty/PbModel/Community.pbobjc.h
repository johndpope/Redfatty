// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: community.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class PCommunityBase;
@class PCommunityBaseList;
@class PCommunityCommentInfo;
@class PCommunityFlag;
@class PCommunityFriend;
@class PCommunityInfo;
@class PCommunityMailInfo;
@class PCommunityMember;
@class PCommunityNotification;
@class PCommunityPostInfo;
@class PCommunityPostList;
@class PCommunityPostUpload;
@class PCommunityResource;
@class PCommunityResourceList;
@class PRedPacketInfo;
@class PSendRedPacket;
@class PUserBase;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - CommunityRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface CommunityRoot : GPBRootObject
@end

#pragma mark - PCommunityID

typedef GPB_ENUM(PCommunityID_FieldNumber) {
  PCommunityID_FieldNumber_IdArray = 2,
};

/// 社区的id信息，用于批量操作
@interface PCommunityID : GPBMessage

/// 社区的全局唯一id，能用于检索社区信息
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *idArray;
/// The number of items in @c idArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger idArray_Count;

@end

#pragma mark - PCommunityBase

typedef GPB_ENUM(PCommunityBase_FieldNumber) {
  PCommunityBase_FieldNumber_Id_p = 2,
  PCommunityBase_FieldNumber_Name = 3,
  PCommunityBase_FieldNumber_HeadImg = 4,
  PCommunityBase_FieldNumber_Introduce = 5,
};

/// 社区基础信息
@interface PCommunityBase : GPBMessage

/// 社区的全局唯一id，能用于检索社区信息
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/// 社区名字
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/// 社区头像地址
@property(nonatomic, readwrite, copy, null_resettable) NSString *headImg;

/// 社区介绍
@property(nonatomic, readwrite, copy, null_resettable) NSString *introduce;

@end

#pragma mark - PCommunityBaseList

typedef GPB_ENUM(PCommunityBaseList_FieldNumber) {
  PCommunityBaseList_FieldNumber_ListArray = 2,
};

/// 社区基础信息列表
@interface PCommunityBaseList : GPBMessage

/// 我关注的社区
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityBase*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PCommunityInfo

typedef GPB_ENUM(PCommunityInfo_FieldNumber) {
  PCommunityInfo_FieldNumber_Status = 2,
  PCommunityInfo_FieldNumber_Membership = 3,
  PCommunityInfo_FieldNumber_Id_p = 4,
  PCommunityInfo_FieldNumber_Name = 5,
  PCommunityInfo_FieldNumber_HeadImg = 6,
  PCommunityInfo_FieldNumber_BackgroundImg = 7,
  PCommunityInfo_FieldNumber_Introduce = 8,
  PCommunityInfo_FieldNumber_OwnerUuid = 9,
  PCommunityInfo_FieldNumber_OwnerName = 10,
  PCommunityInfo_FieldNumber_MemberCount = 11,
  PCommunityInfo_FieldNumber_ForumPostCount = 12,
  PCommunityInfo_FieldNumber_NoticePostCount = 13,
};

/// 社区信息
@interface PCommunityInfo : GPBMessage

/// 社区状态，-1没有创建/管理社区;0社区开启状态；1社区关闭状态；
@property(nonatomic, readwrite) int32_t status;

/// 用户与社区的关系，-1无关系，0为拥有者，1为管理者，2为已关注
@property(nonatomic, readwrite) int32_t membership;

/// 社区id
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/// 社区名字
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/// 社区头像
@property(nonatomic, readwrite, copy, null_resettable) NSString *headImg;

/// 社区背景图
@property(nonatomic, readwrite, copy, null_resettable) NSString *backgroundImg;

/// 社区介绍
@property(nonatomic, readwrite, copy, null_resettable) NSString *introduce;

/// 社区创建者的uuid
@property(nonatomic, readwrite, copy, null_resettable) NSString *ownerUuid;

/// 社区创建者的名字
@property(nonatomic, readwrite, copy, null_resettable) NSString *ownerName;

/// 社区成员数量
@property(nonatomic, readwrite) int32_t memberCount;

/// 社区论坛帖子数量
@property(nonatomic, readwrite) int32_t forumPostCount;

/// 社区公告帖子数量
@property(nonatomic, readwrite) int32_t noticePostCount;

@end

#pragma mark - PCommunityMe

typedef GPB_ENUM(PCommunityMe_FieldNumber) {
  PCommunityMe_FieldNumber_Info = 2,
  PCommunityMe_FieldNumber_List = 3,
};

/// ‘我的社区’返回的信息
@interface PCommunityMe : GPBMessage

/// 我的社区信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityInfo *info;
/// Test to see if @c info has been set.
@property(nonatomic, readwrite) BOOL hasInfo;

/// 我关注的社区，默认显示20条
@property(nonatomic, readwrite, strong, null_resettable) PCommunityBaseList *list;
/// Test to see if @c list has been set.
@property(nonatomic, readwrite) BOOL hasList;

@end

#pragma mark - PCommunityResource

typedef GPB_ENUM(PCommunityResource_FieldNumber) {
  PCommunityResource_FieldNumber_Type = 2,
  PCommunityResource_FieldNumber_Name = 3,
  PCommunityResource_FieldNumber_URL = 4,
  PCommunityResource_FieldNumber_Size = 5,
};

/// 社区资源信息
@interface PCommunityResource : GPBMessage

/// 资源类型，txt(文字)，img(图片)，audio(音频)，video(第三方视频)，link(url)
@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

/// 资源名称，(img,audio)要上传oss的资源，填充objectkey；如果是txt，存文字
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/// 资源地址，(img,audio)oss访问地址，或者(video,link)存储的数据
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

/// 资源大小，暂时只存储语音长度，单位是ms
@property(nonatomic, readwrite, copy, null_resettable) NSString *size;

@end

#pragma mark - PCommunityResourceList

typedef GPB_ENUM(PCommunityResourceList_FieldNumber) {
  PCommunityResourceList_FieldNumber_ResourceArray = 2,
};

/// 社区资源信息列表
@interface PCommunityResourceList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityResource*> *resourceArray;
/// The number of items in @c resourceArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger resourceArray_Count;

@end

#pragma mark - PCommunityPostUpload

typedef GPB_ENUM(PCommunityPostUpload_FieldNumber) {
  PCommunityPostUpload_FieldNumber_Title = 2,
  PCommunityPostUpload_FieldNumber_SubType = 3,
  PCommunityPostUpload_FieldNumber_BannerImg = 4,
  PCommunityPostUpload_FieldNumber_ResourcesList = 10,
};

/// 发布帖子的信息
@interface PCommunityPostUpload : GPBMessage

/// 帖子的标题
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/// 帖子的子类型
@property(nonatomic, readwrite, copy, null_resettable) NSString *subType;

/// 公告帖子的轮播图
@property(nonatomic, readwrite, copy, null_resettable) NSString *bannerImg;

/// 帖子正文引用到的资源信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityResourceList *resourcesList;
/// Test to see if @c resourcesList has been set.
@property(nonatomic, readwrite) BOOL hasResourcesList;

@end

#pragma mark - PCommunityRedpacketUpload

typedef GPB_ENUM(PCommunityRedpacketUpload_FieldNumber) {
  PCommunityRedpacketUpload_FieldNumber_Post = 2,
  PCommunityRedpacketUpload_FieldNumber_Redpacket = 3,
};

/// 发布红包帖子的信息
@interface PCommunityRedpacketUpload : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) PCommunityPostUpload *post;
/// Test to see if @c post has been set.
@property(nonatomic, readwrite) BOOL hasPost;

@property(nonatomic, readwrite, strong, null_resettable) PSendRedPacket *redpacket;
/// Test to see if @c redpacket has been set.
@property(nonatomic, readwrite) BOOL hasRedpacket;

@end

#pragma mark - PCommunityPostInfo

typedef GPB_ENUM(PCommunityPostInfo_FieldNumber) {
  PCommunityPostInfo_FieldNumber_Id_p = 2,
  PCommunityPostInfo_FieldNumber_Type = 3,
  PCommunityPostInfo_FieldNumber_SubType = 4,
  PCommunityPostInfo_FieldNumber_Time = 5,
  PCommunityPostInfo_FieldNumber_Title = 6,
  PCommunityPostInfo_FieldNumber_IsView = 7,
  PCommunityPostInfo_FieldNumber_ViewCount = 8,
  PCommunityPostInfo_FieldNumber_CommentCount = 9,
  PCommunityPostInfo_FieldNumber_User = 10,
  PCommunityPostInfo_FieldNumber_ResourcesList = 11,
  PCommunityPostInfo_FieldNumber_Redpacket = 12,
  PCommunityPostInfo_FieldNumber_BannerImg = 13,
  PCommunityPostInfo_FieldNumber_IsTop = 14,
};

/// 帖子信息
@interface PCommunityPostInfo : GPBMessage

/// 帖子id 
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/// 帖子类型，forum为论坛，notice为公告
@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

/// 帖子的子类型
@property(nonatomic, readwrite, copy, null_resettable) NSString *subType;

/// 发布帖子的时间
@property(nonatomic, readwrite) int64_t time;

/// 帖子的标题
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/// 帖子是否被已查看
@property(nonatomic, readwrite) BOOL isView;

/// 论坛帖子查看数量
@property(nonatomic, readwrite) int64_t viewCount;

/// 论坛帖子评论数量
@property(nonatomic, readwrite) int64_t commentCount;

/// 用户基础信息
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

/// 帖子正文引用到的资源信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityResourceList *resourcesList;
/// Test to see if @c resourcesList has been set.
@property(nonatomic, readwrite) BOOL hasResourcesList;

/// 红包信息
@property(nonatomic, readwrite, strong, null_resettable) PRedPacketInfo *redpacket;
/// Test to see if @c redpacket has been set.
@property(nonatomic, readwrite) BOOL hasRedpacket;

/// 公告帖子的轮播图
@property(nonatomic, readwrite, strong, null_resettable) PCommunityResource *bannerImg;
/// Test to see if @c bannerImg has been set.
@property(nonatomic, readwrite) BOOL hasBannerImg;

/// 公告帖子是否置顶的标志位
@property(nonatomic, readwrite) BOOL isTop;

@end

#pragma mark - PCommunityPostList

typedef GPB_ENUM(PCommunityPostList_FieldNumber) {
  PCommunityPostList_FieldNumber_PostInfoArray = 2,
};

/// 帖子信息列表
@interface PCommunityPostList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityPostInfo*> *postInfoArray;
/// The number of items in @c postInfoArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger postInfoArray_Count;

@end

#pragma mark - PCommunityFlagPostList

typedef GPB_ENUM(PCommunityFlagPostList_FieldNumber) {
  PCommunityFlagPostList_FieldNumber_FlagCountArray = 2,
  PCommunityFlagPostList_FieldNumber_PostInfoArray = 3,
};

/// 帖子信息列表，包含被标旗数量
@interface PCommunityFlagPostList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *flagCountArray;
/// The number of items in @c flagCountArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger flagCountArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityPostInfo*> *postInfoArray;
/// The number of items in @c postInfoArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger postInfoArray_Count;

@end

#pragma mark - PCommunityHome

typedef GPB_ENUM(PCommunityHome_FieldNumber) {
  PCommunityHome_FieldNumber_Info = 2,
  PCommunityHome_FieldNumber_List = 3,
};

/// ‘社区首页’返回的信息
@interface PCommunityHome : GPBMessage

/// 我的社区信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityInfo *info;
/// Test to see if @c info has been set.
@property(nonatomic, readwrite) BOOL hasInfo;

/// 我关注的社区最近发布的帖子信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityPostList *list;
/// Test to see if @c list has been set.
@property(nonatomic, readwrite) BOOL hasList;

@end

#pragma mark - PCommunityPostComment

typedef GPB_ENUM(PCommunityPostComment_FieldNumber) {
  PCommunityPostComment_FieldNumber_QuoteId = 2,
  PCommunityPostComment_FieldNumber_Content = 3,
};

/// ---评论信息
/// 发表的评论
@interface PCommunityPostComment : GPBMessage

/// 引用的评论id，如果没有引用帖子，传空值
@property(nonatomic, readwrite, copy, null_resettable) NSString *quoteId;

/// 评论的正文
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

@end

#pragma mark - PCommunityCommentInfo

typedef GPB_ENUM(PCommunityCommentInfo_FieldNumber) {
  PCommunityCommentInfo_FieldNumber_Floor = 2,
  PCommunityCommentInfo_FieldNumber_UpVote = 3,
  PCommunityCommentInfo_FieldNumber_DownVote = 4,
  PCommunityCommentInfo_FieldNumber_Status = 5,
  PCommunityCommentInfo_FieldNumber_Id_p = 6,
  PCommunityCommentInfo_FieldNumber_Time = 7,
  PCommunityCommentInfo_FieldNumber_Content = 8,
  PCommunityCommentInfo_FieldNumber_User = 9,
  PCommunityCommentInfo_FieldNumber_QuoteInfo = 10,
  PCommunityCommentInfo_FieldNumber_IsDelete = 11,
};

/// 评论详情
@interface PCommunityCommentInfo : GPBMessage

/// 评论的层数
@property(nonatomic, readwrite) int32_t floor;

/// 评论的赞的数量
@property(nonatomic, readwrite) int32_t upVote;

/// 评论的踩的数量
@property(nonatomic, readwrite) int32_t downVote;

/// -1表示已踩，1表示已赞，0表示啥都没有
@property(nonatomic, readwrite) int32_t status;

/// 评论id
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/// 发表评论的时间
@property(nonatomic, readwrite) int64_t time;

/// 评论的正文
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

/// 发表评论的用户
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

/// 引用的评论信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityCommentInfo *quoteInfo;
/// Test to see if @c quoteInfo has been set.
@property(nonatomic, readwrite) BOOL hasQuoteInfo;

/// 标志帖子是否已经被删除，true为已删除，false为未删除
@property(nonatomic, readwrite) BOOL isDelete;

@end

#pragma mark - PCommunityCommentInfoList

typedef GPB_ENUM(PCommunityCommentInfoList_FieldNumber) {
  PCommunityCommentInfoList_FieldNumber_ListArray = 2,
};

/// 评论详情列表
@interface PCommunityCommentInfoList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityCommentInfo*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PCommunityMailUpload

typedef GPB_ENUM(PCommunityMailUpload_FieldNumber) {
  PCommunityMailUpload_FieldNumber_Content = 2,
  PCommunityMailUpload_FieldNumber_IsView = 3,
  PCommunityMailUpload_FieldNumber_ResourcesList = 10,
};

/// ---社区信件
/// 发布的论坛信件
@interface PCommunityMailUpload : GPBMessage

/// 信件正文
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

/// 信件是否被查看
@property(nonatomic, readwrite) BOOL isView;

/// 信件正文引用到的资源信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityResourceList *resourcesList;
/// Test to see if @c resourcesList has been set.
@property(nonatomic, readwrite) BOOL hasResourcesList;

@end

#pragma mark - PCommunityMailInfo

typedef GPB_ENUM(PCommunityMailInfo_FieldNumber) {
  PCommunityMailInfo_FieldNumber_Id_p = 2,
  PCommunityMailInfo_FieldNumber_ReplyId = 3,
  PCommunityMailInfo_FieldNumber_Time = 4,
  PCommunityMailInfo_FieldNumber_IsView = 5,
  PCommunityMailInfo_FieldNumber_Content = 6,
  PCommunityMailInfo_FieldNumber_User = 7,
  PCommunityMailInfo_FieldNumber_ResourcesList = 8,
  PCommunityMailInfo_FieldNumber_ReplyInfo = 9,
};

/// 论坛信件信息
@interface PCommunityMailInfo : GPBMessage

/// 信件id 
@property(nonatomic, readwrite) int64_t id_p;

/// 信件回复id
@property(nonatomic, readwrite, copy, null_resettable) NSString *replyId;

/// 发布信件的时间
@property(nonatomic, readwrite) int64_t time;

/// 信件是否已读标志位
@property(nonatomic, readwrite) BOOL isView;

/// 信件正文
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

/// 发信用户基础信息
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

/// 信件引用到的资源信息
@property(nonatomic, readwrite, strong, null_resettable) PCommunityResourceList *resourcesList;
/// Test to see if @c resourcesList has been set.
@property(nonatomic, readwrite) BOOL hasResourcesList;

/// 回复的信件
@property(nonatomic, readwrite, strong, null_resettable) PCommunityMailInfo *replyInfo;
/// Test to see if @c replyInfo has been set.
@property(nonatomic, readwrite) BOOL hasReplyInfo;

@end

#pragma mark - PCommunityMailList

typedef GPB_ENUM(PCommunityMailList_FieldNumber) {
  PCommunityMailList_FieldNumber_Unread = 2,
  PCommunityMailList_FieldNumber_MailInfoArray = 3,
};

/// 论坛信件列表
@interface PCommunityMailList : GPBMessage

@property(nonatomic, readwrite) int64_t unread;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityMailInfo*> *mailInfoArray;
/// The number of items in @c mailInfoArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger mailInfoArray_Count;

@end

#pragma mark - PCommunityMember

typedef GPB_ENUM(PCommunityMember_FieldNumber) {
  PCommunityMember_FieldNumber_User = 2,
  PCommunityMember_FieldNumber_IsFriend = 3,
  PCommunityMember_FieldNumber_IsFollow = 4,
  PCommunityMember_FieldNumber_IsManager = 5,
};

/// ---社区设定
/// 社区成员信息
@interface PCommunityMember : GPBMessage

/// 社区成员信息
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

/// A(你）关系码: 0: A --- B(A与B不是好友); 1: A --> B(A是B的单向好友); 2: A <-- B(B是A的单向好友); 3: A <-> B(A与B是好友)
@property(nonatomic, readwrite) int32_t isFriend;

/// 0表示未关注，1表示已关注
@property(nonatomic, readwrite) int32_t isFollow;

/// 0表示非管理员，1表示是管理员
@property(nonatomic, readwrite) int32_t isManager;

@end

#pragma mark - PCommunityMemberList

typedef GPB_ENUM(PCommunityMemberList_FieldNumber) {
  PCommunityMemberList_FieldNumber_ListArray = 2,
};

/// 社区成员信息列表
@interface PCommunityMemberList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityMember*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PCommunityFriend

typedef GPB_ENUM(PCommunityFriend_FieldNumber) {
  PCommunityFriend_FieldNumber_User = 2,
  PCommunityFriend_FieldNumber_Status = 3,
  PCommunityFriend_FieldNumber_Membership = 4,
};

/// 社区好友信息
@interface PCommunityFriend : GPBMessage

/// 好友信息
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

/// 0表示未邀请，1表示已邀请
@property(nonatomic, readwrite) int32_t status;

/// 0表示无关系，1是创建者，2是管理者，3是已关注社区
@property(nonatomic, readwrite) int32_t membership;

@end

#pragma mark - PCommunityFriendList

typedef GPB_ENUM(PCommunityFriendList_FieldNumber) {
  PCommunityFriendList_FieldNumber_ListArray = 2,
};

/// 社区好友信息列表
@interface PCommunityFriendList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityFriend*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PCommunityFlag

typedef GPB_ENUM(PCommunityFlag_FieldNumber) {
  PCommunityFlag_FieldNumber_FlagId = 2,
  PCommunityFlag_FieldNumber_FlagType = 3,
  PCommunityFlag_FieldNumber_FlagCount = 4,
  PCommunityFlag_FieldNumber_FlagTime = 5,
  PCommunityFlag_FieldNumber_PostId = 6,
  PCommunityFlag_FieldNumber_CommentId = 7,
  PCommunityFlag_FieldNumber_Title = 9,
  PCommunityFlag_FieldNumber_Content = 10,
};

/// 标旗内容
@interface PCommunityFlag : GPBMessage

/// 标旗的id
@property(nonatomic, readwrite, copy, null_resettable) NSString *flagId;

/// 标旗内容的类型，1是帖子，2是评论
@property(nonatomic, readwrite) int32_t flagType;

/// 被标旗次数
@property(nonatomic, readwrite) int32_t flagCount;

/// 标旗的时间
@property(nonatomic, readwrite) int64_t flagTime;

/// 帖子id
@property(nonatomic, readwrite, copy, null_resettable) NSString *postId;

/// 评论id
@property(nonatomic, readwrite, copy, null_resettable) NSString *commentId;

/// 帖子标题
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/// 帖子正文或者评论正文
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

@end

#pragma mark - PCommunityFlagList

typedef GPB_ENUM(PCommunityFlagList_FieldNumber) {
  PCommunityFlagList_FieldNumber_ListArray = 2,
};

/// 标旗内容列表
@interface PCommunityFlagList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityFlag*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PCommunityNotification

typedef GPB_ENUM(PCommunityNotification_FieldNumber) {
  PCommunityNotification_FieldNumber_IsView = 2,
  PCommunityNotification_FieldNumber_Type = 3,
  PCommunityNotification_FieldNumber_Id_p = 4,
  PCommunityNotification_FieldNumber_Time = 5,
  PCommunityNotification_FieldNumber_Content = 6,
  PCommunityNotification_FieldNumber_JumpId = 7,
  PCommunityNotification_FieldNumber_JumpExId = 8,
  PCommunityNotification_FieldNumber_User = 9,
};

/// 通知内容
@interface PCommunityNotification : GPBMessage

/// 通知是否已读的标志位
@property(nonatomic, readwrite) BOOL isView;

/// 通知类型，0是帖子被评论，1是评论被引用，2是公告，3是私信
@property(nonatomic, readwrite) int32_t type;

/// 通知id
@property(nonatomic, readwrite) int64_t id_p;

/// 产生通知的时间
@property(nonatomic, readwrite) int64_t time;

/// 通知正文
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

/// 不同类型的通知跳转需要的id, 帖子id，公告id，私信id
@property(nonatomic, readwrite, copy, null_resettable) NSString *jumpId;

/// 不同类型的通知跳转需要的id, 评论id（评论跳转需要帖子id+评论id）
@property(nonatomic, readwrite, copy, null_resettable) NSString *jumpExId;

/// type为0，1时传递的用户信息
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

@end

#pragma mark - PCommunityNotificationList

typedef GPB_ENUM(PCommunityNotificationList_FieldNumber) {
  PCommunityNotificationList_FieldNumber_ListArray = 2,
};

/// 通知内容列表
@interface PCommunityNotificationList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PCommunityNotification*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PCommunityNotificationUnRead

typedef GPB_ENUM(PCommunityNotificationUnRead_FieldNumber) {
  PCommunityNotificationUnRead_FieldNumber_Unread = 2,
};

/// 未读通知状态
@interface PCommunityNotificationUnRead : GPBMessage

@property(nonatomic, readwrite) int64_t unread;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)