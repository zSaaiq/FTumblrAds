//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FBAdDSLAssetRequest : NSObject
{
    NSURL *_remoteURL;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
- (void).cxx_destruct;
- (id)initWithRemoteURLString:(id)arg1 type:(unsigned long long)arg2;

@end

