//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKBrush.h>

@class NSPredicate;

@interface GKConditionBrush : GKBrush
{
    NSPredicate *_predicate;
    GKBrush *_yesBrush;
    GKBrush *_noBrush;
}

@property(retain, nonatomic) GKBrush *noBrush; // @synthesize noBrush=_noBrush;
@property(retain, nonatomic) GKBrush *yesBrush; // @synthesize yesBrush=_yesBrush;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (struct CGSize)sizeForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

