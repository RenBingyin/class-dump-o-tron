//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PBXWidgetGroup : NSObject
{
    id _dataSource;
    id _delegate;
    NSMutableArray *_widgets;
}

- (void)saveWidgets;
- (void)updateWidgets;
- (void)removeWidget:(id)arg1;
- (void)addWidget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;

@end

