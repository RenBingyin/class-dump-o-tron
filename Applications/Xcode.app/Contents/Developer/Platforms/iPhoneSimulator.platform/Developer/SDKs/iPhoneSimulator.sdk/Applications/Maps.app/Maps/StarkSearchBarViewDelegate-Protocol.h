//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, StarkSearchBarView, UIResponder;

@protocol StarkSearchBarViewDelegate <NSObject>

@optional
- (_Bool)starkSearchBarShouldForwardEvents:(StarkSearchBarView *)arg1;
- (UIResponder *)nextResponderForStarkSearchBar:(StarkSearchBarView *)arg1;
- (void)starkSearchBarChoseCancel:(StarkSearchBarView *)arg1;
- (void)starkSearchBarChosePerformSearch:(StarkSearchBarView *)arg1;
- (void)starkSearchBar:(StarkSearchBarView *)arg1 willEditSearchTextToString:(NSString *)arg2;
@end

