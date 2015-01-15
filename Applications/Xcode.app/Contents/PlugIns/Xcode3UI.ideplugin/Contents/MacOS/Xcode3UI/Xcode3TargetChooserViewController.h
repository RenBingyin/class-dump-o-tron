//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "NSPathControlDelegate.h"

@class IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, IDEWorkspace, NSArray, NSString;

@interface Xcode3TargetChooserViewController : IDEViewController <NSPathControlDelegate>
{
    IDEWorkspace *_rootWorkspace;
    IDEPathControl *_pathControl;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    NSArray *_blueprintProviderWrappers;
    NSArray *_blueprintProviderNavigables;
    IDENavigableItem *_selectedBlueprintNavigable;
}

+ (id)keyPathsForValuesAffectingSelectedBlueprint;
@property(retain, nonatomic) IDENavigableItem *selectedBlueprintNavigable; // @synthesize selectedBlueprintNavigable=_selectedBlueprintNavigable;
@property(retain, nonatomic) NSArray *blueprintProviderNavigables; // @synthesize blueprintProviderNavigables=_blueprintProviderNavigables;
@property(retain, nonatomic) NSArray *blueprintProviderWrappers; // @synthesize blueprintProviderWrappers=_blueprintProviderWrappers;
@property(readonly, nonatomic) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(readonly, nonatomic) IDEPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(readonly, nonatomic) IDEWorkspace *rootWorkspace; // @synthesize rootWorkspace=_rootWorkspace;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(retain, nonatomic) id <IDEBlueprint> selectedBlueprint;
- (void)loadView;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

