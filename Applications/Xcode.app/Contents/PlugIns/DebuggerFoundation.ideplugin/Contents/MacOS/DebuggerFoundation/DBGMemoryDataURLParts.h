//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DBGMemoryDataURLParts : NSObject
{
    int _processID;
    NSString *_memoryDataUUID;
}

+ (id)urlParts:(id)arg1;
+ (BOOL)isMemoryDataURL:(id)arg1;
@property(readonly) NSString *memoryDataUUID; // @synthesize memoryDataUUID=_memoryDataUUID;
@property(readonly) int processID; // @synthesize processID=_processID;
- (void).cxx_destruct;
- (id)_initWithProcessID:(int)arg1 memoryDataUUID:(id)arg2;

@end

