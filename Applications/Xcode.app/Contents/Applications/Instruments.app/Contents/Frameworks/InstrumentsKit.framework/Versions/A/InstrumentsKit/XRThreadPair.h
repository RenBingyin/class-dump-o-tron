//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XRThreadPair : NSObject
{
    unsigned long long _sTid;
    unsigned long long _dTid;
    unsigned long long _timestamp;
    unsigned int _cpuIndex;
}

@property unsigned int cpuIndex; // @synthesize cpuIndex=_cpuIndex;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property unsigned long long dTid; // @synthesize dTid=_dTid;
@property unsigned long long sTid; // @synthesize sTid=_sTid;

@end

