//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2VRMResponseTransformer : NSObject
{
}

+ (id)itemFromResponse:(id)arg1 index:(id)arg2;
+ (id)groupsFromResponse:(id)arg1;
+ (id)slotFromResponse:(id)arg1 forPodID:(id)arg2 index:(id)arg3;
+ (id)podFromResponse:(id)arg1;
+ (id)podsArrayFromResponse:(id)arg1;
+ (unsigned long long)backendVersionFromString:(id)arg1;
+ (id)parseVRM2Response:(id)arg1;
+ (id)parseVRM1Response:(id)arg1;

@end
