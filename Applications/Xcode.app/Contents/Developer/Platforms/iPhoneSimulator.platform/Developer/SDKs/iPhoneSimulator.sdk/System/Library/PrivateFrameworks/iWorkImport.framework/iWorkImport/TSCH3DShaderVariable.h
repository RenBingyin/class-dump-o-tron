//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderVariable : NSObject <NSCopying>
{
    NSString *mName;
    struct NSString *mType;
    struct NSString *mPrecision;
    unsigned long long mArraySize;
    struct TSCH3DShaderType mShaderType;
    _Bool mIsSpecial;
    TSCH3DShaderVariable *mGenericName;
    NSArray *mElements;
}

+ (id)variableWithName:(id)arg1 type:(struct NSString *)arg2 precision:(struct NSString *)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType)arg5 isSpecial:(_Bool)arg6 generic:(id)arg7;
@property(readonly, nonatomic) TSCH3DShaderVariable *genericName; // @synthesize genericName=mGenericName;
@property(readonly, nonatomic) _Bool isSpecial; // @synthesize isSpecial=mIsSpecial;
@property(readonly, nonatomic) struct TSCH3DShaderType shaderType; // @synthesize shaderType=mShaderType;
@property(readonly, nonatomic) unsigned long long arraySize; // @synthesize arraySize=mArraySize;
@property(readonly, nonatomic) NSString *precision; // @synthesize precision=mPrecision;
@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
- (id).cxx_construct;
- (id)variableAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct TSCH3DShaderType initialLinkType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(struct NSString *)arg2 precision:(struct NSString *)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType)arg5 isSpecial:(_Bool)arg6 generic:(id)arg7;

@end

