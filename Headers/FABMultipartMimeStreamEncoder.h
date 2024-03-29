//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSOutputStream, NSString;

@interface FABMultipartMimeStreamEncoder : NSObject
{
    unsigned long long _length;
    NSString *_boundary;
    NSOutputStream *_outputStream;
}

+ (id)generateBoundary;
+ (id)encoderWithStream:(id)arg1 andBoundary:(id)arg2;
+ (id)contentTypeHTTPHeaderValueWithBoundary:(id)arg1;
+ (void)populateRequest:(id)arg1 withDataFromEncoder:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (void).cxx_destruct;
- (void)writeData:(id)arg1;
- (_Bool)writeBytes:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)addFile:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 fieldName:(id)arg4;
- (void)addValue:(id)arg1 fieldName:(id)arg2;
- (void)addFileData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 fieldName:(id)arg4;
@property(readonly, copy, nonatomic) NSData *footerData;
@property(readonly, copy, nonatomic) NSData *headerData;
- (void)endEncoding;
- (void)beginEncoding;
@property(readonly, copy, nonatomic) NSString *contentLengthHTTPHeaderValue;
@property(readonly, copy, nonatomic) NSString *contentTypeHTTPHeaderValue;
- (void)encode:(CDUnknownBlockType)arg1;
- (id)initWithStream:(id)arg1 andBoundary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

