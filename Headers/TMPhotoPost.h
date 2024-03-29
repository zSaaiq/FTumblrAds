//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPost.h"

@class NSOrderedSet, NSSet, NSString, TMPhoto;

@interface TMPhotoPost : TMPost
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
- (_Bool)userCanEdit;
- (void)updateWith:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
@property(nonatomic, readonly) TMPhoto *firstPhoto;
@property(nonatomic, readonly) _Bool hasPhotoset;
@property(nonatomic, readonly) _Bool carousel;

// Remaining properties
@property(nonatomic, copy) NSString *carouselClickthroughURL; // @dynamic carouselClickthroughURL;
@property(nonatomic, retain) NSSet *clickouts; // @dynamic clickouts;
@property(nonatomic, copy) NSString *clickthroughURL; // @dynamic clickthroughURL;
@property(nonatomic, copy) NSString *nativeClickthroughURL; // @dynamic nativeClickthroughURL;
@property(nonatomic) _Bool panorama; // @dynamic panorama;
@property(nonatomic, retain) NSOrderedSet *photos; // @dynamic photos;
@property(nonatomic, copy) NSString *photosetLayout; // @dynamic photosetLayout;

@end

