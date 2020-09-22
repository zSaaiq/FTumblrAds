//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol VDMSStoreData;

@interface VDMSTransactionContext : NSObject
{
    _Bool _positionChangeFromProgress;
    NSDate *_timestamp;
    id <VDMSStoreData> _currentData;
    id <VDMSStoreData> _originalData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <VDMSStoreData> originalData; // @synthesize originalData=_originalData;
@property(retain, nonatomic) id <VDMSStoreData> currentData; // @synthesize currentData=_currentData;
@property(nonatomic) _Bool positionChangeFromProgress; // @synthesize positionChangeFromProgress=_positionChangeFromProgress;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)init;

@end

