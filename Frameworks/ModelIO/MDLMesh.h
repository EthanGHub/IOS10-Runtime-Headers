//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLObject.h>

@class MDLVertexDescriptor, NSArray, NSMutableArray;
@protocol MDLMeshBufferAllocator;

@interface MDLMesh : MDLObject
{
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    MDLVertexDescriptor *_vertexDescriptor;
    // Error parsing type: {MDLAABB="maxBounds""minBounds"}, name: _bounds
    NSArray *_controlNodes;
    id <MDLMeshBufferAllocator> _allocator;
    unsigned long long _vertexCount;
}

+ (id)newSubdividedMesh:(id)arg1 submeshIndex:(unsigned long long)arg2 subdivisionLevels:(unsigned long long)arg3;
+ (id)newPlaneWithDimensions:(long long)arg1 segments:(id)arg2 geometryType:allocator: /* Error: Ran out of types for this method. */;
+ (id)newEllipticalConeWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(_Bool)arg5 inwardNormals:(id)arg6 allocator: /* Error: Ran out of types for this method. */;
+ (id)newCylinderWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(_Bool)arg5 inwardNormals:(id)arg6 allocator: /* Error: Ran out of types for this method. */;
+ (id)newEllipsoidWithRadii:(unsigned long long)arg1 radialSegments:(unsigned long long)arg2 verticalSegments:(long long)arg3 geometryType:(_Bool)arg4 inwardNormals:(_Bool)arg5 hemisphere:(id)arg6 allocator: /* Error: Ran out of types for this method. */;
+ (id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(_Bool)arg2 allocator:(id)arg3;
+ (id)newBoxWithDimensions:(long long)arg1 segments:(_Bool)arg2 geometryType:(id)arg3 inwardNormals:allocator: /* Error: Ran out of types for this method. */;
@property(nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> allocator; // @synthesize allocator=_allocator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)vertexAttributeDataForAttributeNamed:(id)arg1 asFormat:(unsigned long long)arg2;
- (void)copyDataVector:(vector_f9ed6fc8 *)arg1 toAttr:(id)arg2;
- (void)createSourceDataVector:(vector_f9ed6fc8 *)arg1 attr:(id)arg2 srcElementCount:(int)arg3 dstElementCount:(int)arg4;
- (id)vertexAttributeDataForAttributeNamed:(id)arg1;
- (id)initWithVertexBuffers:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (id)initWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (void)_createWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4;
- (id)initWithBufferAllocator:(id)arg1;
@property(readonly, nonatomic) struct boundingBox;
@property(copy, nonatomic) NSMutableArray *submeshes;
@property(copy, nonatomic) MDLVertexDescriptor *vertexDescriptor;
- (void)debugPrintToFile:(struct __sFILE *)arg1;
@property(readonly, retain, nonatomic) NSArray *vertexBuffers;
- (id)initMeshBySubdividingMesh:(id)arg1 submeshIndex:(int)arg2 subdivisionLevels:(unsigned int)arg3 allocator:(id)arg4;
- (id)initPlaneWithExtent:(long long)arg1 segments:(id)arg2 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initConeWithExtent:(_Bool)arg1 segments:(_Bool)arg2 inwardNormals:(long long)arg3 cap:(id)arg4 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initCapsuleWithExtent:(int)arg1 cylinderSegments:(_Bool)arg2 hemisphereSegments:(long long)arg3 inwardNormals:(id)arg4 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initCylinderWithExtent:(_Bool)arg1 segments:(_Bool)arg2 inwardNormals:(_Bool)arg3 topCap:(long long)arg4 bottomCap:(id)arg5 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initHemisphereWithExtent:(_Bool)arg1 segments:(_Bool)arg2 inwardNormals:(long long)arg3 cap:(id)arg4 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initSphereWithExtent:(_Bool)arg1 segments:(long long)arg2 inwardNormals:(id)arg3 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (id)initIcosahedronWithExtent:(_Bool)arg1 inwardNormals:(long long)arg2 geometryType:(id)arg3 allocator: /* Error: Ran out of types for this method. */;
- (id)initBoxWithExtent:(_Bool)arg1 segments:(long long)arg2 inwardNormals:(id)arg3 geometryType:allocator: /* Error: Ran out of types for this method. */;
- (void)makeVerticesUnique;
- (void)addUnwrappedTextureCoordinatesForAttributeNamed:(id)arg1;
- (void)addNormalsWithAttributeNamed:(id)arg1 creaseThreshold:(float)arg2;
- (void)_calculateFaceNormalsFromPositions:(float *)arg1 positionStride:(long long)arg2 normals:(float *)arg3 normalStride:(long long)arg4 creaseThreshold:(float)arg5;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 normalAttributeNamed:(id)arg2 tangentAttributeNamed:(id)arg3;
- (void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 tangentAttributeNamed:(id)arg2 bitangentAttributeNamed:(id)arg3;
- (void)_calculateTangentBasisFromPositions:(float *)arg1 positionStride:(long long)arg2 normals:(float *)arg3 normalStride:(long long)arg4 uvs:(float *)arg5 uvStride:(long long)arg6 tangents:(float *)arg7 tangentsStride:(long long)arg8 bitagents:(float *)arg9 bitangentStride:(long long)arg10;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 type:(id)arg3 data:(id)arg4 stride:(long long)arg5;
- (void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2;
- (void)removeAttributeNamed:(id)arg1;
- (void)updateAttributeNamed:(id)arg1 withData:(id)arg2;
- (void)replaceAttributeNamed:(id)arg1 withData:(id)arg2;
- (void)enumerateSubmeshesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSubmeshesUsingBlock:(CDUnknownBlockType)arg1 stopPointer:(_Bool *)arg2;
- (int)submeshCount;
-     // Error parsing type: {?=[4]}24@0:8Q16, name: inverseBasePoseForIndex:
- (id)controlNodeForINdex:(unsigned long long)arg1;
- (_Bool)generateLightMapVertexColorsWithLightsToConsider:(id)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3;
- (_Bool)generateLightMapTextureWithQuality:(float)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5;
- (_Bool)generateLightMapTextureWithTextureSize:(id)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed: /* Error: Ran out of types for this method. */;
- (_Bool)generateAmbientOcclusionVertexColorsWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4;
- (_Bool)generateAmbientOcclusionVertexColorsWithRaysPerSample:(long long)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4;
- (_Bool)generateAmbientOcclusionTextureWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5;
- (_Bool)generateAmbientOcclusionTextureWithSize:(long long)arg1 raysPerSample:(float)arg2 attenuationFactor:(id)arg3 objectsToConsider:(id)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed: /* Error: Ran out of types for this method. */;

// Remaining properties
@property(readonly, nonatomic) unsigned long long controlNodeCount;

@end
