//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString;

@interface CPLCodingPropertyEntry : NSObject
{
    BOOL _propertyType;
    _Bool _readOnly;
    NSSet *_propertyClasses;
    SEL _propertyGetter;
    SEL _propertySetter;
    CDUnknownFunctionPointerType _propertyGetterIMP;
    CDUnknownFunctionPointerType _propertySetterIMP;
    struct objc_ivar *_ivar;
    NSString *_structName;
}

@property(copy, nonatomic) NSString *structName; // @synthesize structName=_structName;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) struct objc_ivar *ivar; // @synthesize ivar=_ivar;
@property(nonatomic) CDUnknownFunctionPointerType propertySetterIMP; // @synthesize propertySetterIMP=_propertySetterIMP;
@property(nonatomic) CDUnknownFunctionPointerType propertyGetterIMP; // @synthesize propertyGetterIMP=_propertyGetterIMP;
@property(nonatomic) SEL propertySetter; // @synthesize propertySetter=_propertySetter;
@property(nonatomic) SEL propertyGetter; // @synthesize propertyGetter=_propertyGetter;
@property(retain, nonatomic) NSSet *propertyClasses; // @synthesize propertyClasses=_propertyClasses;
@property(nonatomic) BOOL propertyType; // @synthesize propertyType=_propertyType;
- (void).cxx_destruct;
- (void)setIvarValue:(id)arg1 forObject:(id)arg2;
- (id)ivarValueForObject:(id)arg1;
- (void *)ivarAddrForObject:(id)arg1;

@end

