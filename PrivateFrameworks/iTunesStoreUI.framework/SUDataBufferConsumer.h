/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableData, NSData;

@interface SUDataBufferConsumer : NSObject <SUCollectingDataConsumer> {
    NSMutableData *_buffer;
}

@property(readonly) NSData * consumedData;

- (int)consumeData:(id)arg1;
- (id)consumedData;
- (void)finish;
- (id)init;

@end