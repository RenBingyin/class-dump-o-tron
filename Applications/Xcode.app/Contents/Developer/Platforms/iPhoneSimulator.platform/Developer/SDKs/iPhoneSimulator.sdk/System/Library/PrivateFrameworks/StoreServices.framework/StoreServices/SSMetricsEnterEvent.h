//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsEnterEvent : SSMetricsBaseEvent
{
}

- (id)description;
@property(retain, nonatomic) NSString *referringURL;
@property(retain, nonatomic) NSString *referringAppName;
- (void)setEnterTypeWithLaunchReason:(long long)arg1;
@property(retain, nonatomic) NSString *enterType;
- (id)init;

@end

