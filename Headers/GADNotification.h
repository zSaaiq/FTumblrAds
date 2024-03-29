//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GADNotification : NSObject
{
    NSString *_name;
    NSDictionary *_parameters;
}

+ (_Bool)isNotificationURL:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNotificationURL:(id)arg1;
- (id)initWithName:(id)arg1 parameters:(id)arg2;
- (id)init;

@end

