//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMRequestBody-Protocol.h"

@class NSDictionary;

@interface TMFormEncodedRequestBody : NSObject <TMRequestBody>
{
    NSDictionary *_body;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *body; // @synthesize body=_body;
- (_Bool)encodeParameters;
- (id)parameters;
- (id)contentEncoding;
- (id)contentType;
- (id)bodyData;
- (id)description;
- (id)initWithBody:(id)arg1;

@end

