//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDataSource.h"

@class NSArray, NSIndexPath, UITableView;

@protocol MPUActionTableViewDataSource <UITableViewDataSource>
+ (NSArray *)actionCellConfigurationClasses;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)reloadActionRowsAnimated:(_Bool)arg1;
- (long long)numberOfActionRowsInTableView:(UITableView *)arg1;
- (Class)cellConfigurationForIndexPath:(NSIndexPath *)arg1;
@end

