//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractToOneOutletConnection.h"

@interface IBCocoaOutletConnection : IBAbstractToOneOutletConnection
{
}

+ (BOOL)isObjectValidOutletDestination:(id)arg1;
+ (BOOL)isObjectValidOutletSource:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)archiveConnection;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;

@end
