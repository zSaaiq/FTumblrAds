//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VDMSAdMetadata-Protocol.h"

@class NSDictionary, NSString;

@interface YVMidrollCommandAdMetadata : NSObject <VDMSAdMetadata>
{
    NSDictionary *_adBreakDetails;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *adBreakDetails; // @synthesize adBreakDetails=_adBreakDetails;
@property(readonly, nonatomic) NSString *mimeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

