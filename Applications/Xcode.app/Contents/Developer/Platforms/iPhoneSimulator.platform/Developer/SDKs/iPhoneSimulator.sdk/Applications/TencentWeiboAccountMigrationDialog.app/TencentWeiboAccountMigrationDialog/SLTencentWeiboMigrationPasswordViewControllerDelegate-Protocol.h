//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SLTencentWeiboMigrationPasswordViewController;

@protocol SLTencentWeiboMigrationPasswordViewControllerDelegate <NSObject>
- (void)userDidSignInToPasswordViewController:(SLTencentWeiboMigrationPasswordViewController *)arg1;
- (void)userWillSignInToPasswordViewController:(SLTencentWeiboMigrationPasswordViewController *)arg1 withPassword:(NSString *)arg2;
- (void)userDidCancelPasswordViewController:(SLTencentWeiboMigrationPasswordViewController *)arg1;
@end

