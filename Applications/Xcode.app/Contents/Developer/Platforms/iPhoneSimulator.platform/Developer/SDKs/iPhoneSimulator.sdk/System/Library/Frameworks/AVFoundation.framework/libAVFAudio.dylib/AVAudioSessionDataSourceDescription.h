//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface AVAudioSessionDataSourceDescription : NSObject
{
    void *_impl;
}

+ (id)privateCreateOrConfigureArray:(id)arg1 withRawSourceArray:(id)arg2 portID:(id)arg3;
- (id)privateGetOwningPortID;
- (void)configurePolarPatterns:(id)arg1;
- (id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2;
- (_Bool)privateMatchesRawDescription:(id)arg1;
- (struct DataSourceDescriptionImpl *)privateGetImplementation;
- (_Bool)setPreferredPolarPattern:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly) NSArray *supportedPolarPatterns;
@property(readonly) NSString *preferredPolarPattern;
@property(readonly) NSString *selectedPolarPattern;
@property(readonly) NSString *orientation;
@property(readonly) NSString *location;
@property(readonly) NSString *dataSourceName;
@property(readonly) NSNumber *dataSourceID;
- (unsigned long long)hash;
- (_Bool)isEqualToDataSource:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

