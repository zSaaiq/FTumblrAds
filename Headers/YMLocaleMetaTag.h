//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "YMMetaTag.h"

@class NSString;

@interface YMLocaleMetaTag : YMMetaTag
{
    NSString *_currentLocale;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentLocale; // @synthesize currentLocale=_currentLocale;
- (id)resolveTagForObject:(id)arg1 withDomain:(id)arg2;
- (id)initWithCurrentLocale:(id)arg1;

@end

