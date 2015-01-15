//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UIKeyboardEmojiInput.h"
#import "UIKeyboardEmojiPressIndicationDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIKeyboardEmojiCategory, UIKeyboardEmojiInputController, UILabel, UIPageControl, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiPressIndicationDelegate>
{
    UIKeyboardEmojiInputController *_inputController;
    UIKeyboardEmojiCategory *_category;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    UILabel *_categoryLabel;
    UILabel *_optionalDescription;
    NSMutableArray *_pages;
    int _currentPage;
    UIView *_pressIndicator;
    _Bool _whiteText;
}

@property _Bool whiteText; // @synthesize whiteText=_whiteText;
@property(retain, nonatomic) UIView *pressIndicator; // @synthesize pressIndicator=_pressIndicator;
- (void)goToFirstPage;
- (void)setScrollDelay:(double)arg1;
- (int)currentPage;
- (void)ensureSurrounded;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)pageChanged;
- (void)saveFirstVisibleEmojiIndex;
- (void)reloadForCategory:(id)arg1;
- (long long)emojiCountPerPageForRotation;
- (void)clearPages;
- (void)interruptScrolling;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutPages;
- (void)delayLayout;
- (void)layoutRecents;
- (void)doLayout;
- (void)forceLayout;
- (_Bool)shouldCache;
- (void)setRenderConfig:(id)arg1;
- (void)removePressIndicator;
- (void)installPressIndicatorAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

