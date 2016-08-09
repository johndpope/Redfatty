// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: login.proto

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

@class PLevelInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - LoginRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface LoginRoot : GPBRootObject
@end

#pragma mark - PLogin

typedef GPB_ENUM(PLogin_FieldNumber) {
  PLogin_FieldNumber_NewUser = 5,
  PLogin_FieldNumber_Uuid = 6,
  PLogin_FieldNumber_Token = 7,
  PLogin_FieldNumber_Nickname = 8,
  PLogin_FieldNumber_ImgURL = 9,
  PLogin_FieldNumber_LoginTypesArray = 11,
  PLogin_FieldNumber_LevelInfo = 12,
};

@interface PLogin : GPBMessage

/// 是否新注册用户标识，true为新用户，false为老用户
@property(nonatomic, readwrite) BOOL newUser;

/// 用户ID
@property(nonatomic, readwrite, copy, null_resettable) NSString *uuid;

/// 统一访问令牌
@property(nonatomic, readwrite, copy, null_resettable) NSString *token;

/// 用户昵称
@property(nonatomic, readwrite, copy, null_resettable) NSString *nickname;

/// 用户头像URL
@property(nonatomic, readwrite, copy, null_resettable) NSString *imgURL;

/// 第三方登录类型(1 微信,2 微博,3 facebook,4 google)
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *loginTypesArray;
/// The number of items in @c loginTypesArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger loginTypesArray_Count;

/// 会员等级信息
@property(nonatomic, readwrite, strong, null_resettable) PLevelInfo *levelInfo;
/// Test to see if @c levelInfo has been set.
@property(nonatomic, readwrite) BOOL hasLevelInfo;

@end

#pragma mark - PLoginType

typedef GPB_ENUM(PLoginType_FieldNumber) {
  PLoginType_FieldNumber_TypesArray = 2,
};

@interface PLoginType : GPBMessage

///可用的第三方登录类型(1 微信,2 微博,3 facebook,4 google)
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *typesArray;
/// The number of items in @c typesArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger typesArray_Count;

@end

#pragma mark - PRUsername

typedef GPB_ENUM(PRUsername_FieldNumber) {
  PRUsername_FieldNumber_NamesArray = 2,
};

@interface PRUsername : GPBMessage

///推荐的用户名
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *namesArray;
/// The number of items in @c namesArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger namesArray_Count;

@end

#pragma mark - PToken

typedef GPB_ENUM(PToken_FieldNumber) {
  PToken_FieldNumber_SaltMd5 = 2,
  PToken_FieldNumber_CreateTime = 3,
};

/// token信息
@interface PToken : GPBMessage

/// uuid加上某个字符串后做md5运算得到的字符串
@property(nonatomic, readwrite, copy, null_resettable) NSString *saltMd5;

/// token产生时间
@property(nonatomic, readwrite) int64_t createTime;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
