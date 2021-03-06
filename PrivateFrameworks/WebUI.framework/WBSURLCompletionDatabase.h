/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSURLCompletionDatabase : NSObject {
    void *_private;
}

- (void)clearBookmarkMatchesCaches;
- (void)clearMatchesCaches;
- (void)dealloc;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(id)arg2;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id*)arg2 matches:(id*)arg3 limit:(unsigned int)arg4;
- (id)init;

@end
