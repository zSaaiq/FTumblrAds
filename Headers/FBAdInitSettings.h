//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FBAdInitSettings : NSObject
{
    NSArray *_placementIDs;
    NSString *_mediationService;
    NSString *_mediation;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *mediation; // @synthesize mediation=_mediation;
@property(readonly, copy, nonatomic) NSString *mediationService; // @synthesize mediationService=_mediationService;
@property(copy, nonatomic) NSArray *placementIDs; // @synthesize placementIDs=_placementIDs;
- (void).cxx_destruct;
- (id)initWithPlacementIDs:(id)arg1 mediationService:(id)arg2;

@end

