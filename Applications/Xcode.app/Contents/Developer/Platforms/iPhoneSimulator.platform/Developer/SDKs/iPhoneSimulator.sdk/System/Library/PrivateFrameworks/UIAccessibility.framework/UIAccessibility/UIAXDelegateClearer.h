//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIAXDelegateClearer : NSObject
{
    id delegatee;
    id delegate;
    SEL clearMethod;
}

@property(nonatomic) SEL clearMethod; // @synthesize clearMethod;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(nonatomic) id delegatee; // @synthesize delegatee;
- (void)dealloc;

@end

