//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _WKVisitedLinkProvider : NSObject
{
    struct RefPtr<WebKit::VisitedLinkProvider> _visitedLinkProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAll;
- (void)addVisitedLinkWithURL:(id)arg1;
- (id)init;

@end

