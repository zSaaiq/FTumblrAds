//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDictionary;

@interface FlurryAdTargeting : NSObject
{
    _Bool _testAdsEnabled;
    int _gender;
    CLLocation *_location;
    NSDictionary *_userCookies;
    NSDictionary *_keywords;
    unsigned long long _age;
    NSDictionary *_oathCookies;
}

+ (id)targeting;
@property(retain, nonatomic) NSDictionary *oathCookies; // @synthesize oathCookies=_oathCookies;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(nonatomic) unsigned long long age; // @synthesize age=_age;
@property(nonatomic) _Bool testAdsEnabled; // @synthesize testAdsEnabled=_testAdsEnabled;
@property(retain, nonatomic) NSDictionary *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSDictionary *userCookies; // @synthesize userCookies=_userCookies;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end

