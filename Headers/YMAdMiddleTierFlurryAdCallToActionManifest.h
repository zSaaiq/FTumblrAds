//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdMiddleTierAdCallToActionManifest.h"

@class NSString;

@interface YMAdMiddleTierFlurryAdCallToActionManifest : YMAdMiddleTierAdCallToActionManifest
{
    NSString *_beaconURL;
    NSString *_type;
    NSString *_phoneNumber;
    NSString *_text;
}

+ (id)createWithPhonenumber:(id)arg1 beaconURL:(id)arg2 text:(id)arg3 type:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *beaconURL; // @synthesize beaconURL=_beaconURL;
- (id)initWithPhonenumber:(id)arg1 beaconURL:(id)arg2 text:(id)arg3 type:(id)arg4;

@end

