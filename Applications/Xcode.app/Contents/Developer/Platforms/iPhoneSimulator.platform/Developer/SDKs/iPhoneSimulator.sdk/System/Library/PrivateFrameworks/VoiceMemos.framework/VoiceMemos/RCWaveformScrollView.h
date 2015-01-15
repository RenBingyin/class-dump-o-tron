//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface RCWaveformScrollView : UIScrollView
{
    unsigned long long _ignoreContentOffsetChangesCount;
}

- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2 inPresentationLayer:(_Bool)arg3;
- (struct CGPoint)contentOffsetInPresentationLayer:(_Bool)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)endIgnoringContentOffsetChanges;
- (void)beginIgnoringContentOffsetChanges;

@end

