/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEditOption : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *dailySnapshotKey;
@property (nonatomic, readonly) NSString *localizedName;

+ (bool)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (bool)isValidOption;
- (id)localizedName;

@end