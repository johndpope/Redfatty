// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chat.proto

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

@class PChatIdMessage;
@class PMember;
@class PMessageData;
@class PUserBase;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ChatRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface ChatRoot : GPBRootObject
@end

#pragma mark - PWkToken

typedef GPB_ENUM(PWkToken_FieldNumber) {
  PWkToken_FieldNumber_AppAccessToken = 1,
  PWkToken_FieldNumber_Domain = 2,
  PWkToken_FieldNumber_AppKey = 3,
  PWkToken_FieldNumber_OpenId = 4,
  PWkToken_FieldNumber_Nonce = 5,
  PWkToken_FieldNumber_Timestamp = 6,
  PWkToken_FieldNumber_Signature = 7,
};

@interface PWkToken : GPBMessage

/// 应用appAccessToken
@property(nonatomic, readwrite, copy, null_resettable) NSString *appAccessToken;

/// 应用domain
@property(nonatomic, readwrite, copy, null_resettable) NSString *domain;

/// 应用appKey
@property(nonatomic, readwrite, copy, null_resettable) NSString *appKey;

/// 用户openId
@property(nonatomic, readwrite) int64_t openId;

/// 随机数
@property(nonatomic, readwrite, copy, null_resettable) NSString *nonce;

/// 时间戳
@property(nonatomic, readwrite) int64_t timestamp;

/// 签名串，用于登录阿里悟空的凭证，每个signature的有效期为5分钟
@property(nonatomic, readwrite, copy, null_resettable) NSString *signature;

@end

#pragma mark - PConversation

typedef GPB_ENUM(PConversation_FieldNumber) {
  PConversation_FieldNumber_ConversationId = 1,
  PConversation_FieldNumber_OpenId = 2,
  PConversation_FieldNumber_Type = 3,
  PConversation_FieldNumber_Icon = 4,
  PConversation_FieldNumber_Title = 5,
  PConversation_FieldNumber_Tag = 6,
  PConversation_FieldNumber_MemberLimit = 7,
  PConversation_FieldNumber_SuperGroup = 8,
  PConversation_FieldNumber_ParentId = 9,
  PConversation_FieldNumber_NodeType = 10,
  PConversation_FieldNumber_MembersArray = 11,
};

@interface PConversation : GPBMessage

/// 会话ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *conversationId;

/// 会话创建者
@property(nonatomic, readwrite) int64_t openId;

/// 会话类型
@property(nonatomic, readwrite) int32_t type;

/// 会话图标url地址
@property(nonatomic, readwrite, copy, null_resettable) NSString *icon;

/// 会话名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/// 会话tag：0-可以聊天，1-不能聊天（已不是好友关系）
@property(nonatomic, readwrite) int64_t tag;

/// 群成员数
@property(nonatomic, readwrite) int32_t memberLimit;

/// 0非大群，1大群  
@property(nonatomic, readwrite) int32_t superGroup;

/// 父会话id，默认0
@property(nonatomic, readwrite, copy, null_resettable) NSString *parentId;

/// 是否 父会话，0-否，默认；1-是父会话
@property(nonatomic, readwrite) int32_t nodeType;

/// 会话的成员列表openId
@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Array *membersArray;
/// The number of items in @c membersArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger membersArray_Count;

@end

#pragma mark - PJoinRoom

typedef GPB_ENUM(PJoinRoom_FieldNumber) {
  PJoinRoom_FieldNumber_Code = 1,
  PJoinRoom_FieldNumber_OldRoomId = 2,
  PJoinRoom_FieldNumber_OldRoomName = 3,
  PJoinRoom_FieldNumber_NewRoomId = 4,
  PJoinRoom_FieldNumber_NewRoomName = 5,
  PJoinRoom_FieldNumber_QueueSize = 6,
};

@interface PJoinRoom : GPBMessage

/// 状态吗
@property(nonatomic, readwrite) int64_t code;

/// 旧的聊天室ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *oldRoomId;

/// 旧的聊天室名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *oldRoomName;

/// 新的聊天室ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *newRoomId NS_RETURNS_NOT_RETAINED;

/// 新的聊天室名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *newRoomName NS_RETURNS_NOT_RETAINED;

/// 前面排队人数
@property(nonatomic, readwrite) int32_t queueSize;

@end

#pragma mark - PCommunity

typedef GPB_ENUM(PCommunity_FieldNumber) {
  PCommunity_FieldNumber_OwnerUuid = 1,
  PCommunity_FieldNumber_CommunityId = 2,
  PCommunity_FieldNumber_CommunityName = 3,
  PCommunity_FieldNumber_CommunityIcon = 4,
  PCommunity_FieldNumber_UuidsArray = 5,
};

@interface PCommunity : GPBMessage

/// 超级管理员uuid
@property(nonatomic, readwrite, copy, null_resettable) NSString *ownerUuid;

/// 社区ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *communityId;

/// 社区名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *communityName;

/// 社区头像url
@property(nonatomic, readwrite, copy, null_resettable) NSString *communityIcon;

/// 普通管理员uuid
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *uuidsArray;
/// The number of items in @c uuidsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger uuidsArray_Count;

@end

#pragma mark - PMemberList

typedef GPB_ENUM(PMemberList_FieldNumber) {
  PMemberList_FieldNumber_Size = 1,
  PMemberList_FieldNumber_ListArray = 2,
};

@interface PMemberList : GPBMessage

/// 成员数量
@property(nonatomic, readwrite) int32_t size;

/// 成员信息
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PMember*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

#pragma mark - PMember

typedef GPB_ENUM(PMember_FieldNumber) {
  PMember_FieldNumber_User = 1,
  PMember_FieldNumber_IsFriend = 2,
  PMember_FieldNumber_IsFollow = 3,
  PMember_FieldNumber_IsManager = 4,
  PMember_FieldNumber_GameLevel = 5,
};

@interface PMember : GPBMessage

/// 成员信息
@property(nonatomic, readwrite, strong, null_resettable) PUserBase *user;
/// Test to see if @c user has been set.
@property(nonatomic, readwrite) BOOL hasUser;

/// 0表示不是好友，1表示是好友
@property(nonatomic, readwrite) int32_t isFriend;

/// 0表示未关注，1表示已关注
@property(nonatomic, readwrite) int32_t isFollow;

/// 0表示成员，1表示是管理员，2表示是超级管理员
@property(nonatomic, readwrite) int32_t isManager;

/// 游戏化等级
@property(nonatomic, readwrite) int32_t gameLevel;

@end

#pragma mark - PChatIdMessage

typedef GPB_ENUM(PChatIdMessage_FieldNumber) {
  PChatIdMessage_FieldNumber_Uuid = 1,
  PChatIdMessage_FieldNumber_ChatId = 2,
};

/// 通用操作结果返回(通过uuid来获取chatid)
@interface PChatIdMessage : GPBMessage

///账户系统中的uuid
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

///对应聊天系统中的chatid
@property(nonatomic, readwrite, copy, null_resettable) NSString *chatId;

@end

#pragma mark - PChatIdListMessage

typedef GPB_ENUM(PChatIdListMessage_FieldNumber) {
  PChatIdListMessage_FieldNumber_ChatIdMapArray = 1,
};

/// 通用操作结果返回(通过uuids来获取chatids)
@interface PChatIdListMessage : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PChatIdMessage*> *chatIdMapArray;
/// The number of items in @c chatIdMapArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger chatIdMapArray_Count;

@end

#pragma mark - PQuerySingleMessage

typedef GPB_ENUM(PQuerySingleMessage_FieldNumber) {
  PQuerySingleMessage_FieldNumber_ErrorCode = 1,
  PQuerySingleMessage_FieldNumber_ErrorMsg = 2,
  PQuerySingleMessage_FieldNumber_ContentType = 3,
  PQuerySingleMessage_FieldNumber_Data_p = 4,
};

/// 通用操作结果返回(单个消息)
@interface PQuerySingleMessage : GPBMessage

///错误码：0为正确，其他均为出错
@property(nonatomic, readwrite) int32_t errorCode;

///错误描述信息
@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMsg;

///消息类型：TextMsg/PictureMsg/AudioMsg/AudioImageMsg/FileMsg
@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;

///对应该msg内容,对应是PTextMsg/PImageMsg/PAudioMsg/PAudioImageMsg/PFileMsg的数据的protobuff内容
@property(nonatomic, readwrite, copy, null_resettable) NSData *data_p;

@end

#pragma mark - PQueryMoreMessage

typedef GPB_ENUM(PQueryMoreMessage_FieldNumber) {
  PQueryMoreMessage_FieldNumber_ErrorCode = 1,
  PQueryMoreMessage_FieldNumber_ErrorMsg = 2,
  PQueryMoreMessage_FieldNumber_DataArray = 3,
};

/// 通用操作结果返回(多个消息，历史消息查询)
@interface PQueryMoreMessage : GPBMessage

///错误码：0为正确，其他均为出错
@property(nonatomic, readwrite) int32_t errorCode;

///错误描述信息
@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMsg;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PMessageData*> *dataArray;
/// The number of items in @c dataArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger dataArray_Count;

@end

#pragma mark - PMessageData

typedef GPB_ENUM(PMessageData_FieldNumber) {
  PMessageData_FieldNumber_OpenId = 1,
  PMessageData_FieldNumber_MessageId = 2,
  PMessageData_FieldNumber_CreatedAt = 3,
  PMessageData_FieldNumber_ConversationId = 4,
  PMessageData_FieldNumber_ContentType = 5,
  PMessageData_FieldNumber_Data_p = 6,
};

/// 多个消息中的消息存储结构，包括消息的创建时间。
@interface PMessageData : GPBMessage

///消息的openId
@property(nonatomic, readwrite, copy, null_resettable) NSString *openId;

///消息的openId
@property(nonatomic, readwrite, copy, null_resettable) NSString *messageId;

///消息的openId
@property(nonatomic, readwrite, copy, null_resettable) NSString *createdAt;

///消息的openId
@property(nonatomic, readwrite, copy, null_resettable) NSString *conversationId;

///消息类型：TextMsg/PictureMsg/AudioMsg/AudioImageMsg/FileMsg
@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;

///对应该msg内容,对应是PTextMsg/PImageMsg/PAudioMsg/PAudioImageMsg/PFileMsg的数据的protobuff内容
@property(nonatomic, readwrite, copy, null_resettable) NSData *data_p;

@end

#pragma mark - PTextMsg

typedef GPB_ENUM(PTextMsg_FieldNumber) {
  PTextMsg_FieldNumber_Text = 1,
};

/// 文本消息的内容
@interface PTextMsg : GPBMessage

///	文字消息内容
@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@end

#pragma mark - PImageMsg

typedef GPB_ENUM(PImageMsg_FieldNumber) {
  PImageMsg_FieldNumber_MediaId = 1,
  PImageMsg_FieldNumber_MediaSize = 2,
  PImageMsg_FieldNumber_MediaURL = 3,
};

/// 图片消息的内容
@interface PImageMsg : GPBMessage

///mediaId(图片id,String类型，必须字段。取值从/v1/media/upload 接口获得)
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaId;

///(图片大小,int类型，必须字段。取值从/v1/media/upload 接口返回)
@property(nonatomic, readwrite) int32_t mediaSize;

///media文件的url
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaURL;

@end

#pragma mark - PAudioMsg

typedef GPB_ENUM(PAudioMsg_FieldNumber) {
  PAudioMsg_FieldNumber_MediaId = 1,
  PAudioMsg_FieldNumber_Duration = 2,
  PAudioMsg_FieldNumber_AudioVolumns = 3,
  PAudioMsg_FieldNumber_MediaURL = 4,
};

/// 音频消息的内容
@interface PAudioMsg : GPBMessage

///mediaId(图片id,String类型，必须字段。取值从/v1/media/upload 接口获得)
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaId;

///(语音时长,int类型，可选字段)
@property(nonatomic, readwrite) int32_t duration;

///(声音波形,int类型数组，可选字段)
@property(nonatomic, readwrite) int32_t audioVolumns;

///media文件的url
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaURL;

@end

#pragma mark - PAudioImageMsg

typedef GPB_ENUM(PAudioImageMsg_FieldNumber) {
  PAudioImageMsg_FieldNumber_MediaId = 1,
  PAudioImageMsg_FieldNumber_MediaSize = 2,
  PAudioImageMsg_FieldNumber_Duration = 3,
  PAudioImageMsg_FieldNumber_AudioVolumns = 4,
  PAudioImageMsg_FieldNumber_MediaURL = 5,
};

/// 音频视频消息的内容
@interface PAudioImageMsg : GPBMessage

///mediaId(图片id,String类型，必须字段。取值从/v1/media/upload 接口获得)
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaId;

///(图片大小,int类型，必须字段。取值从/v1/media/upload 接口返回)
@property(nonatomic, readwrite) int32_t mediaSize;

///(语音时长,int类型，可选字段)
@property(nonatomic, readwrite) int32_t duration;

///(声音波形,int类型数组，可选字段)
@property(nonatomic, readwrite) int32_t audioVolumns;

///media文件的url
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaURL;

@end

#pragma mark - PFileMsg

typedef GPB_ENUM(PFileMsg_FieldNumber) {
  PFileMsg_FieldNumber_FileName = 1,
  PFileMsg_FieldNumber_FileType = 2,
  PFileMsg_FieldNumber_MediaId = 3,
  PFileMsg_FieldNumber_FileSize = 4,
  PFileMsg_FieldNumber_MediaURL = 5,
};

/// 文件消息的内容
@interface PFileMsg : GPBMessage

///fileName(文件名,String类型，必须字段)
@property(nonatomic, readwrite, copy, null_resettable) NSString *fileName;

///(文件id,String类型，必须字段)
@property(nonatomic, readwrite, copy, null_resettable) NSString *fileType;

///mediaId(图片id,String类型，必须字段。取值从/v1/media/upload 接口获得)
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaId;

///(图片大小,int类型，必须字段。取值从/v1/media/upload 接口返回)
@property(nonatomic, readwrite) int32_t fileSize;

///media文件的url
@property(nonatomic, readwrite, copy, null_resettable) NSString *mediaURL;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
