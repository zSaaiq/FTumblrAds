//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryFieldLookup : NSObject
{
}

+ (id)getDataValuesForFieldType:(int)arg1 forAd:(id)arg2 adEvent:(id)arg3;
+ (id)getDataValuesForFieldType:(int)arg1;
+ (id)getStringValueForFieldType:(int)arg1 forAd:(id)arg2 adEvent:(id)arg3 encodeForUrl:(_Bool)arg4;
+ (id)getStringValueForFieldType:(int)arg1 encodeForUrl:(_Bool)arg2;
+ (id)getStringValueForField:(id)arg1 forAd:(id)arg2 adEvent:(id)arg3 encodeForUrl:(_Bool)arg4;
+ (id)getStringValueForField:(id)arg1 encodeForUrl:(_Bool)arg2;
+ (int)adFieldStringToEnum:(id)arg1;
+ (id)adFieldEnumToString:(int)arg1;
+ (id)adFieldArrayInstance;

@end

