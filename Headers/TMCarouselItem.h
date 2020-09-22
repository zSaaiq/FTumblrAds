//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMDictionaryUpdatableManagedObject.h"

#import "_TtP15TMAdvertisement13TMAdvertising_-Protocol.h"

@class Carousel, NSString, TMPhoto, _TtC16TMTimelineObject14DismissalLinks;

@interface TMCarouselItem : TMDictionaryUpdatableManagedObject <_TtP15TMAdvertisement13TMAdvertising_>
{
}

@property(readonly, copy, nonatomic) NSString *impressionIdentifier;
- (void)updateWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic) int advertisementType; // @dynamic advertisementType;
@property(readonly, nonatomic) Carousel *carousel; // @dynamic carousel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) _TtC16TMTimelineObject14DismissalLinks *dismissalLinks; // @dynamic dismissalLinks;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDisplayable; // @dynamic isDisplayable;
@property(retain, nonatomic) TMPhoto *photo; // @dynamic photo;
@property(copy, nonatomic) NSString *placementIdentifier; // @dynamic placementIdentifier;
@property(copy, nonatomic) NSString *serveIdentifier; // @dynamic serveIdentifier;
@property(copy, nonatomic) NSString *sponsoredBadgeURL; // @dynamic sponsoredBadgeURL;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

