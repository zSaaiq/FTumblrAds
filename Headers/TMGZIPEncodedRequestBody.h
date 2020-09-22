//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMRequestBody-Protocol.h"

@class NSData;
@protocol TMRequestBody;

@interface TMGZIPEncodedRequestBody : NSObject <TMRequestBody>
{
    id <TMRequestBody> _originalBody;
    NSData *_compressedBodyData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *compressedBodyData; // @synthesize compressedBodyData=_compressedBodyData;
@property(readonly, nonatomic) id <TMRequestBody> originalBody; // @synthesize originalBody=_originalBody;
- (id)compressedBody:(id)arg1;
- (_Bool)encodeParameters;
- (id)parameters;
- (id)bodyData;
- (id)contentEncoding;
- (id)contentType;
- (id)description;
- (id)initWithRequestBody:(id)arg1;

@end

