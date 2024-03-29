//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSURL;

@interface YVPlaybackInfo : NSObject <NSCopying>
{
    _Bool _isLive;
    _Bool _is360;
    _Bool _fairplayEnabled;
    NSURL *_videoUrl;
    long long _playbackType;
    NSString *_format;
    NSString *_aspectRatio;
    NSString *_cdn;
    NSString *_drmType;
    NSString *_rateControlMode;
    NSString *_mimeType;
    NSURL *_fairplayCertificateUrl;
    NSArray *_hlsPreVariants;
    NSArray *_closedCaptions;
    NSString *_customUserAgent;
    NSString *_assetIdentifier;
    NSString *_videoUrlHash;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *videoUrlHash; // @synthesize videoUrlHash=_videoUrlHash;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(retain, nonatomic) NSString *customUserAgent; // @synthesize customUserAgent=_customUserAgent;
@property(retain, nonatomic) NSArray *closedCaptions; // @synthesize closedCaptions=_closedCaptions;
@property(retain, nonatomic) NSArray *hlsPreVariants; // @synthesize hlsPreVariants=_hlsPreVariants;
@property(nonatomic) _Bool fairplayEnabled; // @synthesize fairplayEnabled=_fairplayEnabled;
@property(retain, nonatomic) NSURL *fairplayCertificateUrl; // @synthesize fairplayCertificateUrl=_fairplayCertificateUrl;
@property(nonatomic) _Bool is360; // @synthesize is360=_is360;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *rateControlMode; // @synthesize rateControlMode=_rateControlMode;
@property(retain, nonatomic) NSString *drmType; // @synthesize drmType=_drmType;
@property(retain, nonatomic) NSString *cdn; // @synthesize cdn=_cdn;
@property(retain, nonatomic) NSString *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) long long playbackType; // @synthesize playbackType=_playbackType;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(readonly, nonatomic) _Bool isPlayable;
@property(readonly, nonatomic) NSString *cacheIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

