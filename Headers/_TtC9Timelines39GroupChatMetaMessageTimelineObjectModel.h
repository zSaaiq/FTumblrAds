//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSDictionary, NSString, _TtC9Timelines26TimelineObjectCommonValues, _TtC9Timelines8APILinks;

@interface _TtC9Timelines39GroupChatMetaMessageTimelineObjectModel : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *commonValues;
    MISSING_TYPE *message;
    MISSING_TYPE *type;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSArray *supplyLogging;
@property(nonatomic, readonly) NSString *serveId;
@property(nonatomic, readonly) _TtC9Timelines8APILinks *links;
@property(nonatomic, readonly) NSArray *dismissalOptions;
- (id)initWithIdentifier:(id)arg1 commonValues:(id)arg2 message:(id)arg3;
@property(nonatomic, readonly) int type; // @synthesize type;
@property(nonatomic, readonly) NSDictionary *message;
@property(nonatomic, readonly) _TtC9Timelines26TimelineObjectCommonValues *commonValues; // @synthesize commonValues;
@property(nonatomic, readonly) NSString *identifier;

@end

