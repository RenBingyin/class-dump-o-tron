//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPTablePartSection.h"

@class RAPPhotoPickerController;

__attribute__((visibility("hidden")))
@interface RAPLocationPickerPhotoSection : RAPTablePartSection
{
    RAPPhotoPickerController *_picker;
}

- (void).cxx_destruct;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;
- (double)heightForRowAtIndex:(long long)arg1;
- (void)_startPickingPhotoFromView:(id)arg1;
- (id)cellForRowAtIndex:(long long)arg1;
- (long long)rowsCount;
- (id)initWithPhotoPicker:(id)arg1 explanation:(id)arg2;

@end

