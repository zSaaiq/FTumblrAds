//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 29 2020 16:17:50).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLFunction, MTLRenderPipelineState, MTLTexture;

@interface YVideo360Material : NSObject
{
    id <MTLFunction> _vertexFunction;
    id <MTLFunction> _fragmentFunction;
    id <MTLTexture> _texture;
    id <MTLRenderPipelineState> _renderPipelineState;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState; // @synthesize renderPipelineState=_renderPipelineState;
@property(retain, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
@property(retain, nonatomic) id <MTLFunction> fragmentFunction; // @synthesize fragmentFunction=_fragmentFunction;
@property(retain, nonatomic) id <MTLFunction> vertexFunction; // @synthesize vertexFunction=_vertexFunction;
- (id)initWithVertexFunction:(id)arg1 fragmentFunction:(id)arg2 texture:(id)arg3 device:(id)arg4;

@end

