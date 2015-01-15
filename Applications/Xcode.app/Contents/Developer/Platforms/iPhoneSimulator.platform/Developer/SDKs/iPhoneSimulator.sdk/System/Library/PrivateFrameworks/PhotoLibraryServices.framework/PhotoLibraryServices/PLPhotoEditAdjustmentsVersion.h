//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLPhotoEditAdjustmentsVersion : NSObject
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_platform;
}

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)description;
- (_Bool)isEqualToAdjustmentVersion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSString *string;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;

@end

