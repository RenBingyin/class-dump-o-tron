//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CornerActionItem.h"

@class LSUserActivityClientProcess;

@interface LocalCornerActionItem : CornerActionItem
{
    LSUserActivityClientProcess *_originatingClient;
}

- (void)setOriginatingClient:(id)arg1;
- (id)originatingClient;
- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 originatingClient:(id)arg4;

@end

