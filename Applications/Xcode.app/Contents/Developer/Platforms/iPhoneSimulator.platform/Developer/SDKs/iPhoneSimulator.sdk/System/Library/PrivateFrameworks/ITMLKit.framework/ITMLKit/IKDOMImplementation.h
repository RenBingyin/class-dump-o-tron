//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSDOMImplementation.h"
#import "IKJSDOMImplementationLS.h"

@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>
{
}

- (id)createLSInput;
- (id)createLSParser:(long long)arg1:(id)arg2;
- (id)createLSSerializer;
- (id)createDocument:(id)arg1:(id)arg2;

@end

