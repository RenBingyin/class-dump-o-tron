//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UITableViewDelegate.h"

@class ABCardGroup, ABContactView;

@protocol ABContactViewDelegate <NSObject, UITableViewDelegate>

@optional
- (void)contactView:(ABContactView *)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(ABCardGroup *)arg3;
- (double)contactView:(ABContactView *)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(ABCardGroup *)arg3;
- (long long)numberOfGroupsInContactView:(ABContactView *)arg1;
@end
