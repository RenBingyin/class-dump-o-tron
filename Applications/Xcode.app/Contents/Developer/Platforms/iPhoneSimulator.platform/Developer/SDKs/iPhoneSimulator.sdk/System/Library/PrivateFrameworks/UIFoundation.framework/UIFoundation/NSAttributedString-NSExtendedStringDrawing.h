//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAttributedString.h"

@interface NSAttributedString (NSExtendedStringDrawing)
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 context:(id)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 withTrackingAdjustment:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 scaledByScaleFactor:(double)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 context:(id)arg3;
@end

