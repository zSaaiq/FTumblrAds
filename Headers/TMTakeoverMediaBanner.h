//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMTimelineObject.h"

@class NSArray, NSManagedObject, NSString;

@interface TMTakeoverMediaBanner : TMTimelineObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
@property(nonatomic, readonly) NSString *impressionIdentifier;
@property(nonatomic) int type;
- (void)updateWithDictionary:(id)arg1;
@property(nonatomic, readonly) _Bool isDisplayable;

// Remaining properties
@property(nonatomic) int advertisementType; // @dynamic advertisementType;
@property(nonatomic, copy) NSString *bannerText; // @dynamic bannerText;
@property(nonatomic, retain) NSManagedObject *blog; // @dynamic blog;
@property(nonatomic) _Bool clickthrough; // @dynamic clickthrough;
@property(nonatomic) _Bool disableAutoLooping; // @dynamic disableAutoLooping;
@property(nonatomic) _Bool disableSound; // @dynamic disableSound;
@property(nonatomic, copy) NSArray *mediaArray; // @dynamic mediaArray;
@property(nonatomic, copy) NSString *pageTitle; // @dynamic pageTitle;
@property(nonatomic, copy) NSString *placementIdentifier; // @dynamic placementIdentifier;
@property(nonatomic, copy) NSString *sponsorName; // @dynamic sponsorName;
@property(nonatomic, copy) NSString *sponsoredBadgeURL; // @dynamic sponsoredBadgeURL;
@property(nonatomic, copy) NSString *takeoverTerm; // @dynamic takeoverTerm;

@end
