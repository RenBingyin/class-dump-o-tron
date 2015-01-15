//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SKUIViewReusePool;

@interface SKUIViewReuseView : UIView
{
    SKUIViewReusePool *_viewReusePool;
    NSArray *_views;
}

@property(readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_views;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

