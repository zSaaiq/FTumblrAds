//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP10GIFCreator21LoadableMediaItemType_-Protocol.h"

@class NSArray, NSString, NSURL;

@interface FileURLLoadableMediaItem : NSObject <_TtP10GIFCreator21LoadableMediaItemType_>
{
    long long _state;
    NSString *mediaSource;
    NSURL *_url;
    long long _mediaType;
    NSString *_identifier;
    struct CGSize _size;
}

+ (long long)mediaTypeAtURL:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *mediaSource; // @synthesize mediaSource;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)cancelLoad;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic) double aspectRatio;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *urls;
- (id)init;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

