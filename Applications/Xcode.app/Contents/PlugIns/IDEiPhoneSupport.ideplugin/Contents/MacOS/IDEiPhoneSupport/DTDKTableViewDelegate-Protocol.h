//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTTableViewDelegate.h"
#import "NSObject.h"

@class DTDKTableView, NSIndexSet, NSMenu;

@protocol DTDKTableViewDelegate <NSObject, DVTTableViewDelegate>

@optional
- (NSMenu *)tableView:(DTDKTableView *)arg1 contextMenuForRows:(NSIndexSet *)arg2;
- (void)tableView:(DTDKTableView *)arg1 deleteRows:(NSIndexSet *)arg2;
@end

