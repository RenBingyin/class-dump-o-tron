//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IBToolbarItemContainer;

@interface IBToolbarConfigurationView : NSView
{
    IBToolbarItemContainer *container;
    NSView *containerPlaceholder;
    id delegate;
}

- (void)done:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)itemContainer;
- (id)initWithItems:(id)arg1;

@end

