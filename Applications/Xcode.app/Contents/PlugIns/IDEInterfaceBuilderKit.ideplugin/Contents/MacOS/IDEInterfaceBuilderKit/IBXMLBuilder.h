//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXMLElement;

@interface IBXMLBuilder : NSObject
{
    NSXMLElement *_currentElement;
}

+ (id)elementWithName:(id)arg1 scope:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSXMLElement *currentElement; // @synthesize currentElement=_currentElement;
- (void).cxx_destruct;
- (id)push:(id)arg1 scope:(CDUnknownBlockType)arg2;

@end

