//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Communicator.h"

@interface RefreshCommunicator : Communicator
{
}

- (void)_parseCSCImpressionBeacon:(id)arg1 csc:(id)arg2;
- (void)_parseAdObjects:(id)arg1;
- (id)getKey:(id)arg1 playerDataItem:(id)arg2;
- (void)setNewRedirect:(id)arg1 adResponseObj:(id)arg2;
- (_Bool)allowPrefetch;
- (id)processAdXml:(id)arg1;
- (void)getNewAd:(id)arg1 adSpec:(id)arg2 playerDataItem:(id)arg3 adResponseObj:(id)arg4 adSource:(id)arg5;
- (id)getNFLLiveMidrollAdResponse:(id)arg1 adSpec:(id)arg2 playerDataItem:(id)arg3;
- (void)prefetch:(id)arg1 adBreak:(id)arg2 adSpec:(id)arg3 playerDataItem:(id)arg4;

@end

