//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IBUserDefinedRuntimeAttributeTypeDescription : NSObject
{
    BOOL _localized;
    id _defaultValue;
    NSString *_name;
    NSString *_identifier;
}

+ (id)customAttributeTypeWithIdentifier:(id)arg1 name:(id)arg2 defaultValue:(id)arg3 isLocalized:(BOOL)arg4;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic, getter=isLocalized) BOOL localized; // @synthesize localized=_localized;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 defaultValue:(id)arg3 isLocalized:(BOOL)arg4;

@end

