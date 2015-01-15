//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableLayout.h>

#import "TSWPTextEditingHostLayout.h"

@class NSString, TSWPShapeInfo, TSWPShapeLayout;

__attribute__((visibility("hidden")))
@interface TSWPTextHostLayout : TSDDrawableLayout <TSWPTextEditingHostLayout>
{
    TSWPShapeInfo *_editingShapeInfo;
    TSWPShapeLayout *_editingShapeLayout;
}

@property(retain, nonatomic) TSWPShapeInfo *editingShape; // @synthesize editingShape=_editingShapeInfo;
@property(readonly, nonatomic) TSWPShapeLayout *editingShapeLayout; // @synthesize editingShapeLayout=_editingShapeLayout;
- (void)updateChildrenFromInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

