//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface O2VRMResponsePodModel : NSObject
{
    _Bool _calculated;
    NSString *_type;
    NSArray *_slots;
}

+ (id)podWithType:(id)arg1 calculated:(_Bool)arg2 slots:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *slots; // @synthesize slots=_slots;
@property(readonly, nonatomic) _Bool calculated; // @synthesize calculated=_calculated;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithType:(id)arg1 calculated:(_Bool)arg2 slots:(id)arg3;

@end

