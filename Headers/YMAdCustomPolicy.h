//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMAdPolicy.h"

@class NSDictionary;

@interface YMAdCustomPolicy : YMAdPolicy
{
    NSDictionary *_customValues;
}

+ (id)policyFromManifest:(id)arg1;
+ (Class)parserClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *customValues; // @synthesize customValues=_customValues;
- (id)getCustomValue:(id)arg1;
- (id)initWithCustomValues:(id)arg1;

@end

