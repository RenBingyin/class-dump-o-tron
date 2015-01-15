//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, RAPTablePartsDataSource, UITableView, UIViewController<RAPPresentingViewController>;

__attribute__((visibility("hidden")))
@interface RAPTablePart : NSObject
{
    UITableView *_tableView;
    NSArray *_sections;
    UIViewController<RAPPresentingViewController> *_presentingViewController;
}

+ (_Bool)isHoldingChangesAffectingTableView:(id)arg1;
+ (void)holdChangesAffectingTableView:(id)arg1 withinBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak UIViewController<RAPPresentingViewController> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didChange;
- (void)presentingViewControllerViewDidLayoutSubviews;
- (void)tableViewTintColorDidChange;
@property(readonly, nonatomic) RAPTablePartsDataSource *dataSource;
- (void)_setTableView:(id)arg1;
- (void)holdChangesAffectingTableViewWithinBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSections:(id)arg1;
- (id)_dataSource;
- (id)init;

@end

