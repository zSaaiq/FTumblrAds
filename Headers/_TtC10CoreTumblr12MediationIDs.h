//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC10CoreTumblr12MediationIDs : NSObject
{
    MISSING_TYPE *mediationCandidateID;
    MISSING_TYPE *supplyOpportunityInstanceID;
    MISSING_TYPE *supplyProviderID;
    MISSING_TYPE *streamSessionID;
    MISSING_TYPE *supplyRequestID;
    MISSING_TYPE *streamGlobalPosition;
    MISSING_TYPE *winningBid;
    MISSING_TYPE *placementID;
}

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (void)updateIDsWith:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *placementID;
@property(nonatomic, copy) NSString *supplyRequestID;
@property(nonatomic, copy) NSString *streamSessionID;
@property(nonatomic, copy) NSString *supplyProviderID;
@property(nonatomic, copy) NSString *supplyOpportunityInstanceID;
@property(nonatomic, readonly) NSString *mediationCandidateID;

@end
