//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface ABPostalAddressEditorNavigationController : UINavigationController
{
    id <ABPostalAddressEditorDelegate> _addressEditorDelegate;
}

@property(nonatomic) id <ABPostalAddressEditorDelegate> addressEditorDelegate; // @synthesize addressEditorDelegate=_addressEditorDelegate;
- (void)setTitle:(id)arg1;
- (id)initWithProperty:(int)arg1 label:(id)arg2;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressDictionary:(id)arg3 label:(id)arg4;
- (id)initWithContact:(id)arg1 property:(int)arg2 editNames:(_Bool)arg3;

@end

