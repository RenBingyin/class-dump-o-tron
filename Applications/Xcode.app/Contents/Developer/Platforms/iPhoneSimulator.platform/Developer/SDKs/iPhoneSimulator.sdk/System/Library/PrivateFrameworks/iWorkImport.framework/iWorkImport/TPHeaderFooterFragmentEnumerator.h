//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class TPPageMaster;

__attribute__((visibility("hidden")))
@interface TPHeaderFooterFragmentEnumerator : NSEnumerator
{
    int _fragmentIndex;
    int _headerFooterType;
    TPPageMaster *_pageMaster;
}

@property(nonatomic) int headerFooterType; // @synthesize headerFooterType=_headerFooterType;
@property(nonatomic) int fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;
@property(retain, nonatomic) TPPageMaster *pageMaster; // @synthesize pageMaster=_pageMaster;
- (void)p_incrementHeaderFooterType;
- (void)p_incrementFragmentIndex;
- (void)dealloc;
- (id)nextObject;
- (id)initWithPageMaster:(id)arg1;

@end

