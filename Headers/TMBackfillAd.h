//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMTimelineObject.h"

@class Beacons, NSArray, NSSet, NSString, TMBackfillAdCreative, _TtC10CoreTumblr12MediationIDs, _TtC10CoreTumblr14AdInstanceData;

@interface TMBackfillAd : TMTimelineObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
@property(nonatomic, readonly) NSString *placementIdentifier;
@property(nonatomic, readonly) NSString *sponsoredBadgeURL;
@property(nonatomic, readonly) int advertisementType;
@property(nonatomic, readonly) NSString *impressionIdentifier;
- (void)updateWithDictionary:(id)arg1;
@property(nonatomic) int type;

// Remaining properties
@property(nonatomic, retain) _TtC10CoreTumblr14AdInstanceData *adInstanceData; // @dynamic adInstanceData;
@property(nonatomic) int backfillAdAdvertisementType; // @dynamic backfillAdAdvertisementType;
@property(nonatomic, copy) NSString *backfillAdSponsoredBadgeURL; // @dynamic backfillAdSponsoredBadgeURL;
@property(nonatomic, retain) NSSet *beaconRules; // @dynamic beaconRules;
@property(nonatomic, retain) Beacons *beacons; // @dynamic beacons;
@property(nonatomic, copy) NSArray *clickEventURLs; // @dynamic clickEventURLs;
@property(nonatomic) int context; // @dynamic context;
@property(nonatomic, retain) TMBackfillAdCreative *creative; // @dynamic creative;
@property(nonatomic, copy) NSString *headerText; // @dynamic headerText;
@property(nonatomic, copy) NSArray *impressionEventURLs; // @dynamic impressionEventURLs;
@property(nonatomic, retain) _TtC10CoreTumblr12MediationIDs *mediationIDs; // @dynamic mediationIDs;

@end
