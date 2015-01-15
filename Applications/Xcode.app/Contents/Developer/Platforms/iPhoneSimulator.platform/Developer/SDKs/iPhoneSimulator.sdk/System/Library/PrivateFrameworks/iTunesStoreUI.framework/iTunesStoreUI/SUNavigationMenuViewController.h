//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController
{
    SUNavigationMenu *_navigationMenu;
}

@property(readonly, nonatomic) SUNavigationMenu *navigationMenu; // @synthesize navigationMenu=_navigationMenu;
- (void)_protocolButtonAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)dealloc;
- (id)initWithNavigationMenu:(id)arg1;
- (id)init;

@end

