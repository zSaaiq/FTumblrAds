//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDictionary, NSString;

@interface YI13NLocationData : NSObject
{
    NSString *_BSSID;
    CLLocation *_location;
    NSDictionary *_customAnnotations;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *customAnnotations; // @synthesize customAnnotations=_customAnnotations;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *BSSID; // @synthesize BSSID=_BSSID;
- (id)initWithLocation:(id)arg1 withBSSID:(id)arg2 withCustomAnnotations:(id)arg3;
- (id)init;

@end
