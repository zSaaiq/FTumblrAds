//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YMAd, YMAdFilter;

@interface YMAdFilterResult : NSObject
{
    _Bool _shouldRejectAd;
    YMAd *_ad;
    YMAdFilter *_filter;
    NSString *_message;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRejectAd; // @synthesize shouldRejectAd=_shouldRejectAd;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) YMAdFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) YMAd *ad; // @synthesize ad=_ad;
- (id)initWithAd:(id)arg1 filter:(id)arg2;

@end

