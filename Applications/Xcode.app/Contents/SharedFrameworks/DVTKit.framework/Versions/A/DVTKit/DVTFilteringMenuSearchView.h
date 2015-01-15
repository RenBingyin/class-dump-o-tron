//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class DVTSearchField, NSMenuItem, NSString;

@interface DVTFilteringMenuSearchView : NSView
{
    DVTSearchField *_searchField;
    NSMenuItem *_menuItem;
    NSString *_stringValue;
    NSString *_initialStringValue;
    id _delegate;
}

@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *initialStringValue; // @synthesize initialStringValue=_initialStringValue;
@property(retain) NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(retain) DVTSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

