//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface YVClosedCaptionsInfo : NSObject <NSCopying>
{
    NSString *_language;
    NSString *_mimeType;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

