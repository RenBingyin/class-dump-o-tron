//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTTextStorage, NSArray, NSColor, NSMutableArray, NSString, XRSourceTabView;

@interface XRAnnotation : NSObject
{
    XRSourceTabView *_accessoryView;
    struct CGSize _minAccessoryViewSize;
    NSColor *_color;
    NSMutableArray *_commentArray;
    int _type;
    BOOL _showInspector;
    NSString *_snippet;
    DVTTextStorage *_textStorage;
    struct _NSRange _paragraphRange;
}

@property(nonatomic) struct _NSRange paragraphRange; // @synthesize paragraphRange=_paragraphRange;
@property(retain, nonatomic) DVTTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) XRSourceTabView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (id)description;
- (id)snippet;
- (void)setSnippet:(id)arg1;
- (long long)compareImportance:(id)arg1;
- (double)importance;
- (BOOL)showsInspector;
- (void)setShowsInspector:(BOOL)arg1;
@property(readonly, nonatomic) NSArray *dataItems; // @dynamic dataItems;
- (void)merge:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (id)xxxbottomBorderColor;
- (id)xxxbackgroundColor;
- (id)paragraphBorderHighlightColor;
- (id)paragraphHighlightColor;
- (void)drawParagraphHighlightWithFrame:(struct CGRect)arg1;
- (struct CGSize)calculateAnnotationViewSizeForBounds:(struct CGRect)arg1;
- (id)createAnnotationViewForTextView:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)commentArray;
@property(readonly, nonatomic) NSString *comment;
- (void)refreshValueAsValue:(int)arg1;
- (void)dealloc;
- (id)initWithComments:(id)arg1;
- (id)initWithComment:(id)arg1;

@end

