//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKStyleFactory, NSMutableDictionary;

@interface IKViewElementStyleFactory : NSObject
{
    IKStyleFactory *_styleFactory;
    NSMutableDictionary *_styleByITMLID;
}

@property(readonly, retain, nonatomic) NSMutableDictionary *styleByITMLID; // @synthesize styleByITMLID=_styleByITMLID;
@property(readonly, retain, nonatomic) IKStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;
- (void).cxx_destruct;
- (id)styleForElement:(id)arg1 classSelector:(id)arg2 inlineStyle:(id)arg3;
- (id)initWithDocumentStyles:(id)arg1;

@end

