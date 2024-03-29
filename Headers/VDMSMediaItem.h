//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSError, NSString, NSURL, VDMSInternalPlayer, VDMSMediaItemStoreData, VDMSMetadata, VDMSSource, VDMSUplynkContent;

@interface VDMSMediaItem : NSObject
{
    VDMSSource *_source;
    NSDate *_sourceExpirationTime;
    _Bool _enableCasting;
    NSString *_mediaItemId;
    long long _type;
    VDMSUplynkContent *_uplynkContent;
    VDMSMetadata *_metadata;
    NSArray *_adBreaks;
    NSDictionary *_customInfo;
    NSURL *_fairplayCertificateUrl;
    NSError *_error;
    VDMSInternalPlayer *_player;
    VDMSMediaItemStoreData *_storeData;
}

+ (_Bool)automaticallyNotifiesObserversOfAdBreaks;
- (void).cxx_destruct;
@property(nonatomic) __weak VDMSMediaItemStoreData *storeData; // @synthesize storeData=_storeData;
@property(nonatomic) __weak VDMSInternalPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSURL *fairplayCertificateUrl; // @synthesize fairplayCertificateUrl=_fairplayCertificateUrl;
@property(readonly, nonatomic) NSDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(readonly, nonatomic) _Bool enableCasting; // @synthesize enableCasting=_enableCasting;
@property(retain, nonatomic) NSArray *adBreaks; // @synthesize adBreaks=_adBreaks;
@property(readonly, nonatomic) VDMSMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) VDMSUplynkContent *uplynkContent; // @synthesize uplynkContent=_uplynkContent;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *mediaItemId; // @synthesize mediaItemId=_mediaItemId;
@property(retain, nonatomic) VDMSSource *source; // @synthesize source=_source;
- (void)removeAdBreaks:(id)arg1;
- (void)addAdBreaks:(id)arg1;
@property(retain, nonatomic) NSDate *sourceExpirationTime; // @synthesize sourceExpirationTime=_sourceExpirationTime;
- (id)initWithBuilder:(id)arg1;

@end

