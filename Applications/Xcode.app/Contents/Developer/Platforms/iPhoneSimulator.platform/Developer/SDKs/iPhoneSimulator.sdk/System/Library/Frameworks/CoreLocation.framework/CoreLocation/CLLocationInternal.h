//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocationMatchInfo;

@interface CLLocationInternal : NSObject
{
    CDStruct_dcdde258 fLocation;
    CLLocationMatchInfo *fMatchInfo;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientLocation:(CDStruct_dcdde258)arg1 matchInfo:(id)arg2;
- (id)initWithClientLocation:(CDStruct_dcdde258)arg1;

@end

