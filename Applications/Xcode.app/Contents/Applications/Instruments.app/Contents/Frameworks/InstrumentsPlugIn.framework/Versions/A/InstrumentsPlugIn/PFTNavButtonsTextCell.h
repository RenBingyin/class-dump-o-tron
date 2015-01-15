//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSImage, NSMutableArray, NSMutableDictionary, NSString;

@interface PFTNavButtonsTextCell : NSTextFieldCell
{
    NSMutableDictionary *_imageNameDictonaries;
    NSMutableDictionary *_buttonSelectors;
    NSMutableDictionary *_tooltipsForIdentifier;
    NSMutableArray *_buttonIdentifiers;
    unsigned long long _imageAlignment;
    BOOL _displayImages;
    BOOL _useAlternate;
    BOOL _scalesImages;
    NSImage *_image;
    NSString *_mouseOverIdentifier;
    NSString *_mouseDownIdentifier;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (struct CGSize)imageDrawSize;
- (struct CGRect)buttonRectForBounds:(struct CGRect)arg1;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)toolTipForPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)identifierForPoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)rectForButtonsBasedOnTitleRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (id)buttonImageForIdentifer:(id)arg1;
- (void)addButtonWithIdentifier:(id)arg1 imageNames:(id)arg2 action:(SEL)arg3;
- (void)setAlternate:(BOOL)arg1;
- (BOOL)scalesImages;
- (void)setScalesImages:(BOOL)arg1;
- (void)setShowsImages:(BOOL)arg1;
- (void)setImageAlignment:(unsigned long long)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

