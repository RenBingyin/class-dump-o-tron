//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LeakAnalyzer : NSObject
{
    unsigned int _task;
}

+ (id)descriptionForLeakErrorCode:(int)arg1;
+ (id)serializedLeakDataWithCount:(unsigned int)arg1 leaks:(CDStruct_cbbc06c7 *)arg2 contents:(id *)arg3 references:(CDStruct_3b01f0aa)arg4 layouts:(id)arg5 timestamp:(unsigned long long)arg6;
+ (void)deserializeLeakData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)findLeaksWithOptions:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithTask:(unsigned int)arg1;

@end

