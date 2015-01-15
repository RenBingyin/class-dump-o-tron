//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSDictionary, NSFont, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface DTGraph : NSView
{
    id _model;
    NSDictionary *_attributes;
    NSFont *_textFont;
    NSFont *_titleTextFont;
    NSFont *_subTitleTextFont;
    NSColor *_textColor;
    NSColor *_alternateTextColor;
    int _textPathStyle;
    NSColor *_lineColor;
    NSColor *_backgroundColor;
    NSString *_subTitle;
    long long _borderType;
    NSMutableDictionary *_gradientMap;
    NSTimer *_updateTimer;
    BOOL _isObserving;
    NSString *_entriesKeyPath;
    NSString *_subEntriesKeyPath;
    NSString *_xAxisKeyPath;
    NSString *_yAxisKeyPath;
    NSString *_labelKeyPath;
    NSString *_colorKeyPath;
    NSString *_backgroundColorKeyPath;
    NSString *_iconKeyPath;
    NSString *_shapeKeyPath;
    NSString *_lineFilledKeyPath;
    NSString *_nodeAKeyPath;
    NSString *_nodeBKeyPath;
    NSString *_binStartKeyPath;
    NSString *_binEndKeyPath;
    NSString *_binNameKeyPath;
    NSString *_legendKeyPath;
    struct {
        unsigned int labelKeyPathMissing:1;
        unsigned int colorKeyPathMissing:1;
        unsigned int backgroundColorKeyPathMissing:1;
        unsigned int iconKeyPathMissing:1;
        unsigned int lineFilledKeyPathMissing:1;
        unsigned int shapeKeyPathMissing:1;
        unsigned int RESERVED:25;
    } _keyPathFlags;
    id <DTGraphDelegate> _delegate;
    struct {
        unsigned int implementsDrawEntryInRect:1;
        unsigned int implementsDrawEntryInPath:1;
        unsigned int implementsDrawEntrySeriesInPath:1;
        unsigned int implementsDrawEntryNodeInPath:1;
        unsigned int implementsIconForGraphEntry:1;
        unsigned int implementsColorForGraphEntry:1;
        unsigned int implementsBackgroundColorForGraphEntry:1;
        unsigned int implementsLabelForGraphEntry:1;
        unsigned int implementsLineFilledForGraphEntry:1;
        unsigned int implementsShapeForGraphEntry:1;
        unsigned int implementsPathStyleForGraphEntry:1;
        unsigned int implementsWillDrawCellForGraphEntry:1;
        unsigned int implementsImageOfEntryInRect:1;
        unsigned int implementsTranslateValueKeypath:1;
        unsigned int RESERVED:17;
    } _delegateFlags;
    unsigned long long verboseLevel;
    NSMutableArray *_observedModels;
}

+ (id)basicColorForNumber:(long long)arg1;
+ (id)translateValue:(id)arg1 ofType:(id)arg2;
+ (id)sampleAttributes;
+ (void)initialize;
@property unsigned long long verboseLevel; // @synthesize verboseLevel;
- (BOOL)validateModel:(id)arg1;
- (void)_sizeToFit:(id)arg1;
- (void)drawPlaceholder:(struct CGRect)arg1;
- (struct CGRect)calculatePlaceholderBoundsWithinBounds:(struct CGRect)arg1;
- (BOOL)showsOnlyStartAndEndLabels;
- (BOOL)requiresAxisLabels;
- (double)titleHeightInBounds:(struct CGRect)arg1;
- (BOOL)requiresPlaceholder;
- (BOOL)isModelEmpty;
- (void)drawSubTitle:(struct CGRect)arg1;
- (void)drawTitle:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
- (struct CGRect)calculateSubTitleBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateTitleBoundsWithinBounds:(struct CGRect)arg1;
- (BOOL)requiresTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)legendKeyPath;
- (id)binNameKeyPath;
- (id)binEndKeyPath;
- (id)binStartKeyPath;
- (id)nodeBKeyPath;
- (id)nodeAKeyPath;
- (id)shapeKeyPath;
- (id)iconKeyPath;
- (id)lineFilledKeyPath;
- (id)backgroundColorKeyPath;
- (id)colorKeyPath;
- (id)labelKeyPath;
- (id)yAxisKeyPath;
- (id)xAxisKeyPath;
- (id)subEntriesKeyPath;
- (id)entriesKeyPath;
- (id)themeGradientWithColor:(id)arg1;
- (long long)borderType;
- (void)setBorderType:(long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)subTitleFont;
- (void)setSubTitleFont:(id)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)alternateTextColor;
- (void)setAlternateTextColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (int)shapeForEntry:(id)arg1;
- (id)iconForEntry:(id)arg1;
- (BOOL)lineFilledForEntry:(id)arg1;
- (id)labelForEntry:(id)arg1;
- (id)backgroundColorForEntry:(id)arg1;
- (id)colorForEntry:(id)arg1;
- (id)_drawingAttributesForSubTitle;
- (id)_drawingAttributesForTitle;
- (id)_sharedFontAttributes;
- (int)textPathStyle;
- (id)lineSelectionShadow;
- (id)emptyShadow;
- (id)alternateShadow;
- (id)lineShadow;
- (id)labelGraphShadow;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (void)clearCache;
- (id)delegate;
- (void)setDelegate:(id)arg1;
@property(retain) id model;
- (void)clearAttributes;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)observeModel:(BOOL)arg1;
- (void)_updateGraph:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)translateValue:(id)arg1 keypath:(id)arg2;

@end

