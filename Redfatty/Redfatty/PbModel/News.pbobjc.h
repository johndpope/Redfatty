// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: news.proto

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

@class PAtUser;
@class PAtUserList;
@class PAudio;
@class PImage;
@class PImageTag;
@class PImageTagList;
@class PPostInfo;
@class PRecommendUser;
@class PRedPacketInfo;
@class PRelation;
@class PSendRedPacket;
@class PUser;
@class PVideo;
@class PVideoTag;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - NewsRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface NewsRoot : GPBRootObject
@end

#pragma mark - PPostInfoList

typedef GPB_ENUM(PPostInfoList_FieldNumber) {
  PPostInfoList_FieldNumber_ListArray = 1,
};

/// 微博详情列表
@interface PPostInfoList : GPBMessage

///博文列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PPostInfo*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PPostInfo

typedef GPB_ENUM(PPostInfo_FieldNumber) {
  PPostInfo_FieldNumber_Id_p = 1,
  PPostInfo_FieldNumber_Uuid = 2,
  PPostInfo_FieldNumber_UserName = 3,
  PPostInfo_FieldNumber_UserHead = 4,
  PPostInfo_FieldNumber_Content = 5,
  PPostInfo_FieldNumber_SrcType = 6,
  PPostInfo_FieldNumber_ImagesArray = 7,
  PPostInfo_FieldNumber_Video = 8,
  PPostInfo_FieldNumber_Audio = 9,
  PPostInfo_FieldNumber_PubishTime = 11,
  PPostInfo_FieldNumber_Position = 12,
  PPostInfo_FieldNumber_Self_p = 14,
  PPostInfo_FieldNumber_Collected = 15,
  PPostInfo_FieldNumber_CommentCnt = 16,
  PPostInfo_FieldNumber_CollectCnt = 17,
  PPostInfo_FieldNumber_VoteCnt = 18,
  PPostInfo_FieldNumber_Vote = 19,
  PPostInfo_FieldNumber_Atusers = 20,
  PPostInfo_FieldNumber_IsDelete = 21,
  PPostInfo_FieldNumber_IsHide = 22,
  PPostInfo_FieldNumber_RedPacket = 23,
};

/// 微博详情
@interface PPostInfo : GPBMessage

///博文的ID，上传时不用填
@property(nonatomic, readwrite) int64_t id_p;

///博文的作者，上传时不用填
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

///作者名称，上传时不用填
@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

///作者头像，上传时不用填
@property(nonatomic, readwrite, copy, null_resettable) NSString *userHead;

///文章正文
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

///资源的类型（image表示上传的是图片，video表示上传的是视频，audio表示上传的是音频）
@property(nonatomic, readwrite, copy, null_resettable) NSString *srcType;

///图片（最多九张）
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PImage*> *imagesArray;
/// The number of items in @c imagesArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger imagesArray_Count;

///视频
@property(nonatomic, readwrite, strong, null_resettable) PVideo *video;
/// Test to see if @c video has been set.
@property(nonatomic, readwrite) BOOL hasVideo;

///音频
@property(nonatomic, readwrite, strong, null_resettable) PAudio *audio;
/// Test to see if @c audio has been set.
@property(nonatomic, readwrite) BOOL hasAudio;

///发布时间，上传时不用填
@property(nonatomic, readwrite) int64_t pubishTime;

///发帖的地理位置
@property(nonatomic, readwrite, copy, null_resettable) NSString *position;

///这篇文章是查看人自己的写的，上传时不用填
@property(nonatomic, readwrite) BOOL self_p;

///是否收藏此文章，上传时不用填
@property(nonatomic, readwrite) BOOL collected;

///评论数，上传时不用填
@property(nonatomic, readwrite) int64_t commentCnt;

///收藏数，上传时不用填
@property(nonatomic, readwrite) int64_t collectCnt;

///点赞数，上传时不用填
@property(nonatomic, readwrite) int64_t voteCnt;

///自己是否点赞，上传时不用填
@property(nonatomic, readwrite) BOOL vote;

///被\@的用户列表
@property(nonatomic, readwrite, strong, null_resettable) PAtUserList *atusers;
/// Test to see if @c atusers has been set.
@property(nonatomic, readwrite) BOOL hasAtusers;

///帖子已经被用户删除
@property(nonatomic, readwrite) BOOL isDelete;

///帖子正在被审核
@property(nonatomic, readwrite) BOOL isHide;

///红包信息，上传时不用填
@property(nonatomic, readwrite, strong, null_resettable) PRedPacketInfo *redPacket;
/// Test to see if @c redPacket has been set.
@property(nonatomic, readwrite) BOOL hasRedPacket;

@end

#pragma mark - PAtUserList

typedef GPB_ENUM(PAtUserList_FieldNumber) {
  PAtUserList_FieldNumber_ListArray = 1,
};

/// 被\@的用户列表
@interface PAtUserList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PAtUser*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PAtUser

typedef GPB_ENUM(PAtUser_FieldNumber) {
  PAtUser_FieldNumber_Uuid = 1,
  PAtUser_FieldNumber_NickName = 2,
};

/// 被\@的用户
@interface PAtUser : GPBMessage

///被\@的用户id
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

///用户昵称
@property(nonatomic, readwrite, copy, null_resettable) NSString *nickName;

@end

#pragma mark - PImage

typedef GPB_ENUM(PImage_FieldNumber) {
  PImage_FieldNumber_URL = 1,
  PImage_FieldNumber_Tags = 2,
  PImage_FieldNumber_Thumbnail = 3,
  PImage_FieldNumber_Des = 4,
};

/// 图片
@interface PImage : GPBMessage

///原图url
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

///图片的热点广告 
@property(nonatomic, readwrite, strong, null_resettable) PImageTagList *tags;
/// Test to see if @c tags has been set.
@property(nonatomic, readwrite) BOOL hasTags;

///缩略图的url
@property(nonatomic, readwrite, copy, null_resettable) NSString *thumbnail;

///图片描述
@property(nonatomic, readwrite, copy, null_resettable) NSString *des;

@end

#pragma mark - PVideo

typedef GPB_ENUM(PVideo_FieldNumber) {
  PVideo_FieldNumber_URL = 1,
  PVideo_FieldNumber_Img = 2,
  PVideo_FieldNumber_TagsArray = 3,
  PVideo_FieldNumber_Expires = 4,
  PVideo_FieldNumber_Type = 5,
};

/// 视频
@interface PVideo : GPBMessage

///视频在OSS上的路径
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

///视频的缩略图
@property(nonatomic, readwrite, copy, null_resettable) NSString *img;

///视频的标签
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PVideoTag*> *tagsArray;
/// The number of items in @c tagsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger tagsArray_Count;

///视频的有效期（多少秒之后过期）
@property(nonatomic, readwrite) int64_t expires;

///视频类型，0：本地视频，1：第三方视频，2：长视频
@property(nonatomic, readwrite) int32_t type;

@end

#pragma mark - PAudio

typedef GPB_ENUM(PAudio_FieldNumber) {
  PAudio_FieldNumber_URL = 1,
  PAudio_FieldNumber_Length = 2,
  PAudio_FieldNumber_Expires = 3,
};

/// 音频
@interface PAudio : GPBMessage

///音频在OSS上的路径
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

///音频长度
@property(nonatomic, readwrite) int32_t length;

///音频的有效期（多少秒之后过期）
@property(nonatomic, readwrite) int64_t expires;

@end

#pragma mark - PImageTagList

typedef GPB_ENUM(PImageTagList_FieldNumber) {
  PImageTagList_FieldNumber_ListArray = 1,
};

/// 图片的标签信息列表
@interface PImageTagList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PImageTag*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PImageTag

typedef GPB_ENUM(PImageTag_FieldNumber) {
  PImageTag_FieldNumber_Type = 1,
  PImageTag_FieldNumber_SubType = 2,
  PImageTag_FieldNumber_X = 3,
  PImageTag_FieldNumber_Y = 4,
  PImageTag_FieldNumber_Name = 5,
  PImageTag_FieldNumber_GoodPrice = 6,
  PImageTag_FieldNumber_GoodLink = 7,
  PImageTag_FieldNumber_PersonUuid = 8,
  PImageTag_FieldNumber_PersonName = 9,
};

/// 图片的标签信息
@interface PImageTag : GPBMessage

/// 1是标签物品，2是标签人
@property(nonatomic, readwrite) int32_t type;

/// 标签子类型 
@property(nonatomic, readwrite) int32_t subType;

/// 标签x坐标相对图片的位置，百分比
@property(nonatomic, readwrite) float x;

/// 标签y坐标相对图片的位置，百分比
@property(nonatomic, readwrite) float y;

/// 标签的名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/// 物品的价格
@property(nonatomic, readwrite, copy, null_resettable) NSString *goodPrice;

/// 物品的链接
@property(nonatomic, readwrite, copy, null_resettable) NSString *goodLink;

/// 人物的uuid
@property(nonatomic, readwrite, copy, null_resettable) NSString *personUuid;

/// 用户的名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *personName;

@end

#pragma mark - PVideoTag

typedef GPB_ENUM(PVideoTag_FieldNumber) {
  PVideoTag_FieldNumber_X = 1,
  PVideoTag_FieldNumber_Y = 2,
  PVideoTag_FieldNumber_Text = 3,
};

///视频的标签
@interface PVideoTag : GPBMessage

@property(nonatomic, readwrite) float x;

@property(nonatomic, readwrite) float y;

///标签内容
@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@end

#pragma mark - PPostRedpacket

typedef GPB_ENUM(PPostRedpacket_FieldNumber) {
  PPostRedpacket_FieldNumber_Post = 1,
  PPostRedpacket_FieldNumber_Redpacket = 2,
};

///微博红包
@interface PPostRedpacket : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) PPostInfo *post;
/// Test to see if @c post has been set.
@property(nonatomic, readwrite) BOOL hasPost;

@property(nonatomic, readwrite, strong, null_resettable) PSendRedPacket *redpacket;
/// Test to see if @c redpacket has been set.
@property(nonatomic, readwrite) BOOL hasRedpacket;

@end

#pragma mark - PRecommendUser

typedef GPB_ENUM(PRecommendUser_FieldNumber) {
  PRecommendUser_FieldNumber_Uuid = 6,
  PRecommendUser_FieldNumber_Username = 7,
  PRecommendUser_FieldNumber_Nickname = 8,
  PRecommendUser_FieldNumber_HeadImgURL = 9,
  PRecommendUser_FieldNumber_Gender = 10,
  PRecommendUser_FieldNumber_MembershipLevel = 11,
  PRecommendUser_FieldNumber_Followship = 12,
  PRecommendUser_FieldNumber_Friend_p = 13,
};

@interface PRecommendUser : GPBMessage

///服务端标志用户的唯一id
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

///用户名，唯一
@property(nonatomic, readwrite, copy, null_resettable) NSString *username;

///昵称
@property(nonatomic, readwrite, copy, null_resettable) NSString *nickname;

///头像地址
@property(nonatomic, readwrite, copy, null_resettable) NSString *headImgURL;

///性别，0就是女，其余的是男；人妖暂时不考虑
@property(nonatomic, readwrite) int32_t gender;

///会员级别
@property(nonatomic, readwrite) int32_t membershipLevel;

///两用户间的关系、0:无关系，1,：是粉丝，2：已关注，3：相互关注
@property(nonatomic, readwrite) int32_t followship;

///是否是好友，是：true
@property(nonatomic, readwrite) BOOL friend_p;

@end

#pragma mark - PFollowOrFansList

typedef GPB_ENUM(PFollowOrFansList_FieldNumber) {
  PFollowOrFansList_FieldNumber_ListArray = 1,
  PFollowOrFansList_FieldNumber_Index = 2,
};

@interface PFollowOrFansList : GPBMessage

///关注、粉丝 列表，最多100个
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PRecommendUser*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

///下次请求的起点
@property(nonatomic, readwrite) int32_t index;

@end

#pragma mark - PPersonStatistic

typedef GPB_ENUM(PPersonStatistic_FieldNumber) {
  PPersonStatistic_FieldNumber_FriendCnt = 1,
  PPersonStatistic_FieldNumber_FollowCnt = 2,
  PPersonStatistic_FieldNumber_FansCnt = 3,
  PPersonStatistic_FieldNumber_TextCnt = 4,
  PPersonStatistic_FieldNumber_ImageCnt = 5,
  PPersonStatistic_FieldNumber_AudioCnt = 6,
  PPersonStatistic_FieldNumber_VideoCnt = 7,
};

///个人统计信息
@interface PPersonStatistic : GPBMessage

///朋友个数
@property(nonatomic, readwrite) int32_t friendCnt;

///follow人数
@property(nonatomic, readwrite) int32_t followCnt;

///fans个数
@property(nonatomic, readwrite) int32_t fansCnt;

///发表的文字帖个数
@property(nonatomic, readwrite) int32_t textCnt;

@property(nonatomic, readwrite) int32_t imageCnt;

@property(nonatomic, readwrite) int32_t audioCnt;

@property(nonatomic, readwrite) int32_t videoCnt;

@end

#pragma mark - PNewsUserProfile

typedef GPB_ENUM(PNewsUserProfile_FieldNumber) {
  PNewsUserProfile_FieldNumber_User = 1,
  PNewsUserProfile_FieldNumber_Followship = 2,
  PNewsUserProfile_FieldNumber_Friend_p = 3,
};

/// 微博用户详情
@interface PNewsUserProfile : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) PUser *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

///两用户间的关系、0:无关系，1,：是粉丝，2：已关注，3：相互关注
@property(nonatomic, readwrite) int32_t followship;

///是否是好友，是：true
@property(nonatomic, readwrite) BOOL friend_p;

@end

#pragma mark - PRelationList

typedef GPB_ENUM(PRelationList_FieldNumber) {
  PRelationList_FieldNumber_ListArray = 1,
};

/// 用户关系列表
@interface PRelationList : GPBMessage

///若干个用户关注关系
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PRelation*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PRelation

typedef GPB_ENUM(PRelation_FieldNumber) {
  PRelation_FieldNumber_Ship = 1,
  PRelation_FieldNumber_UuidA = 2,
  PRelation_FieldNumber_UuidB = 3,
  PRelation_FieldNumber_FolsA = 4,
  PRelation_FieldNumber_FansA = 5,
  PRelation_FieldNumber_FolsB = 6,
  PRelation_FieldNumber_FansB = 7,
};

/// 用户关系
@interface PRelation : GPBMessage

///两用户间的关系、0:无关系，1,：A被B关注，2：A关注B，3：AB相互关注
@property(nonatomic, readwrite) int32_t ship;

///用户A
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuidA;

///用户B
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuidB;

///用户A的关注数
@property(nonatomic, readwrite) int32_t folsA;

///用户A的粉丝数
@property(nonatomic, readwrite) int32_t fansA;

///用户B的关注数
@property(nonatomic, readwrite) int32_t folsB;

///用户B的粉丝数
@property(nonatomic, readwrite) int32_t fansB;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)