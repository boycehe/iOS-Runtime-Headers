/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSDate, NSMutableSet, NSObject, NSString, PUMapItem;

@interface PUMapAnnotation : NSObject <PUMapAnnotationAnimatable> {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    unsigned int _hash;
    PUMapItem *_mapItem;
    } _originalCoordinate;
    unsigned int _relativeOrder;
}

@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) unsigned int count;
@property(readonly) NSDate * dateCreated;
@property(readonly) NSObject * itemId;
@property(retain) PUMapItem * mapItem;
@property(readonly) NSArray * mapItems;
@property(readonly) struct { double x1; double x2; } originalCoordinate;
@property unsigned int relativeOrder;
@property(readonly) NSMutableSet * subAnnotations;
@property(readonly) NSString * subtitle;
@property(readonly) NSString * title;

+ (id)annotationSortingComparatorNewestToOldest;
+ (id)annotationSortingComparatorOldestToNewest;
+ (id)compactDescriptionForAnnotations:(id)arg1;

- (void).cxx_destruct;
- (id)_dateString;
- (int)annotationSortingCompareWithAnnotation:(id)arg1;
- (id)compactDescription;
- (int)compare:(id)arg1;
- (BOOL)containsAnnotation:(id)arg1;
- (struct { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)dateCreated;
- (id)description;
- (unsigned int)hash;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemId;
- (id)mapItem;
- (id)mapItems;
- (id)newestMaxMapItems:(unsigned int)arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (unsigned int)relativeOrder;
- (void)resetCoordinateToOriginal;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setMapItem:(id)arg1;
- (void)setRelativeOrder:(unsigned int)arg1;
- (id)subAnnotations;
- (id)subtitle;
- (id)title;

@end
