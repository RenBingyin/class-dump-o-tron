//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineView.h"

@interface UIAOutlineView : NSOutlineView
{
    BOOL _expandNewRows;
}

@property(readonly) BOOL expandNewRows; // @synthesize expandNewRows=_expandNewRows;
- (void)addNewItems:(id)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)showQuicklookPanel;
- (void)keyDown:(id)arg1;
- (void)copy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

