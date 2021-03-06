/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypoint : PBCodable <NSCopying> {
    NSMutableArray * _entryPoints;
    GEOLocation * _location;
    GEOPlaceSearchRequest * _placeSearchRequest;
}

@property (nonatomic, retain) NSMutableArray *entryPoints;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasPlaceSearchRequest;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, retain) GEOPlaceSearchRequest *placeSearchRequest;

+ (Class)entryPointType;

- (void)addEntryPoint:(id)arg1;
- (void)clearEntryPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entryPointAtIndex:(unsigned long long)arg1;
- (id)entryPoints;
- (unsigned long long)entryPointsCount;
- (bool)hasLocation;
- (bool)hasPlaceSearchRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchRequest;
- (bool)readFrom:(id)arg1;
- (void)setEntryPoints:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
