//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RemoteBundleLoader : NSObject
{
    unsigned int _targetTask;
    int _targetPid;
    struct _CSTypeRef _remoteSymbolicator;
    struct _CSTypeRef _selfBundleSymbolicator;
    void *_remoteFunctionAddresses;
    const char *_bootstrappingText;
    const char *_secondLoaderText;
    struct _CSRange _bootstrappingCodeTextRange;
    struct _CSRange _secondLoaderRange;
}

+ (struct _CSTypeRef)symbolInSymbolicator:(struct _CSTypeRef)arg1 withName:(const char *)arg2 preferredOwner:(const char *)arg3;
- (_Bool)modifyTaskThreadsState:(CDUnknownFunctionPointerType)arg1;
- (_Bool)resumeAllThreads;
- (_Bool)suspendAllThreads;
- (_Bool)synchronouslyLoadMachO:(id)arg1 callingFunctionNamed:(id)arg2 argc:(int)arg3 argv:(const char **)arg4;
- (_Bool)scheduleLibraryLoad:(id)arg1 callingFunction:(id)arg2 argc:(int)arg3 argv:(const char **)arg4 error:(id *)arg5;
- (void)dealloc;
- (_Bool)libraryIsPresent:(id)arg1;
- (id)initWithTask:(unsigned int)arg1;

@end

