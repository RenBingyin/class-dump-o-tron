//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface samplerThreadInfo : NSObject
{
    unsigned long long _uniqueIdentifier;
    unsigned long long _lastThreadTime;
    id <CommonRawStack> _lastBacktrace;
}

@property(retain, nonatomic) id <CommonRawStack> lastBacktrace; // @synthesize lastBacktrace=_lastBacktrace;
@property(nonatomic) unsigned long long lastThreadTime; // @synthesize lastThreadTime=_lastThreadTime;
@property(nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;

@end

