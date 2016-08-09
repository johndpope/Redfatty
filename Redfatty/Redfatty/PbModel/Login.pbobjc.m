// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: login.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

 #import "Login.pbobjc.h"
 #import "Account.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - LoginRoot

@implementation LoginRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPBDebugCheckRuntimeVersion();
    registry = [[GPBExtensionRegistry alloc] init];
    [registry addExtensions:[AccountRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - LoginRoot_FileDescriptor

static GPBFileDescriptor *LoginRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPBDebugCheckRuntimeVersion();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"common"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - PLogin

@implementation PLogin

@dynamic newUser;
@dynamic uuid;
@dynamic token;
@dynamic nickname;
@dynamic imgURL;
@dynamic loginTypesArray, loginTypesArray_Count;
@dynamic hasLevelInfo, levelInfo;

typedef struct PLogin__storage_ {
  uint32_t _has_storage_[1];
  NSString *uuid;
  NSString *token;
  NSString *nickname;
  NSString *imgURL;
  GPBInt32Array *loginTypesArray;
  PLevelInfo *levelInfo;
} PLogin__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "newUser",
        .dataTypeSpecific.className = NULL,
        .number = PLogin_FieldNumber_NewUser,
        .hasIndex = 0,
        .offset = 1,  // Stored in _has_storage_ to save space.
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "uuid",
        .dataTypeSpecific.className = NULL,
        .number = PLogin_FieldNumber_Uuid,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(PLogin__storage_, uuid),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "token",
        .dataTypeSpecific.className = NULL,
        .number = PLogin_FieldNumber_Token,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(PLogin__storage_, token),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "nickname",
        .dataTypeSpecific.className = NULL,
        .number = PLogin_FieldNumber_Nickname,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(PLogin__storage_, nickname),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "imgURL",
        .dataTypeSpecific.className = NULL,
        .number = PLogin_FieldNumber_ImgURL,
        .hasIndex = 5,
        .offset = (uint32_t)offsetof(PLogin__storage_, imgURL),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "loginTypesArray",
        .dataTypeSpecific.className = NULL,
        .number = PLogin_FieldNumber_LoginTypesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(PLogin__storage_, loginTypesArray),
        .flags = GPBFieldRepeated | GPBFieldPacked | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "levelInfo",
        .dataTypeSpecific.className = GPBStringifySymbol(PLevelInfo),
        .number = PLogin_FieldNumber_LevelInfo,
        .hasIndex = 6,
        .offset = (uint32_t)offsetof(PLogin__storage_, levelInfo),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PLogin class]
                                     rootClass:[LoginRoot class]
                                          file:LoginRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PLogin__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\004\005\007\000\t\006\000\013\000loginTypes\000\014\t\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - PLoginType

@implementation PLoginType

@dynamic typesArray, typesArray_Count;

typedef struct PLoginType__storage_ {
  uint32_t _has_storage_[1];
  GPBInt32Array *typesArray;
} PLoginType__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "typesArray",
        .dataTypeSpecific.className = NULL,
        .number = PLoginType_FieldNumber_TypesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(PLoginType__storage_, typesArray),
        .flags = GPBFieldRepeated | GPBFieldPacked,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PLoginType class]
                                     rootClass:[LoginRoot class]
                                          file:LoginRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PLoginType__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - PRUsername

@implementation PRUsername

@dynamic namesArray, namesArray_Count;

typedef struct PRUsername__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *namesArray;
} PRUsername__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "namesArray",
        .dataTypeSpecific.className = NULL,
        .number = PRUsername_FieldNumber_NamesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(PRUsername__storage_, namesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PRUsername class]
                                     rootClass:[LoginRoot class]
                                          file:LoginRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PRUsername__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - PToken

@implementation PToken

@dynamic saltMd5;
@dynamic createTime;

typedef struct PToken__storage_ {
  uint32_t _has_storage_[1];
  NSString *saltMd5;
  int64_t createTime;
} PToken__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "saltMd5",
        .dataTypeSpecific.className = NULL,
        .number = PToken_FieldNumber_SaltMd5,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(PToken__storage_, saltMd5),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "createTime",
        .dataTypeSpecific.className = NULL,
        .number = PToken_FieldNumber_CreateTime,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(PToken__storage_, createTime),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PToken class]
                                     rootClass:[LoginRoot class]
                                          file:LoginRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PToken__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\002\002EB\000\003J\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
