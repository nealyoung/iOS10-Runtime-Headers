/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {
    NSString *_eventName;
    int _loiType;
    struct { 
        unsigned int loiType : 1; 
    } _has;
}

@property bool hasLoiType;
@property int loiType;
@property(readonly) bool hasEventName;
@property(retain) NSString * eventName;


- (bool)hasEventName;
- (bool)hasLoiType;
- (void)setHasLoiType:(bool)arg1;
- (void)setLoiType:(int)arg1;
- (void)setEventName:(id)arg1;
- (int)loiType;
- (id)eventName;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end