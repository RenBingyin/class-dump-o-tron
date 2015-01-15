//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface XRMemoryUsageEvent : NSObject <NSCoding>
{
    unsigned long long _timestamp;
    unsigned int _pageFaults;
    unsigned int _pageIns;
    unsigned int _copyOnWriteFaults;
    unsigned long long _virtualSize;
    unsigned long long _residentSize;
}

- (id)time;
- (id)residentSize;
- (id)virtualSize;
- (unsigned int)cowFaults;
- (unsigned int)pageIns;
- (unsigned int)pageFaults;
- (unsigned long long)rsize;
- (unsigned long long)vsize;
- (unsigned long long)timestamp;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRunTime:(unsigned long long)arg1 pageFaults:(unsigned int)arg2 pageIns:(unsigned int)arg3 cowFaults:(unsigned int)arg4 vsize:(unsigned long long)arg5 rsize:(unsigned long long)arg6;

@end

