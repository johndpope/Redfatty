// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: notification.proto

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

@class NotifyComment;
@class NotifyCommentReply;
@class NotifyCommentVote;
@class NotifyFollow;
@class NotifyNewsAt;
@class NotifyNewsVote;
@class NotifySocial;
@class PComment;
@class PMsgCount;
@class PNotifyCommunityInvite;
@class PPostInfo;
@class PStreamingMsg;
@class PUserBase;
@class SimpleUser;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - NotificationRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface NotificationRoot : GPBRootObject
@end

#pragma mark - SimpleUser

typedef GPB_ENUM(SimpleUser_FieldNumber) {
  SimpleUser_FieldNumber_Level = 5,
  SimpleUser_FieldNumber_Uuid = 6,
  SimpleUser_FieldNumber_Username = 7,
  SimpleUser_FieldNumber_Nickname = 8,
  SimpleUser_FieldNumber_HeadImgURL = 9,
};

@interface SimpleUser : GPBMessage

///保留1~4用于扩展
@property(nonatomic, readwrite) int32_t level;

/// 服务端标志用户的唯一id
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

/// 用户名，唯一
@property(nonatomic, readwrite, copy, null_resettable) NSString *username;

/// 昵称
@property(nonatomic, readwrite, copy, null_resettable) NSString *nickname;

/// 头像地址
@property(nonatomic, readwrite, copy, null_resettable) NSString *headImgURL;

@end

#pragma mark - NotifyComment

typedef GPB_ENUM(NotifyComment_FieldNumber) {
  NotifyComment_FieldNumber_MessageId = 1,
  NotifyComment_FieldNumber_CommentUser = 2,
  NotifyComment_FieldNumber_Comment = 3,
  NotifyComment_FieldNumber_Article = 4,
  NotifyComment_FieldNumber_Time = 5,
  NotifyComment_FieldNumber_Status = 6,
};

/// 帖子评论通知消息
@interface NotifyComment : GPBMessage

///消息id 
@property(nonatomic, readwrite) int64_t messageId;

///评论的用户
@property(nonatomic, readwrite, strong, null_resettable) SimpleUser *commentUser;
/// Test to see if @c commentUser has been set.
@property(nonatomic, readwrite) BOOL hasCommentUser;

///评论
@property(nonatomic, readwrite, strong, null_resettable) PComment *comment;
/// Test to see if @c comment has been set.
@property(nonatomic, readwrite) BOOL hasComment;

///评论相关的news
@property(nonatomic, readwrite, strong, null_resettable) PPostInfo *article;
/// Test to see if @c article has been set.
@property(nonatomic, readwrite) BOOL hasArticle;

///评论的时间
@property(nonatomic, readwrite) int64_t time;

///0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

@end

#pragma mark - NotifyCommentList

typedef GPB_ENUM(NotifyCommentList_FieldNumber) {
  NotifyCommentList_FieldNumber_ListArray = 1,
};

/// 帖子评论通知消息列表
@interface NotifyCommentList : GPBMessage

///NotifyComment列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NotifyComment*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - NotifyCommentReply

typedef GPB_ENUM(NotifyCommentReply_FieldNumber) {
  NotifyCommentReply_FieldNumber_MessageId = 1,
  NotifyCommentReply_FieldNumber_CommentUser = 2,
  NotifyCommentReply_FieldNumber_Comment = 3,
  NotifyCommentReply_FieldNumber_Reply = 4,
  NotifyCommentReply_FieldNumber_Time = 5,
  NotifyCommentReply_FieldNumber_Status = 6,
  NotifyCommentReply_FieldNumber_ReplyUser = 7,
};

/// 评论回复通知消息
@interface NotifyCommentReply : GPBMessage

///消息id 
@property(nonatomic, readwrite) int64_t messageId;

///评论的用户
@property(nonatomic, readwrite, strong, null_resettable) SimpleUser *commentUser;
/// Test to see if @c commentUser has been set.
@property(nonatomic, readwrite) BOOL hasCommentUser;

///被回复的评论
@property(nonatomic, readwrite, strong, null_resettable) PComment *comment;
/// Test to see if @c comment has been set.
@property(nonatomic, readwrite) BOOL hasComment;

///回复的内容
@property(nonatomic, readwrite, strong, null_resettable) PComment *reply;
/// Test to see if @c reply has been set.
@property(nonatomic, readwrite) BOOL hasReply;

///回复的时间
@property(nonatomic, readwrite) int64_t time;

///0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

///被回复评论的用户
@property(nonatomic, readwrite, strong, null_resettable) SimpleUser *replyUser;
/// Test to see if @c replyUser has been set.
@property(nonatomic, readwrite) BOOL hasReplyUser;

@end

#pragma mark - NotifyCommentReplyList

typedef GPB_ENUM(NotifyCommentReplyList_FieldNumber) {
  NotifyCommentReplyList_FieldNumber_ListArray = 1,
};

/// 评论回复通知消息列表
@interface NotifyCommentReplyList : GPBMessage

///NotifyCommentReply列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NotifyCommentReply*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - NotifyCommentVote

typedef GPB_ENUM(NotifyCommentVote_FieldNumber) {
  NotifyCommentVote_FieldNumber_MessageId = 1,
  NotifyCommentVote_FieldNumber_VoteUser = 2,
  NotifyCommentVote_FieldNumber_Comment = 3,
  NotifyCommentVote_FieldNumber_Article = 4,
  NotifyCommentVote_FieldNumber_Time = 5,
  NotifyCommentVote_FieldNumber_VoteType = 6,
  NotifyCommentVote_FieldNumber_Status = 7,
};

/// 评论投票通知消息
@interface NotifyCommentVote : GPBMessage

///消息id 
@property(nonatomic, readwrite) int64_t messageId;

///投票的用户
@property(nonatomic, readwrite, strong, null_resettable) SimpleUser *voteUser;
/// Test to see if @c voteUser has been set.
@property(nonatomic, readwrite) BOOL hasVoteUser;

///被投票的评论
@property(nonatomic, readwrite, strong, null_resettable) PComment *comment;
/// Test to see if @c comment has been set.
@property(nonatomic, readwrite) BOOL hasComment;

///被投票评论相关的news
@property(nonatomic, readwrite, strong, null_resettable) PPostInfo *article;
/// Test to see if @c article has been set.
@property(nonatomic, readwrite) BOOL hasArticle;

///投票的时间
@property(nonatomic, readwrite) int64_t time;

///0：赞；1：踩
@property(nonatomic, readwrite) int32_t voteType;

///0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

@end

#pragma mark - NotifyCommentVoteList

typedef GPB_ENUM(NotifyCommentVoteList_FieldNumber) {
  NotifyCommentVoteList_FieldNumber_ListArray = 1,
};

/// 评论投票通知消息列表
@interface NotifyCommentVoteList : GPBMessage

///NotifyCommentVote列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NotifyCommentVote*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - NotifySocial

typedef GPB_ENUM(NotifySocial_FieldNumber) {
  NotifySocial_FieldNumber_MessageId = 1,
  NotifySocial_FieldNumber_SocialUser = 2,
  NotifySocial_FieldNumber_Time = 3,
  NotifySocial_FieldNumber_SocialType = 4,
  NotifySocial_FieldNumber_Status = 5,
  NotifySocial_FieldNumber_SocialRelation = 6,
  NotifySocial_FieldNumber_NotifyUuid = 7,
};

/// 好友申请通知消息
@interface NotifySocial : GPBMessage

///消息id 
@property(nonatomic, readwrite) int64_t messageId;

///申请好友或接受好友的用户
@property(nonatomic, readwrite, strong, null_resettable) SimpleUser *socialUser;
/// Test to see if @c socialUser has been set.
@property(nonatomic, readwrite) BOOL hasSocialUser;

///申请好友或接受好友的时间
@property(nonatomic, readwrite) int64_t time;

///0：申请好友；1：接受好友申请；2：拒绝好友申请
@property(nonatomic, readwrite) int32_t socialType;

///0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

/// socialRelation 当前好友关系: A(自己), B(对方)
/// 0：A --- B (A 和 B 完全没关系)
/// 1: A --> B (A 向 B 申请好友，B 还未接受)
/// 2: A <-- B (B 向 A 申请好友，A 还未接受)
/// 3: A <-> B (B 与 A 是好友)
@property(nonatomic, readwrite) int32_t socialRelation;

/// 被通知用户的uuid
@property(nonatomic, readwrite, copy, null_resettable) NSString *notifyUuid;

@end

#pragma mark - NotifySocialList

typedef GPB_ENUM(NotifySocialList_FieldNumber) {
  NotifySocialList_FieldNumber_ListArray = 1,
};

/// 好友申请通知消息列表
@interface NotifySocialList : GPBMessage

///NotifySocial列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NotifySocial*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - NotifyFollow

typedef GPB_ENUM(NotifyFollow_FieldNumber) {
  NotifyFollow_FieldNumber_MessageId = 1,
  NotifyFollow_FieldNumber_FollowUser = 2,
  NotifyFollow_FieldNumber_Time = 3,
  NotifyFollow_FieldNumber_Followship = 4,
  NotifyFollow_FieldNumber_Status = 5,
};

///关注通知消息
@interface NotifyFollow : GPBMessage

///消息id 
@property(nonatomic, readwrite) int64_t messageId;

///关注我的用户
@property(nonatomic, readwrite, strong, null_resettable) SimpleUser *followUser;
/// Test to see if @c followUser has been set.
@property(nonatomic, readwrite) BOOL hasFollowUser;

///关注的时间
@property(nonatomic, readwrite) int64_t time;

///两用户间的关系、0:无关系，1,：是粉丝，2：已关注，3：相互关注
@property(nonatomic, readwrite) int32_t followship;

///0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

@end

#pragma mark - NotifyFollowList

typedef GPB_ENUM(NotifyFollowList_FieldNumber) {
  NotifyFollowList_FieldNumber_ListArray = 1,
};

///关注通知消息列表
@interface NotifyFollowList : GPBMessage

///NotifyFollow列表，最多50个
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NotifyFollow*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - NotifyNewsVote

typedef GPB_ENUM(NotifyNewsVote_FieldNumber) {
  NotifyNewsVote_FieldNumber_MessageId = 1,
  NotifyNewsVote_FieldNumber_VoteUser = 2,
  NotifyNewsVote_FieldNumber_Article = 3,
  NotifyNewsVote_FieldNumber_Time = 4,
  NotifyNewsVote_FieldNumber_Status = 5,
};

///点赞通知信息
@interface NotifyNewsVote : GPBMessage

///消息id 
@property(nonatomic, readwrite) int64_t messageId;

///点赞的用户
@property(nonatomic, readwrite, strong, null_resettable) SimpleUser *voteUser;
/// Test to see if @c voteUser has been set.
@property(nonatomic, readwrite) BOOL hasVoteUser;

///点赞的news
@property(nonatomic, readwrite, strong, null_resettable) PPostInfo *article;
/// Test to see if @c article has been set.
@property(nonatomic, readwrite) BOOL hasArticle;

///点赞时间
@property(nonatomic, readwrite) int64_t time;

///0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

@end

#pragma mark - NotifyNewsVoteList

typedef GPB_ENUM(NotifyNewsVoteList_FieldNumber) {
  NotifyNewsVoteList_FieldNumber_ListArray = 1,
};

///点赞通知信息列表
@interface NotifyNewsVoteList : GPBMessage

///NotifyNewsVote列表，最多50个  
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NotifyNewsVote*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - NotifyNewsAt

typedef GPB_ENUM(NotifyNewsAt_FieldNumber) {
  NotifyNewsAt_FieldNumber_MessageId = 1,
  NotifyNewsAt_FieldNumber_Article = 2,
  NotifyNewsAt_FieldNumber_Time = 3,
  NotifyNewsAt_FieldNumber_Status = 4,
};

@interface NotifyNewsAt : GPBMessage

///消息id
@property(nonatomic, readwrite) int64_t messageId;

///帖子
@property(nonatomic, readwrite, strong, null_resettable) PPostInfo *article;
/// Test to see if @c article has been set.
@property(nonatomic, readwrite) BOOL hasArticle;

///发帖时间
@property(nonatomic, readwrite) int64_t time;

///0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

@end

#pragma mark - NotifyNewsAtList

typedef GPB_ENUM(NotifyNewsAtList_FieldNumber) {
  NotifyNewsAtList_FieldNumber_ListArray = 1,
};

///帖子\@通知信息列表
@interface NotifyNewsAtList : GPBMessage

///NotifyNewsAt列表，最多50个  
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NotifyNewsAt*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PNotifyCommunityInvite

typedef GPB_ENUM(PNotifyCommunityInvite_FieldNumber) {
  PNotifyCommunityInvite_FieldNumber_MessageId = 1,
  PNotifyCommunityInvite_FieldNumber_Time = 2,
  PNotifyCommunityInvite_FieldNumber_Status = 3,
  PNotifyCommunityInvite_FieldNumber_CommunityId = 4,
  PNotifyCommunityInvite_FieldNumber_CommunityName = 5,
  PNotifyCommunityInvite_FieldNumber_User = 6,
};

/// 社区邀请通知消息
@interface PNotifyCommunityInvite : GPBMessage

/// 消息id 
@property(nonatomic, readwrite) int64_t messageId;

/// 邀请的时间
@property(nonatomic, readwrite) int64_t time;

/// 0：未读；1：已读
@property(nonatomic, readwrite) int32_t status;

/// 邀请加入的社区的id
@property(nonatomic, readwrite) int64_t communityId;

/// 社区名字
@property(nonatomic, readwrite, copy, null_resettable) NSString *communityName;

/// 邀请我的用户
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

@end

#pragma mark - PNotifyCommunityInviteList

typedef GPB_ENUM(PNotifyCommunityInviteList_FieldNumber) {
  PNotifyCommunityInviteList_FieldNumber_ListArray = 1,
};

/// 社区邀请通知消息列表
@interface PNotifyCommunityInviteList : GPBMessage

/// PNotifyCommunityInvite 列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PNotifyCommunityInvite*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PMsgCount

typedef GPB_ENUM(PMsgCount_FieldNumber) {
  PMsgCount_FieldNumber_Type = 2,
  PMsgCount_FieldNumber_Count = 3,
};

/// 推送消息的个数
@interface PMsgCount : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

@property(nonatomic, readwrite) int64_t count;

@end

#pragma mark - PMsgCountList

typedef GPB_ENUM(PMsgCountList_FieldNumber) {
  PMsgCountList_FieldNumber_MsgCountArray = 2,
};

/// 推送消息个数列表
@interface PMsgCountList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PMsgCount*> *msgCountArray;
/// The number of items in @c msgCountArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger msgCountArray_Count;

@end

#pragma mark - PMsgIDList

typedef GPB_ENUM(PMsgIDList_FieldNumber) {
  PMsgIDList_FieldNumber_MsgIdArray = 2,
};

/// 消息id列表
@interface PMsgIDList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *msgIdArray;
/// The number of items in @c msgIdArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger msgIdArray_Count;

@end

#pragma mark - PNotifySetting

typedef GPB_ENUM(PNotifySetting_FieldNumber) {
  PNotifySetting_FieldNumber_Mute = 1,
};

@interface PNotifySetting : GPBMessage

@property(nonatomic, readwrite) BOOL mute;

@end

#pragma mark - PStreamingMsg

typedef GPB_ENUM(PStreamingMsg_FieldNumber) {
  PStreamingMsg_FieldNumber_Uuid = 1,
  PStreamingMsg_FieldNumber_MessageId = 2,
  PStreamingMsg_FieldNumber_Serial = 3,
  PStreamingMsg_FieldNumber_Over = 4,
  PStreamingMsg_FieldNumber_Website = 5,
  PStreamingMsg_FieldNumber_URL = 6,
  PStreamingMsg_FieldNumber_Title = 7,
  PStreamingMsg_FieldNumber_StartTime = 8,
};

/// 第三方直播消息
@interface PStreamingMsg : GPBMessage

///作者uuid
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

///消息id
@property(nonatomic, readwrite) int64_t messageId;

///序号(同一个直播消息,序号相同)
@property(nonatomic, readwrite) int64_t serial;

///是否结束
@property(nonatomic, readwrite) BOOL over;

///网站
@property(nonatomic, readwrite, copy, null_resettable) NSString *website;

///房间地址
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

///房间标题
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

///开始时间,unix秒数
@property(nonatomic, readwrite) int64_t startTime;

@end

#pragma mark - PStreamingMsgList

typedef GPB_ENUM(PStreamingMsgList_FieldNumber) {
  PStreamingMsgList_FieldNumber_ListArray = 1,
};

/// 第三方直播消息列表
@interface PStreamingMsgList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PStreamingMsg*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
