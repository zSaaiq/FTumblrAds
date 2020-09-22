//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CLSBetaUpdate : NSObject
{
    NSURL *_url;
    NSString *_version;
}

+ (id)betaUpdateWithDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *installLabel;
@property(readonly, copy, nonatomic) NSString *cancelLabel;
@property(readonly, copy, nonatomic) NSString *promptMessage;
@property(readonly, copy, nonatomic) NSString *promptTitle;
- (id)initWithDictionary:(id)arg1;

@end

