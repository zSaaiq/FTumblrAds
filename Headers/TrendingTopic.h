//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMTimelineObject.h"

@class NSArray, NSOrderedSet, NSString, TMTag;

@interface TrendingTopic : TMTimelineObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
- (void)updateWithDictionary:(id)arg1;
@property(nonatomic) int type;

// Remaining properties
@property(nonatomic, copy) NSString *badge; // @dynamic badge;
@property(nonatomic, copy) NSString *loggingID; // @dynamic loggingID;
@property(nonatomic) int position; // @dynamic position;
@property(nonatomic, copy) NSString *positionColorHex; // @dynamic positionColorHex;
@property(nonatomic, retain) NSOrderedSet *previewChiclets; // @dynamic previewChiclets;
@property(nonatomic, copy) NSArray *relatedTags; // @dynamic relatedTags;
@property(nonatomic, retain) TMTag *tag; // @dynamic tag;
@property(nonatomic, copy) NSString *topicDescription; // @dynamic topicDescription;
@property(nonatomic, copy) NSString *topicTitle; // @dynamic topicTitle;

@end

