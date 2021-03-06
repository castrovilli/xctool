//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ISHSDKInfo : NSObject
{
    BOOL _usesLegacyPathInfoStruct;
    BOOL _usesLegacyPurpleTouchEvents;
    BOOL _requiresAppMapRebuild;
    BOOL _supportsHIDButtons;
    BOOL _supportsCloud;
    BOOL _supportsBootstrapSubset;
    BOOL _supportsLaunchdSim;
    BOOL _supportsStandaloneLog;
    BOOL _supportsVisualQualityToggle;
    BOOL _supportsCar;
    BOOL _supportsLP64;
    BOOL _isComplete;
    unsigned int _version;
    NSString *_root;
    NSString *_shortVersionString;
    NSString *_fullVersionString;
    void *_libLaunchHostHandle;
    NSString *_nameOfSpringBoardService;
    NSString *_nameOfSystemAppService;
    NSString *_nameOfWorkspaceService;
    NSDictionary *_requiredHostServices;
}

- (void)dealloc;
@property(copy) NSString *fullVersionString; // @synthesize fullVersionString=_fullVersionString;
- (id)initWithRoot:(id)arg1;
@property(readonly) BOOL isComplete; // @synthesize isComplete=_isComplete;
@property(readonly) void *libLaunchHostHandle; // @synthesize libLaunchHostHandle=_libLaunchHostHandle;
@property(readonly) NSString *nameOfSpringBoardService; // @synthesize nameOfSpringBoardService=_nameOfSpringBoardService;
@property(readonly) NSString *nameOfSystemAppService; // @synthesize nameOfSystemAppService=_nameOfSystemAppService;
@property(readonly) NSString *nameOfWorkspaceService; // @synthesize nameOfWorkspaceService=_nameOfWorkspaceService;
@property(readonly) NSDictionary *requiredHostServices; // @synthesize requiredHostServices=_requiredHostServices;
@property(readonly) BOOL requiresAppMapRebuild; // @synthesize requiresAppMapRebuild=_requiresAppMapRebuild;
@property(copy) NSString *root; // @synthesize root=_root;
@property(copy) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly) BOOL supportsBootstrapSubset; // @synthesize supportsBootstrapSubset=_supportsBootstrapSubset;
@property(readonly) BOOL supportsCar; // @synthesize supportsCar=_supportsCar;
@property(readonly) BOOL supportsCloud; // @synthesize supportsCloud=_supportsCloud;
@property(readonly) BOOL supportsHIDButtons; // @synthesize supportsHIDButtons=_supportsHIDButtons;
@property(readonly) BOOL supportsLP64; // @synthesize supportsLP64=_supportsLP64;
@property(readonly) BOOL supportsLaunchdSim; // @synthesize supportsLaunchdSim=_supportsLaunchdSim;
@property(readonly) BOOL supportsStandaloneLog; // @synthesize supportsStandaloneLog=_supportsStandaloneLog;
@property(readonly) BOOL supportsVisualQualityToggle; // @synthesize supportsVisualQualityToggle=_supportsVisualQualityToggle;
@property(readonly) BOOL usesLegacyPathInfoStruct; // @synthesize usesLegacyPathInfoStruct=_usesLegacyPathInfoStruct;
@property(readonly) BOOL usesLegacyPurpleTouchEvents; // @synthesize usesLegacyPurpleTouchEvents=_usesLegacyPurpleTouchEvents;
@property(readonly) unsigned int version; // @synthesize version=_version;

@end

