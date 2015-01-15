//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MapsDebugTableSection, NSMutableArray, NSString, UITableViewCell;

__attribute__((visibility("hidden")))
@interface MapsDebugTableRow : NSObject
{
    NSMutableArray *_controlsToClearTargetsFromOnReuse;
    MapsDebugTableSection *_section;
    NSString *_title;
    NSString *_subtitle;
    CDUnknownBlockType _prepareContentBlock;
    CDUnknownBlockType _selectionAction;
    UITableViewCell *_currentCell;
}

@property(retain, nonatomic) UITableViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(copy, nonatomic) CDUnknownBlockType selectionAction; // @synthesize selectionAction=_selectionAction;
@property(copy, nonatomic) CDUnknownBlockType prepareContentBlock; // @synthesize prepareContentBlock=_prepareContentBlock;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak MapsDebugTableSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long cellStyle;
- (void)configureCell:(id)arg1;
- (id)cellForTableView:(id)arg1;
- (void)_clearAllControlTargetsForReuse;
- (void)addControlThatNeedsClearingTargetOnReuse:(id)arg1;
@property(readonly, nonatomic) NSString *reuseIdentifier;
- (void)invalidate;
- (void)dealloc;

@end

