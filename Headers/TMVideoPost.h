//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TMPost.h"

@class NSString, NSURL;
@protocol TMYahooVideoAttributesModel;

@interface TMVideoPost : TMPost
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)initWithContext:(id)arg1 dictionary:(id)arg2;
- (void)updateWith:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
@property(nonatomic, readonly) _Bool isYouTubeType;
@property(nonatomic, readonly) _Bool isYahooType;
@property(nonatomic, readonly) NSString *unsupportedVideoSource;
@property(nonatomic, readonly) NSURL *preferredURL;
@property(nonatomic, readonly) NSURL *permalinkURL;
@property(nonatomic, readonly) NSURL *mediaURL;
@property(nonatomic, readonly) NSURL *thumbnailURL;

// Remaining properties
@property(nonatomic) _Bool canAutoPlayOnCellular; // @dynamic canAutoPlayOnCellular;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) _Bool hidesPlayButton; // @dynamic hidesPlayButton;
@property(nonatomic) _Bool html5Capable; // @dynamic html5Capable;
@property(nonatomic) int liveStatus; // @dynamic liveStatus;
@property(nonatomic, copy) NSString *mediaURLString; // @dynamic mediaURLString;
@property(nonatomic, copy) NSString *permalinkURLString; // @dynamic permalinkURLString;
@property(nonatomic) int provider; // @dynamic provider;
@property(nonatomic) int thumbnailHeight; // @dynamic thumbnailHeight;
@property(nonatomic, copy) NSString *thumbnailURLString; // @dynamic thumbnailURLString;
@property(nonatomic) int thumbnailWidth; // @dynamic thumbnailWidth;
@property(nonatomic, retain) id <TMYahooVideoAttributesModel> yahooVideoAttributes; // @dynamic yahooVideoAttributes;
@property(nonatomic, copy) NSString *youTubeVideoID; // @dynamic youTubeVideoID;

@end

