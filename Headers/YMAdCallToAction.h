//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YMAdCallToAction : NSObject
{
    NSString *_type;
    NSString *_beaconURLFormat;
    NSString *_text;
    NSString *_phoneNumber;
}

+ (id)createWithText:(id)arg1 type:(id)arg2 beaconURLFormat:(id)arg3 phoneNumber:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *beaconURLFormat; // @synthesize beaconURLFormat=_beaconURLFormat;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithText:(id)arg1 type:(id)arg2 beaconURLFormat:(id)arg3 phoneNumber:(id)arg4;

@end

