//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAKWindow, WebDataSource;

@protocol WebDocumentView <NSObject>
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(WAKWindow *)arg1;
- (void)layout;
- (void)setNeedsLayout:(_Bool)arg1;
- (void)dataSourceUpdated:(WebDataSource *)arg1;
- (void)setDataSource:(WebDataSource *)arg1;
@end

