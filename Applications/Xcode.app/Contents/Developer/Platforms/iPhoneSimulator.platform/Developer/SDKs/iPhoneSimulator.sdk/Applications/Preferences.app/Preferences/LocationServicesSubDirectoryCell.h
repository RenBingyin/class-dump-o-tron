//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

@class LocationUsageMixin;

@interface LocationServicesSubDirectoryCell : PSTableCell
{
    LocationUsageMixin *_location;
}

@property(readonly, nonatomic) LocationUsageMixin *location; // @synthesize location=_location;
- (_Bool)canReload;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

