//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "NSLayoutManagerDelegate.h"

@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate>
{
    _Bool _singleLine;
    NSAttributedString *_attributedText;
    double _capOffsetFromBoundsTop;
    double _lastLineBaselineOffsetFromBoundsTop;
}

@property(nonatomic, getter=isSingleLine) _Bool singleLine; // @synthesize singleLine=_singleLine;
@property(nonatomic) double lastLineBaselineOffsetFromBoundsTop; // @synthesize lastLineBaselineOffsetFromBoundsTop=_lastLineBaselineOffsetFromBoundsTop;
@property(nonatomic) double capOffsetFromBoundsTop; // @synthesize capOffsetFromBoundsTop=_capOffsetFromBoundsTop;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 isSingleLine:(_Bool *)arg3;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)didMoveToWindow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

