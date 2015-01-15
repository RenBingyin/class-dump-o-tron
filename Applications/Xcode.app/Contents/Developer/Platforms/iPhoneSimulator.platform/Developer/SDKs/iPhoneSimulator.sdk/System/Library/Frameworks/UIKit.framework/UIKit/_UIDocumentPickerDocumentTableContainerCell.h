//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDocumentPickerDocumentTableCell.h>

@class UIImageView, _UIDocumentPickerContainerModel;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentTableContainerCell : _UIDocumentPickerDocumentTableCell
{
    _UIDocumentPickerContainerModel *_model;
    id _observerToken;
    UIImageView *_containerIconView;
}

@property(retain, nonatomic) UIImageView *containerIconView; // @synthesize containerIconView=_containerIconView;
@property(retain, nonatomic) id observerToken; // @synthesize observerToken=_observerToken;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
- (void)reloadItem:(_Bool)arg1;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

