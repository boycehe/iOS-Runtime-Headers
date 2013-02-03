/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractAlternateTracksViewController : MPViewController {
    NSUInteger _previousTracks[2];
    NSUInteger _selectedTracks[2];
}

- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)addLoadingUI;
- (id)alternateTracks;
- (id)arrayForGroup:(NSInteger)arg1;
- (void)dealloc;
- (NSUInteger)indexForGroup:(NSInteger)arg1;
- (id)init;
- (void)reloadData;
- (void)removeLoadingUI;
- (void)saveChanges;
- (id)titleForTrack:(id)arg1;
- (NSUInteger)typeForGroup:(NSInteger)arg1;

@end