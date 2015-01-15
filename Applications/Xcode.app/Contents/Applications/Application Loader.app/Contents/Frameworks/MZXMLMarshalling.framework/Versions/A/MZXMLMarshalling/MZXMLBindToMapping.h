//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MZXMLMarshalling/MZXMLMapping.h>

@class MZXMLClassMapping, NSString;

@interface MZXMLBindToMapping : MZXMLMapping
{
    NSString *_bindTo;
    NSString *_type;
    NSString *_node;
    NSString *_location;
    NSString *_references;
    NSString *_matches;
    NSString *_qNamePrefix;
    NSString *_autoNaming;
    MZXMLClassMapping *_childClassMapping;
    BOOL _reference;
}

- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)setChildClassMapping:(id)arg1;
- (id)childClassMapping;
- (id)autoNaming;
- (BOOL)isReference;
- (id)qNamePrefix;
- (id)matches;
- (id)references;
- (id)location;
- (int)nodeType;
- (id)node;
- (id)type;
- (id)bindTo;
- (void)dealloc;
- (id)initWithXML:(id)arg1 error:(id *)arg2;
- (id)initWithMinimalXML:(id)arg1 error:(id *)arg2;

@end

