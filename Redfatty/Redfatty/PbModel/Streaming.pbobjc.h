// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: streaming.proto

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

@class PWebSiteInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - StreamingRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface StreamingRoot : GPBRootObject
@end

#pragma mark - PWebSiteInfo

typedef GPB_ENUM(PWebSiteInfo_FieldNumber) {
  PWebSiteInfo_FieldNumber_Name = 1,
  PWebSiteInfo_FieldNumber_URL = 2,
};

@interface PWebSiteInfo : GPBMessage

/// 中文名称
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/// 网站网址
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@end

#pragma mark - PWebSiteList

typedef GPB_ENUM(PWebSiteList_FieldNumber) {
  PWebSiteList_FieldNumber_ListArray = 1,
};

///支持的第三方直播网站列表,以后简称网站列表
@interface PWebSiteList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<PWebSiteInfo*> *listArray;
/// The number of items in @c listArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger listArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
