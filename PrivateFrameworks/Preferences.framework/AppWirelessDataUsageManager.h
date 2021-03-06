/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface AppWirelessDataUsageManager : NSObject {
    bool  _cancelled;
    NSArray * _managedBundleIDs;
    bool  _showInternalDetails;
}

@property (getter=isCancelled) bool cancelled;
@property (nonatomic, readonly) NSArray *managedBundleIDs;
@property (nonatomic, readonly) bool showInternalDetails;

+ (id)appCellularDataEnabledForBundleIdentifier:(id)arg1 modificationAllowed:(bool*)arg2;
+ (id)appWirelessDataOptionForBundleIdentifier:(id)arg1;
+ (id)coverBundleIdentifiersForBundleIdentifierDict;
+ (id)coverDisplayNameForAppProxy:(id)arg1;
+ (id)dataUsageWorkspace;
+ (id)displayNameForAppProxy:(id)arg1;
+ (id)displayNameForBundleIdentifier:(id)arg1;
+ (id)displayNameForBundleIdentifiers:(id)arg1;
+ (id)forcedBundleIdentiferForBundleIdentifier:(id)arg1;
+ (id)omittedBundleIdentifiers;
+ (void)retrieveDataUsageWorkspaceInfo:(id)arg1;
+ (void)setAppCellularDataEnabled:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)setAppWirelessDataOption:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_categorizeApps:(id)arg1 callback:(id /* block */)arg2;
- (void)_handleDataUsageInfoChanged;
- (void)_handleSIMStatusReady;
- (id)alwaysDisplayedBundleIdentifiers;
- (void)calculateDataUsageWithWorkspace:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (bool)isCancelled;
- (id)managedBundleIDs;
- (id)managedCellularDataBundleIdentifiers;
- (void)setCancelled:(bool)arg1;
- (bool)showInternalDetails;

@end
