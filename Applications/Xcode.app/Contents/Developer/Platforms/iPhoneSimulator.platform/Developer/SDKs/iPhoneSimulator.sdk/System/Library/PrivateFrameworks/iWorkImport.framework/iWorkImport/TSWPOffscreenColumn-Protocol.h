//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TSWPOffscreenColumn <NSObject>
@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
@property(readonly, nonatomic) unsigned long long startAnchoredCharIndex;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned long long startCharIndex;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
@end

