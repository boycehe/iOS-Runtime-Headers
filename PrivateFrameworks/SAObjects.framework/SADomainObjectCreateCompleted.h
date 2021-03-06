/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SADomainObjectCreateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSURL * identifier;
@property(copy) NSString * refId;

+ (id)domainObjectCreateCompleted;
+ (id)domainObjectCreateCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (void)setIdentifier:(id)arg1;

@end
