//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableColumn.h"

@class PFTInstrumentListCell;

@interface XRInstrumentTableColumn : NSTableColumn
{
    PFTInstrumentListCell *_basicDataCell;
    PFTInstrumentListCell *_recordingDataCell;
}

- (id)recordingDataCell;
- (id)basicDataCell;
- (id)dataCellForRow:(long long)arg1;

@end

