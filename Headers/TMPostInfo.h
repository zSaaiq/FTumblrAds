//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP15TMAdvertisement13TMAdvertising_-Protocol.h"

@class NSArray, NSString;

@interface TMPostInfo : NSObject <_TtP15TMAdvertisement13TMAdvertising_>
{
    _Bool _shouldBlurImages;
    int _advertisementType;
    int _postType;
    NSString *_postID;
    NSString *_rootPostID;
    NSString *_blogName;
    NSString *_blogUUID;
    NSString *_placementIdentifier;
    NSString *_impressionIdentifier;
    NSString *_flurrySyndicationID;
    NSString *_sponsoredBadgeURL;
    NSArray *_tagList;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSString *sponsoredBadgeURL; // @synthesize sponsoredBadgeURL=_sponsoredBadgeURL;
@property(copy, nonatomic) NSString *flurrySyndicationID; // @synthesize flurrySyndicationID=_flurrySyndicationID;
@property(nonatomic) _Bool shouldBlurImages; // @synthesize shouldBlurImages=_shouldBlurImages;
@property(nonatomic) int postType; // @synthesize postType=_postType;
@property(copy, nonatomic) NSString *impressionIdentifier; // @synthesize impressionIdentifier=_impressionIdentifier;
@property(nonatomic) int advertisementType; // @synthesize advertisementType=_advertisementType;
@property(copy, nonatomic) NSString *placementIdentifier; // @synthesize placementIdentifier=_placementIdentifier;
@property(copy, nonatomic) NSString *blogUUID; // @synthesize blogUUID=_blogUUID;
@property(copy, nonatomic) NSString *blogName; // @synthesize blogName=_blogName;
@property(copy, nonatomic) NSString *rootPostID; // @synthesize rootPostID=_rootPostID;
@property(copy, nonatomic) NSString *postID; // @synthesize postID=_postID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
