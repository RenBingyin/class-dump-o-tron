//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEInspectorKeyPath, NSArray;

@interface IDEInspectorTextEnumerationOptionGroup : NSObject
{
    BOOL _dynamic;
    IDEInspectorKeyPath *_valuesKeyPath;
    IDEInspectorKeyPath *_displayValueKeyPath;
    IDEInspectorKeyPath *_displayImagesKeyPath;
    NSArray *_options;
}

+ (id)optionGroupsForInspectorProperty:(id)arg1;
@property(readonly) NSArray *options; // @synthesize options=_options;
@property(readonly, getter=isDynamic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(readonly) IDEInspectorKeyPath *displayImagesKeyPath; // @synthesize displayImagesKeyPath=_displayImagesKeyPath;
@property(readonly) IDEInspectorKeyPath *displayValueKeyPath; // @synthesize displayValueKeyPath=_displayValueKeyPath;
@property(readonly) IDEInspectorKeyPath *valuesKeyPath; // @synthesize valuesKeyPath=_valuesKeyPath;
- (void).cxx_destruct;
- (id)initWithXMLElement:(id)arg1 targettingInspectorProperty:(id)arg2;

@end

