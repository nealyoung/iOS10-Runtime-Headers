/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTAssetConnection : NSObject <ASTDownloadConnection> {
    NSString * _assetName;
    <ASTConnectionStatusDelegate> * _delegate;
    NSURL * _destinationFileURL;
    id /* block */  _didDownloadFile;
    id /* block */  _didReceiveResponse;
    long long  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    bool  _retryOnNetworkDisconnected;
    unsigned long long  _rootOfTrust;
    NSString * _sessionId;
    long long  _state;
}

@property (nonatomic, retain) NSString *assetName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *destinationFileURL;
@property (nonatomic, copy) id /* block */ didDownloadFile;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetName;
- (id)delegate;
- (id)destinationFileURL;
- (id /* block */)didDownloadFile;
- (id /* block */)didReceiveResponse;
- (id)generateRequest;
- (id)initWithAssetName:(id)arg1 destinationFileURL:(id)arg2 sessionId:(id)arg3;
- (long long)networkDisconnectedRetryCount;
- (id)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (id)sessionId;
- (void)setAssetName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDownloadFile:(id /* block */)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end