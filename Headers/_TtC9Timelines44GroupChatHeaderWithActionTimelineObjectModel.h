//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSString, UIColor, _TtC9Timelines19TitleTimelineAction, _TtC9Timelines26TimelineObjectCommonValues, _TtC9Timelines8APILinks;

@interface _TtC9Timelines44GroupChatHeaderWithActionTimelineObjectModel : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *type;
    MISSING_TYPE *commonValues;
    MISSING_TYPE *text;
    MISSING_TYPE *iconKey;
    MISSING_TYPE *action;
    MISSING_TYPE *textColor;
    MISSING_TYPE *count;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSArray *supplyLogging;
@property(nonatomic, readonly) NSString *serveId;
@property(nonatomic, readonly) _TtC9Timelines8APILinks *links;
@property(nonatomic, readonly) NSArray *dismissalOptions;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) UIColor *textColor; // @synthesize textColor;
@property(nonatomic, readonly) _TtC9Timelines19TitleTimelineAction *action; // @synthesize action;
@property(nonatomic, readonly) NSString *iconKey;
@property(nonatomic, readonly) NSString *text;
@property(nonatomic, readonly) _TtC9Timelines26TimelineObjectCommonValues *commonValues; // @synthesize commonValues;
@property(nonatomic, readonly) int type; // @synthesize type;
@property(nonatomic, readonly) NSString *identifier;

@end

