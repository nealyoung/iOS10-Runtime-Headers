/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORPUserCredentials : PBCodable  {
    NSString *_iCloudUserMapsAuthToken;
    NSString *_iCloudUserPersonID;
}

@property(readonly) BOOL hasICloudUserPersonID;
@property(retain) NSString * iCloudUserPersonID;
@property(readonly) BOOL hasICloudUserMapsAuthToken;
@property(retain) NSString * iCloudUserMapsAuthToken;

+ (id)_credentialsForPrimaryICloudAccount;

- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)iCloudUserMapsAuthToken;
- (BOOL)hasICloudUserMapsAuthToken;
- (id)iCloudUserPersonID;
- (BOOL)hasICloudUserPersonID;
- (void)setICloudUserMapsAuthToken:(id)arg1;
- (void)setICloudUserPersonID:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end