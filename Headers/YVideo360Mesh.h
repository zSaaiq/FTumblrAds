//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

@interface YVideo360Mesh : NSObject
{
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _indexBuffer;
}

- (void).cxx_destruct;
@property(retain) id <MTLBuffer> indexBuffer; // @synthesize indexBuffer=_indexBuffer;
@property(retain) id <MTLBuffer> vertexBuffer; // @synthesize vertexBuffer=_vertexBuffer;
- (id)initWithVertexBuffer:(id)arg1 indexBuffer:(id)arg2;

@end
