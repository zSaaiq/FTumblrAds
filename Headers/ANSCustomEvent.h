//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ANSEvent.h"

@class NSDictionary, NSString;

@interface ANSCustomEvent : ANSEvent
{
    NSString *_customEventName;
    NSDictionary *_customAttributes;
}

@property(retain, nonatomic) NSDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
@property(readonly, nonatomic) NSString *customEventName; // @synthesize customEventName=_customEventName;
- (void).cxx_destruct;
- (id)description;
- (id)attributesDictionary;
- (id)dictionaryRepresentation;
- (id)name;
- (id)initWithCustomEventName:(id)arg1 customAttributes:(id)arg2;

@end
