//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMAudioSearchTrack : NSObject
{
    NSString *_primary;
    NSString *_secondary;
    NSString *_href;
    NSString *_thumbnailURL;
    NSString *_providerName;
    NSString *_providerIconURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *providerIconURL; // @synthesize providerIconURL=_providerIconURL;
@property(readonly, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(readonly, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(readonly, nonatomic) NSString *href; // @synthesize href=_href;
@property(readonly, nonatomic) NSString *secondary; // @synthesize secondary=_secondary;
@property(readonly, nonatomic) NSString *primary; // @synthesize primary=_primary;
- (id)initWithDictionary:(id)arg1;

@end

