//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDate, NSDictionary, NSString, _TtC9Timelines12TimelineIcon, _TtC9Timelines19TitleTimelineAction, _TtC9Timelines26TimelineObjectCommonValues, _TtC9Timelines7APILink, _TtC9Timelines8APILinks;

@interface _TtC9Timelines40GenericActionableActivityItemObjectModel : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *type;
    MISSING_TYPE *commonValues;
    MISSING_TYPE *formattedStringDictionary;
    MISSING_TYPE *icon;
    MISSING_TYPE *action;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSArray *supplyLogging;
@property(nonatomic, readonly) NSString *serveId;
@property(nonatomic, readonly) _TtC9Timelines8APILinks *links;
@property(nonatomic, readonly) NSArray *dismissalOptions;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 formattedStringDictionary:(id)arg2 icon:(id)arg3 action:(id)arg4 commonValues:(id)arg5;
@property(nonatomic, readonly) _TtC9Timelines7APILink *tapLink;
@property(nonatomic, readonly) _TtC9Timelines19TitleTimelineAction *action; // @synthesize action;
@property(nonatomic, readonly) _TtC9Timelines12TimelineIcon *icon; // @synthesize icon;
@property(nonatomic, readonly) NSDictionary *formattedStringDictionary;
@property(nonatomic, readonly) _TtC9Timelines26TimelineObjectCommonValues *commonValues; // @synthesize commonValues;
@property(nonatomic, readonly) int type; // @synthesize type;
@property(nonatomic, readonly) NSString *identifier;

@end

